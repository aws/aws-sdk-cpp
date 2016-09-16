/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transfer/TransferManager.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <fstream>
#include <algorithm>

namespace Aws
{
    namespace Transfer
    {
        static const char* const CLASS_TAG = "Aws::Transfer::TransferManager";

        struct TransferHandleAsyncContext : public Aws::Client::AsyncCallerContext
        {
            std::shared_ptr<TransferHandle> handle;
        };

        TransferManager::TransferManager(const TransferManagerConfiguration& configuration) : m_transferConfig(configuration)
        {
            assert(m_transferConfig.s3Client != nullptr);
            if (m_transferConfig.transferExecutor == nullptr)
            {
                m_transferConfig.transferExecutor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(CLASS_TAG, m_transferConfig.maxParallelTransfers);
            }

            for (uint64_t i = 0; i < m_transferConfig.transferBufferMaxHeapSize; i += m_transferConfig.bufferSize)
            {
                m_bufferManager.PutResource(Aws::New<Aws::Utils::Array<uint8_t>>(CLASS_TAG, static_cast<size_t>(m_transferConfig.bufferSize)));
            }
        }

        TransferManager::~TransferManager()
        {
            for (auto buffer : m_bufferManager.ShutdownAndWait(static_cast<size_t>(m_transferConfig.transferBufferMaxHeapSize / m_transferConfig.bufferSize)))
            {
                Aws::Delete(buffer);
            }
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
            const Aws::Map<Aws::String, Aws::String>& metadata)
        {
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, fileName.c_str(), std::ios_base::in | std::ios_base::binary);
            fileStream->seekg(0, std::ios_base::end);
            size_t length = static_cast<size_t>(fileStream->tellg());
            fileStream->seekg(0, std::ios_base::beg);
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, length, fileName);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);

            if (length > m_transferConfig.bufferSize)
            {
                m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoMultipartUpload(fileStream, handle); });
            }
            else
            {
                m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoSinglePartUpload(fileStream, handle); });
            }

            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const std::shared_ptr<Aws::IOStream>& fileStream, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
            const Aws::Map<Aws::String, Aws::String>& metadata)
        {
            fileStream->seekg(0, std::ios_base::end);
            size_t length = static_cast<size_t>(fileStream->tellg());
            fileStream->seekg(0, std::ios_base::beg);
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, length);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);

            if (length > m_transferConfig.bufferSize)
            {
                m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoMultipartUpload(fileStream, handle); });
            }
            else
            {
                m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoSinglePartUpload(fileStream, handle); });
            }

            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, const Aws::String& keyName, CreateDownloadStreamCallback writeToStreamfn)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName);

            m_transferConfig.transferExecutor->Submit([this, writeToStreamfn, handle] { DoDownload(writeToStreamfn, handle); });
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& writeToFile)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, writeToFile);
            auto createFileFn = [=]() { return Aws::New<Aws::FStream>(CLASS_TAG, writeToFile.c_str(),
                                                                     std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);};

            m_transferConfig.transferExecutor->Submit([this, createFileFn, handle] { DoDownload(createFileFn, handle); });
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::RetryUpload(const Aws::String& fileName, const std::shared_ptr<TransferHandle>& retryHandle)
        {
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, fileName.c_str(), std::ios_base::in | std::ios_base::binary);
            return RetryUpload(fileStream, retryHandle);
        }

        std::shared_ptr<TransferHandle> TransferManager::RetryUpload(const std::shared_ptr<Aws::IOStream>& stream, const std::shared_ptr<TransferHandle>& retryHandle)
        {
            assert(retryHandle->GetStatus() != TransferStatus::IN_PROGRESS);
            assert(retryHandle->GetStatus() != TransferStatus::COMPLETED);
            assert(retryHandle->GetStatus() != TransferStatus::NOT_STARTED);           

            if (retryHandle->GetStatus() == TransferStatus::ABORTED)
            {
                return UploadFile(stream, retryHandle->GetBucketName(), retryHandle->GetKey(), retryHandle->GetContentType(), retryHandle->GetMetadata());
            }

            retryHandle->UpdateStatus(TransferStatus::NOT_STARTED);
            retryHandle->Restart();
            
            if (retryHandle->GetBytesTotalSize() > m_transferConfig.bufferSize)
            {
                m_transferConfig.transferExecutor->Submit([this, stream, retryHandle] { DoMultipartUpload(stream, retryHandle); });
            }
            else
            {
                m_transferConfig.transferExecutor->Submit([this, stream, retryHandle] { DoSinglePartUpload(stream, retryHandle); });
            }

            return retryHandle;
        }

        void TransferManager::AbortMultipartUpload(const std::shared_ptr<TransferHandle>& inProgressHandle)
        {
            assert(inProgressHandle->IsMultipart());
            assert(inProgressHandle->GetTransferDirection() == TransferDirection::UPLOAD);

            inProgressHandle->Cancel();
            m_transferConfig.transferExecutor->Submit([this, inProgressHandle] { WaitForCancellationAndAbortUpload(inProgressHandle); });
        }

        void TransferManager::DoMultipartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->SetIsMultipart(true);

            bool isRetry = !handle->GetMultiPartId().empty();
            uint64_t sentBytes = 0;            

            if (!isRetry)
            {
                Aws::S3::Model::CreateMultipartUploadRequest createMultipartRequest = m_transferConfig.createMultipartUploadTemplate;
                createMultipartRequest.WithBucket(handle->GetBucketName());
                createMultipartRequest.WithContentType(handle->GetContentType());
                createMultipartRequest.WithKey(handle->GetKey());
                createMultipartRequest.WithMetadata(handle->GetMetadata());

                auto createMultipartResponse = m_transferConfig.s3Client->CreateMultipartUpload(createMultipartRequest);
                if (createMultipartResponse.IsSuccess())
                {
                    handle->SetMultipartId(createMultipartResponse.GetResult().GetUploadId());
                    int partNumber = 1;
                    for (uint64_t i = 1; i < handle->GetBytesTotalSize(); i += m_transferConfig.bufferSize)
                    {
                        handle->AddQueuedPart(partNumber++);
                    }                    
                }
                else
                {
                    handle->SetError(createMultipartResponse.GetError());
                    handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));

                    TriggerErrorCallback(*handle, createMultipartResponse.GetError());
                    return;
                }
            }
            else
            {
                int partsToRetry = 0;
                //at this point we've been going synchronously so this is consistent
                for (auto failedParts : handle->GetFailedParts())
                {
                    partsToRetry++;
                    handle->AddQueuedPart(failedParts);
                }
                sentBytes = handle->GetBytesTotalSize() - (partsToRetry * m_transferConfig.bufferSize);
            }
            //still consistent
            Set<int> queuedParts = handle->GetQueuedParts();
            auto partsIter = queuedParts.begin();

            TriggerTransferStatusUpdatedCallback(*handle);

            while (sentBytes < handle->GetBytesTotalSize() && handle->ShouldContinue() && partsIter != queuedParts.end())
            {
                auto buffer = m_bufferManager.Acquire();
                if(handle->ShouldContinue())
                {
                    auto lengthToWrite = std::min(static_cast<uint64_t>(buffer->GetLength()), handle->GetBytesTotalSize() - sentBytes);
                    streamToPut->seekg((*partsIter - 1) * m_transferConfig.bufferSize);
                    streamToPut->read((char*)buffer->GetUnderlyingData(), lengthToWrite);

                    auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, static_cast<size_t>(lengthToWrite));
                    auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

                    Aws::S3::Model::UploadPartRequest uploadPartRequest = m_transferConfig.uploadPartTemplate;
                    uploadPartRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    uploadPartRequest.WithBucket(handle->GetBucketName())
                        .WithContentLength(static_cast<long long>(lengthToWrite))
                        .WithKey(handle->GetKey())
                        .WithPartNumber(*partsIter)
                        .WithUploadId(handle->GetMultiPartId());

                    handle->AddPendingPart(*partsIter);

                    uploadPartRequest.SetBody(preallocatedStreamReader);
                    uploadPartRequest.SetContentType(handle->GetContentType());
                    auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
                    asyncContext->handle = handle;

                    auto callback = [this](const Aws::S3::S3Client* client, const Aws::S3::Model::UploadPartRequest& request,
                        const Aws::S3::Model::UploadPartOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
                    {
                        HandleUploadPartResponse(client, request, outcome, context);
                    };

                    m_transferConfig.s3Client->UploadPartAsync(uploadPartRequest, callback, asyncContext);
                    sentBytes += lengthToWrite;

                    ++partsIter;
                }
                else
                {
                    m_bufferManager.Release(buffer);
                }
            }
            //parts get moved from queued to pending on this thread.
            //still consistent.
            for (; partsIter != queuedParts.end(); ++partsIter)
            {
                handle->ChangePartToFailed(*partsIter);
            }
           
        }

        void TransferManager::DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->SetIsMultipart(false);
            handle->AddPendingPart(1);

            auto putObjectRequest = m_transferConfig.putObjectTemplate;
            putObjectRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
            putObjectRequest.WithBucket(handle->GetBucketName())
                .WithKey(handle->GetKey())                
                .WithContentLength(static_cast<long long>(handle->GetBytesTotalSize()))
                .WithMetadata(handle->GetMetadata());

            putObjectRequest.SetContentType(handle->GetContentType());
            TriggerTransferStatusUpdatedCallback(*handle);

            auto buffer = m_bufferManager.Acquire();

            auto lengthToWrite = std::min(static_cast<uint64_t>(buffer->GetLength()), handle->GetBytesTotalSize());
            streamToPut->read((char*)buffer->GetUnderlyingData(), lengthToWrite);
            auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, static_cast<size_t>(lengthToWrite));
            auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

            putObjectRequest.SetBody(preallocatedStreamReader);

            auto uploadProgressCallback = [this, handle](const Aws::Http::HttpRequest*, long long progress)
            {
                handle->AddTransferredBytes(static_cast<uint64_t>(progress));
                TriggerUploadProgressCallback(*handle);
            };

            auto retryHandlerCallback = [this, handle](const Aws::AmazonWebServiceRequest&)
            {
                handle->SetTransferredBytes(0);
                TriggerUploadProgressCallback(*handle);
            };

            putObjectRequest.SetDataSentEventHandler(uploadProgressCallback);
            putObjectRequest.SetRequestRetryHandler(retryHandlerCallback);

            auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
            asyncContext->handle = handle;

            auto callback = [this](const Aws::S3::S3Client* client, const Aws::S3::Model::PutObjectRequest& request,
                const Aws::S3::Model::PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
            {
                HandlePutObjectResponse(client, request, outcome, context);
            };

            m_transferConfig.s3Client->PutObjectAsync(putObjectRequest, callback, asyncContext);
        }

        void TransferManager::HandleUploadPartResponse(const Aws::S3::S3Client*, const Aws::S3::Model::UploadPartRequest& request,
            const Aws::S3::Model::UploadPartOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            std::shared_ptr<TransferHandleAsyncContext> transferContext =
                std::const_pointer_cast<TransferHandleAsyncContext>(std::static_pointer_cast<const TransferHandleAsyncContext>(context));

            auto originalStreamBuffer = (Aws::Utils::Stream::PreallocatedStreamBuf*)request.GetBody()->rdbuf();

            m_bufferManager.Release(originalStreamBuffer->GetBuffer());
            Aws::Delete(originalStreamBuffer);

            if (outcome.IsSuccess())
            {
                transferContext->handle->AddTransferredBytes(static_cast<uint64_t>(request.GetContentLength()));
                TriggerUploadProgressCallback(*transferContext->handle);
                transferContext->handle->ChangePartToCompleted(request.GetPartNumber(), outcome.GetResult().GetETag());
            }
            else
            {
                transferContext->handle->ChangePartToFailed(request.GetPartNumber());
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);

            Aws::Set<int> pendingParts, queuedParts, failedParts;
            Aws::Set<std::pair<int, Aws::String>> completedParts;
            transferContext->handle->GetAllPartsTransactional(queuedParts, pendingParts, failedParts, completedParts);

            if (pendingParts.size() == 0 && queuedParts.size() == 0)
            {               
                if (failedParts.size() == 0 && transferContext->handle->GetBytesTransferred() == transferContext->handle->GetBytesTotalSize())
                {
                    Aws::S3::Model::CompletedMultipartUpload completedUpload;

                    for (auto& part : transferContext->handle->GetCompletedParts())
                    {
                        Aws::S3::Model::CompletedPart completedPart;
                        completedPart.WithPartNumber(part.first)
                            .WithETag(part.second);
                        completedUpload.AddParts(completedPart);
                    }

                    Aws::S3::Model::CompleteMultipartUploadRequest completeMultipartUploadRequest;
                    completeMultipartUploadRequest.SetContinueRequestHandler([=](const Aws::Http::HttpRequest*) { return transferContext->handle->ShouldContinue(); });
                    completeMultipartUploadRequest.WithBucket(transferContext->handle->GetBucketName())
                        .WithKey(transferContext->handle->GetKey())
                        .WithUploadId(transferContext->handle->GetMultiPartId())
                        .WithMultipartUpload(completedUpload);

                    auto completeUploadOutcome = m_transferConfig.s3Client->CompleteMultipartUpload(completeMultipartUploadRequest);

                    if (completeUploadOutcome.IsSuccess())
                    {
                        transferContext->handle->UpdateStatus(TransferStatus::COMPLETED);
                    }
                    else
                    {
                        transferContext->handle->UpdateStatus(DetermineIfFailedOrCanceled(*transferContext->handle));
                    }
                }
                else
                {
                    transferContext->handle->UpdateStatus(DetermineIfFailedOrCanceled(*transferContext->handle));
                }
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);
        }

        void TransferManager::HandlePutObjectResponse(const Aws::S3::S3Client*, const Aws::S3::Model::PutObjectRequest& request,
            const Aws::S3::Model::PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            std::shared_ptr<TransferHandleAsyncContext> transferContext =
                std::const_pointer_cast<TransferHandleAsyncContext>(std::static_pointer_cast<const TransferHandleAsyncContext>(context));

            auto originalStreamBuffer = (Aws::Utils::Stream::PreallocatedStreamBuf*)request.GetBody()->rdbuf();

            m_bufferManager.Release(originalStreamBuffer->GetBuffer());
            Aws::Delete(originalStreamBuffer);

            if (outcome.IsSuccess())
            {
                transferContext->handle->ChangePartToCompleted(1, outcome.GetResult().GetETag());
                transferContext->handle->UpdateStatus(TransferStatus::COMPLETED);
            }
            else
            {
                transferContext->handle->UpdateStatus(DetermineIfFailedOrCanceled(*transferContext->handle));
                transferContext->handle->ChangePartToFailed(1);
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);
        }

        void TransferManager::DoDownload(CreateDownloadStreamCallback writeToStreamfn, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->SetIsMultipart(false);
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->AddPendingPart(1);

            TriggerTransferStatusUpdatedCallback(*handle);

            Aws::S3::Model::HeadObjectRequest headObjectRequest;
            headObjectRequest.WithBucket(handle->GetBucketName())
                .WithKey(handle->GetKey());
            
            auto headObjectOutcome = m_transferConfig.s3Client->HeadObject(headObjectRequest);

            if (headObjectOutcome.IsSuccess())
            {
                handle->SetBytesTotalSize(static_cast<uint64_t>(headObjectOutcome.GetResult().GetContentLength()));
                handle->SetContentType(headObjectOutcome.GetResult().GetContentType());
                handle->SetMetadata(headObjectOutcome.GetResult().GetMetadata());
                TriggerTransferStatusUpdatedCallback(*handle);
            }
            else
            {
                handle->ChangePartToFailed(1);
                handle->UpdateStatus(TransferStatus::FAILED);
                handle->SetError(headObjectOutcome.GetError());
                TriggerErrorCallback(*handle, headObjectOutcome.GetError());
                TriggerTransferStatusUpdatedCallback(*handle);
                return;
            }

            Aws::S3::Model::GetObjectRequest request;
            request.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
            request.WithBucket(handle->GetBucketName())
                .WithKey(handle->GetKey());
            request.SetResponseStreamFactory(writeToStreamfn);

            request.SetDataReceivedEventHandler([this, handle](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long progress)
            {
                handle->AddTransferredBytes(static_cast<uint64_t>(progress));
                TriggerDownloadProgressCallback(*handle);
            });

            request.SetRequestRetryHandler([this, handle](const Aws::AmazonWebServiceRequest&)
            {
                handle->SetTransferredBytes(0);
                TriggerDownloadProgressCallback(*handle);
            });

            auto getObjectOutcome = m_transferConfig.s3Client->GetObject(request);
            if (getObjectOutcome.IsSuccess())
            {
                handle->SetMetadata(getObjectOutcome.GetResult().GetMetadata());
                handle->SetContentType(getObjectOutcome.GetResult().GetContentType());
                handle->ChangePartToCompleted(1, getObjectOutcome.GetResult().GetETag());
                handle->UpdateStatus(TransferStatus::COMPLETED);
            }
            else
            {
                handle->ChangePartToFailed(1);
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                handle->SetError(getObjectOutcome.GetError());

                TriggerErrorCallback(*handle, getObjectOutcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(*handle);
        }

        void TransferManager::WaitForCancellationAndAbortUpload(const std::shared_ptr<TransferHandle>& canceledHandle)
        {
            canceledHandle->WaitUntilFinished();
            if (canceledHandle->GetStatus() == TransferStatus::CANCELED)
            {
                Aws::S3::Model::AbortMultipartUploadRequest abortMultipartUploadRequest;
                abortMultipartUploadRequest.WithBucket(canceledHandle->GetBucketName())
                    .WithKey(canceledHandle->GetKey())
                    .WithUploadId(canceledHandle->GetMultiPartId());

                auto abortOutcome = m_transferConfig.s3Client->AbortMultipartUpload(abortMultipartUploadRequest);
                if (abortOutcome.IsSuccess())
                {
                    canceledHandle->UpdateStatus(TransferStatus::ABORTED);
                    TriggerTransferStatusUpdatedCallback(*canceledHandle);
                }
                else
                {
                    canceledHandle->SetError(abortOutcome.GetError());
                    TriggerErrorCallback(*canceledHandle, abortOutcome.GetError());
                }
            }
        }

        TransferStatus TransferManager::DetermineIfFailedOrCanceled(const TransferHandle& handle) const
        {
            return handle.ShouldContinue() ? TransferStatus::FAILED : TransferStatus::CANCELED;
        }

        void TransferManager::TriggerUploadProgressCallback(const TransferHandle& handle) const
        {
            if (m_transferConfig.uploadProgressCallback)
            {
                m_transferConfig.uploadProgressCallback(this, handle);
            }
        }

        void TransferManager::TriggerDownloadProgressCallback(const TransferHandle& handle) const
        {
            if (m_transferConfig.downloadProgressCallback)
            {
                m_transferConfig.downloadProgressCallback(this, handle);
            }
        }

        void TransferManager::TriggerTransferStatusUpdatedCallback(const TransferHandle& handle) const
        {
            if (m_transferConfig.transferStatusUpdatedCallback)
            {
                m_transferConfig.transferStatusUpdatedCallback(this, handle);
            }
        }

        void TransferManager::TriggerErrorCallback(const TransferHandle& handle, const Aws::Client::AWSError<Aws::S3::S3Errors>& error) const
        {
            if (m_transferConfig.errorCallback)
            {
                m_transferConfig.errorCallback(this, handle, error);
            }
        }
    }
}