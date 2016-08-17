/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * A complex type that specifies the cookie preferences associated with this cache
   * behavior.
   */
  class AWS_CLOUDFRONT_API CookiePreference
  {
  public:
    CookiePreference();
    CookiePreference(const Aws::Utils::Xml::XmlNode& xmlNode);
    CookiePreference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Use this element to specify whether you want CloudFront to forward cookies to
     * the origin that is associated with this cache behavior. You can specify all,
     * none or whitelist. If you choose All, CloudFront forwards all cookies regardless
     * of how many your application uses.
     */
    inline const ItemSelection& GetForward() const{ return m_forward; }

    /**
     * Use this element to specify whether you want CloudFront to forward cookies to
     * the origin that is associated with this cache behavior. You can specify all,
     * none or whitelist. If you choose All, CloudFront forwards all cookies regardless
     * of how many your application uses.
     */
    inline void SetForward(const ItemSelection& value) { m_forwardHasBeenSet = true; m_forward = value; }

    /**
     * Use this element to specify whether you want CloudFront to forward cookies to
     * the origin that is associated with this cache behavior. You can specify all,
     * none or whitelist. If you choose All, CloudFront forwards all cookies regardless
     * of how many your application uses.
     */
    inline void SetForward(ItemSelection&& value) { m_forwardHasBeenSet = true; m_forward = value; }

    /**
     * Use this element to specify whether you want CloudFront to forward cookies to
     * the origin that is associated with this cache behavior. You can specify all,
     * none or whitelist. If you choose All, CloudFront forwards all cookies regardless
     * of how many your application uses.
     */
    inline CookiePreference& WithForward(const ItemSelection& value) { SetForward(value); return *this;}

    /**
     * Use this element to specify whether you want CloudFront to forward cookies to
     * the origin that is associated with this cache behavior. You can specify all,
     * none or whitelist. If you choose All, CloudFront forwards all cookies regardless
     * of how many your application uses.
     */
    inline CookiePreference& WithForward(ItemSelection&& value) { SetForward(value); return *this;}

    /**
     * A complex type that specifies the whitelisted cookies, if any, that you want
     * CloudFront to forward to your origin that is associated with this cache
     * behavior.
     */
    inline const CookieNames& GetWhitelistedNames() const{ return m_whitelistedNames; }

    /**
     * A complex type that specifies the whitelisted cookies, if any, that you want
     * CloudFront to forward to your origin that is associated with this cache
     * behavior.
     */
    inline void SetWhitelistedNames(const CookieNames& value) { m_whitelistedNamesHasBeenSet = true; m_whitelistedNames = value; }

    /**
     * A complex type that specifies the whitelisted cookies, if any, that you want
     * CloudFront to forward to your origin that is associated with this cache
     * behavior.
     */
    inline void SetWhitelistedNames(CookieNames&& value) { m_whitelistedNamesHasBeenSet = true; m_whitelistedNames = value; }

    /**
     * A complex type that specifies the whitelisted cookies, if any, that you want
     * CloudFront to forward to your origin that is associated with this cache
     * behavior.
     */
    inline CookiePreference& WithWhitelistedNames(const CookieNames& value) { SetWhitelistedNames(value); return *this;}

    /**
     * A complex type that specifies the whitelisted cookies, if any, that you want
     * CloudFront to forward to your origin that is associated with this cache
     * behavior.
     */
    inline CookiePreference& WithWhitelistedNames(CookieNames&& value) { SetWhitelistedNames(value); return *this;}

  private:
    ItemSelection m_forward;
    bool m_forwardHasBeenSet;
    CookieNames m_whitelistedNames;
    bool m_whitelistedNamesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
