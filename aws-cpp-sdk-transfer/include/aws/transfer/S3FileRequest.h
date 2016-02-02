
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

#include <aws/transfer/Transfer_EXPORTS.h>

#include <aws/s3/S3Client.h>

#include <list>
#include <fstream>
#include <functional>

namespace Aws
{
namespace S3
{
    class S3Client;
} // namespace S3

namespace Transfer
{

class TransferClient;

class AWS_TRANSFER_API S3FileRequest
{
public:

    using S3FileCompletionCallback = std::function < void() > ;

    S3FileRequest(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const std::shared_ptr<Aws::S3::S3Client>& s3Client);
    virtual ~S3FileRequest();

    // S3FileRequest defines this as progress out of file size - inherited classes that can't conform to this for some reason should derive their own
    virtual float GetProgress() const;

    // Simple accessors to return values passed into constructor
    const Aws::String& GetBucketName() const;
    const Aws::String& GetFileName() const;

    // Keyname passed in, or filename if not provided
    const Aws::String& GetKeyName() const;

    // IsDone is set when the operation has completed with or without success
    bool IsDone() const;

    // Set when the particular operation has entirely completed with success
    bool CompletedSuccessfully() const;

    // Synchronous call to put the request into a CheckDone/Sleep 1 second loop for up to UPLOAD_WAIT_TIMEOUT (100 default) seconds
    // Any progress will restart the counter to UPLOAD_WAIT_TIMEOUT back to 0 (Relies on a measurable incremental changes in GetProgress)
    virtual bool WaitUntilDone() const;

    // Human readable failure string routed through CompletionFailure
    const Aws::String& GetFailure() const;

    void SetLastFailure(const char* failureString);

    // Different file requests will have different meanings for ready - some may need S3 buckets created, some may need files opened
    virtual bool IsReady() const = 0;

    // For uploads, look at the file on disk, for downloads, request content manifest from S3
    inline virtual uint64_t GetFileSize() const { return m_fileSize; }

    uint64_t GetProgressAmount() const;

    // Add a callback to be fired on CompletionSuccess
    void AddCompletionCallback(S3FileCompletionCallback addCallback);

protected:

    const std::shared_ptr<Aws::S3::S3Client>& GetS3Client() const;

    void Cancel();
    
    // Anything the derived class needs to do in particular to clean up the request
    virtual bool DoCancelAction() = 0;

    virtual void SetDone();
    void SetCompleted();
    void CompletionSuccess();
    virtual void CompletionFailure(const char* failureStr);

    inline virtual void SetFileSize(uint64_t curSize) { m_fileSize = curSize; }

    void ClearProgress();
    void RegisterProgress(int64_t progressAmount);

private:

    void FireCompletionCallbacks();

    Aws::String m_fileName;
    Aws::String m_bucketName;
    Aws::String m_keyName;
    Aws::String m_contentType;

    // If we don't complete successfully let's store a human readable reason
    Aws::String m_failureString;

    std::shared_ptr<Aws::S3::S3Client> m_S3Client;

    std::atomic<bool> m_isDone;
    std::atomic<bool> m_completedSuccessfully;

    std::mutex m_callbackMutex;

    bool m_cancelled;
    uint64_t m_fileSize;
    std::atomic<uint64_t> m_progress;
    Aws::List<S3FileCompletionCallback> m_completionCallbacks;
};

} // namespace Transfer
} // namespace Aws
