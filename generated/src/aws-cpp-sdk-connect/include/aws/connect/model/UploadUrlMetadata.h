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
    AWS_CONNECT_API UploadUrlMetadata() = default;
    AWS_CONNECT_API UploadUrlMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UploadUrlMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A pre-signed S3 URL that should be used for uploading the attached file. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    UploadUrlMetadata& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
     * <code>2019-11-08T02:41:28.172Z</code>.</p>
     */
    inline const Aws::String& GetUrlExpiry() const { return m_urlExpiry; }
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }
    template<typename UrlExpiryT = Aws::String>
    void SetUrlExpiry(UrlExpiryT&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::forward<UrlExpiryT>(value); }
    template<typename UrlExpiryT = Aws::String>
    UploadUrlMetadata& WithUrlExpiry(UrlExpiryT&& value) { SetUrlExpiry(std::forward<UrlExpiryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of headers that should be provided when uploading the attached file.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeadersToInclude() const { return m_headersToInclude; }
    inline bool HeadersToIncludeHasBeenSet() const { return m_headersToIncludeHasBeenSet; }
    template<typename HeadersToIncludeT = Aws::Map<Aws::String, Aws::String>>
    void SetHeadersToInclude(HeadersToIncludeT&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude = std::forward<HeadersToIncludeT>(value); }
    template<typename HeadersToIncludeT = Aws::Map<Aws::String, Aws::String>>
    UploadUrlMetadata& WithHeadersToInclude(HeadersToIncludeT&& value) { SetHeadersToInclude(std::forward<HeadersToIncludeT>(value)); return *this;}
    template<typename HeadersToIncludeKeyT = Aws::String, typename HeadersToIncludeValueT = Aws::String>
    UploadUrlMetadata& AddHeadersToInclude(HeadersToIncludeKeyT&& key, HeadersToIncludeValueT&& value) {
      m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::forward<HeadersToIncludeKeyT>(key), std::forward<HeadersToIncludeValueT>(value)); return *this;
    }
    ///@}
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
