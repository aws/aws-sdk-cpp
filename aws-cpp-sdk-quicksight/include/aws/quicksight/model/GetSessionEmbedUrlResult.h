/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetSessionEmbedUrlResult
  {
  public:
    AWS_QUICKSIGHT_API GetSessionEmbedUrlResult();
    AWS_QUICKSIGHT_API GetSessionEmbedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API GetSessionEmbedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline const Aws::String& GetEmbedUrl() const{ return m_embedUrl; }

    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline void SetEmbedUrl(const Aws::String& value) { m_embedUrl = value; }

    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline void SetEmbedUrl(Aws::String&& value) { m_embedUrl = std::move(value); }

    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline void SetEmbedUrl(const char* value) { m_embedUrl.assign(value); }

    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline GetSessionEmbedUrlResult& WithEmbedUrl(const Aws::String& value) { SetEmbedUrl(value); return *this;}

    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline GetSessionEmbedUrlResult& WithEmbedUrl(Aws::String&& value) { SetEmbedUrl(std::move(value)); return *this;}

    /**
     * <p>A single-use URL that you can put into your server-side web page to embed
     * your Amazon QuickSight session. This URL is valid for 5 minutes. The API
     * operation provides the URL with an <code>auth_code</code> value that enables one
     * (and only one) sign-on to a user session that is valid for 10 hours. </p>
     */
    inline GetSessionEmbedUrlResult& WithEmbedUrl(const char* value) { SetEmbedUrl(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline GetSessionEmbedUrlResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GetSessionEmbedUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GetSessionEmbedUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GetSessionEmbedUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_embedUrl;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
