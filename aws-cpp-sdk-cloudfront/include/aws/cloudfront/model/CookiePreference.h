/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A complex type that specifies whether you want CloudFront to forward cookies
   * to the origin and, if so, which ones. For more information about forwarding
   * cookies to the origin, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">Caching
   * Content Based on Cookies</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CookiePreference">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CookiePreference
  {
  public:
    CookiePreference();
    CookiePreference(const Aws::Utils::Xml::XmlNode& xmlNode);
    CookiePreference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element. </p>
     */
    inline const ItemSelection& GetForward() const{ return m_forward; }

    /**
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element. </p>
     */
    inline bool ForwardHasBeenSet() const { return m_forwardHasBeenSet; }

    /**
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element. </p>
     */
    inline void SetForward(const ItemSelection& value) { m_forwardHasBeenSet = true; m_forward = value; }

    /**
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element. </p>
     */
    inline void SetForward(ItemSelection&& value) { m_forwardHasBeenSet = true; m_forward = std::move(value); }

    /**
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element. </p>
     */
    inline CookiePreference& WithForward(const ItemSelection& value) { SetForward(value); return *this;}

    /**
     * <p>Specifies which cookies to forward to the origin for this cache behavior:
     * all, none, or the list of cookies specified in the <code>WhitelistedNames</code>
     * complex type.</p> <p>Amazon S3 doesn't process cookies. When the cache behavior
     * is forwarding requests to an Amazon S3 origin, specify none for the
     * <code>Forward</code> element. </p>
     */
    inline CookiePreference& WithForward(ItemSelection&& value) { SetForward(std::move(value)); return *this;}


    /**
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward:</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or none for the value of <code>Forward</code>, omit
     * <code>WhitelistedNames</code>. If you change the value of <code>Forward</code>
     * from <code>whitelist</code> to all or none and you don't delete the
     * <code>WhitelistedNames</code> element and its child elements, CloudFront deletes
     * them automatically.</p> <p>For the current limit on the number of cookie names
     * that you can whitelist for each cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const CookieNames& GetWhitelistedNames() const{ return m_whitelistedNames; }

    /**
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward:</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or none for the value of <code>Forward</code>, omit
     * <code>WhitelistedNames</code>. If you change the value of <code>Forward</code>
     * from <code>whitelist</code> to all or none and you don't delete the
     * <code>WhitelistedNames</code> element and its child elements, CloudFront deletes
     * them automatically.</p> <p>For the current limit on the number of cookie names
     * that you can whitelist for each cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool WhitelistedNamesHasBeenSet() const { return m_whitelistedNamesHasBeenSet; }

    /**
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward:</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or none for the value of <code>Forward</code>, omit
     * <code>WhitelistedNames</code>. If you change the value of <code>Forward</code>
     * from <code>whitelist</code> to all or none and you don't delete the
     * <code>WhitelistedNames</code> element and its child elements, CloudFront deletes
     * them automatically.</p> <p>For the current limit on the number of cookie names
     * that you can whitelist for each cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetWhitelistedNames(const CookieNames& value) { m_whitelistedNamesHasBeenSet = true; m_whitelistedNames = value; }

    /**
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward:</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or none for the value of <code>Forward</code>, omit
     * <code>WhitelistedNames</code>. If you change the value of <code>Forward</code>
     * from <code>whitelist</code> to all or none and you don't delete the
     * <code>WhitelistedNames</code> element and its child elements, CloudFront deletes
     * them automatically.</p> <p>For the current limit on the number of cookie names
     * that you can whitelist for each cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetWhitelistedNames(CookieNames&& value) { m_whitelistedNamesHasBeenSet = true; m_whitelistedNames = std::move(value); }

    /**
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward:</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or none for the value of <code>Forward</code>, omit
     * <code>WhitelistedNames</code>. If you change the value of <code>Forward</code>
     * from <code>whitelist</code> to all or none and you don't delete the
     * <code>WhitelistedNames</code> element and its child elements, CloudFront deletes
     * them automatically.</p> <p>For the current limit on the number of cookie names
     * that you can whitelist for each cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p>
     */
    inline CookiePreference& WithWhitelistedNames(const CookieNames& value) { SetWhitelistedNames(value); return *this;}

    /**
     * <p>Required if you specify <code>whitelist</code> for the value of
     * <code>Forward:</code>. A complex type that specifies how many different cookies
     * you want CloudFront to forward to the origin for this cache behavior and, if you
     * want to forward selected cookies, the names of those cookies.</p> <p>If you
     * specify <code>all</code> or none for the value of <code>Forward</code>, omit
     * <code>WhitelistedNames</code>. If you change the value of <code>Forward</code>
     * from <code>whitelist</code> to all or none and you don't delete the
     * <code>WhitelistedNames</code> element and its child elements, CloudFront deletes
     * them automatically.</p> <p>For the current limit on the number of cookie names
     * that you can whitelist for each cache behavior, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/xrefaws_service_limits.html#limits_cloudfront">
     * CloudFront Limits</a> in the <i>AWS General Reference</i>.</p>
     */
    inline CookiePreference& WithWhitelistedNames(CookieNames&& value) { SetWhitelistedNames(std::move(value)); return *this;}

  private:

    ItemSelection m_forward;
    bool m_forwardHasBeenSet;

    CookieNames m_whitelistedNames;
    bool m_whitelistedNamesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
