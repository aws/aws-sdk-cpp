
/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#ifndef TRANSFER_CLIENT_H
#define TRANSFER_CLIENT_H

#include <aws/transfer/Transfer_EXPORTS.h>
#include <aws/transfer/TransferClientDefs.h>

#include <aws/s3/S3Client.h>

namespace Aws
{
namespace S3
{

    namespace Model
    {

    } // namespace Model
} // namespace S3


namespace Transfer
{

class UploadFileRequest;
class DownloadFileRequest;

const uint64_t MB5_BUFFER_SIZE = 5 * 1024 * 1024;

struct AWS_TRANSFER_API TransferClientConfiguration
{
    public:

        TransferClientConfiguration();
        ~TransferClientConfiguration();

        uint32_t m_uploadBufferCount;
        std::shared_ptr< UploadBufferResourceManagerType > m_uploadBufferManager;
};

class AWS_TRANSFER_API TransferClient
{
    public:
        TransferClient(const std::shared_ptr<Aws::S3::S3Client>& s3Client, const TransferClientConfiguration& config);
        ~TransferClient();

        // Entry point for attempting an upload - attempting to create an existing bucket won't hurt anything but will affect performance
        // unnecessarily as the request waits for S3 to propagate the bucket
        // All queries about the upload after this point can be found in UploadFileRequest's interface
        std::shared_ptr<UploadFileRequest> UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, bool createBucket = false, bool doConsistencyChecks = false);
        // Entry point similar to above but with metadata specified
        std::shared_ptr<UploadFileRequest> UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, const Aws::Map<Aws::String, Aws::String>& metadata, bool createBucket = false, bool doConsistencyChecks = false);
        std::shared_ptr<UploadFileRequest> UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, Aws::Map<Aws::String, Aws::String>&& metadata, bool createBucket = false, bool doConsistencyChecks = false);

        // User requested upload cancels should go through here
        void CancelUpload(std::shared_ptr<UploadFileRequest>& fileRequest) const;

        // Single entry point for attempting a download
        std::shared_ptr<DownloadFileRequest> DownloadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName);

        // User requested download cancels should go through here
        void CancelDownload(std::shared_ptr<DownloadFileRequest>& fileRequest) const;

        const std::shared_ptr<Aws::S3::S3Client>& GetS3Client() { return m_s3Client; }

        uint32_t GetConfigBufferCount() const { return m_config.m_uploadBufferCount; }

        friend class UploadFileRequest;
        friend class DownloadFileRequest;
    private:

        void UploadFileInternal(std::shared_ptr<UploadFileRequest>& fileRequest);

        void ProcessSingleBuffer(std::shared_ptr<UploadFileRequest>& request, const std::shared_ptr<UploadBuffer>& buffer);

        void CancelUploadInternal(std::shared_ptr<UploadFileRequest>& fileRequest) const;

        void BeginDownloadFile(std::shared_ptr<DownloadFileRequest>& fileRequest) const;
        void DownloadFileInternal(std::shared_ptr<DownloadFileRequest>& fileRequest) const;

        void GetContentsInternal(std::shared_ptr<DownloadFileRequest>& request) const;

        void CancelDownloadInternal(std::shared_ptr<DownloadFileRequest>& fileRequest) const;

        static void OnCreateBucket(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::CreateBucketRequest& request,
            const Aws::S3::Model::CreateBucketOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnCreateMultipartUpload(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::CreateMultipartUploadRequest& request,
            const Aws::S3::Model::CreateMultipartUploadOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnHeadBucket(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::HeadBucketRequest& request,
            const Aws::S3::Model::HeadBucketOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnUploadPartRequest(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::UploadPartRequest& request,
            const Aws::S3::Model::UploadPartOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnCompleteMultipartUpload(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::CompleteMultipartUploadRequest& request,
            const Aws::S3::Model::CompleteMultipartUploadOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnPutObject(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::PutObjectRequest& request,
            const Aws::S3::Model::PutObjectOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnDownloadGetObject(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::GetObjectRequest& request,
            const Aws::S3::Model::GetObjectOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnDownloadListObjects(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::ListObjectsRequest& request,
            const Aws::S3::Model::ListObjectsOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnUploadGetObject(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::GetObjectRequest& request,
            const Aws::S3::Model::GetObjectOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnHeadObject(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::HeadObjectRequest& request,
            const Aws::S3::Model::HeadObjectOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnUploadListObjects(const Aws::S3::S3Client* s3Client,
            const Aws::S3::Model::ListObjectsRequest& request,
            const Aws::S3::Model::ListObjectsOutcome& outcome,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

        static void OnAbortMultipart(const Aws::S3::S3Client* ,
            const Aws::S3::Model::AbortMultipartUploadRequest& ,
            const Aws::S3::Model::AbortMultipartUploadOutcome& ,
            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& ) {}

        std::shared_ptr< UploadBufferScopedResourceSetType > AcquireUploadBuffers(uint32_t bufferCount);

        std::shared_ptr<Aws::S3::S3Client> m_s3Client;
        TransferClientConfiguration m_config;

        std::shared_ptr<UploadBufferResourceManagerType> m_uploadBufferManager;
    
};

} // namespace Transfer
} // namespace Aws

#endif
