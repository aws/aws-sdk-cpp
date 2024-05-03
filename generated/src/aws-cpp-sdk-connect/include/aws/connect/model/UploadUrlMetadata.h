/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Fields required when uploading an attached file. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UploadUrlMetadata">AWS
   * API Reference</a></p>
   */
  class UploadUrlMetadata
  {
  public:
    AWS_CONNECT_API UploadUrlMetadata();
    AWS_CONNECT_API UploadUrlMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UploadUrlMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline UploadUrlMetadata& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline UploadUrlMetadata& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline UploadUrlMetadata& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline const Aws::String& GetUrlExpiry() const{ return m_urlExpiry; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline void SetUrlExpiry(const Aws::String& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = value; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline void SetUrlExpiry(Aws::String&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::move(value); }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline void SetUrlExpiry(const char* value) { m_urlExpiryHasBeenSet = true; m_urlExpiry.assign(value); }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline UploadUrlMetadata& WithUrlExpiry(const Aws::String& value) { SetUrlExpiry(value); return *this;}

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline UploadUrlMetadata& WithUrlExpiry(Aws::String&& value) { SetUrlExpiry(std::move(value)); return *this;}

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline UploadUrlMetadata& WithUrlExpiry(const char* value) { SetUrlExpiry(value); return *this;}


    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeadersToInclude() const{ return m_headersToInclude; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline bool HeadersToIncludeHasBeenSet() const { return m_headersToIncludeHasBeenSet; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline void SetHeadersToInclude(const Aws::Map<Aws::String, Aws::String>& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude = value; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline void SetHeadersToInclude(Aws::Map<Aws::String, Aws::String>&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude = std::move(value); }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& WithHeadersToInclude(const Aws::Map<Aws::String, Aws::String>& value) { SetHeadersToInclude(value); return *this;}

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& WithHeadersToInclude(Aws::Map<Aws::String, Aws::String>&& value) { SetHeadersToInclude(std::move(value)); return *this;}

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(const Aws::String& key, const Aws::String& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, value); return *this; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(Aws::String&& key, const Aws::String& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(const Aws::String& key, Aws::String&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(Aws::String&& key, Aws::String&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(const char* key, Aws::String&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(Aws::String&& key, const char* value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline UploadUrlMetadata& AddHeadersToInclude(const char* key, const char* value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, value); return *this; }

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_urlExpiry;
    bool m_urlExpiryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_headersToInclude;
    bool m_headersToIncludeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
