
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

#include <aws/transfer/S3FileRequest.h>
#include <aws/s3/S3Client.h>

#include <fstream>

namespace Aws
{
namespace S3
{
    class S3Client;
} // namespace S3

namespace Http
{
    class HttpRequest;
    class HttpResponse;
}

namespace Transfer
{

class TransferClient;

class AWS_TRANSFER_API DownloadFileRequest : public S3FileRequest, public std::enable_shared_from_this<DownloadFileRequest>
{
public:
    DownloadFileRequest(const Aws::String& fileName, const Aws::String& bucketName, const Aws::String& keyName, const std::shared_ptr<Aws::S3::S3Client>& s3Client);
    ~DownloadFileRequest();

    bool DoSingleObjectDownload();

    bool IsReady() const override;

    void OnDataReceived(const Aws::Http::HttpRequest*, Aws::Http::HttpResponse*, long long);

    uint32_t GetRetries() const { return m_retries; }

    friend class TransferClient;

private:

    bool HandleGetObjectOutcome(const Aws::S3::Model::GetObjectRequest& request,
        const Aws::S3::Model::GetObjectOutcome& outcome);

    bool HandleListObjectsOutcome(const Aws::S3::Model::ListObjectsRequest& request,
        const Aws::S3::Model::ListObjectsOutcome& outcome);

    void GetContents();

    bool DoRetry();

    virtual bool DoCancelAction() override;

    mutable std::mutex m_fileRequestMutex;

    uint32_t m_retries;
    bool m_gotContents;
};

} // namespace Transfer
} // namespace Aws
