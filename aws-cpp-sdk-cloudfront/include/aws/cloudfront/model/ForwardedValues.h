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
#include <aws/cloudfront/model/CookiePreference.h>
#include <aws/cloudfront/model/Headers.h>

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
   * A complex type that specifies how CloudFront handles query strings, cookies and
   * headers.
   */
  class AWS_CLOUDFRONT_API ForwardedValues
  {
  public:
    ForwardedValues();
    ForwardedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    ForwardedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior. If so, specify true; if not,
     * specify false.
     */
    inline bool GetQueryString() const{ return m_queryString; }

    /**
     * Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior. If so, specify true; if not,
     * specify false.
     */
    inline void SetQueryString(bool value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior. If so, specify true; if not,
     * specify false.
     */
    inline ForwardedValues& WithQueryString(bool value) { SetQueryString(value); return *this;}

    /**
     * A complex type that specifies how CloudFront handles cookies.
     */
    inline const CookiePreference& GetCookies() const{ return m_cookies; }

    /**
     * A complex type that specifies how CloudFront handles cookies.
     */
    inline void SetCookies(const CookiePreference& value) { m_cookiesHasBeenSet = true; m_cookies = value; }

    /**
     * A complex type that specifies how CloudFront handles cookies.
     */
    inline void SetCookies(CookiePreference&& value) { m_cookiesHasBeenSet = true; m_cookies = value; }

    /**
     * A complex type that specifies how CloudFront handles cookies.
     */
    inline ForwardedValues& WithCookies(const CookiePreference& value) { SetCookies(value); return *this;}

    /**
     * A complex type that specifies how CloudFront handles cookies.
     */
    inline ForwardedValues& WithCookies(CookiePreference&& value) { SetCookies(value); return *this;}

    /**
     * A complex type that specifies the Headers, if any, that you want CloudFront to
     * vary upon for this cache behavior.
     */
    inline const Headers& GetHeaders() const{ return m_headers; }

    /**
     * A complex type that specifies the Headers, if any, that you want CloudFront to
     * vary upon for this cache behavior.
     */
    inline void SetHeaders(const Headers& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * A complex type that specifies the Headers, if any, that you want CloudFront to
     * vary upon for this cache behavior.
     */
    inline void SetHeaders(Headers&& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * A complex type that specifies the Headers, if any, that you want CloudFront to
     * vary upon for this cache behavior.
     */
    inline ForwardedValues& WithHeaders(const Headers& value) { SetHeaders(value); return *this;}

    /**
     * A complex type that specifies the Headers, if any, that you want CloudFront to
     * vary upon for this cache behavior.
     */
    inline ForwardedValues& WithHeaders(Headers&& value) { SetHeaders(value); return *this;}

  private:
    bool m_queryString;
    bool m_queryStringHasBeenSet;
    CookiePreference m_cookies;
    bool m_cookiesHasBeenSet;
    Headers m_headers;
    bool m_headersHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
