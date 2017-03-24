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
#include <aws/core/platform/FileSystem.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/ListObjectsV2Request.h>
#include <aws/s3/model/CompleteMultipartUploadRequest.h>
#include <aws/s3/model/AbortMultipartUploadRequest.h>
#include <fstream>
#include <algorithm>

#include <aws/core/utils/logging/LogMacros.h>

namespace Aws
{
    namespace Transfer
    {
        static const char* const CLASS_TAG = "Aws::Transfer::TransferManager";

        struct TransferHandleAsyncContext : public Aws::Client::AsyncCallerContext
        {
            std::shared_ptr<TransferHandle> handle;
            PartPointer partState;
        };

        struct DownloadDirectoryContext : public Aws::Client::AsyncCallerContext
        {
            Aws::String rootDirectory;
            Aws::String prefix;
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

            if(fileStream->good())
            {
                if (length > m_transferConfig.bufferSize)
                {
                    m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoMultipartUpload(fileStream, handle); });
                }
                else
                {
                    m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoSinglePartUpload(fileStream, handle); });
                }
            }
            else
            {
                handle->SetError(Aws::Client::AWSError<Aws::Client::CoreErrors>(static_cast<Aws::Client::CoreErrors>(Aws::S3::S3Errors::NO_SUCH_UPLOAD), "NoSuchUpload", "The requested file could not be opened.", false));
                handle->UpdateStatus(Aws::Transfer::TransferStatus::FAILED);
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

            if(fileStream->good())
            {
                if (length > m_transferConfig.bufferSize)
                {
                    m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoMultipartUpload(fileStream, handle); });
                }
                else
                {
                    m_transferConfig.transferExecutor->Submit([this, fileStream, handle] { DoSinglePartUpload(fileStream, handle); });
                }
            }
            else
            {
                handle->SetError(Aws::Client::AWSError<Aws::Client::CoreErrors>(static_cast<Aws::Client::CoreErrors>(Aws::S3::S3Errors::NO_SUCH_UPLOAD), "NoSuchUpload", "The requested file could not be opened.", false));
                handle->UpdateStatus(Aws::Transfer::TransferStatus::FAILED);
            }

            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, 
                                                                      const Aws::String& keyName, 
                                                                      CreateDownloadStreamCallback writeToStreamfn, 
                                                                      const DownloadConfiguration& downloadConfig)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, writeToStreamfn);
            handle->ApplyDownloadConfiguration(downloadConfig);

            m_transferConfig.transferExecutor->Submit([this, writeToStreamfn, handle] { DoDownload(handle); });
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, 
                                                                      const Aws::String& keyName, 
                                                                      const Aws::String& writeToFile, 
                                                                      const DownloadConfiguration& downloadConfig)
        {

            auto createFileFn = [=]() { return Aws::New<Aws::FStream>(CLASS_TAG, writeToFile.c_str(),
                                                                     std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);};

            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, createFileFn);
            handle->ApplyDownloadConfiguration(downloadConfig);

            m_transferConfig.transferExecutor->Submit([this, createFileFn, handle] { DoDownload(handle); });
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

        void TransferManager::UploadDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix, const Aws::Map<Aws::String, Aws::String>& metadata)
        {
            assert(m_transferConfig.transferInitiatedCallback);

            auto visitor = [this, bucketName, prefix, metadata](const Aws::FileSystem::DirectoryTree*, const Aws::FileSystem::DirectoryEntry& entry)
            {
                if (entry && entry.fileType == Aws::FileSystem::FileType::File)
                {
                    Aws::StringStream ssKey;
                    Aws::String relativePath = entry.relativePath;
                    char delimiter[] = { Aws::FileSystem::PATH_DELIM, 0 };
                    Aws::Utils::StringUtils::Replace(relativePath, delimiter, "/");

                    ssKey << prefix << "/" << relativePath;
                    Aws::String keyName = ssKey.str();
                    
                    m_transferConfig.transferInitiatedCallback(this, UploadFile(entry.path, bucketName, keyName, DEFAULT_CONTENT_TYPE, metadata));                    
                }

                return true;
            };
            
            m_transferConfig.transferExecutor->Submit([directory, visitor]() { Aws::FileSystem::DirectoryTree dir(directory); dir.TraverseDepthFirst(visitor); });
        }

        void TransferManager::DownloadToDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix)
        {
            assert(m_transferConfig.transferInitiatedCallback);
            Aws::FileSystem::CreateDirectoryIfNotExists(directory.c_str());
         
            auto handler = [this](const Aws::S3::S3Client* client, const Aws::S3::Model::ListObjectsV2Request& request, const Aws::S3::Model::ListObjectsV2Outcome& outcome,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) { HandleListObjectsResponse(client, request, outcome, context); };

            Aws::S3::Model::ListObjectsV2Request request;
            request.WithBucket(bucketName)
                .WithPrefix(prefix)
                .WithDelimiter("/");

            auto context = Aws::MakeShared<DownloadDirectoryContext>(CLASS_TAG);
            context->rootDirectory = directory;
            context->prefix = prefix;
                
            m_transferConfig.s3Client->ListObjectsV2Async(request, handler, context);
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
                    uint64_t totalSize = handle->GetBytesTotalSize();
                    uint64_t partCount = ( totalSize + m_transferConfig.bufferSize - 1 ) / m_transferConfig.bufferSize;

                    for (uint64_t i = 0; i < partCount; ++i)
                    {
                        uint64_t partSize = std::min(totalSize - i * m_transferConfig.bufferSize, m_transferConfig.bufferSize);
                        handle->AddQueuedPart(Aws::MakeShared<PartState>(CLASS_TAG, static_cast<int>(i + 1), 0, static_cast<size_t>(partSize)));
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
                sentBytes = handle->GetBytesTotalSize();
                //at this point we've been going synchronously so this is consistent
                for (auto failedParts : handle->GetFailedParts())
                {
                    partsToRetry++;
                    sentBytes -= failedParts.second->GetSizeInBytes();
                    handle->AddQueuedPart(failedParts.second);
                }
            }

            //still consistent
            PartStateMap queuedParts = handle->GetQueuedParts();
            auto partsIter = queuedParts.begin();

            TriggerTransferStatusUpdatedCallback(*handle);

            while (sentBytes < handle->GetBytesTotalSize() && handle->ShouldContinue() && partsIter != queuedParts.end())
            {
                auto buffer = m_bufferManager.Acquire();
                if(handle->ShouldContinue())
                {
                    auto lengthToWrite = partsIter->second->GetSizeInBytes();
                    streamToPut->seekg((partsIter->first - 1) * m_transferConfig.bufferSize);
                    streamToPut->read((char*)buffer->GetUnderlyingData(), lengthToWrite);

                    auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, static_cast<size_t>(lengthToWrite));
                    auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

                    PartPointer partPtr = partsIter->second;
                    Aws::S3::Model::UploadPartRequest uploadPartRequest = m_transferConfig.uploadPartTemplate;
                    uploadPartRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    uploadPartRequest.SetDataSentEventHandler([handle, partPtr](const Aws::Http::HttpRequest*, long long amount){ partPtr->OnDataTransferred(amount, handle); });
                    uploadPartRequest.SetRequestRetryHandler([partPtr](const AmazonWebServiceRequest&){ partPtr->Reset(); });
                    uploadPartRequest.WithBucket(handle->GetBucketName())
                        .WithContentLength(static_cast<long long>(lengthToWrite))
                        .WithKey(handle->GetKey())
                        .WithPartNumber(partsIter->first)
                        .WithUploadId(handle->GetMultiPartId());

                    handle->AddPendingPart(partsIter->second);

                    uploadPartRequest.SetBody(preallocatedStreamReader);
                    uploadPartRequest.SetContentType(handle->GetContentType());
                    auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
                    asyncContext->handle = handle;
                    asyncContext->partState = partsIter->second;

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
                handle->ChangePartToFailed(partsIter->second);
            }
           
        }

        void TransferManager::DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            auto partState = Aws::MakeShared<PartState>(CLASS_TAG, 1, 0, static_cast<size_t>(handle->GetBytesTotalSize()));

            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->SetIsMultipart(false);
            handle->AddPendingPart(partState);

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

            auto uploadProgressCallback = [this, partState, handle](const Aws::Http::HttpRequest*, long long progress)
            {
                partState->OnDataTransferred(progress, handle);
                TriggerUploadProgressCallback(*handle);
            };

            auto retryHandlerCallback = [this, partState, handle](const Aws::AmazonWebServiceRequest&)
            {
                partState->Reset();
                TriggerUploadProgressCallback(*handle);
            };

            putObjectRequest.SetDataSentEventHandler(uploadProgressCallback);
            putObjectRequest.SetRequestRetryHandler(retryHandlerCallback);

            auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
            asyncContext->handle = handle;
            asyncContext->partState = partState;

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
                TriggerUploadProgressCallback(*transferContext->handle);
                transferContext->handle->ChangePartToCompleted(transferContext->partState, outcome.GetResult().GetETag());
            }
            else
            {
                transferContext->handle->ChangePartToFailed(transferContext->partState);
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);

            PartStateMap pendingParts, queuedParts, failedParts, completedParts;
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
                            .WithETag(part.second->GetETag());
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
                transferContext->handle->ChangePartToCompleted(transferContext->partState, outcome.GetResult().GetETag());
                transferContext->handle->UpdateStatus(TransferStatus::COMPLETED);
            }
            else
            {
                transferContext->handle->UpdateStatus(DetermineIfFailedOrCanceled(*transferContext->handle));
                transferContext->handle->ChangePartToFailed(transferContext->partState);
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);
        }

        std::shared_ptr<TransferHandle> TransferManager::RetryDownload(const std::shared_ptr<TransferHandle>& retryHandle)
        {
            assert(retryHandle->GetStatus() != TransferStatus::IN_PROGRESS);
            assert(retryHandle->GetStatus() != TransferStatus::COMPLETED);
            assert(retryHandle->GetStatus() != TransferStatus::NOT_STARTED);           

            if (retryHandle->GetStatus() == TransferStatus::ABORTED)
            {
                return DownloadFile(retryHandle->GetBucketName(), retryHandle->GetKey(), retryHandle->GetCreateDownloadStreamFunction());
            }

            retryHandle->UpdateStatus(TransferStatus::NOT_STARTED);
            retryHandle->Restart();
            
            m_transferConfig.transferExecutor->Submit([this, retryHandle] 
                                                      { DoDownload(retryHandle); });

            return retryHandle;
        }

        void TransferManager::DoSinglePartDownload(const std::shared_ptr<TransferHandle>& handle)
        {
            auto queuedParts = handle->GetQueuedParts();
            assert(queuedParts.size() == 1);

            auto partState = queuedParts.begin()->second;
            Aws::S3::Model::GetObjectRequest request;
            request.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
            request.WithBucket(handle->GetBucketName())
                   .WithKey(handle->GetKey());

            if (handle->GetVersionId().size() > 0)
            {
                request.SetVersionId(handle->GetVersionId());
            }

            request.SetResponseStreamFactory(handle->GetCreateDownloadStreamFunction());

            request.SetDataReceivedEventHandler([this, handle, partState](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long progress)
            {
                partState->OnDataTransferred(progress, handle);
                TriggerDownloadProgressCallback(*handle);
            });

            request.SetRequestRetryHandler([this, handle, partState](const Aws::AmazonWebServiceRequest&)
            {
                partState->Reset();
                TriggerDownloadProgressCallback(*handle);
            });

            auto getObjectOutcome = m_transferConfig.s3Client->GetObject(request);
            if (getObjectOutcome.IsSuccess())
            {
                handle->SetMetadata(getObjectOutcome.GetResult().GetMetadata());
                handle->SetContentType(getObjectOutcome.GetResult().GetContentType());
                handle->ChangePartToCompleted(partState, getObjectOutcome.GetResult().GetETag());
                handle->UpdateStatus(TransferStatus::COMPLETED);
            }
            else
            {
                handle->ChangePartToFailed(partState);
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                handle->SetError(getObjectOutcome.GetError());

                TriggerErrorCallback(*handle, getObjectOutcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(*handle);
        }

        static Aws::String FormatRangeSpecifier(std::size_t rangeStart, std::size_t rangeEnd)
        {
            Aws::StringStream rangeStream;
            rangeStream << "bytes=" << rangeStart << "-" << rangeEnd;
            return rangeStream.str();
        }

        bool TransferManager::InitializePartsForDownload(const std::shared_ptr<TransferHandle>& handle)
        {
            bool isRetry = handle->HasParts();
            size_t bufferSize = static_cast<size_t>(m_transferConfig.bufferSize);
            if (!isRetry)
            {
                Aws::S3::Model::HeadObjectRequest headObjectRequest;
                headObjectRequest.WithBucket(handle->GetBucketName())
                                 .WithKey(handle->GetKey());

                if(!handle->GetVersionId().empty())
                {
                    headObjectRequest.SetVersionId(handle->GetVersionId());
                }
            
                auto headObjectOutcome = m_transferConfig.s3Client->HeadObject(headObjectRequest);

                if (!headObjectOutcome.IsSuccess())
                {
                    handle->UpdateStatus(TransferStatus::FAILED);
                    handle->SetError(headObjectOutcome.GetError());
                    TriggerErrorCallback(*handle, headObjectOutcome.GetError());
                    TriggerTransferStatusUpdatedCallback(*handle);
                    return false;
                }

                TriggerTransferStatusUpdatedCallback(*handle);

                std::size_t downloadSize = static_cast<size_t>(headObjectOutcome.GetResult().GetContentLength());
                handle->SetBytesTotalSize(downloadSize);
                handle->SetContentType(headObjectOutcome.GetResult().GetContentType());
                handle->SetMetadata(headObjectOutcome.GetResult().GetMetadata());
                if(handle->GetVersionId().empty())
                {
                    handle->SetVersionId(headObjectOutcome.GetResult().GetVersionId());
                }

                std::size_t partCount = ( downloadSize + bufferSize - 1 ) / bufferSize;
                handle->SetIsMultipart(partCount > 1);    // doesn't make a difference but let's be accurate

                for(std::size_t i = 0; i < partCount; ++i)
                {
                    std::size_t partSize = (i + 1 < partCount ) ? bufferSize : (downloadSize - bufferSize * (partCount - 1));
                    auto partState = Aws::MakeShared<PartState>(CLASS_TAG, static_cast<int>(i + 1), 0, partSize);
                    partState->SetRangeBegin(i * bufferSize);
                    handle->AddQueuedPart(partState);
                }
            }
            else
            {
                for (auto failedPart : handle->GetFailedParts())
                {
                    handle->AddQueuedPart(failedPart.second);
                }
            }

            return true;
        }

        void TransferManager::DoDownload(const std::shared_ptr<TransferHandle>& handle)
        {
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            if (!InitializePartsForDownload(handle))
            {
                return;
            }

            bool isMultipart = handle->IsMultipart();
            size_t bufferSize = static_cast<size_t>(m_transferConfig.bufferSize);

            if(!isMultipart)
            {
                // Special case this for performance (avoid the intermediate buffer write)
                DoSinglePartDownload(handle);
                return;
            }

            auto queuedParts = handle->GetQueuedParts();
            auto queuedPartIter = queuedParts.begin();
            while(queuedPartIter != queuedParts.end() && handle->ShouldContinue())
            {
                const auto& partState = queuedPartIter->second;
                std::size_t rangeStart = ( partState->GetPartId() - 1 ) * bufferSize;
                std::size_t rangeEnd = rangeStart + partState->GetSizeInBytes() - 1;
                auto buffer = m_bufferManager.Acquire();
                partState->SetDownloadBuffer(buffer);

                CreateDownloadStreamCallback responseStreamFunction = [partState, buffer, rangeEnd, rangeStart]() 
                {                    
                    auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, rangeEnd - rangeStart + 1);
                    auto bufferStream = Aws::New<Aws::IOStream>(CLASS_TAG, streamBuf);
                    partState->SetDownloadPartStream(bufferStream);
                    return bufferStream;
                };

                if(handle->ShouldContinue())
                {
                    partState->SetDownloadBuffer(buffer);

                    Aws::S3::Model::GetObjectRequest getObjectRangeRequest;
                    getObjectRangeRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    getObjectRangeRequest.SetBucket(handle->GetBucketName());
                    getObjectRangeRequest.WithKey(handle->GetKey());
                    getObjectRangeRequest.SetRange(FormatRangeSpecifier(rangeStart, rangeEnd));
                    getObjectRangeRequest.SetResponseStreamFactory(responseStreamFunction);
                    if(handle->GetVersionId().size() > 0)
                    {
                        getObjectRangeRequest.SetVersionId(handle->GetVersionId());
                    }

                    getObjectRangeRequest.SetDataReceivedEventHandler([this, partState, handle](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long progress)
                    {
                        partState->OnDataTransferred(progress, handle);
                        TriggerDownloadProgressCallback(*handle);
                    });

                    getObjectRangeRequest.SetRequestRetryHandler([this, partState, handle](const Aws::AmazonWebServiceRequest&)
                    {
                        partState->Reset();
                        TriggerDownloadProgressCallback(*handle);
                    });

                    auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
                    asyncContext->handle = handle;
                    asyncContext->partState = partState;

                    auto callback = [this](const Aws::S3::S3Client* client, const Aws::S3::Model::GetObjectRequest& request,
                        const Aws::S3::Model::GetObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
                    {
                        HandleGetObjectResponse(client, request, outcome, context);
                    };

                    handle->AddPendingPart(partState);

                    m_transferConfig.s3Client->GetObjectAsync(getObjectRangeRequest, callback, asyncContext);
                    ++queuedPartIter;
                }
                else if(buffer)
                {
                    m_bufferManager.Release(buffer);
                    break;
                }
            }

            //parts get moved from queued to pending on this thread.
            //still consistent.
            while(queuedPartIter != queuedParts.end())
            {
                handle->ChangePartToFailed(queuedPartIter->second);
                ++queuedPartIter;
            }
        }

        void TransferManager::HandleGetObjectResponse(const Aws::S3::S3Client* client, 
                                                      const Aws::S3::Model::GetObjectRequest& request,
                                                      const Aws::S3::Model::GetObjectOutcome& outcome, 
                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            AWS_UNREFERENCED_PARAM(client);
            AWS_UNREFERENCED_PARAM(request);

            std::shared_ptr<TransferHandleAsyncContext> transferContext =
                std::const_pointer_cast<TransferHandleAsyncContext>(std::static_pointer_cast<const TransferHandleAsyncContext>(context));

            if (!outcome.IsSuccess())
            {
                transferContext->handle->ChangePartToFailed(transferContext->partState);
                transferContext->handle->SetError(outcome.GetError());
                TriggerErrorCallback(*transferContext->handle, outcome.GetError());
            }
            else
            {
                if(transferContext->handle->ShouldContinue())
                {
                    Aws::IOStream* bufferStream = transferContext->partState->GetDownloadPartStream();
                    transferContext->handle->WritePartToDownloadStream(bufferStream, transferContext->partState->GetRangeBegin());
                    transferContext->handle->ChangePartToCompleted(transferContext->partState, outcome.GetResult().GetETag());
                }
                else
                {
                    transferContext->handle->ChangePartToFailed(transferContext->partState);
                }
            }

            // buffer cleanup
            if(transferContext->partState->GetDownloadBuffer())
            {
                m_bufferManager.Release(transferContext->partState->GetDownloadBuffer());
                transferContext->partState->SetDownloadBuffer(nullptr);
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);

            PartStateMap pendingParts, queuedParts, failedParts, completedParts;
            transferContext->handle->GetAllPartsTransactional(queuedParts, pendingParts, failedParts, completedParts);

            if (pendingParts.size() == 0 && queuedParts.size() == 0)
            {               
                if (failedParts.size() == 0 && transferContext->handle->GetBytesTransferred() == transferContext->handle->GetBytesTotalSize())
                {
                    transferContext->handle->UpdateStatus(TransferStatus::COMPLETED);
                }
                else
                {
                    transferContext->handle->UpdateStatus(DetermineIfFailedOrCanceled(*transferContext->handle));
                }
            }

            TriggerTransferStatusUpdatedCallback(*transferContext->handle);
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

        void TransferManager::HandleListObjectsResponse(const Aws::S3::S3Client*, const Aws::S3::Model::ListObjectsV2Request& request, const Aws::S3::Model::ListObjectsV2Outcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            auto handler = [this](const Aws::S3::S3Client* client, const Aws::S3::Model::ListObjectsV2Request& request, const Aws::S3::Model::ListObjectsV2Outcome& outcome,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) { HandleListObjectsResponse(client, request, outcome, context); };

            if (outcome.IsSuccess())
            {
                Aws::S3::Model::ListObjectsV2Request requestCpy = request;
                std::shared_ptr<const DownloadDirectoryContext> downloadContext = (const std::shared_ptr<const DownloadDirectoryContext>&)context;
                auto directory = downloadContext->rootDirectory;
                auto prefix = downloadContext->prefix;

                auto& result = outcome.GetResult();
                //if it was truncated, we don't care on this pass anyways. Just go ahead and kick off another list objects and will handle it when it finishes.
                if (result.GetIsTruncated())
                {
                    requestCpy.SetContinuationToken(result.GetContinuationToken());
                    m_transferConfig.s3Client->ListObjectsV2Async(requestCpy, handler, context);
                }

                //this can contain matching directories or actual objects to download. If it's a directory, go ahead and create a local directory then
                // take the new prefix and call list again. if it's an object key, go ahead and initiate download.
                for (auto& content : result.GetContents())
                {
                    if (content.GetSize() <= 0 && content.GetKey() != request.GetPrefix())
                    {
                        Aws::FileSystem::CreateDirectoryIfNotExists(DetermineFilePath(directory, prefix, content.GetKey()).c_str());
                        requestCpy.SetPrefix(content.GetKey());
                        m_transferConfig.s3Client->ListObjectsV2Async(requestCpy, handler, context);
                    }
                    //this is our fixed point in the algorithm. eventually, everything will return an object.
                    else if (content.GetSize() > 0)
                    {
                        Aws::String fileName = DetermineFilePath(downloadContext->rootDirectory, downloadContext->prefix, content.GetKey());
                        m_transferConfig.transferInitiatedCallback(this, DownloadFile(request.GetBucket(), content.GetKey(), fileName));
                    }
                }

                //Take the common prefix and list with it, keep doing this until we start getting objects back. Go ahead and create the directories though.
                for (auto& commonPrefix : result.GetCommonPrefixes())
                {
                    Aws::FileSystem::CreateDirectoryIfNotExists(DetermineFilePath(directory, prefix, commonPrefix.GetPrefix()).c_str());
                    requestCpy.SetPrefix(commonPrefix.GetPrefix());
                    m_transferConfig.s3Client->ListObjectsV2Async(requestCpy, handler, context);
                }
            }
            else
            {
                //notify user if list objects failed.
                if (m_transferConfig.errorCallback)
                {
                    auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, request.GetBucket(), "");
                    m_transferConfig.errorCallback(this, *handle, outcome.GetError());
                }
            }
        }

        Aws::String TransferManager::DetermineFilePath(const Aws::String& directory, const Aws::String& prefix, const Aws::String& keyName)
        {
            Aws::String prefixCpy = prefix;
            Aws::String shortenedFileName = keyName;
            auto loc = shortenedFileName.find(prefixCpy);

            if (loc != std::string::npos)
            {
                shortenedFileName = shortenedFileName.substr(loc + prefixCpy.length());
            }

            char delimiter[] = { Aws::FileSystem::PATH_DELIM, 0 };
            Aws::Utils::StringUtils::Replace(shortenedFileName, "/", delimiter);
            Aws::StringStream ss;
            ss << directory << delimiter << shortenedFileName;

            return ss.str();
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
