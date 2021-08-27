/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>Fields to be used while uploading the attachment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/UploadMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECTPARTICIPANT_API UploadMetadata
  {
  public:
    UploadMetadata();
    UploadMetadata(Aws::Utils::Json::JsonView jsonValue);
    UploadMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline UploadMetadata& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline UploadMetadata& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The pre-signed URL using which file would be downloaded from Amazon S3 by the
     * API caller.</p>
     */
    inline UploadMetadata& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetUrlExpiry() const{ return m_urlExpiry; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetUrlExpiry(const Aws::String& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = value; }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetUrlExpiry(Aws::String&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::move(value); }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline void SetUrlExpiry(const char* value) { m_urlExpiryHasBeenSet = true; m_urlExpiry.assign(value); }

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline UploadMetadata& WithUrlExpiry(const Aws::String& value) { SetUrlExpiry(value); return *this;}

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline UploadMetadata& WithUrlExpiry(Aws::String&& value) { SetUrlExpiry(std::move(value)); return *this;}

    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline UploadMetadata& WithUrlExpiry(const char* value) { SetUrlExpiry(value); return *this;}


    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeadersToInclude() const{ return m_headersToInclude; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline bool HeadersToIncludeHasBeenSet() const { return m_headersToIncludeHasBeenSet; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline void SetHeadersToInclude(const Aws::Map<Aws::String, Aws::String>& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude = value; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline void SetHeadersToInclude(Aws::Map<Aws::String, Aws::String>&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude = std::move(value); }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& WithHeadersToInclude(const Aws::Map<Aws::String, Aws::String>& value) { SetHeadersToInclude(value); return *this;}

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& WithHeadersToInclude(Aws::Map<Aws::String, Aws::String>&& value) { SetHeadersToInclude(std::move(value)); return *this;}

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(const Aws::String& key, const Aws::String& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, value); return *this; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(Aws::String&& key, const Aws::String& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(const Aws::String& key, Aws::String&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(Aws::String&& key, Aws::String&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(const char* key, Aws::String&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(Aws::String&& key, const char* value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers to be provided while uploading the file to the URL.</p>
     */
    inline UploadMetadata& AddHeadersToInclude(const char* key, const char* value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(key, value); return *this; }

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_urlExpiry;
    bool m_urlExpiryHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_headersToInclude;
    bool m_headersToIncludeHasBeenSet;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
