
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

#include <fstream>

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
    S3FileRequest(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const std::shared_ptr<Aws::S3::S3Client>& s3Client);
    ~S3FileRequest();

    // Any derived class should define some sort of measure of progress
    virtual float GetProgress() const = 0;

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

    // Our catch all for "done and we've heard back on all parts" - hearing back on outstanding part uploads after a failure or cancel for example
    // Is necessary to prevent the smart pointer from going out of scope when a future .get() call has not returned.
    virtual bool ReadyForDelete() const = 0;

    // Human readable failure string routed through CompletionFailure
    const Aws::String& GetFailure() const;

    // Different file requests will have different meanings for ready - some may need S3 buckets created, some may need files opened
    virtual bool IsReady() const = 0;

protected:

    const std::shared_ptr<Aws::S3::S3Client>& GetS3Client() const;

    void Cancel();
    
    // Anything the derived class needs to do in particular to clean up the request
    virtual bool DoCancelAction() = 0;

    virtual void SetDone();
    void SetCompleted();
    void CompletionSuccess();
    virtual void CompletionFailure(const char* failureStr);

private:
    Aws::String m_fileName;
    Aws::String m_bucketName;
    Aws::String m_keyName;
    Aws::String m_contentType;

    // If we don't complete successfully let's store a human readable reason
    Aws::String m_failureString;

    std::shared_ptr<Aws::S3::S3Client> m_S3Client;

    std::atomic<bool> m_isDone;
    std::atomic<bool> m_completedSuccessfully;

    bool m_cancelled;
};

} // namespace Transfer
} // namespace Aws
