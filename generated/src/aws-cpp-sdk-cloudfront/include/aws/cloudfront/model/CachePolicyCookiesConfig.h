/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CachePolicyCookieBehavior.h>
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
   * which cookies) are included in the cache key and automatically included in
   * requests that CloudFront sends to the origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CachePolicyCookiesConfig">AWS
   * API Reference</a></p>
   */
  class CachePolicyCookiesConfig
  {
  public:
    AWS_CLOUDFRONT_API CachePolicyCookiesConfig();
    AWS_CLOUDFRONT_API CachePolicyCookiesConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CachePolicyCookiesConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Determines whether any cookies in viewer requests are included in the cache
     * key and automatically included in requests that CloudFront sends to the origin.
     * Valid values are:</p> <ul> <li> <p> <code>none</code> – Cookies in viewer
     * requests are not included in the cache key and are not automatically included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in an
     * <code>OriginRequestPolicy</code> <i>are</i> included in origin requests.</p>
     * </li> <li> <p> <code>whitelist</code> – The cookies in viewer requests that are
     * listed in the <code>CookieNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>allExcept</code> – All cookies in viewer requests that are
     * <i> <b>not</b> </i> listed in the <code>CookieNames</code> type are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline const CachePolicyCookieBehavior& GetCookieBehavior() const{ return m_cookieBehavior; }

    /**
     * <p>Determines whether any cookies in viewer requests are included in the cache
     * key and automatically included in requests that CloudFront sends to the origin.
     * Valid values are:</p> <ul> <li> <p> <code>none</code> – Cookies in viewer
     * requests are not included in the cache key and are not automatically included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in an
     * <code>OriginRequestPolicy</code> <i>are</i> included in origin requests.</p>
     * </li> <li> <p> <code>whitelist</code> – The cookies in viewer requests that are
     * listed in the <code>CookieNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>allExcept</code> – All cookies in viewer requests that are
     * <i> <b>not</b> </i> listed in the <code>CookieNames</code> type are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline bool CookieBehaviorHasBeenSet() const { return m_cookieBehaviorHasBeenSet; }

    /**
     * <p>Determines whether any cookies in viewer requests are included in the cache
     * key and automatically included in requests that CloudFront sends to the origin.
     * Valid values are:</p> <ul> <li> <p> <code>none</code> – Cookies in viewer
     * requests are not included in the cache key and are not automatically included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in an
     * <code>OriginRequestPolicy</code> <i>are</i> included in origin requests.</p>
     * </li> <li> <p> <code>whitelist</code> – The cookies in viewer requests that are
     * listed in the <code>CookieNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>allExcept</code> – All cookies in viewer requests that are
     * <i> <b>not</b> </i> listed in the <code>CookieNames</code> type are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline void SetCookieBehavior(const CachePolicyCookieBehavior& value) { m_cookieBehaviorHasBeenSet = true; m_cookieBehavior = value; }

    /**
     * <p>Determines whether any cookies in viewer requests are included in the cache
     * key and automatically included in requests that CloudFront sends to the origin.
     * Valid values are:</p> <ul> <li> <p> <code>none</code> – Cookies in viewer
     * requests are not included in the cache key and are not automatically included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in an
     * <code>OriginRequestPolicy</code> <i>are</i> included in origin requests.</p>
     * </li> <li> <p> <code>whitelist</code> – The cookies in viewer requests that are
     * listed in the <code>CookieNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>allExcept</code> – All cookies in viewer requests that are
     * <i> <b>not</b> </i> listed in the <code>CookieNames</code> type are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline void SetCookieBehavior(CachePolicyCookieBehavior&& value) { m_cookieBehaviorHasBeenSet = true; m_cookieBehavior = std::move(value); }

    /**
     * <p>Determines whether any cookies in viewer requests are included in the cache
     * key and automatically included in requests that CloudFront sends to the origin.
     * Valid values are:</p> <ul> <li> <p> <code>none</code> – Cookies in viewer
     * requests are not included in the cache key and are not automatically included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in an
     * <code>OriginRequestPolicy</code> <i>are</i> included in origin requests.</p>
     * </li> <li> <p> <code>whitelist</code> – The cookies in viewer requests that are
     * listed in the <code>CookieNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>allExcept</code> – All cookies in viewer requests that are
     * <i> <b>not</b> </i> listed in the <code>CookieNames</code> type are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline CachePolicyCookiesConfig& WithCookieBehavior(const CachePolicyCookieBehavior& value) { SetCookieBehavior(value); return *this;}

    /**
     * <p>Determines whether any cookies in viewer requests are included in the cache
     * key and automatically included in requests that CloudFront sends to the origin.
     * Valid values are:</p> <ul> <li> <p> <code>none</code> – Cookies in viewer
     * requests are not included in the cache key and are not automatically included in
     * requests that CloudFront sends to the origin. Even when this field is set to
     * <code>none</code>, any cookies that are listed in an
     * <code>OriginRequestPolicy</code> <i>are</i> included in origin requests.</p>
     * </li> <li> <p> <code>whitelist</code> – The cookies in viewer requests that are
     * listed in the <code>CookieNames</code> type are included in the cache key and
     * automatically included in requests that CloudFront sends to the origin.</p>
     * </li> <li> <p> <code>allExcept</code> – All cookies in viewer requests that are
     * <i> <b>not</b> </i> listed in the <code>CookieNames</code> type are included in
     * the cache key and automatically included in requests that CloudFront sends to
     * the origin.</p> </li> <li> <p> <code>all</code> – All cookies in viewer requests
     * are included in the cache key and are automatically included in requests that
     * CloudFront sends to the origin.</p> </li> </ul>
     */
    inline CachePolicyCookiesConfig& WithCookieBehavior(CachePolicyCookieBehavior&& value) { SetCookieBehavior(std::move(value)); return *this;}


    
    inline const CookieNames& GetCookies() const{ return m_cookies; }

    
    inline bool CookiesHasBeenSet() const { return m_cookiesHasBeenSet; }

    
    inline void SetCookies(const CookieNames& value) { m_cookiesHasBeenSet = true; m_cookies = value; }

    
    inline void SetCookies(CookieNames&& value) { m_cookiesHasBeenSet = true; m_cookies = std::move(value); }

    
    inline CachePolicyCookiesConfig& WithCookies(const CookieNames& value) { SetCookies(value); return *this;}

    
    inline CachePolicyCookiesConfig& WithCookies(CookieNames&& value) { SetCookies(std::move(value)); return *this;}

  private:

    CachePolicyCookieBehavior m_cookieBehavior;
    bool m_cookieBehaviorHasBeenSet = false;

    CookieNames m_cookies;
    bool m_cookiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
