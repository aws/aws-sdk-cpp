/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Metadata used to download the attached file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DownloadUrlMetadata">AWS
   * API Reference</a></p>
   */
  class DownloadUrlMetadata
  {
  public:
    AWS_CONNECT_API DownloadUrlMetadata() = default;
    AWS_CONNECT_API DownloadUrlMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DownloadUrlMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A pre-signed URL that should be used to download the attached file. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DownloadUrlMetadata& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the URL in ISO timestamp. It's specified in ISO 8601
     * format: yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetUrlExpiry() const { return m_urlExpiry; }
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }
    template<typename UrlExpiryT = Aws::String>
    void SetUrlExpiry(UrlExpiryT&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::forward<UrlExpiryT>(value); }
    template<typename UrlExpiryT = Aws::String>
    DownloadUrlMetadata& WithUrlExpiry(UrlExpiryT&& value) { SetUrlExpiry(std::forward<UrlExpiryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_urlExpiry;
    bool m_urlExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
