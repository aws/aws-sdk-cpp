
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

#include <aws/transfer/UploadFileRequest.h>

#include <aws/transfer/TransferClient.h>

#include <aws/s3/model/GetObjectRequest.h>

using namespace Aws::S3::Model;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{

static const uint32_t DOWNLOAD_WAIT_TIMEOUT = 100; // In the WaitUntilDone loop this is the maximum time we'll wait without making further progress before bailing out


S3FileRequest::S3FileRequest(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const std::shared_ptr<Aws::S3::S3Client>& s3Client) : m_fileName(fileName),
m_bucketName(bucketName),
m_keyName(keyName),
m_S3Client(s3Client),
m_isDone(false),
m_completedSuccessfully(false),
m_cancelled(false),
m_fileSize(0),
m_progress(0)
{

}

S3FileRequest::~S3FileRequest()
{

}

bool S3FileRequest::WaitUntilDone() const
{
    unsigned timeoutCount = 0;
    float totalProgress = GetProgress();
    while (timeoutCount++ < DOWNLOAD_WAIT_TIMEOUT)
    {
        if (IsDone())
        {
            break;
        }
        // Let's reset our timeout
        if (GetProgress() != totalProgress)
        {
            timeoutCount = 0;
            totalProgress = GetProgress();
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return IsDone();
}

bool S3FileRequest::IsDone() const
{
    return m_isDone.load();
}

bool S3FileRequest::CompletedSuccessfully() const
{
    return m_completedSuccessfully.load();
}

void S3FileRequest::Cancel()
{
    if (IsDone())
    {
        // Nothing to do
        return;
    }
    
    // Do the implementation specific action necessary for cancelling
    DoCancelAction();

    // TODO figure out if we need to notify S3 about this or just bail on our end
    m_cancelled = true;

    SetDone();
}

void S3FileRequest::RegisterProgress(int64_t progressAmount)
{
    m_progress += progressAmount;
}

void S3FileRequest::ClearProgress()
{
    m_progress = 0;
}

uint64_t S3FileRequest::GetProgressAmount() const
{
    return m_progress;
}

void S3FileRequest::SetDone()
{
    m_isDone.store(true);
}

void S3FileRequest::CompletionSuccess()
{
    SetCompleted();
    SetDone();
    FireCompletionCallbacks();
}

void S3FileRequest::AddCompletionCallback(S3FileCompletionCallback addCallback)
{
    std::lock_guard<std::mutex> completeLock(m_callbackMutex);

    m_completionCallbacks.push_back(addCallback);
}

void S3FileRequest::FireCompletionCallbacks()
{
    std::lock_guard<std::mutex> completeLock(m_callbackMutex);

    for (auto& thisCallback : m_completionCallbacks)
    {
        thisCallback();
    }
    m_completionCallbacks.clear();
}

float S3FileRequest::GetProgress() const
{
    if (CompletedSuccessfully())
    {
        return 100.0f;
    }
    if (m_fileSize)
    {
        if (!GetProgressAmount())
        {
            return 0.0;
        }
        return std::min(static_cast<float>(static_cast<double>(GetProgressAmount()) * 100.0f / m_fileSize), 100.0f);
    }
    return 0.0f;
}

void S3FileRequest::CompletionFailure(const char* failureStr)
{
    if (IsDone())
    {
        // We've already failed/ended, probably we're getting an outstanding async request result back which most likely failed
        // due to our canceling
        return;
    }
    if (failureStr)
    { 
        m_failureString = failureStr;
    }
    SetDone();
}

void S3FileRequest::SetCompleted()
{
    m_completedSuccessfully.store(true);
}


const Aws::String& S3FileRequest::GetBucketName() const
{
    return m_bucketName;
}

const Aws::String& S3FileRequest::GetFileName() const
{
    return m_fileName;
}

const Aws::String& S3FileRequest::GetFailure() const
{
    return m_failureString;
}

void S3FileRequest::SetLastFailure(const char *failureString)
{
    m_failureString = failureString;
}

const Aws::String& S3FileRequest::GetKeyName() const
{
    return m_keyName.length() ? m_keyName : GetFileName();
}

const std::shared_ptr<Aws::S3::S3Client>& S3FileRequest::GetS3Client() const
{
    return m_S3Client;
}

} // namespace Transfer
} // namespace Aws
