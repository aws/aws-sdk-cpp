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
        typedef std::function<void(const TransferManager*, const std::shared_ptr<TransferHandle>&)> TransferInitiatedCallback;

        const uint64_t MB5 = 5 * 1024 * 1024;

        /**
         * Configuration for use with TransferManager. The data here will be copied directly to TransferManager.
         */
        struct TransferManagerConfiguration
        {
            TransferManagerConfiguration() : s3Client(nullptr), transferExecutor(nullptr), transferBufferMaxHeapSize(10 * MB5), bufferSize(MB5), maxParallelTransfers(1)
            {
                //let the programmer know if they've created two useless values here.
                //you need at least bufferSize * maxParallelTransfers for the  max heap size.
                assert(transferBufferMaxHeapSize > bufferSize * maxParallelTransfers);
                assert(bufferSize >= MB5);
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
             * Maximum number of file transfers to run in parallel. The default is 1. This is only enforced if the executor is a thread pool.
             */
            size_t maxParallelTransfers;

            /**
             * Callback to receive progress updates for uploads.
             */
            UploadProgressCallback uploadProgressCallback;
            /**
             * Callback to receive progress updates for downloads.
             */
            DownloadProgressCallback downloadProgressCallback;
            /**
             * Callback to receive updates on the status of the transfer.
             */
            TransferStatusUpdatedCallback transferStatusUpdatedCallback;
            /**
             * Callback to receive initiated transfers for the directory operations.
             */
            TransferInitiatedCallback transferInitiatedCallback;
            /**
             * Callback to receive all errors that are thrown over the course of a transfer.
             */
            ErrorCallback errorCallback;
        };        

        /**
         * This is a utility around Amazon Simple Storage Service. It can Upload large files via parts in parallel, Upload files less than 5MB in single PutObject, and download files via GetObject,
         *  If a transfer fails, it can be retried for an upload. For a download, there is nothing to retry in case of failure. Just download it again. You can also abort any in progress transfers.
         *  The key interface for controlling and knowing the status of your upload is the TransferHandle. An instance of TransferHandle is returned from each of the public functions in this interface.
         *  Keep a reference to the pointer. Each of the callbacks will also pass the handle that has received an update. None of the public methods in this interface block.
         */
        class  AWS_TRANSFER_API TransferManager
        {
        public:
            /**
             * Initializes TransferManager with config.
             */
            TransferManager(const TransferManagerConfiguration& config);

            ~TransferManager();

            /**
             * Uploads a file via filename, to bucketName/keyName in S3. contentType and metadata will be added to the object. If the object is larger than the configured bufferSize,
             * then a multi-part upload will be performed.
             */
            std::shared_ptr<TransferHandle> UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, 
                                                            const Aws::Map<Aws::String, Aws::String>& metadata);

            /**
             * Uploads the contents of stream, to bucketName/keyName in S3. contentType and metadata will be added to the object. If the object is larger than the configured bufferSize,
             * then a multi-part upload will be performed.
             */
            std::shared_ptr<TransferHandle> UploadFile(const std::shared_ptr<Aws::IOStream>& stream, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType,
                                                            const Aws::Map<Aws::String, Aws::String>& metadata);

            /**
             * Downloads the contents of bucketName/keyName in S3 to the file specified by writeToFile. This will perform a GetObject operation.
             */
            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName, 
                                                         const Aws::String& keyName, 
                                                         const Aws::String& writeToFile, 
                                                         const DownloadConfiguration& downloadConfig = DownloadConfiguration());
            /**
             * Downloads the contents of bucketName/keyName in S3 and writes it to writeToStream. This will perform a GetObject operation.
             */
            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName, 
                                                         const Aws::String& keyName, 
                                                         CreateDownloadStreamCallback writeToStreamfn, 
                                                         const DownloadConfiguration& downloadConfig = DownloadConfiguration());

            /**
             * Retry an download that failed from a previous DownloadFile operation. If a multi-part download was used, only the failed parts will be re-fetched.
             */
            std::shared_ptr<TransferHandle> RetryDownload(const std::shared_ptr<TransferHandle>& retryHandle);

            /**
             * Retry an upload that failed from a previous UploadFile operation. If a multi-part upload was used, only the failed parts will be re-sent.
             */
            std::shared_ptr<TransferHandle> RetryUpload(const Aws::String& fileName, const std::shared_ptr<TransferHandle>& retryHandle);
            /**
            * Retry an upload that failed from a previous UploadFile operation. If a multi-part upload was used, only the failed parts will be re-sent.
            */
            std::shared_ptr<TransferHandle> RetryUpload(const std::shared_ptr<Aws::IOStream>& stream, const std::shared_ptr<TransferHandle>& retryHandle);
            
            /**
             * By default, multi-part uploads will remain in a FAILED state if they fail, or a CANCELED state if they were canceled. Leaving failed uploads around
             * still costs the owner of the bucket money. If you know you will not be retrying the request, abort the request after canceling it or if it fails and you don't
             * intend to retry it.
             */
            void AbortMultipartUpload(const std::shared_ptr<TransferHandle>& inProgressHandle);

            /**
             * Uploads entire contents of directory to Amazon S3 bucket and stores them in a directory starting at prefix. This is an asynchronous method. You will receive notifications
             * that an upload has started via the transferInitiatedCallback callback function in your configuration. If you do not set this callback, then you will not be able to handle
             * the file transfers.
             *
             * directory: the absolute directory on disk to upload
             * bucketName: the name of the S3 bucket to upload to
             * prefix: the prefix to put on all objects uploaded (e.g. put them in x directory in the bucket).
             */
            void UploadDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix, const Aws::Map<Aws::String, Aws::String>& metadata);

            /**
            * Downloads entire contents of an Amazon S3 bucket starting at prefix stores them in a directory (not including the prefix). This is an asynchronous method. You will receive notifications
            * that a download has started via the transferInitiatedCallback callback function in your configuration. If you do not set this callback, then you will not be able to handle
            * the file transfers. If an error occurs prior to the transfer being initiated (e.g. list objects fails, then an error will be passed through the errorCallback).
            *
            * directory: the absolute directory on disk to download to
            * bucketName: the name of the S3 bucket to upload to
            * prefix: the prefix in the bucket to use as the root directory (e.g. download all objects at x prefix in S3 and then store them starting in directory with the prefix stripped out).
            */
            void DownloadToDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix = Aws::String());

        private:
            bool InitializePartsForDownload(const std::shared_ptr<TransferHandle>& handle);

            void DoMultipartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle);
            void DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle);

            void DoDownload(const std::shared_ptr<TransferHandle>& handle);
            void DoSinglePartDownload(const std::shared_ptr<TransferHandle>& handle);

            void HandleGetObjectResponse(const Aws::S3::S3Client* client, 
                                         const Aws::S3::Model::GetObjectRequest& request,
                                         const Aws::S3::Model::GetObjectOutcome& outcome, 
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

            void WaitForCancellationAndAbortUpload(const std::shared_ptr<TransferHandle>& canceledHandle);

            void HandleUploadPartResponse(const Aws::S3::S3Client*, const Aws::S3::Model::UploadPartRequest&, const Aws::S3::Model::UploadPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);
            void HandlePutObjectResponse(const Aws::S3::S3Client*, const Aws::S3::Model::PutObjectRequest&, const Aws::S3::Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);
            void HandleListObjectsResponse(const Aws::S3::S3Client*, const Aws::S3::Model::ListObjectsV2Request&, const Aws::S3::Model::ListObjectsV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);

            TransferStatus DetermineIfFailedOrCanceled(const TransferHandle&) const;
            void TriggerUploadProgressCallback(const TransferHandle&) const;
            void TriggerDownloadProgressCallback(const TransferHandle&) const;
            void TriggerTransferStatusUpdatedCallback(const TransferHandle&) const;
            void TriggerErrorCallback(const TransferHandle&, const Aws::Client::AWSError<Aws::S3::S3Errors>& error)const;

            static Aws::String DetermineFilePath(const Aws::String& directory, const Aws::String& prefix, const Aws::String& keyName);

            Aws::Utils::ExclusiveOwnershipResourceManager<Aws::Utils::Array<uint8_t>*> m_bufferManager;
            TransferManagerConfiguration m_transferConfig;
        };
    }
}
