/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{
  class AWS_CONNECTPARTICIPANT_API GetAttachmentResult
  {
  public:
    GetAttachmentResult();
    GetAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline GetAttachmentResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline GetAttachmentResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline GetAttachmentResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetUrlExpiry() const{ return m_urlExpiry; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetUrlExpiry(const Aws::String& value) { m_urlExpiry = value; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetUrlExpiry(Aws::String&& value) { m_urlExpiry = std::move(value); }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetUrlExpiry(const char* value) { m_urlExpiry.assign(value); }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline GetAttachmentResult& WithUrlExpiry(const Aws::String& value) { SetUrlExpiry(value); return *this;}

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline GetAttachmentResult& WithUrlExpiry(Aws::String&& value) { SetUrlExpiry(std::move(value)); return *this;}

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline GetAttachmentResult& WithUrlExpiry(const char* value) { SetUrlExpiry(value); return *this;}

  private:

    Aws::String m_url;

    Aws::String m_urlExpiry;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
