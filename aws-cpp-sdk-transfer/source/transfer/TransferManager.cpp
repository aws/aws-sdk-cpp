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
#include <aws/s3/S3Client.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <fstream>

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

            for (size_t i = 0; i < m_transferConfig.transferBufferMaxHeapSize; i += m_transferConfig.bufferSize)
            {                
                m_bufferManager.PutResource(Aws::New<Aws::Utils::Array<uint8_t>>(CLASS_TAG, m_transferConfig.bufferSize));
            }
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
            const Aws::Map<Aws::String, Aws::String>& metadata)
        {
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, fileName.c_str(), std::ios_base::in | std::ios_base::binary);
            fileStream->seekg(0, std::ios_base::end);
            size_t length = fileStream->tellg();
            fileStream->seekg(0, std::ios_base::beg);
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, length, fileName);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);

            if(length > m_transferConfig.bufferSize)
            {
                m_transferConfig.transferExecutor->Submit([&] { DoMultipartUpload(fileStream, handle); });
            }
            else
            {
                m_transferConfig.transferExecutor->Submit([&] { DoSinglePartUpload(fileStream, handle); });
            }

            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const std::shared_ptr<Aws::IOStream>& fileStream, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
            const Aws::Map<Aws::String, Aws::String>& metadata)
        {            
            fileStream->seekg(0, std::ios_base::end);
            size_t length = fileStream->tellg();
            fileStream->seekg(0, std::ios_base::beg);
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, length);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);

            if (length > m_transferConfig.bufferSize)
            {
                m_transferConfig.transferExecutor->Submit([&] { DoMultipartUpload(fileStream, handle); });
            }
            else
            {
                m_transferConfig.transferExecutor->Submit([&] { DoSinglePartUpload(fileStream, handle); });
            }

            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, const Aws::String& keyName, Aws::IOStream* writeToStream)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName);

            m_transferConfig.transferExecutor->Submit([&] { DoDownload(writeToStream, handle); });
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& writeToFile)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, writeToFile);
            auto fileStream = Aws::New<Aws::FStream>(CLASS_TAG, writeToFile.c_str(), std::ios_base::out | std::ios_base::in | std::ios_base::binary);

            m_transferConfig.transferExecutor->Submit([&] { DoDownload(fileStream, handle); });
            return handle;
        }

        void TransferManager::DoMultipartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);            
            handle->SetIsMultipart(true);

            Aws::S3::Model::CreateMultipartUploadRequest createMultipartRequest = m_transferConfig.createMultipartUploadTemplate;
            createMultipartRequest.WithBucket(handle->GetBucketName());
            createMultipartRequest.WithContentType(handle->GetContentType());
            createMultipartRequest.WithKey(handle->GetKey());
            createMultipartRequest.WithMetadata(handle->GetMetadata());

            auto createMultipartResponse = m_transferConfig.s3Client->CreateMultipartUpload(createMultipartRequest);

            if(createMultipartResponse.IsSuccess())
            {
                Aws::String uploadId = createMultipartResponse.GetResult().GetUploadId();
                handle->SetMultipartId(uploadId);                                   

                int partNumber = 1;
                for (size_t i = 1; i < handle->GetBytesTotalSize(); i += m_transferConfig.bufferSize)
                {
                    handle->AddPendingPart(partNumber++);
                }

                TriggerTransferStatusUpdatedCallback(*handle);

                partNumber = 1;
                size_t sentBytes = 0;

                while (sentBytes < handle->GetBytesTotalSize() && handle->ShouldContinue())
                {
                    auto buffer = m_bufferManager.Acquire();
                    
                    auto lengthToWrite = std::min(buffer->GetLength(), handle->GetBytesTotalSize() - sentBytes);
                    streamToPut->read((char*)buffer->GetUnderlyingData(), lengthToWrite);

                    auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, lengthToWrite);
                    auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

                    Aws::S3::Model::UploadPartRequest uploadPartRequest = m_transferConfig.uploadPartTemplate;
                    uploadPartRequest.SetContinueRequestHandler([&](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    uploadPartRequest.WithBucket(handle->GetBucketName())
                            .WithContentLength(lengthToWrite)
                            .WithKey(handle->GetKey())
                            .WithPartNumber(partNumber++)
                            .WithUploadId(uploadId);

                    auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
                    asyncContext->handle = handle;

                    auto callback = [this](const Aws::S3::S3Client* client, const Aws::S3::Model::UploadPartRequest& request,
                        const Aws::S3::Model::UploadPartOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) 
                        { 
                            HandleUploadPartResponse(client, request, outcome, context); 
                        };


                    m_transferConfig.s3Client->UploadPartAsync(uploadPartRequest, callback, asyncContext);
                    sentBytes += lengthToWrite;                                
                }
            }
            else
            {
                handle->SetError(createMultipartResponse.GetError());
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));

                TriggerErrorCallback(*handle, createMultipartResponse.GetError());                
            }
        }

        void TransferManager::DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->SetIsMultipart(false);

            auto putObjectRequest = m_transferConfig.putObjectTemplate;
            putObjectRequest.SetContinueRequestHandler([&](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
            putObjectRequest.WithBucket(handle->GetBucketName())
                .WithKey(handle->GetKey())
                .WithContentLength(handle->GetBytesTotalSize())
                .WithMetadata(handle->GetMetadata());

            putObjectRequest.SetContentType(handle->GetContentType());
            TriggerTransferStatusUpdatedCallback(*handle);

            auto buffer = m_bufferManager.Acquire();

            auto lengthToWrite = std::min(buffer->GetLength(), handle->GetBytesTotalSize());
            streamToPut->read((char*)buffer->GetUnderlyingData(), lengthToWrite);

            auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, lengthToWrite);
            auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);
            putObjectRequest.SetBody(preallocatedStreamReader);

            auto uploadProgressCallback = [&](const Aws::Http::HttpRequest*, long long progress) 
            { 
                handle->AddTransferredBytes(progress);
                TriggerUploadProgressCallback(*handle);
            };

            putObjectRequest.SetDataSentEventHandler(uploadProgressCallback);

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
                transferContext->handle->AddTransferredBytes(request.GetContentLength());
                transferContext->handle->ChangePartToCompleted(request.GetPartNumber(), outcome.GetResult().GetETag());                
            }
            else
            {
                transferContext->handle->ChangePartToFailed(request.GetPartNumber());
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());               
            } 
            
            TriggerTransferStatusUpdatedCallback(*transferContext->handle);

            auto pendingParts = transferContext->handle->GetPendingParts();
            if (pendingParts.size() == 0)
            {
                auto failedParts = transferContext->handle->GetFailedParts();
                if(failedParts.size() == 0 && transferContext->handle->GetBytesTransferred() == transferContext->handle->GetBytesTotalSize())
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
                    completeMultipartUploadRequest.SetContinueRequestHandler([&](const Aws::Http::HttpRequest*) { return transferContext->handle->ShouldContinue(); });
                    completeMultipartUploadRequest.WithBucket(transferContext->handle->GetBucketName())
                        .WithKey(transferContext->handle->GetKey())
                        .WithUploadId(transferContext->handle->GetMultiPartId())
                        .WithMultipartUpload(completedUpload);

                    auto completeUploadOutcome = m_transferConfig.s3Client->CompleteMultipartUpload(completeMultipartUploadRequest);

                    if(completeUploadOutcome.IsSuccess())
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
                transferContext->handle->UpdateStatus(TransferStatus::COMPLETED);                
            }
            else
            {
                transferContext->handle->UpdateStatus(DetermineIfFailedOrCanceled(*transferContext->handle));
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());               
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);
        }       

        void TransferManager::DoDownload(Aws::IOStream* streamToWriteTo, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->SetIsMultipart(false);
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->AddPendingPart(1);

            TriggerTransferStatusUpdatedCallback(*handle);

            Aws::S3::Model::GetObjectRequest request;
            request.SetContinueRequestHandler([&](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
            request.WithBucket(handle->GetBucketName())
                .WithKey(handle->GetKey());
            request.SetResponseStreamFactory([&]() { return streamToWriteTo; });

            request.SetDataReceivedEventHandler([&](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long progress)
                {
                    handle->AddTransferredBytes(progress);
                    TriggerDownloadProgressCallback(*handle);
                });

            auto getObjectOutcome = m_transferConfig.s3Client->GetObject(request);
            if (getObjectOutcome.IsSuccess())
            {
                handle->SetMetadata(getObjectOutcome.GetResult().GetMetadata());
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