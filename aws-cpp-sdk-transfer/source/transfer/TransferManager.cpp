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
#include <aws/s3/S3Client.h>
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

            for (unsigned i = 0; i < m_transferConfig.transferBufferMaxHeapSize; i += MB5_BUFFER_SIZE)
            {                
                m_bufferManager.PutResource(Aws::New<Aws::Utils::Array<uint8_t>>(CLASS_TAG, MB5_BUFFER_SIZE));
            }
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
            const Aws::Map<Aws::String, Aws::String>& metadata)
        {
            auto fileStream = Aws::MakeShared<Aws::FStream>(CLASS_TAG, fileName.c_str(), std::ios_base::in | std::ios_base::binary);
            fileStream->seekg(0, std::ios_base::end);
            size_t length = fileStream->tellg();
            fileStream->seekg(0, std::ios_base::beg);
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, length, TransferDirection::UPLOAD, fileName);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);

            m_transferConfig.transferExecutor->Submit([&] { DoMultipartUpload(fileStream, handle); });
            return handle;
        }

        std::shared_ptr<TransferHandle> TransferManager::UploadFile(const std::shared_ptr<Aws::IOStream>& fileStream, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
            const Aws::Map<Aws::String, Aws::String>& metadata)
        {            
            fileStream->seekg(0, std::ios_base::end);
            size_t length = fileStream->tellg();
            fileStream->seekg(0, std::ios_base::beg);
            auto handle = Aws::MakeShared<TransferHandle>(CLASS_TAG, bucketName, keyName, length, TransferDirection::UPLOAD);
            handle->SetContentType(contentType);
            handle->SetMetadata(metadata);

            m_transferConfig.transferExecutor->Submit([&] { DoMultipartUpload(fileStream, handle); });
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
                handle->SetMultiPartId(uploadId);
                int partNumber = 1;
                size_t sentBytes = 0;
                while (sentBytes < handle->GetBytesTotalSize() && handle->Continue())
                {
                    auto buffer = m_bufferManager.Acquire();
                    
                    auto lengthToWrite = std::min(buffer->GetLength(), handle->GetBytesTotalSize() - sentBytes);
                    streamToPut->read((char*)buffer->GetUnderlyingData(), lengthToWrite);

                    auto streamBuf = Aws::New<Aws::Utils::Stream::PreallocatedStreamBuf>(CLASS_TAG, buffer, lengthToWrite);
                    auto preallocatedStreamReader = Aws::MakeShared<Aws::IOStream>(CLASS_TAG, streamBuf);

                    Aws::S3::Model::UploadPartRequest uploadPartRequest = m_transferConfig.uploadPartTemplate;
                    uploadPartRequest.WithBucket(handle->GetBucketName())
                            .WithContentLength(lengthToWrite)
                            .WithKey(handle->GetKey())
                            .WithPartNumber(partNumber++)
                            .WithUploadId(uploadId);

                    auto asyncContext = Aws::MakeShared<TransferHandleAsyncContext>(CLASS_TAG);
                    asyncContext->handle = handle;

                    handle->AddPendingPart(partNumber);

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
                handle->UpdateStatus(TransferStatus::FAILED);
            }
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
                //transferContext->handle->AddTransferredBytes(request.GetContentLength());
                transferContext->handle->ChangePartToCompleted(request.GetPartNumber());                
            }
            else
            {
                transferContext->handle->ChangePartToFailed(request.GetPartNumber());
                transferContext->handle->SetError(outcome.GetError());
                if (m_transferConfig.errorCallback)
                {
                    m_transferConfig.errorCallback(this, *transferContext->handle, outcome.GetError());
                }
            }
            
            if (m_transferConfig.uploadProgressCallback)
            {
                m_transferConfig.uploadProgressCallback(this, *transferContext->handle);
            }
        }
    }
}