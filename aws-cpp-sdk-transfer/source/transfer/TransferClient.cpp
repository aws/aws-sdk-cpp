
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

#include <aws/transfer/TransferClient.h>

#include <aws/transfer/UploadFileRequest.h>
#include <aws/transfer/DownloadFileRequest.h>
#include <aws/transfer/TransferContext.h>

#include <aws/transfer/resource/FairBoundedResourceManager.h>
#include <aws/transfer/resource/ScopedResourceSet.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::S3::Model;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{

static const char* ALLOCATION_TAG = "TransferAPI";

static UploadBufferResourceType ResourceFactoryFunction(void)
{
    return Aws::MakeShared< UploadBuffer >(ALLOCATION_TAG, UPLOAD_BUFFER_SIZE);
}

TransferClientConfiguration::TransferClientConfiguration() :
    m_uploadBufferCount(1),
    m_uploadBufferManager(nullptr)
{
}

TransferClientConfiguration::~TransferClientConfiguration()
{
}

TransferClient::TransferClient(const std::shared_ptr<Aws::S3::S3Client>& s3Client, const TransferClientConfiguration& config) :
    m_s3Client(s3Client),
    m_config(config),
    m_uploadBufferManager(config.m_uploadBufferManager)
{
    if(m_uploadBufferManager == nullptr)
    {
        m_uploadBufferManager = Aws::MakeShared< FairBoundedResourceManager< UploadBufferResourceType > >(ALLOCATION_TAG, ResourceFactoryFunction, config.m_uploadBufferCount, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);
    }

}

TransferClient::~TransferClient()
{
}

std::shared_ptr<UploadFileRequest> TransferClient::UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, bool createBucket, bool doConsistencyChecks)
{
    auto request = Aws::MakeShared<UploadFileRequest>(ALLOCATION_TAG, fileName, bucketName, keyName, contentType, m_s3Client, createBucket, doConsistencyChecks);

    UploadFileInternal(request);

    return request;
}

std::shared_ptr<UploadFileRequest> TransferClient::UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, const Aws::Map<Aws::String, Aws::String>& metadata, bool createBucket, bool doConsistencyChecks)
{
    auto request = Aws::MakeShared<UploadFileRequest>(ALLOCATION_TAG, fileName, bucketName, keyName, contentType, metadata, m_s3Client, createBucket, doConsistencyChecks);

    UploadFileInternal(request);

    return request;
}

std::shared_ptr<UploadFileRequest> TransferClient::UploadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const Aws::String& contentType, Aws::Map<Aws::String, Aws::String>&& metadata, bool createBucket, bool doConsistencyChecks)
{
    auto request = Aws::MakeShared<UploadFileRequest>(ALLOCATION_TAG, fileName, bucketName, keyName, contentType, std::move(metadata), m_s3Client, createBucket, doConsistencyChecks);

    UploadFileInternal(request);

    return request;
}

void TransferClient::UploadFileInternal(std::shared_ptr<UploadFileRequest>& request) 
{

    uint32_t neededBuffers = request->GetTotalParts();

    uint32_t requestedBuffers = std::min(neededBuffers, m_config.m_uploadBufferCount); // How many will we attempt to acquire from our pool, this will be more configurable soon

    std::shared_ptr< UploadBufferScopedResourceSetType > bufferSet = AcquireUploadBuffers(requestedBuffers);

    if (!bufferSet->GetResources().size())
    {
        request->CompletionFailure("No buffers available.");
        // As it stands the AcquireUploadBuffers call should block until at least one buffer is available
        return;
    }

    request->SetResourceSet(bufferSet);

    std::for_each(bufferSet->GetResources().begin(), bufferSet->GetResources().end(), [&](const std::shared_ptr<UploadBuffer>& buffer) { request->AddReadyBuffer(buffer); });

    request->ContinueUpload();
}

void TransferClient::CancelUpload(std::shared_ptr<UploadFileRequest>& request) const
{
    CancelUploadInternal(request);
}

void TransferClient::CancelUploadInternal(std::shared_ptr<UploadFileRequest>& request) const
{
    request->Cancel();
}

void TransferClient::ProcessSingleBuffer(std::shared_ptr<UploadFileRequest>& request, const std::shared_ptr<UploadBuffer>& buffer)
{
    request->ProcessBuffer(buffer);
}

std::shared_ptr<DownloadFileRequest> TransferClient::DownloadFile(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName)
{
    auto request = Aws::MakeShared<DownloadFileRequest>(ALLOCATION_TAG, fileName, bucketName, keyName, m_s3Client);

    BeginDownloadFile(request);

    return request;
}

void TransferClient::BeginDownloadFile(std::shared_ptr<DownloadFileRequest>& request) const
{
    GetContentsInternal(request);
    DownloadFileInternal(request);
}

void TransferClient::DownloadFileInternal(std::shared_ptr<DownloadFileRequest>& request) const
{
    request->DoSingleObjectDownload();
}

void TransferClient::GetContentsInternal(std::shared_ptr<DownloadFileRequest>& request) const
{
    request->GetContents();
}

void TransferClient::OnCreateBucket(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::CreateBucketRequest& request,
    const Aws::S3::Model::CreateBucketOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);
 
    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleCreateBucketOutcome(request, outcome);
}

void TransferClient::OnCreateMultipartUpload(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::CreateMultipartUploadRequest& request,
    const Aws::S3::Model::CreateMultipartUploadOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleCreateMultipartUploadOutcome(request, outcome);
}

void TransferClient::OnHeadBucket(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::HeadBucketRequest& request,
    const Aws::S3::Model::HeadBucketOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleHeadBucketOutcome(request, outcome);
}

void TransferClient::OnUploadPartRequest(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::UploadPartRequest& request,
    const Aws::S3::Model::UploadPartOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleUploadPartOutcome(request, outcome);

}

void TransferClient::OnCompleteMultipartUpload(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::CompleteMultipartUploadRequest& request,
    const Aws::S3::Model::CompleteMultipartUploadOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleCompleteMultipartUploadOutcome(request, outcome);
}

void TransferClient::OnPutObject(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::PutObjectRequest& request,
    const Aws::S3::Model::PutObjectOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandlePutObjectOutcome(request, outcome);
}

void TransferClient::OnDownloadGetObject(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::GetObjectRequest& request,
    const Aws::S3::Model::GetObjectOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto downloadContext = std::static_pointer_cast<const DownloadFileContext>(context);

    std::shared_ptr<DownloadFileRequest> downloadRequest = downloadContext->GetDownloadRequest();

    downloadRequest->HandleGetObjectOutcome(request, outcome);
}


void TransferClient::OnDownloadListObjects(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::ListObjectsRequest& request,
    const Aws::S3::Model::ListObjectsOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto downloadContext = std::static_pointer_cast<const DownloadFileContext>(context);

    std::shared_ptr<DownloadFileRequest> downloadRequest = downloadContext->GetDownloadRequest();

    downloadRequest->HandleListObjectsOutcome(request, outcome);
}

void TransferClient::OnUploadGetObject(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::GetObjectRequest& request,
    const Aws::S3::Model::GetObjectOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleGetObjectOutcome(request, outcome);
}

void TransferClient::OnHeadObject(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::HeadObjectRequest& request,
    const Aws::S3::Model::HeadObjectOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleHeadObjectOutcome(request, outcome);
}

void TransferClient::OnUploadListObjects(const Aws::S3::S3Client* s3Client,
    const Aws::S3::Model::ListObjectsRequest& request,
    const Aws::S3::Model::ListObjectsOutcome& outcome,
    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
    AWS_UNREFERENCED_PARAM(s3Client);

    auto uploadContext = std::static_pointer_cast<const UploadFileContext>(context);

    std::shared_ptr<UploadFileRequest> uploadRequest = uploadContext->GetUploadRequest();

    uploadRequest->HandleListObjectsOutcome(request, outcome);
}


std::shared_ptr< UploadBufferScopedResourceSetType > TransferClient::AcquireUploadBuffers(uint32_t bufferCount)
{
    return Aws::MakeShared< ScopedResourceSet< UploadBufferResourceType > >(ALLOCATION_TAG, bufferCount, m_uploadBufferManager);
}

} // namespace Transfer
} // namespace Aws
