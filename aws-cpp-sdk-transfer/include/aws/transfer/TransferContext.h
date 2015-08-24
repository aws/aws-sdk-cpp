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

#include <aws/core/client/AsyncCallerContext.h>

namespace Aws
{

namespace Transfer
{
    class UploadFileRequest;
    class DownloadFileRequest;

    class UploadFileContext : public Aws::Client::AsyncCallerContext
    {
    public:

        UploadFileContext(std::shared_ptr<UploadFileRequest> uploadRequest);

        std::shared_ptr<UploadFileRequest> GetUploadRequest() const { return m_request; }

    private:

        std::shared_ptr<UploadFileRequest> m_request;

    };

    class DownloadFileContext : public Aws::Client::AsyncCallerContext
    {
    public:

        DownloadFileContext(std::shared_ptr<DownloadFileRequest> downloadRequest);

        std::shared_ptr<DownloadFileRequest> GetDownloadRequest() const { return m_request; }

    private:

        std::shared_ptr<DownloadFileRequest> m_request;

    };

}
} //namespace AWS