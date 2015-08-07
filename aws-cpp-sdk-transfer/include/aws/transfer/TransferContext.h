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