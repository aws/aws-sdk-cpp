/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyCookieBehavior.h>
#include <aws/cloudfront/model/CookieNames.h>
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
   * <p>An object that determines whether any cookies in viewer requests (and if so,
   * which cookies) are included in requests that CloudFront sends to the
   * origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicyCookiesConfig">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicyCookiesConfig
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicyCookiesConfig() = default;
    AWS_CLOUDFRONT_API OriginRequestPolicyCookiesConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyCookiesConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – No cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – Only the cookies in viewer requests that are listed in
     * the <code>CookieNames</code> type are included in requests that CloudFront sends
     * to the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer
     * requests are included in requests that CloudFront sends to the origin.</p> </li>
     * <li> <p> <code>allExcept</code> – All cookies in viewer requests are included in
     * requests that CloudFront sends to the origin, <i> <b>except</b> </i> for those
     * listed in the <code>CookieNames</code> type, which are not included.</p> </li>
     * </ul>
     */
    inline OriginRequestPolicyCookieBehavior GetCookieBehavior() const { return m_cookieBehavior; }
    inline bool CookieBehaviorHasBeenSet() const { return m_cookieBehaviorHasBeenSet; }
    inline void SetCookieBehavior(OriginRequestPolicyCookieBehavior value) { m_cookieBehaviorHasBeenSet = true; m_cookieBehavior = value; }
    inline OriginRequestPolicyCookiesConfig& WithCookieBehavior(OriginRequestPolicyCookieBehavior value) { SetCookieBehavior(value); return *this;}
    ///@}

    ///@{
    
    inline const CookieNames& GetCookies() const { return m_cookies; }
    inline bool CookiesHasBeenSet() const { return m_cookiesHasBeenSet; }
    template<typename CookiesT = CookieNames>
    void SetCookies(CookiesT&& value) { m_cookiesHasBeenSet = true; m_cookies = std::forward<CookiesT>(value); }
    template<typename CookiesT = CookieNames>
    OriginRequestPolicyCookiesConfig& WithCookies(CookiesT&& value) { SetCookies(std::forward<CookiesT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyCookieBehavior m_cookieBehavior{OriginRequestPolicyCookieBehavior::NOT_SET};
    bool m_cookieBehaviorHasBeenSet = false;

    CookieNames m_cookies;
    bool m_cookiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
