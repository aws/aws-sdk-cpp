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
    AWS_CLOUDFRONT_API OriginRequestPolicyCookiesConfig();
    AWS_CLOUDFRONT_API OriginRequestPolicyCookiesConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicyCookiesConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – Cookies in viewer requests are not included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – The cookies in viewer requests that are listed in the
     * <code>CookieNames</code> type are included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in requests that CloudFront sends to the origin.</p> </li> </ul>
     */
    inline const OriginRequestPolicyCookieBehavior& GetCookieBehavior() const{ return m_cookieBehavior; }

    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – Cookies in viewer requests are not included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – The cookies in viewer requests that are listed in the
     * <code>CookieNames</code> type are included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in requests that CloudFront sends to the origin.</p> </li> </ul>
     */
    inline bool CookieBehaviorHasBeenSet() const { return m_cookieBehaviorHasBeenSet; }

    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – Cookies in viewer requests are not included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – The cookies in viewer requests that are listed in the
     * <code>CookieNames</code> type are included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in requests that CloudFront sends to the origin.</p> </li> </ul>
     */
    inline void SetCookieBehavior(const OriginRequestPolicyCookieBehavior& value) { m_cookieBehaviorHasBeenSet = true; m_cookieBehavior = value; }

    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – Cookies in viewer requests are not included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – The cookies in viewer requests that are listed in the
     * <code>CookieNames</code> type are included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in requests that CloudFront sends to the origin.</p> </li> </ul>
     */
    inline void SetCookieBehavior(OriginRequestPolicyCookieBehavior&& value) { m_cookieBehaviorHasBeenSet = true; m_cookieBehavior = std::move(value); }

    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – Cookies in viewer requests are not included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – The cookies in viewer requests that are listed in the
     * <code>CookieNames</code> type are included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in requests that CloudFront sends to the origin.</p> </li> </ul>
     */
    inline OriginRequestPolicyCookiesConfig& WithCookieBehavior(const OriginRequestPolicyCookieBehavior& value) { SetCookieBehavior(value); return *this;}

    /**
     * <p>Determines whether cookies in viewer requests are included in requests that
     * CloudFront sends to the origin. Valid values are:</p> <ul> <li> <p>
     * <code>none</code> – Cookies in viewer requests are not included in requests that
     * CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in a <code>CachePolicy</code>
     * <i>are</i> included in origin requests.</p> </li> <li> <p>
     * <code>whitelist</code> – The cookies in viewer requests that are listed in the
     * <code>CookieNames</code> type are included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in requests that CloudFront sends to the origin.</p> </li> </ul>
     */
    inline OriginRequestPolicyCookiesConfig& WithCookieBehavior(OriginRequestPolicyCookieBehavior&& value) { SetCookieBehavior(std::move(value)); return *this;}


    
    inline const CookieNames& GetCookies() const{ return m_cookies; }

    
    inline bool CookiesHasBeenSet() const { return m_cookiesHasBeenSet; }

    
    inline void SetCookies(const CookieNames& value) { m_cookiesHasBeenSet = true; m_cookies = value; }

    
    inline void SetCookies(CookieNames&& value) { m_cookiesHasBeenSet = true; m_cookies = std::move(value); }

    
    inline OriginRequestPolicyCookiesConfig& WithCookies(const CookieNames& value) { SetCookies(value); return *this;}

    
    inline OriginRequestPolicyCookiesConfig& WithCookies(CookieNames&& value) { SetCookies(std::move(value)); return *this;}

  private:

    OriginRequestPolicyCookieBehavior m_cookieBehavior;
    bool m_cookieBehaviorHasBeenSet = false;

    CookieNames m_cookies;
    bool m_cookiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
