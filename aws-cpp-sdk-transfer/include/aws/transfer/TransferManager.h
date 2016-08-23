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

#pragma once

#include <aws/transfer/TransferHandle.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/ResourceManager.h>
#include <aws/core/client/AsyncCallerContext.h>

namespace Aws
{    
    namespace Transfer
    {
        class TransferManager;

        typedef std::function<void(const TransferManager*, const TransferHandle&)> UploadProgressCallback;
        typedef std::function<void(const TransferManager*, const TransferHandle&)> DownloadProgressCallback;
        typedef std::function<void(const TransferManager*, const TransferHandle&)> TransferStatusUpdatedCallback;
        typedef std::function<void(const TransferManager*, const TransferHandle&, const Aws::Client::AWSError<Aws::S3::S3Errors>&)> ErrorCallback;

        const uint64_t MB5_BUFFER_SIZE = 5 * 1024 * 1024;

        struct TransferManagerConfiguration
        {
            TransferManagerConfiguration() : s3Client(nullptr), transferExecutor(nullptr), transferBufferMaxHeapSize(10 * MB5_BUFFER_SIZE), bufferSize(MB5_BUFFER_SIZE), maxParallelTransfers(3)
            {
                //let the programmer know if they've created two useless values here.
                //you need at least bufferSize * maxParallelTransfers for the  max heap size.
                assert(transferBufferMaxHeapSize > bufferSize * maxParallelTransfers);
            }

            /**
             * S3 Client to use for transfers. You are responsible for setting this.
             */
            std::shared_ptr<Aws::S3::S3Client> s3Client;
            /**
             * Executor to use for the transfer manager threads. This probably shouldn't be the same executor
             * you are using for your client configuration. This executor will be used in a different context than the s3 client is used.
             * It is not a bug to use the same executor, but at least be aware that this is how the manager will be used.
             *
             * If this is not set then it will be defaulted to ThreadPooledExecutor(maxParallelTransfers) inside when it is copied the TransferManager.
             */
            std::shared_ptr<Aws::Utils::Threading::Executor> transferExecutor;
            /**
             * If you have special arguments you want passed to our put object calls, put them here. We will copy the template for each put object call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */
            Aws::S3::Model::PutObjectRequest putObjectTemplate;
            /**
             * If you have special arguments you want passed to our create multipart upload calls, put them here. We will copy the template for each call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */
            Aws::S3::Model::CreateMultipartUploadRequest createMultipartUploadTemplate;
            /**
             *
             * If you have special arguments you want passed to our upload part calls, put them here. We will copy the template for each call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */             
            Aws::S3::Model::UploadPartRequest uploadPartTemplate;
            /**
             * Maximum size of the working buffers to use. This is not the same thing as max heap size for your process. This is the maximum amount of memory we will
             *  allocate for all transfer buffers. default is 50MB
             */
            uint64_t transferBufferMaxHeapSize;
            /**
             * Defaults to 5MB. If you are uploading large files,  (larger than 50GB, this needs to be specified to be something larger than 5MB. Also keep in mind that you may need
             * to increase your max heap size if this is something you plan on increasing.
             */
            uint64_t bufferSize;
            /**
             * Maximum number of file transfers to run in parallel. The default is 3. This is only enforced if the executor is a thread pool.
             */
            size_t maxParallelTransfers;

            UploadProgressCallback uploadProgressCallback;
            DownloadProgressCallback downloadProgressCallback;
            TransferStatusUpdatedCallback transferStatusUpdatedCallback;
            ErrorCallback errorCallback;
        };        

        class  AWS_TRANSFER_API TransferManager
        {
        public:
            TransferManager(const TransferManagerConfiguration& config);

            std::shared_ptr<TransferHandle> UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, 
                                                            const Aws::Map<Aws::String, Aws::String>& metadata);
            std::shared_ptr<TransferHandle> UploadFile(const std::shared_ptr<Aws::IOStream>& stream, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
                                                            const Aws::Map<Aws::String, Aws::String>& metadata);

            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& writeToFile);
            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName, const Aws::String& keyName, Aws::IOStream* writeToStream);
        
        private:
            void DoMultipartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle);
            void DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle);
            void DoDownload(Aws::IOStream* streamToWriteTo, const std::shared_ptr<TransferHandle>& handle);

            void HandleUploadPartResponse(const Aws::S3::S3Client*, const Aws::S3::Model::UploadPartRequest&, const Aws::S3::Model::UploadPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);
            void HandlePutObjectResponse(const Aws::S3::S3Client*, const Aws::S3::Model::PutObjectRequest&, const Aws::S3::Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);

            void TriggerUploadProgressCallback(const TransferHandle&);
            void TriggerDownloadProgressCallback(const TransferHandle&);
            void TriggerTransferStatusUpdatedCallback(const TransferHandle&);
            void TriggerErrorCallback(const TransferHandle&, const Aws::Client::AWSError<Aws::S3::S3Errors>& error);

            Aws::Utils::ResourceManager<Aws::Utils::Array<uint8_t>*> m_bufferManager;
            TransferManagerConfiguration m_transferConfig;
        };
    }
}
