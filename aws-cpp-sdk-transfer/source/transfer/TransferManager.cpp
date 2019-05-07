/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/FileSystemUtils.h>
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
        static inline bool IsS3KeyPrefix(const Aws::String& path)
        {
            return (path.find_last_of('/') == path.size() - 1 || path.find_last_of('\\') == path.size() - 1);
        }

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

        std::shared_ptr<TransferManager> TransferManager::Create(const TransferManagerConfiguration& config)
        {
            // Because TransferManager's ctor is private (to ensure it's always constructed as a shared_ptr)
            // Aws::MakeShared does not have access to that private constructor. This workaround essentially 
            // enables Aws::MakeShared to construct TransferManager.
            struct MakeSharedEnabler : public TransferManager {
                MakeSharedEnabler(const TransferManagerConfiguration& config) : TransferManager(config) {}
            };

            return Aws::MakeShared<MakeSharedEnabler>(CLASS_TAG, config);
        }

        TransferManager::TransferManager(const TransferManagerConfiguration& configuration) : m_transferConfig(configuration)
        {
            assert(m_transferConfig.s3Client);
            assert(m_transferConfig.transferExecutor);
            for (uint64_t i = 0; i < m_transferConfig.transferBufferMaxHeapSize; i += m_transferConfig.bufferSize)
            {
                m_bufferManager.PutResource(Aws::NewArray<unsigned char>(static_cast<size_t>(m_transferConfig.bufferSize), CLASS_TAG));
            }
        }

        TransferManager::~TransferManager()
        {
            for (auto buffer : m_bufferManager.ShutdownAndWait(static_cast<size_t>(m_transferConfig.transferBufferMaxHeapSize / m_transferConfig.bufferSize)))
            {
                Aws::Delete(buffer);
            }
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const Aws::String& fileName,
                                                                    const Aws::String& bucketName,
                                                                    const Aws::String& keyName,
                                                                    const Aws::String& contentType,
                                                                    const Aws::Map<Aws::String, Aws::String>& metadata,
                                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            return this->DoUploadFile(fileName, bucketName, keyName, contentType, metadata, context);
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const std::shared_ptr<Aws::IOStream>& fileStream,
                                                                    const Aws::String& bucketName,
                                                                    const Aws::String& keyName, const Aws::String& contentType,
                                                                    const Aws::Map<Aws::String, Aws::String>& metadata,
                                                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            return this->DoUploadFile(fileStream, bucketName, keyName, contentType, metadata, context);
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, 
                                                                      const Aws::String& keyName, 
                                                                      CreateDownloadStreamCallback writeToStreamfn, 
                                                                      const DownloadConfiguration& downloadConfig,
                                                                      const Aws::String& writeToFile,
                                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, writeToStreamfn, writeToFile);
            handle->ApplyDownloadConfiguration(downloadConfig);
            handle->SetContext(context);

            auto self = shared_from_this();
            m_transferConfig.transferExecutor->Submit([self, handle] { self->DoDownload(handle); });
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DownloadFile(const Aws::String& bucketName, 
                                                                      const Aws::String& keyName, 
                                                                      const Aws::String& writeToFile, 
                                                                      const DownloadConfiguration& downloadConfig,
                                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
#ifdef _MSC_VER
            auto createFileFn = [=]() { return Aws::New<Aws::FStream>(CLASS_TAG, Aws::Utils::StringUtils::ToWString(writeToFile.c_str()).c_str(),
                                                                     std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);};
#else
            auto createFileFn = [=]() { return Aws::New<Aws::FStream>(CLASS_TAG, writeToFile.c_str(),
                                                                     std::ios_base::out | std::ios_base::in | std::ios_base::binary | std::ios_base::trunc);};
#endif

            return DownloadFile(bucketName, keyName, createFileFn, downloadConfig, writeToFile, context);
        }

        std::shared_ptr<TransferHandle> TransferManager::RetryUpload(const Aws::String& fileName, const std::shared_ptr<TransferHandle>& retryHandle)
        {
#ifdef _MSC_VER
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, Aws::Utils::StringUtils::ToWString(fileName.c_str()).c_str(), std::ios_base::in | std::ios_base::binary);
#else
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, fileName.c_str(), std::ios_base::in | std::ios_base::binary);
#endif
            return RetryUpload(fileStream, retryHandle);
        }

        std::shared_ptr<TransferHandle> TransferManager::RetryUpload(const std::shared_ptr<Aws::IOStream>& stream, const std::shared_ptr<TransferHandle>& retryHandle)
        {
            assert(retryHandle->GetStatus() != TransferStatus::IN_PROGRESS);
            assert(retryHandle->GetStatus() != TransferStatus::COMPLETED);
            assert(retryHandle->GetStatus() != TransferStatus::NOT_STARTED);

            AWS_LOGSTREAM_INFO(CLASS_TAG, "Transfer handle [" << retryHandle->GetId()
                    << "] Retrying upload to Bucket: [" << retryHandle->GetBucketName() << "] with Key: ["
                    << retryHandle->GetKey() << "] with Upload ID: [" << retryHandle->GetMultiPartId()
                    << "]. Current handle status: [" << retryHandle->GetStatus() << "].");


            bool hasFileName = (retryHandle->GetTargetFilePath().size() != 0);

            if (retryHandle->GetStatus() == TransferStatus::ABORTED)
            {
                if (hasFileName)
                {
                    AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle [" << retryHandle->GetId() << "] Uploading file: "
                            << retryHandle->GetTargetFilePath() << " from disk. In Bucket: ["
                            << retryHandle->GetBucketName() << "] with Key: ["
                            << retryHandle->GetKey() << "].");

                    return UploadFile(retryHandle->GetTargetFilePath(), retryHandle->GetBucketName(), retryHandle->GetKey(), retryHandle->GetContentType(), retryHandle->GetMetadata());
                }
                else
                {
                    AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle [" << retryHandle->GetId() << "] Uploading bytes"
                            " from stream. In Bucket: [" << retryHandle->GetBucketName() << "] with Key: ["
                            << retryHandle->GetKey() << "].");

                    return UploadFile(stream, retryHandle->GetBucketName(), retryHandle->GetKey(), retryHandle->GetContentType(), retryHandle->GetMetadata());
                }
            }

            retryHandle->UpdateStatus(TransferStatus::NOT_STARTED);
            retryHandle->Restart();
            TriggerTransferStatusUpdatedCallback(retryHandle);

            SubmitUpload(retryHandle, hasFileName ? nullptr : stream);
            return retryHandle;
        }

        void TransferManager::AbortMultipartUpload(const std::shared_ptr<TransferHandle>& inProgressHandle)
        {
            assert(inProgressHandle->IsMultipart());
            assert(inProgressHandle->GetTransferDirection() == TransferDirection::UPLOAD);

            AWS_LOGSTREAM_INFO(CLASS_TAG, "Transfer handle [" << inProgressHandle->GetId() << "] Attempting to abort multipart upload.");

            inProgressHandle->Cancel();
            auto self = shared_from_this();
            m_transferConfig.transferExecutor->Submit([self, inProgressHandle] { self->WaitForCancellationAndAbortUpload(inProgressHandle); });
        }

        void TransferManager::UploadDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix, const Aws::Map<Aws::String, Aws::String>& metadata)
        {
            assert(m_transferConfig.transferInitiatedCallback);

            auto self = shared_from_this();
            auto visitor = [self, bucketName, prefix, metadata](const Aws::FileSystem::DirectoryTree*, const Aws::FileSystem::DirectoryEntry& entry)
            {
                if (entry && entry.fileType == Aws::FileSystem::FileType::File)
                {
                    Aws::StringStream ssKey;
                    Aws::String relativePath = entry.relativePath;
                    char delimiter[] = { Aws::FileSystem::PATH_DELIM, 0 };
                    Aws::Utils::StringUtils::Replace(relativePath, delimiter, "/");

                    ssKey << prefix << "/" << relativePath;
                    Aws::String keyName = ssKey.str();
                    AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Uploading file: " << entry.path
                            << " as part of directory upload to S3 Bucket: [" << bucketName << "] and Key: ["
                            << keyName << "].");
                    self->m_transferConfig.transferInitiatedCallback(self.get(), self->UploadFile(entry.path, bucketName, keyName, DEFAULT_CONTENT_TYPE, metadata));
                }

                return true;
            };

            m_transferConfig.transferExecutor->Submit([directory, visitor]() { Aws::FileSystem::DirectoryTree dir(directory); dir.TraverseDepthFirst(visitor); });
        }

        void TransferManager::DownloadToDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix)
        {
            assert(m_transferConfig.transferInitiatedCallback);
            Aws::FileSystem::CreateDirectoryIfNotExists(directory.c_str());
         
            auto self = shared_from_this(); // keep transfer manager alive until all callbacks are finished.
            auto handler = [self](const Aws::S3::S3Client* client, const Aws::S3::Model::ListObjectsV2Request& request,
                const Aws::S3::Model::ListObjectsV2Outcome& outcome,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) { self->HandleListObjectsResponse(client, request, outcome, context); };

            Aws::S3::Model::ListObjectsV2Request request;
            request.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
            request.WithBucket(bucketName)
                .WithPrefix(prefix);

            auto context = Aws::MakeShared<DownloadDirectoryContext>(CLASS_TAG);
            context->rootDirectory = directory;
            context->prefix = prefix;

            m_transferConfig.s3Client->ListObjectsV2Async(request, handler, context);
        }

        void TransferManager::DoMultiPartUpload(const std::shared_ptr<TransferHandle>& handle)
        {
#ifdef _MSC_VER
            auto wide = Aws::Utils::StringUtils::ToWString(handle->GetTargetFilePath().c_str());
            auto streamToPut = Aws::MakeShared<Aws::FStream>(CLASS_TAG, wide.c_str(), std::ios_base::in | std::ios_base::binary);
            DoMultiPartUpload(streamToPut, handle);
#else
            auto streamToPut = Aws::MakeShared<Aws::FStream>(CLASS_TAG, handle->GetTargetFilePath().c_str(), std::ios_base::in | std::ios_base::binary);
            DoMultiPartUpload(streamToPut, handle);
#endif
        }

        void TransferManager::DoMultiPartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            handle->SetIsMultipart(true);

            bool isRetry = !handle->GetMultiPartId().empty();
            uint64_t sentBytes = 0;

            if (!isRetry)
            {
                Aws::S3::Model::CreateMultipartUploadRequest createMultipartRequest = m_transferConfig.createMultipartUploadTemplate;
                createMultipartRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
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
                    AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle [" << handle->GetId()
                            << "] Successfully created a multi-part upload request. Upload ID: ["
                            << createMultipartResponse.GetResult().GetUploadId()
                            << "]. Splitting the multi-part upload to " << partCount << " part(s).");

                    for (uint64_t i = 0; i < partCount; ++i)
                    {
                        uint64_t partSize = (std::min)(totalSize - i * m_transferConfig.bufferSize, m_transferConfig.bufferSize);
                        bool lastPart = (i == partCount - 1) ? true : false;
                        handle->AddQueuedPart(Aws::MakeShared<PartState>(CLASS_TAG, static_cast<int>(i + 1), 0, static_cast<size_t>(partSize), lastPart));
                    }
                }
                else
                {
                    AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId() << "] Failed to create a "
                            "multi-part upload request. Bucket: [" << handle->GetBucketName()
                            << "] with Key: [" << handle->GetKey() << "]. " << createMultipartResponse.GetError());
                    handle->SetError(createMultipartResponse.GetError());
                    handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));

                    TriggerErrorCallback(handle, createMultipartResponse.GetError());
                    TriggerTransferStatusUpdatedCallback(handle);
                    return;
                }
            }
            else
            {
                size_t bytesLeft = 0;
                //at this point we've been going synchronously so this is consistent
                const auto failedPartsSize = handle->GetFailedParts().size();
                for (auto failedParts : handle->GetFailedParts())
                {
                    bytesLeft += failedParts.second->GetSizeInBytes();
                    handle->AddQueuedPart(failedParts.second);
                }

                sentBytes = handle->GetBytesTotalSize() - bytesLeft;

                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle [" << handle->GetId()
                            << "] Retrying multi-part upload for " << failedPartsSize
                            << " failed parts of total size " << bytesLeft << " bytes. Upload ID ["
                            << handle->GetMultiPartId() << "].");
            }

            //still consistent
            PartStateMap queuedParts = handle->GetQueuedParts();
            auto partsIter = queuedParts.begin();

            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            TriggerTransferStatusUpdatedCallback(handle);


            while (sentBytes < handle->GetBytesTotalSize() && handle->ShouldContinue() && partsIter != queuedParts.end())
            {
                auto buffer = m_bufferManager.Acquire();
                if(handle->ShouldContinue())
                {
                    auto lengthToWrite = partsIter->second->GetSizeInBytes();
                    streamToPut->seekg((partsIter->first - 1) * m_transferConfig.bufferSize);
                    streamToPut->read(reinterpret_cast<char*>(buffer), lengthToWrite);

                    auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, static_cast<size_t>(lengthToWrite));
                    auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

                    auto self = shared_from_this(); // keep transfer manager alive until all callbacks are finished.
                    PartPointer partPtr = partsIter->second;
                    Aws::S3::Model::UploadPartRequest uploadPartRequest = m_transferConfig.uploadPartTemplate;
                    uploadPartRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
                    uploadPartRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    uploadPartRequest.SetDataSentEventHandler([self, handle, partPtr](const Aws::Http::HttpRequest*, long long amount){ partPtr->OnDataTransferred(amount, handle); self->TriggerUploadProgressCallback(handle); });
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

                    auto callback = [self](const Aws::S3::S3Client* client, const Aws::S3::Model::UploadPartRequest& request,
                        const Aws::S3::Model::UploadPartOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
                    {
                        self->HandleUploadPartResponse(client, request, outcome, context);
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

            if (handle->HasFailedParts())
            {
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                TriggerTransferStatusUpdatedCallback(handle);
            }
        }

        void TransferManager::DoSinglePartUpload(const std::shared_ptr<TransferHandle>& handle)
        {
#ifdef _MSC_VER
            auto wide = Aws::Utils::StringUtils::ToWString(handle->GetTargetFilePath().c_str());
            auto streamToPut = Aws::MakeShared<Aws::FStream>(CLASS_TAG, wide.c_str(), std::ios_base::in | std::ios_base::binary);
            DoSinglePartUpload(streamToPut, handle);
#else
            auto streamToPut = Aws::MakeShared<Aws::FStream>(CLASS_TAG, handle->GetTargetFilePath().c_str(), std::ios_base::in | std::ios_base::binary);
            DoSinglePartUpload(streamToPut, handle);
#endif
        }

        void TransferManager::DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle)
        {
            auto partState = Aws::MakeShared<PartState>(CLASS_TAG, 1, 0, static_cast<size_t>(handle->GetBytesTotalSize()), true);

            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            handle->SetIsMultipart(false);
            handle->AddPendingPart(partState);
            TriggerTransferStatusUpdatedCallback(handle);

            auto putObjectRequest = m_transferConfig.putObjectTemplate;
            putObjectRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
            putObjectRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
            putObjectRequest.WithBucket(handle->GetBucketName())
                .WithKey(handle->GetKey())
                .WithContentLength(static_cast<long long>(handle->GetBytesTotalSize()))
                .WithMetadata(handle->GetMetadata());

            putObjectRequest.SetContentType(handle->GetContentType());

            auto buffer = m_bufferManager.Acquire();

            auto lengthToWrite = (std::min)(m_transferConfig.bufferSize, handle->GetBytesTotalSize());
            streamToPut->read((char*)buffer, lengthToWrite);
            auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, static_cast<size_t>(lengthToWrite));
            auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

            putObjectRequest.SetBody(preallocatedStreamReader);

            auto self = shared_from_this(); // keep transfer manager alive until all callbacks are finished.
            auto uploadProgressCallback = [self, partState, handle](const Aws::Http::HttpRequest*, long long progress)
            {
                partState->OnDataTransferred(progress, handle);
                self->TriggerUploadProgressCallback(handle);
            };

            auto retryHandlerCallback = [self, partState, handle](const Aws::AmazonWebServiceRequest&)
            {
                partState->Reset();
                self->TriggerUploadProgressCallback(handle);
            };

            putObjectRequest.SetDataSentEventHandler(uploadProgressCallback);
            putObjectRequest.SetRequestRetryHandler(retryHandlerCallback);

            auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
            asyncContext->handle = handle;
            asyncContext->partState = partState;

            auto callback = [self](const Aws::S3::S3Client* client, const Aws::S3::Model::PutObjectRequest& request,
                const Aws::S3::Model::PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
            {
                self->HandlePutObjectResponse(client, request, outcome, context);
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
            const auto& handle = transferContext->handle;
            const auto& partState = transferContext->partState;

            if (outcome.IsSuccess())
            {
                if (handle->ShouldContinue())
                {
                    handle->ChangePartToCompleted(partState, outcome.GetResult().GetETag());
                    AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle [" << handle->GetId()
                            << " successfully uploaded Part: [" << partState->GetPartId() << "] to Bucket: ["
                            << handle->GetBucketName() << "] with Key: [" << handle->GetKey() << "] with Upload ID: ["
                            << handle->GetMultiPartId() << "].");
                    TriggerUploadProgressCallback(handle);
                }
                else
                {
                    // marking this as failed so we eventually update the handle's status to CANCELED.
                    // Updating the handle's status to CANCELED here might result in a race-condition between a
                    // potentially restarting upload and a latent successful part.
                    handle->ChangePartToFailed(partState);
                    AWS_LOGSTREAM_WARN(CLASS_TAG, "Transfer handle [" << handle->GetId()
                            << " successfully uploaded Part: [" << partState->GetPartId() << "] to Bucket: ["
                            << handle->GetBucketName() << "] with Key: [" << handle->GetKey() << "] with Upload ID: ["
                            << handle->GetMultiPartId() << "] but transfer has been cancelled meanwhile.");
                }
            }
            else
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId() << "] Failed to upload part ["
                        << partState->GetPartId() << "] to Bucket: [" << handle->GetBucketName()
                        << "] with Key: [" << handle->GetKey() << "] with Upload ID: [" << handle->GetMultiPartId()
                        << "]. " << outcome.GetError());

                handle->ChangePartToFailed(partState);
                handle->SetError(outcome.GetError());
                TriggerErrorCallback(handle, outcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(handle);

            PartStateMap pendingParts, queuedParts, failedParts, completedParts;
            handle->GetAllPartsTransactional(queuedParts, pendingParts, failedParts, completedParts);

            if (pendingParts.size() == 0 && queuedParts.size() == 0 && handle->LockForCompletion())
            {
                if (failedParts.size() == 0 && handle->GetBytesTransferred() == handle->GetBytesTotalSize())
                {
                    Aws::S3::Model::CompletedMultipartUpload completedUpload;

                    for (auto& part : handle->GetCompletedParts())
                    {
                        Aws::S3::Model::CompletedPart completedPart;
                        completedPart.WithPartNumber(part.first)
                            .WithETag(part.second->GetETag());
                        completedUpload.AddParts(completedPart);
                    }

                    Aws::S3::Model::CompleteMultipartUploadRequest completeMultipartUploadRequest;
                    completeMultipartUploadRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
                    completeMultipartUploadRequest.SetContinueRequestHandler([=](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    completeMultipartUploadRequest.WithBucket(handle->GetBucketName())
                        .WithKey(handle->GetKey())
                        .WithUploadId(handle->GetMultiPartId())
                        .WithMultipartUpload(completedUpload);

                    auto completeUploadOutcome = m_transferConfig.s3Client->CompleteMultipartUpload(completeMultipartUploadRequest);

                    if (completeUploadOutcome.IsSuccess())
                    {
                        AWS_LOGSTREAM_INFO(CLASS_TAG, "Transfer handle [" << handle->GetId()
                                << "] Multi-part upload completed successfully to Bucket: ["
                                << handle->GetBucketName() << "] with Key: [" << handle->GetKey()
                                << "] with Upload ID: [" << handle->GetMultiPartId() << "].");
                        handle->UpdateStatus(TransferStatus::COMPLETED);
                    }
                    else
                    {
                        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId()
                                << "] Failed to complete multi-part upload. In Bucket: ["
                                << handle->GetBucketName() << "] with Key: [" << handle->GetKey()
                                << "] with Upload ID: [" << handle->GetMultiPartId()
                                << "]. " << completeUploadOutcome.GetError());

                        handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                    }
                }
                else
                {
                    AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle [" << handle->GetId() << "] " << failedParts.size()
                            << " Failed parts. " << handle->GetBytesTransferred() << " bytes transferred out of "
                            << handle->GetBytesTotalSize() << " total bytes.");
                    handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                }
                TriggerTransferStatusUpdatedCallback(handle);
            }
        }

        void TransferManager::HandlePutObjectResponse(const Aws::S3::S3Client*, const Aws::S3::Model::PutObjectRequest& request,
            const Aws::S3::Model::PutObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            std::shared_ptr<TransferHandleAsyncContext> transferContext =
                std::const_pointer_cast<TransferHandleAsyncContext>(std::static_pointer_cast<const TransferHandleAsyncContext>(context));

            auto originalStreamBuffer = static_cast<Aws::Utils::Stream::PreallocatedStreamBuf*>(request.GetBody()->rdbuf());

            m_bufferManager.Release(originalStreamBuffer->GetBuffer());
            Aws::Delete(originalStreamBuffer);

            const auto& handle = transferContext->handle;
            const auto& partState = transferContext->partState;

            if (outcome.IsSuccess())
            {
                AWS_LOGSTREAM_INFO(CLASS_TAG, "Transfer handle [" << handle->GetId()
                        << "] PutObject completed successfully to Bucket: ["
                        << handle->GetBucketName() << "] with Key: [" << handle->GetKey()
                        << "].");
                handle->ChangePartToCompleted(partState, outcome.GetResult().GetETag());
                handle->UpdateStatus(TransferStatus::COMPLETED);
            }
            else
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId() << "] Failed to upload object to "
                        "Bucket: [" << handle->GetBucketName() << "] with Key: [" << handle->GetKey()
                        << "] " << outcome.GetError());
                handle->ChangePartToFailed(partState);
                handle->SetError(outcome.GetError());
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                TriggerErrorCallback(handle, outcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(handle);
        }

        std::shared_ptr<TransferHandle> TransferManager::RetryDownload(const std::shared_ptr<TransferHandle>& retryHandle)
        {
            assert(retryHandle->GetStatus() != TransferStatus::IN_PROGRESS);
            assert(retryHandle->GetStatus() != TransferStatus::COMPLETED);
            assert(retryHandle->GetStatus() != TransferStatus::NOT_STARTED);           

            if (retryHandle->GetStatus() == TransferStatus::ABORTED)
            {
                DownloadConfiguration retryDownloadConfig;
                retryDownloadConfig.versionId = retryHandle->GetVersionId();
                return DownloadFile(retryHandle->GetBucketName(), retryHandle->GetKey(), retryHandle->GetCreateDownloadStreamFunction(), retryDownloadConfig, retryHandle->GetTargetFilePath());
            }

            retryHandle->UpdateStatus(TransferStatus::NOT_STARTED);
            retryHandle->Restart();
            TriggerTransferStatusUpdatedCallback(retryHandle);
            
            auto self = shared_from_this();
            m_transferConfig.transferExecutor->Submit([self, retryHandle] 
                                                      { self->DoDownload(retryHandle); });

            return retryHandle;
        }

        void TransferManager::DoSinglePartDownload(const std::shared_ptr<TransferHandle>& handle)
        {
            auto queuedParts = handle->GetQueuedParts();
            assert(queuedParts.size() == 1);

            auto partState = queuedParts.begin()->second;
            Aws::S3::Model::GetObjectRequest request;
            request.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
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
                TriggerDownloadProgressCallback(handle);
            });

            request.SetRequestRetryHandler([this, handle, partState](const Aws::AmazonWebServiceRequest&)
            {
                partState->Reset();
                TriggerDownloadProgressCallback(handle);
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
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId()
                        << "] Failed to download object to Bucket: [" << handle->GetBucketName() << "] with Key: ["
                        << handle->GetKey() << "] " << getObjectOutcome.GetError());
                handle->ChangePartToFailed(partState);
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                handle->SetError(getObjectOutcome.GetError());

                TriggerErrorCallback(handle, getObjectOutcome.GetError());
            }

            TriggerTransferStatusUpdatedCallback(handle);
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
                headObjectRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
                headObjectRequest.WithBucket(handle->GetBucketName())
                                 .WithKey(handle->GetKey());

                if(!handle->GetVersionId().empty())
                {
                    headObjectRequest.SetVersionId(handle->GetVersionId());
                }
            
                auto headObjectOutcome = m_transferConfig.s3Client->HeadObject(headObjectRequest);

                if (!headObjectOutcome.IsSuccess())
                {
                    AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId()
                            << "] Failed to get download parts information for object in Bucket: ["
                            << handle->GetBucketName() << "] with Key: [" << handle->GetKey()
                            << "] " << headObjectOutcome.GetError());
                    handle->UpdateStatus(TransferStatus::FAILED);
                    handle->SetError(headObjectOutcome.GetError());
                    TriggerErrorCallback(handle, headObjectOutcome.GetError());
                    TriggerTransferStatusUpdatedCallback(handle);
                    return false;
                }

                std::size_t downloadSize = static_cast<size_t>(headObjectOutcome.GetResult().GetContentLength());
                handle->SetBytesTotalSize(downloadSize);
                handle->SetContentType(headObjectOutcome.GetResult().GetContentType());
                handle->SetMetadata(headObjectOutcome.GetResult().GetMetadata());
                if(handle->GetVersionId().empty())
                {
                    handle->SetVersionId(headObjectOutcome.GetResult().GetVersionId());
                }

                // For empty file, we create 1 part here to make downloading behaviors consistent for files with different size.
                std::size_t partCount = (std::max)((downloadSize + bufferSize - 1) / bufferSize, static_cast<std::size_t>(1));
                handle->SetIsMultipart(partCount > 1);    // doesn't make a difference but let's be accurate

                for(std::size_t i = 0; i < partCount; ++i)
                {
                    std::size_t partSize = (i + 1 < partCount ) ? bufferSize : (downloadSize - bufferSize * (partCount - 1));
                    bool lastPart = (i == partCount - 1) ? true : false;
                    auto partState = Aws::MakeShared<PartState>(CLASS_TAG, static_cast<int>(i + 1), 0, partSize, lastPart);
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
            if (!InitializePartsForDownload(handle))
            {
                return;
            }
            handle->UpdateStatus(TransferStatus::IN_PROGRESS);
            TriggerTransferStatusUpdatedCallback(handle);

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
                    auto bufferStream = Aws::New<Aws::Utils::Stream::DefaultUnderlyingStream>(CLASS_TAG, 
                            Aws::MakeUnique<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, rangeEnd - rangeStart + 1));
                    partState->SetDownloadPartStream(bufferStream);
                    return bufferStream;
                };

                if(handle->ShouldContinue())
                {
                    partState->SetDownloadBuffer(buffer);

                    Aws::S3::Model::GetObjectRequest getObjectRangeRequest;
                    getObjectRangeRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
                    getObjectRangeRequest.SetContinueRequestHandler([handle](const Aws::Http::HttpRequest*) { return handle->ShouldContinue(); });
                    getObjectRangeRequest.SetBucket(handle->GetBucketName());
                    getObjectRangeRequest.WithKey(handle->GetKey());
                    getObjectRangeRequest.SetRange(FormatRangeSpecifier(rangeStart, rangeEnd));
                    getObjectRangeRequest.SetResponseStreamFactory(responseStreamFunction);
                    if(handle->GetVersionId().size() > 0)
                    {
                        getObjectRangeRequest.SetVersionId(handle->GetVersionId());
                    }

                    auto self = shared_from_this(); // keep transfer manager alive until all callbacks are finished.

                    getObjectRangeRequest.SetDataReceivedEventHandler([self, partState, handle](const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long progress)
                    {
                        partState->OnDataTransferred(progress, handle);
                        self->TriggerDownloadProgressCallback(handle);
                    });

                    getObjectRangeRequest.SetRequestRetryHandler([self, partState, handle](const Aws::AmazonWebServiceRequest&)
                    {
                        partState->Reset();
                        self->TriggerDownloadProgressCallback(handle);
                    });

                    auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
                    asyncContext->handle = handle;
                    asyncContext->partState = partState;

                    auto callback = [self](const Aws::S3::S3Client* client, const Aws::S3::Model::GetObjectRequest& request,
                        const Aws::S3::Model::GetObjectOutcome& outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
                    {
                        self->HandleGetObjectResponse(client, request, outcome, context);
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
            if (handle->HasFailedParts())
            {
                handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                TriggerTransferStatusUpdatedCallback(handle);      
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
            const auto& handle = transferContext->handle;
            const auto& partState = transferContext->partState;

            if (!outcome.IsSuccess())
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << handle->GetId()
                        << "] Failed to download object in Bucket: ["
                        << handle->GetBucketName() << "] with Key: [" << handle->GetKey()
                        << "] " << outcome.GetError());
                handle->ChangePartToFailed(partState);
                handle->SetError(outcome.GetError());
                TriggerErrorCallback(handle, outcome.GetError());
            }
            else
            {
                if(handle->ShouldContinue())
                {
                    Aws::IOStream* bufferStream = partState->GetDownloadPartStream();
                    assert(bufferStream);
                    handle->WritePartToDownloadStream(bufferStream, partState->GetRangeBegin());
                    handle->ChangePartToCompleted(partState, outcome.GetResult().GetETag());
                }
                else
                {
                    handle->ChangePartToFailed(partState);
                }
            }

            // buffer cleanup
            if(partState->GetDownloadBuffer())
            {
                m_bufferManager.Release(partState->GetDownloadBuffer());
                partState->SetDownloadBuffer(nullptr);
            }

            TriggerTransferStatusUpdatedCallback(handle);

            PartStateMap pendingParts, queuedParts, failedParts, completedParts;
            handle->GetAllPartsTransactional(queuedParts, pendingParts, failedParts, completedParts);

            if (pendingParts.size() == 0 && queuedParts.size() == 0)
            {
                if (failedParts.size() == 0 && handle->GetBytesTransferred() == handle->GetBytesTotalSize())
                {
                    handle->UpdateStatus(TransferStatus::COMPLETED);
                }
                else
                {
                    handle->UpdateStatus(DetermineIfFailedOrCanceled(*handle));
                }
                TriggerTransferStatusUpdatedCallback(handle);
            }
            partState->SetDownloadPartStream(nullptr);
        }

        void TransferManager::WaitForCancellationAndAbortUpload(const std::shared_ptr<TransferHandle>& canceledHandle)
        {
            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle [" << canceledHandle->GetId()
                    << "] Waiting on handle to abort upload. In Bucket: ["
                    << canceledHandle->GetBucketName() << "] with Key: [" << canceledHandle->GetKey()
                    << "] with Upload ID: [" << canceledHandle->GetMultiPartId() << "].");

            canceledHandle->WaitUntilFinished();
            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle [" << canceledHandle->GetId()
                    << "] Finished waiting on handle. In Bucket: ["
                    << canceledHandle->GetBucketName() << "] with Key: [" << canceledHandle->GetKey()
                    << "] with Upload ID: [" << canceledHandle->GetMultiPartId() << "].");
            if (canceledHandle->GetStatus() == TransferStatus::CANCELED)
            {
                Aws::S3::Model::AbortMultipartUploadRequest abortMultipartUploadRequest;
                abortMultipartUploadRequest.SetCustomizedAccessLogTag(m_transferConfig.customizedAccessLogTag);
                abortMultipartUploadRequest.WithBucket(canceledHandle->GetBucketName())
                    .WithKey(canceledHandle->GetKey())
                    .WithUploadId(canceledHandle->GetMultiPartId());

                auto abortOutcome = m_transferConfig.s3Client->AbortMultipartUpload(abortMultipartUploadRequest);
                if (abortOutcome.IsSuccess())
                {
                    AWS_LOGSTREAM_INFO(CLASS_TAG, "Transfer handle [" << canceledHandle->GetId() <<
                            "] Successfully aborted multi-part upload. In Bucket: ["
                            << canceledHandle->GetBucketName() << "] with Key: [" << canceledHandle->GetKey()
                            << "] with Upload ID: [" << canceledHandle->GetMultiPartId() << "].");
                    canceledHandle->UpdateStatus(TransferStatus::ABORTED);
                    TriggerTransferStatusUpdatedCallback(canceledHandle);
                }
                else
                {
                    AWS_LOGSTREAM_ERROR(CLASS_TAG, "Transfer handle [" << canceledHandle->GetId()
                            << "] Failed to complete multi-part upload. In Bucket: ["
                            << canceledHandle->GetBucketName() << "] with Key: [" << canceledHandle->GetKey()
                            << "] with Upload ID: [" << canceledHandle->GetMultiPartId() << "]. "
                            << abortOutcome.GetError());

                    canceledHandle->SetError(abortOutcome.GetError());
                    TriggerErrorCallback(canceledHandle, abortOutcome.GetError());
                }
            }
            else
            {
                AWS_LOGSTREAM_TRACE(CLASS_TAG, "Transfer handle [" << canceledHandle->GetId()
                        << "] Status changed to " << canceledHandle->GetStatus()
                        << " after waiting for cancel status. In Bucket: ["
                        << canceledHandle->GetBucketName() << "] with Key: [" << canceledHandle->GetKey()
                        << "] with Upload ID: [" << canceledHandle->GetMultiPartId() << "].");
            }
        }

        void TransferManager::HandleListObjectsResponse(const Aws::S3::S3Client*, const Aws::S3::Model::ListObjectsV2Request& request, const Aws::S3::Model::ListObjectsV2Outcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            auto self = shared_from_this(); // keep transfer manager alive until all callbacks are finished.
            auto handler = [self](const Aws::S3::S3Client* client, const Aws::S3::Model::ListObjectsV2Request& request, const Aws::S3::Model::ListObjectsV2Outcome& outcome,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) { self->HandleListObjectsResponse(client, request, outcome, context); };

            auto downloadContext = std::static_pointer_cast<const DownloadDirectoryContext>(context);
            const auto& directory = downloadContext->rootDirectory;
            const auto& prefix = downloadContext->prefix;

            if (outcome.IsSuccess())
            {
                Aws::S3::Model::ListObjectsV2Request requestCpy = request;

                auto& result = outcome.GetResult();

                AWS_LOGSTREAM_TRACE(CLASS_TAG, "Listing objects succeeded for bucket: " << directory <<
                        " with prefix: " << prefix << ". Number of keys received: " << result.GetContents().size());

                //if it was truncated, we don't care on this pass anyways. Just go ahead and kick off another list objects and will handle it when it finishes.
                if (result.GetIsTruncated())
                {
                    AWS_LOGSTREAM_TRACE(CLASS_TAG, "Listing objects response has a continuation token for bucket: "
                            << directory << " with prefix: " << prefix << ". Getting the next set of results.");
                    requestCpy.SetContinuationToken(result.GetNextContinuationToken());
                    m_transferConfig.s3Client->ListObjectsV2Async(requestCpy, handler, context);
                }

                //this can contain matching directories or actual objects to download. If it's a directory, go ahead and create a local directory then
                // take the new prefix and call list again. if it's an object key, go ahead and initiate download.
                for (auto& content : result.GetContents())
                {
                    if (!IsS3KeyPrefix(content.GetKey()))
                    {
                        Aws::String fileName = DetermineFilePath(downloadContext->rootDirectory, downloadContext->prefix, content.GetKey());
                        auto lastDelimter = fileName.find_last_of(Aws::FileSystem::PATH_DELIM);
                        if (lastDelimter != std::string::npos)
                        {
                            Aws::FileSystem::CreateDirectoryIfNotExists(fileName.substr(0, lastDelimter).c_str(), true/*create parent dirs*/);
                        }
                        AWS_LOGSTREAM_INFO(CLASS_TAG, "Initiating download of key: [" << content.GetKey() <<
                                "] in bucket: [" << directory << "] to destination file: [" << fileName << "]");
                        m_transferConfig.transferInitiatedCallback(this, DownloadFile(request.GetBucket(), content.GetKey(), fileName));
                    }
                }
            }
            else
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Listing objects failed for bucket: " << directory << " with prefix: "
                        << prefix << ". Error message: " << outcome.GetError());
                //notify user if list objects failed.
                if (m_transferConfig.errorCallback)
                {
                    auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, request.GetBucket(), "");
                    m_transferConfig.errorCallback(this, handle, outcome.GetError());
                }
            }
        }

        Aws::String TransferManager::DetermineFilePath(const Aws::String& directory, const Aws::String& prefix, const Aws::String& keyName)
        {
            Aws::String shortenedFileName = keyName;
            auto loc = shortenedFileName.find(prefix);

            if (loc != std::string::npos)
            {
                shortenedFileName = shortenedFileName.substr(loc + prefix.length());
            }

            char delimiter[] = { Aws::FileSystem::PATH_DELIM, 0 };
            Aws::Utils::StringUtils::Replace(shortenedFileName, "/", delimiter);
            Aws::StringStream ss;
            ss << directory << shortenedFileName;

            return ss.str();
        }

        TransferStatus TransferManager::DetermineIfFailedOrCanceled(const TransferHandle& handle) const
        {
            return handle.ShouldContinue() ? TransferStatus::FAILED : TransferStatus::CANCELED;
        }

        void TransferManager::TriggerUploadProgressCallback(const std::shared_ptr<const TransferHandle>& handle) const
        {
            if (m_transferConfig.uploadProgressCallback)
            {
                m_transferConfig.uploadProgressCallback(this, handle);
            }
        }

        void TransferManager::TriggerDownloadProgressCallback(const std::shared_ptr<const TransferHandle>& handle) const
        {
            if (m_transferConfig.downloadProgressCallback)
            {
                m_transferConfig.downloadProgressCallback(this, handle);
            }
        }

        void TransferManager::TriggerTransferStatusUpdatedCallback(const std::shared_ptr<const TransferHandle>& handle) const
        {
            if (m_transferConfig.transferStatusUpdatedCallback)
            {
                m_transferConfig.transferStatusUpdatedCallback(this, handle);
            }
        }

        void TransferManager::TriggerErrorCallback(const std::shared_ptr<const TransferHandle>& handle, const Aws::Client::AWSError<Aws::S3::S3Errors>& error) const
        {
            if (m_transferConfig.errorCallback)
            {
                m_transferConfig.errorCallback(this, handle, error);
            }
        }

        bool TransferManager::MultipartUploadSupported(uint64_t length) const
        {
            return length > m_transferConfig.bufferSize && 
                   m_transferConfig.s3Client            && 
                   m_transferConfig.s3Client->MultipartUploadSupported();
        }

        std::shared_ptr<TransferHandle> TransferManager::CreateUploadFileHandle(Aws::IOStream* fileStream,
                                                                                const Aws::String& bucketName,
                                                                                const Aws::String& keyName,
                                                                                const Aws::String& contentType, 
                                                                                const Aws::Map<Aws::String, Aws::String>& metadata,
                                                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context,
                                                                                const Aws::String& fileName)
        {
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, 0, fileName);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);
            handle->SetContext(context);

            if (!fileStream->good())
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Failed to read from input stream to upload file to bucket: " <<
                        bucketName << " with key: " << keyName);
                handle->SetError(Aws::Client::AWSError<Aws::Client::CoreErrors>(static_cast<Aws::Client::CoreErrors>(Aws::S3::S3Errors::NO_SUCH_UPLOAD), "NoSuchUpload", "The requested file could not be opened.", false));
                handle->UpdateStatus(Aws::Transfer::TransferStatus::FAILED);
                TriggerTransferStatusUpdatedCallback(handle);
                return handle;
            }

            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Seeking input stream to determine content-length to upload file to bucket: "
                    << bucketName << " with key: " << keyName);
            fileStream->seekg(0, std::ios_base::end);
            size_t length = static_cast<size_t>(fileStream->tellg());
            fileStream->seekg(0, std::ios_base::beg);
            AWS_LOGSTREAM_TRACE(CLASS_TAG, "Setting content-length to " << length << " bytes. To upload file to bucket: "
                    << bucketName << " with key: " << keyName);

            handle->SetBytesTotalSize(length);
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::SubmitUpload(const std::shared_ptr<TransferHandle>& handle,
                const std::shared_ptr<Aws::IOStream>& fileStream)
        {
            if (handle->GetStatus() != Aws::Transfer::TransferStatus::NOT_STARTED)
            {
                return handle;
            }

            auto self = shared_from_this();
            if (MultipartUploadSupported(handle->GetBytesTotalSize()))
            {
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle [" << handle->GetId() << "] Scheduling a multi-part upload.");
                m_transferConfig.transferExecutor->Submit([self, handle, fileStream]
                    {
                        if (fileStream != nullptr)
                            self->DoMultiPartUpload(fileStream, handle);
                        else
                            self->DoMultiPartUpload(handle);
                    });
            }
            else
            {
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Transfer handle [" << handle->GetId() << "] Scheduling a single-part upload.");
                m_transferConfig.transferExecutor->Submit([self, handle, fileStream]
                    {
                        if (fileStream != nullptr)
                        {
                            self->DoSinglePartUpload(fileStream, handle);
                        }
                        else
                        {
                            self->DoSinglePartUpload(handle);
                        }
                    });
            }
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::DoUploadFile(const std::shared_ptr<Aws::IOStream>& fileStream,
                                                                      const Aws::String& bucketName,
                                                                      const Aws::String& keyName,
                                                                      const Aws::String& contentType,
                                                                      const Aws::Map<Aws::String, Aws::String>& metadata,
                                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            auto handle = CreateUploadFileHandle(fileStream.get(), bucketName, keyName, contentType, metadata, context);
            return SubmitUpload(handle, fileStream);
        }

        std::shared_ptr<TransferHandle> TransferManager::DoUploadFile(const Aws::String& fileName,
                                                                      const Aws::String& bucketName,
                                                                      const Aws::String& keyName, 
                                                                      const Aws::String& contentType,
                                                                      const Aws::Map<Aws::String, Aws::String>& metadata,
                                                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
        {
            // destructor of FStream will close stream automatically (when out of scope), no need to call close explicitly
#ifdef _MSC_VER
            auto wide = Aws::Utils::StringUtils::ToWString(fileName.c_str());
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, wide.c_str(), std::ios_base::in | std::ios_base::binary);
#else
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, fileName.c_str(), std::ios_base::in | std::ios_base::binary);
#endif
            auto handle = CreateUploadFileHandle(fileStream.get(), bucketName, keyName, contentType, metadata, context, fileName);
            return SubmitUpload(handle);
        }
    }
}
