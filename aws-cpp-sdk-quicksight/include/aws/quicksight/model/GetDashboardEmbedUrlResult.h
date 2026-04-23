/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API GetDashboardEmbedUrlResult
  {
  public:
    GetDashboardEmbedUrlResult();
    GetDashboardEmbedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDashboardEmbedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline const Aws::String& GetEmbedUrl() const{ return m_embedUrl; }

    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline void SetEmbedUrl(const Aws::String& value) { m_embedUrl = value; }

    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline void SetEmbedUrl(Aws::String&& value) { m_embedUrl = std::move(value); }

    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline void SetEmbedUrl(const char* value) { m_embedUrl.assign(value); }

    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline GetDashboardEmbedUrlResult& WithEmbedUrl(const Aws::String& value) { SetEmbedUrl(value); return *this;}

    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline GetDashboardEmbedUrlResult& WithEmbedUrl(Aws::String&& value) { SetEmbedUrl(std::move(value)); return *this;}

    /**
     * <p>URL that you can put into your server-side webpage to embed your dashboard.
     * This URL is valid for 5 minutes, and the resulting session is valid for 10
     * hours. The API provides the URL with an auth_code that enables a single-signon
     * session. </p>
     */
    inline GetDashboardEmbedUrlResult& WithEmbedUrl(const char* value) { SetEmbedUrl(value); return *this;}


    /**
     * <p>The http status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The http status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The http status of the request.</p>
     */
    inline GetDashboardEmbedUrlResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline GetDashboardEmbedUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline GetDashboardEmbedUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline GetDashboardEmbedUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_embedUrl;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
