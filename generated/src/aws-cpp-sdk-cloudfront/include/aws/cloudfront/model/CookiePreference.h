/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ItemSelection.h>
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
   * <p>This field is deprecated. We recommend that you use a cache policy or an
   * origin request policy instead of this field.</p> <p>If you want to include
   * cookies in the cache key, use <code>CookiesConfig</code> in a cache policy. See
   * <code>CachePolicy</code>.</p> <p>If you want to send cookies to the origin but
   * not include them in the cache key, use <code>CookiesConfig</code> in an origin
   * request policy. See <code>OriginRequestPolicy</code>.</p> <p>A complex type that
   * specifies whether you want CloudFront to forward cookies to the origin and, if
   * so, which ones. For more information about forwarding cookies to the origin, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">Caching
   * Content Based on Cookies</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CookiePreference">AWS
   * API Reference</a></p>
   */
  class CookiePreference
  {
  public:
    AWS_CLOUDFRONT_API CookiePreference();
    AWS_CLOUDFRONT_API CookiePreference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CookiePreference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element.</p>
     */
    inline const ItemSelection& GetForward() const{ return m_forward; }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element.</p>
     */
    inline bool ForwardHasBeenSet() const { return m_forwardHasBeenSet; }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element.</p>
     */
    inline void SetForward(const ItemSelection& value) { m_forwardHasBeenSet = true; m_forward = value; }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element.</p>
     */
    inline void SetForward(ItemSelection&& value) { m_forwardHasBeenSet = true; m_forward = std::move(value); }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element.</p>
     */
    inline CookiePreference& WithForward(const ItemSelection& value) { SetForward(value); return *this;}

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element.</p>
     */
    inline CookiePreference& WithForward(ItemSelection&& value) { SetForward(std::move(value)); return *this;}


    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use an origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or <code>none</code> for the value of
     * <code>Forward</code>, omit <code>WhitelistedNames</code>. If you change the
     * value of <code>Forward</code> from <code>whitelist</code> to <code>all</code> or
     * <code>none</code> and you don't delete the <code>WhitelistedNames</code> element
     * and its child elements, CloudFront deletes them automatically.</p> <p>For the
     * current limit on the number of cookie names that you can whitelist for each
     * cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const CookieNames& GetWhitelistedNames() const{ return m_whitelistedNames; }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use an origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or <code>none</code> for the value of
     * <code>Forward</code>, omit <code>WhitelistedNames</code>. If you change the
     * value of <code>Forward</code> from <code>whitelist</code> to <code>all</code> or
     * <code>none</code> and you don't delete the <code>WhitelistedNames</code> element
     * and its child elements, CloudFront deletes them automatically.</p> <p>For the
     * current limit on the number of cookie names that you can whitelist for each
     * cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline bool WhitelistedNamesHasBeenSet() const { return m_whitelistedNamesHasBeenSet; }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use an origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or <code>none</code> for the value of
     * <code>Forward</code>, omit <code>WhitelistedNames</code>. If you change the
     * value of <code>Forward</code> from <code>whitelist</code> to <code>all</code> or
     * <code>none</code> and you don't delete the <code>WhitelistedNames</code> element
     * and its child elements, CloudFront deletes them automatically.</p> <p>For the
     * current limit on the number of cookie names that you can whitelist for each
     * cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetWhitelistedNames(const CookieNames& value) { m_whitelistedNamesHasBeenSet = true; m_whitelistedNames = value; }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use an origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or <code>none</code> for the value of
     * <code>Forward</code>, omit <code>WhitelistedNames</code>. If you change the
     * value of <code>Forward</code> from <code>whitelist</code> to <code>all</code> or
     * <code>none</code> and you don't delete the <code>WhitelistedNames</code> element
     * and its child elements, CloudFront deletes them automatically.</p> <p>For the
     * current limit on the number of cookie names that you can whitelist for each
     * cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetWhitelistedNames(CookieNames&& value) { m_whitelistedNamesHasBeenSet = true; m_whitelistedNames = std::move(value); }

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use an origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or <code>none</code> for the value of
     * <code>Forward</code>, omit <code>WhitelistedNames</code>. If you change the
     * value of <code>Forward</code> from <code>whitelist</code> to <code>all</code> or
     * <code>none</code> and you don't delete the <code>WhitelistedNames</code> element
     * and its child elements, CloudFront deletes them automatically.</p> <p>For the
     * current limit on the number of cookie names that you can whitelist for each
     * cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline CookiePreference& WithWhitelistedNames(const CookieNames& value) { SetWhitelistedNames(value); return *this;}

    /**
     * <p>This field is deprecated. We recommend that you use a cache policy or an
     * origin request policy instead of this field.</p> <p>If you want to include
     * cookies in the cache key, use a cache policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html#cache-key-create-cache-policy">Creating
     * cache policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>If
     * you want to send cookies to the origin but not include them in the cache key,
     * use an origin request policy. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html#origin-request-create-origin-request-policy">Creating
     * origin request policies</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or <code>none</code> for the value of
     * <code>Forward</code>, omit <code>WhitelistedNames</code>. If you change the
     * value of <code>Forward</code> from <code>whitelist</code> to <code>all</code> or
     * <code>none</code> and you don't delete the <code>WhitelistedNames</code> element
     * and its child elements, CloudFront deletes them automatically.</p> <p>For the
     * current limit on the number of cookie names that you can whitelist for each
     * cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline CookiePreference& WithWhitelistedNames(CookieNames&& value) { SetWhitelistedNames(std::move(value)); return *this;}

  private:

    ItemSelection m_forward;
    bool m_forwardHasBeenSet = false;

    CookieNames m_whitelistedNames;
    bool m_whitelistedNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
