
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

#include <aws/transfer/DownloadFileRequest.h>

#include <aws/transfer/TransferClient.h>
#include <aws/transfer/TransferContext.h>

#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/ListObjectsRequest.h>

#include <algorithm>

using namespace Aws::S3::Model;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{

static const char* ALLOCATION_TAG = "TransferAPI";

static const uint32_t DOWNLOAD_RETRY_MAX = 2;
static const float DOWNLOAD_RETRY_THRESHOLD = 10.0f;

DownloadFileRequest::DownloadFileRequest(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const std::shared_ptr<Aws::S3::S3Client>& s3Client) : S3FileRequest(fileName, bucketName, keyName, s3Client),
m_retries(0),
m_gotContents(false)
{

}

DownloadFileRequest::~DownloadFileRequest()
{

}


bool DownloadFileRequest::IsReady() const
{
    return true;
}

void DownloadFileRequest::OnDataReceived(const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long amountReceived)
{
    RegisterProgress(amountReceived);
}

bool DownloadFileRequest::DoCancelAction()
{
    // Do we need to tell S3 something here?
    return true;
}

bool DownloadFileRequest::DoSingleObjectDownload()
{
    if (!IsReady())
    {
        return false;
    }
    GetObjectRequest getObjectRequest;
    getObjectRequest.SetBucket(GetBucketName());
    getObjectRequest.SetKey(GetKeyName());
    getObjectRequest.SetResponseStreamFactory([this]() { return Aws::New<Aws::FStream>(ALLOCATION_TAG, GetFileName().c_str(), std::ios::binary | std::ios_base::out); });

    getObjectRequest.SetDataReceivedEventHandler(std::bind(&DownloadFileRequest::OnDataReceived, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<DownloadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->GetObjectAsync(getObjectRequest, &TransferClient::OnDownloadGetObject, context);

    return false;
}

bool DownloadFileRequest::DoRetry()
{
    if (m_retries >= DOWNLOAD_RETRY_MAX)
    {
        return false;
    }
    if (GetProgress() > DOWNLOAD_RETRY_THRESHOLD)
    {
        // Let's let the user decide at this point what to do
        return false;
    }
    ++m_retries;
    ClearProgress();
    DoSingleObjectDownload();
    return true;
}

bool DownloadFileRequest::HandleGetObjectOutcome(const Aws::S3::Model::GetObjectRequest& request, const Aws::S3::Model::GetObjectOutcome& outcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (outcome.IsSuccess())
    {
        CompletionSuccess();
        return true;
    }
    else
    {
        if (DoRetry())
        {
            // We're trying again
            return false;
        }
    }
    CompletionFailure(outcome.GetError().GetMessage().c_str());
    return false;
}

void DownloadFileRequest::GetContents()
{
    if (m_gotContents)
    {
        return;
    }

    ListObjectsRequest listObjectsRequest;
    listObjectsRequest.SetBucket(GetBucketName());

    std::shared_ptr<Aws::Client::AsyncCallerContext> context = Aws::MakeShared<DownloadFileContext>(ALLOCATION_TAG, shared_from_this());

    GetS3Client()->ListObjectsAsync(listObjectsRequest, &TransferClient::OnDownloadListObjects, context);
}

bool DownloadFileRequest::HandleListObjectsOutcome(const Aws::S3::Model::ListObjectsRequest& request, const Aws::S3::Model::ListObjectsOutcome& outcome)
{
    AWS_UNREFERENCED_PARAM(request);

    if (outcome.IsSuccess())
    {
        if (outcome.GetResult().GetContents().size())
        {
            auto thisObj = std::find_if(outcome.GetResult().GetContents().cbegin(), outcome.GetResult().GetContents().cend(), [&](const Object& thisObject) { return thisObject.GetKey() == GetKeyName();  });
            if (thisObj != outcome.GetResult().GetContents().end())
            {
                SetFileSize(thisObj->GetSize());
            }
        }
    }
    m_gotContents = true;
    return true;
}

} // namespace Transfer
} // namespace Aws
