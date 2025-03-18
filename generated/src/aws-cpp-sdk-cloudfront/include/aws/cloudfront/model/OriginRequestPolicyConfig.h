/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/OriginRequestPolicyHeadersConfig.h>
#include <aws/cloudfront/model/OriginRequestPolicyCookiesConfig.h>
#include <aws/cloudfront/model/OriginRequestPolicyQueryStringsConfig.h>
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
   * <p>An origin request policy configuration.</p> <p>This configuration determines
   * the values that CloudFront includes in requests that it sends to the origin.
   * Each request that CloudFront sends to the origin includes the following:</p>
   * <ul> <li> <p>The request body and the URL path (without the domain name) from
   * the viewer request.</p> </li> <li> <p>The headers that CloudFront automatically
   * includes in every origin request, including <code>Host</code>,
   * <code>User-Agent</code>, and <code>X-Amz-Cf-Id</code>.</p> </li> <li> <p>All
   * HTTP headers, cookies, and URL query strings that are specified in the cache
   * policy or the origin request policy. These can include items from the viewer
   * request and, in the case of headers, additional ones that are added by
   * CloudFront.</p> </li> </ul> <p>CloudFront sends a request when it can't find an
   * object in its cache that matches the request. If you want to send values to the
   * origin and also include them in the cache key, use
   * <code>CachePolicy</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicyConfig">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicyConfig
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicyConfig() = default;
    AWS_CLOUDFRONT_API OriginRequestPolicyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A comment to describe the origin request policy. The comment cannot be longer
     * than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    OriginRequestPolicyConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name to identify the origin request policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OriginRequestPolicyConfig& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP headers to include in origin requests. These can include headers
     * from viewer requests and additional headers added by CloudFront.</p>
     */
    inline const OriginRequestPolicyHeadersConfig& GetHeadersConfig() const { return m_headersConfig; }
    inline bool HeadersConfigHasBeenSet() const { return m_headersConfigHasBeenSet; }
    template<typename HeadersConfigT = OriginRequestPolicyHeadersConfig>
    void SetHeadersConfig(HeadersConfigT&& value) { m_headersConfigHasBeenSet = true; m_headersConfig = std::forward<HeadersConfigT>(value); }
    template<typename HeadersConfigT = OriginRequestPolicyHeadersConfig>
    OriginRequestPolicyConfig& WithHeadersConfig(HeadersConfigT&& value) { SetHeadersConfig(std::forward<HeadersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cookies from viewer requests to include in origin requests.</p>
     */
    inline const OriginRequestPolicyCookiesConfig& GetCookiesConfig() const { return m_cookiesConfig; }
    inline bool CookiesConfigHasBeenSet() const { return m_cookiesConfigHasBeenSet; }
    template<typename CookiesConfigT = OriginRequestPolicyCookiesConfig>
    void SetCookiesConfig(CookiesConfigT&& value) { m_cookiesConfigHasBeenSet = true; m_cookiesConfig = std::forward<CookiesConfigT>(value); }
    template<typename CookiesConfigT = OriginRequestPolicyCookiesConfig>
    OriginRequestPolicyConfig& WithCookiesConfig(CookiesConfigT&& value) { SetCookiesConfig(std::forward<CookiesConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL query strings from viewer requests to include in origin requests.</p>
     */
    inline const OriginRequestPolicyQueryStringsConfig& GetQueryStringsConfig() const { return m_queryStringsConfig; }
    inline bool QueryStringsConfigHasBeenSet() const { return m_queryStringsConfigHasBeenSet; }
    template<typename QueryStringsConfigT = OriginRequestPolicyQueryStringsConfig>
    void SetQueryStringsConfig(QueryStringsConfigT&& value) { m_queryStringsConfigHasBeenSet = true; m_queryStringsConfig = std::forward<QueryStringsConfigT>(value); }
    template<typename QueryStringsConfigT = OriginRequestPolicyQueryStringsConfig>
    OriginRequestPolicyConfig& WithQueryStringsConfig(QueryStringsConfigT&& value) { SetQueryStringsConfig(std::forward<QueryStringsConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OriginRequestPolicyHeadersConfig m_headersConfig;
    bool m_headersConfigHasBeenSet = false;

    OriginRequestPolicyCookiesConfig m_cookiesConfig;
    bool m_cookiesConfigHasBeenSet = false;

    OriginRequestPolicyQueryStringsConfig m_queryStringsConfig;
    bool m_queryStringsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
