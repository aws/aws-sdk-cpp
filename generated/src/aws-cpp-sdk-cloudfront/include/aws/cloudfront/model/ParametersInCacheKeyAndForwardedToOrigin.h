/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyHeadersConfig.h>
#include <aws/cloudfront/model/CachePolicyCookiesConfig.h>
#include <aws/cloudfront/model/CachePolicyQueryStringsConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>This object determines the values that CloudFront includes in the cache key.
   * These values can include HTTP headers, cookies, and URL query strings.
   * CloudFront uses the cache key to find an object in its cache that it can return
   * to the viewer.</p> <p>The headers, cookies, and query strings that are included
   * in the cache key are also included in requests that CloudFront sends to the
   * origin. CloudFront sends a request when it can't find an object in its cache
   * that matches the request's cache key. If you want to send values to the origin
   * but <i>not</i> include them in the cache key, use
   * <code>OriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ParametersInCacheKeyAndForwardedToOrigin">AWS
   * API Reference</a></p>
   */
  class ParametersInCacheKeyAndForwardedToOrigin
  {
  public:
    AWS_CLOUDFRONT_API ParametersInCacheKeyAndForwardedToOrigin() = default;
    AWS_CLOUDFRONT_API ParametersInCacheKeyAndForwardedToOrigin(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ParametersInCacheKeyAndForwardedToOrigin& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A flag that can affect whether the <code>Accept-Encoding</code> HTTP header
     * is included in the cache key and included in requests that CloudFront sends to
     * the origin.</p> <p>This field is related to the
     * <code>EnableAcceptEncodingBrotli</code> field. If one or both of these fields is
     * <code>true</code> <i>and</i> the viewer request includes the
     * <code>Accept-Encoding</code> header, then CloudFront does the following:</p>
     * <ul> <li> <p>Normalizes the value of the viewer's <code>Accept-Encoding</code>
     * header</p> </li> <li> <p>Includes the normalized header in the cache key</p>
     * </li> <li> <p>Includes the normalized header in the request to the origin, if a
     * request is necessary</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-policy-compressed-objects">Compression
     * support</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If you set
     * this value to <code>true</code>, and this cache behavior also has an origin
     * request policy attached, do not include the <code>Accept-Encoding</code> header
     * in the origin request policy. CloudFront always includes the
     * <code>Accept-Encoding</code> header in origin requests when the value of this
     * field is <code>true</code>, so including this header in an origin request policy
     * has no effect.</p> <p>If both of these fields are <code>false</code>, then
     * CloudFront treats the <code>Accept-Encoding</code> header the same as any other
     * HTTP header in the viewer request. By default, it's not included in the cache
     * key and it's not included in origin requests. In this case, you can manually add
     * <code>Accept-Encoding</code> to the headers whitelist like any other HTTP
     * header.</p>
     */
    inline bool GetEnableAcceptEncodingGzip() const { return m_enableAcceptEncodingGzip; }
    inline bool EnableAcceptEncodingGzipHasBeenSet() const { return m_enableAcceptEncodingGzipHasBeenSet; }
    inline void SetEnableAcceptEncodingGzip(bool value) { m_enableAcceptEncodingGzipHasBeenSet = true; m_enableAcceptEncodingGzip = value; }
    inline ParametersInCacheKeyAndForwardedToOrigin& WithEnableAcceptEncodingGzip(bool value) { SetEnableAcceptEncodingGzip(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that can affect whether the <code>Accept-Encoding</code> HTTP header
     * is included in the cache key and included in requests that CloudFront sends to
     * the origin.</p> <p>This field is related to the
     * <code>EnableAcceptEncodingGzip</code> field. If one or both of these fields is
     * <code>true</code> <i>and</i> the viewer request includes the
     * <code>Accept-Encoding</code> header, then CloudFront does the following:</p>
     * <ul> <li> <p>Normalizes the value of the viewer's <code>Accept-Encoding</code>
     * header</p> </li> <li> <p>Includes the normalized header in the cache key</p>
     * </li> <li> <p>Includes the normalized header in the request to the origin, if a
     * request is necessary</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-policy-compressed-objects">Compression
     * support</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If you set
     * this value to <code>true</code>, and this cache behavior also has an origin
     * request policy attached, do not include the <code>Accept-Encoding</code> header
     * in the origin request policy. CloudFront always includes the
     * <code>Accept-Encoding</code> header in origin requests when the value of this
     * field is <code>true</code>, so including this header in an origin request policy
     * has no effect.</p> <p>If both of these fields are <code>false</code>, then
     * CloudFront treats the <code>Accept-Encoding</code> header the same as any other
     * HTTP header in the viewer request. By default, it's not included in the cache
     * key and it's not included in origin requests. In this case, you can manually add
     * <code>Accept-Encoding</code> to the headers whitelist like any other HTTP
     * header.</p>
     */
    inline bool GetEnableAcceptEncodingBrotli() const { return m_enableAcceptEncodingBrotli; }
    inline bool EnableAcceptEncodingBrotliHasBeenSet() const { return m_enableAcceptEncodingBrotliHasBeenSet; }
    inline void SetEnableAcceptEncodingBrotli(bool value) { m_enableAcceptEncodingBrotliHasBeenSet = true; m_enableAcceptEncodingBrotli = value; }
    inline ParametersInCacheKeyAndForwardedToOrigin& WithEnableAcceptEncodingBrotli(bool value) { SetEnableAcceptEncodingBrotli(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that determines whether any HTTP headers (and if so, which headers)
     * are included in the cache key and in requests that CloudFront sends to the
     * origin.</p>
     */
    inline const CachePolicyHeadersConfig& GetHeadersConfig() const { return m_headersConfig; }
    inline bool HeadersConfigHasBeenSet() const { return m_headersConfigHasBeenSet; }
    template<typename HeadersConfigT = CachePolicyHeadersConfig>
    void SetHeadersConfig(HeadersConfigT&& value) { m_headersConfigHasBeenSet = true; m_headersConfig = std::forward<HeadersConfigT>(value); }
    template<typename HeadersConfigT = CachePolicyHeadersConfig>
    ParametersInCacheKeyAndForwardedToOrigin& WithHeadersConfig(HeadersConfigT&& value) { SetHeadersConfig(std::forward<HeadersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that determines whether any cookies in viewer requests (and if so,
     * which cookies) are included in the cache key and in requests that CloudFront
     * sends to the origin.</p>
     */
    inline const CachePolicyCookiesConfig& GetCookiesConfig() const { return m_cookiesConfig; }
    inline bool CookiesConfigHasBeenSet() const { return m_cookiesConfigHasBeenSet; }
    template<typename CookiesConfigT = CachePolicyCookiesConfig>
    void SetCookiesConfig(CookiesConfigT&& value) { m_cookiesConfigHasBeenSet = true; m_cookiesConfig = std::forward<CookiesConfigT>(value); }
    template<typename CookiesConfigT = CachePolicyCookiesConfig>
    ParametersInCacheKeyAndForwardedToOrigin& WithCookiesConfig(CookiesConfigT&& value) { SetCookiesConfig(std::forward<CookiesConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that determines whether any URL query strings in viewer requests
     * (and if so, which query strings) are included in the cache key and in requests
     * that CloudFront sends to the origin.</p>
     */
    inline const CachePolicyQueryStringsConfig& GetQueryStringsConfig() const { return m_queryStringsConfig; }
    inline bool QueryStringsConfigHasBeenSet() const { return m_queryStringsConfigHasBeenSet; }
    template<typename QueryStringsConfigT = CachePolicyQueryStringsConfig>
    void SetQueryStringsConfig(QueryStringsConfigT&& value) { m_queryStringsConfigHasBeenSet = true; m_queryStringsConfig = std::forward<QueryStringsConfigT>(value); }
    template<typename QueryStringsConfigT = CachePolicyQueryStringsConfig>
    ParametersInCacheKeyAndForwardedToOrigin& WithQueryStringsConfig(QueryStringsConfigT&& value) { SetQueryStringsConfig(std::forward<QueryStringsConfigT>(value)); return *this;}
    ///@}
  private:

    bool m_enableAcceptEncodingGzip{false};
    bool m_enableAcceptEncodingGzipHasBeenSet = false;

    bool m_enableAcceptEncodingBrotli{false};
    bool m_enableAcceptEncodingBrotliHasBeenSet = false;

    CachePolicyHeadersConfig m_headersConfig;
    bool m_headersConfigHasBeenSet = false;

    CachePolicyCookiesConfig m_cookiesConfig;
    bool m_cookiesConfigHasBeenSet = false;

    CachePolicyQueryStringsConfig m_queryStringsConfig;
    bool m_queryStringsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
