/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class StartContentUploadResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API StartContentUploadResult();
    AWS_CONNECTWISDOMSERVICE_API StartContentUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API StartContentUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The headers to include in the upload.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeadersToInclude() const{ return m_headersToInclude; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline void SetHeadersToInclude(const Aws::Map<Aws::String, Aws::String>& value) { m_headersToInclude = value; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline void SetHeadersToInclude(Aws::Map<Aws::String, Aws::String>&& value) { m_headersToInclude = std::move(value); }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& WithHeadersToInclude(const Aws::Map<Aws::String, Aws::String>& value) { SetHeadersToInclude(value); return *this;}

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& WithHeadersToInclude(Aws::Map<Aws::String, Aws::String>&& value) { SetHeadersToInclude(std::move(value)); return *this;}

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(const Aws::String& key, const Aws::String& value) { m_headersToInclude.emplace(key, value); return *this; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(Aws::String&& key, const Aws::String& value) { m_headersToInclude.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(const Aws::String& key, Aws::String&& value) { m_headersToInclude.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(Aws::String&& key, Aws::String&& value) { m_headersToInclude.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(const char* key, Aws::String&& value) { m_headersToInclude.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(Aws::String&& key, const char* value) { m_headersToInclude.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers to include in the upload.</p>
     */
    inline StartContentUploadResult& AddHeadersToInclude(const char* key, const char* value) { m_headersToInclude.emplace(key, value); return *this; }


    /**
     * <p>The identifier of the upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The identifier of the upload.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * <p>The identifier of the upload.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * <p>The identifier of the upload.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * <p>The identifier of the upload.</p>
     */
    inline StartContentUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The identifier of the upload.</p>
     */
    inline StartContentUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the upload.</p>
     */
    inline StartContentUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p>The URL of the upload.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL of the upload.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The URL of the upload.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The URL of the upload.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The URL of the upload.</p>
     */
    inline StartContentUploadResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL of the upload.</p>
     */
    inline StartContentUploadResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the upload.</p>
     */
    inline StartContentUploadResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetUrlExpiry() const{ return m_urlExpiry; }

    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline void SetUrlExpiry(const Aws::Utils::DateTime& value) { m_urlExpiry = value; }

    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline void SetUrlExpiry(Aws::Utils::DateTime&& value) { m_urlExpiry = std::move(value); }

    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline StartContentUploadResult& WithUrlExpiry(const Aws::Utils::DateTime& value) { SetUrlExpiry(value); return *this;}

    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline StartContentUploadResult& WithUrlExpiry(Aws::Utils::DateTime&& value) { SetUrlExpiry(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_headersToInclude;

    Aws::String m_uploadId;

    Aws::String m_url;

    Aws::Utils::DateTime m_urlExpiry;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
