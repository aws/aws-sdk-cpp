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
#include <aws/cloudfront/model/CookiePreference.h>
#include <aws/cloudfront/model/Headers.h>
#include <aws/cloudfront/model/QueryStringCacheKeys.h>
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
   * <p>A complex type that specifies how CloudFront handles query strings and
   * cookies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ForwardedValues">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ForwardedValues
  {
  public:
    ForwardedValues();
    ForwardedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    ForwardedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior and cache based on the query string
     * parameters. CloudFront behavior depends on the value of <code>QueryString</code>
     * and on the values that you specify for <code>QueryStringCacheKeys</code>, if
     * any:</p> <p>If you specify true for <code>QueryString</code> and you don't
     * specify any values for <code>QueryStringCacheKeys</code>, CloudFront forwards
     * all query string parameters to the origin and caches based on all query string
     * parameters. Depending on how many query string parameters and values you have,
     * this can adversely affect performance because CloudFront must forward more
     * requests to the origin.</p> <p>If you specify true for <code>QueryString</code>
     * and you specify one or more values for <code>QueryStringCacheKeys</code>,
     * CloudFront forwards all query string parameters to the origin, but it only
     * caches based on the query string parameters that you specify.</p> <p>If you
     * specify false for <code>QueryString</code>, CloudFront doesn't forward any query
     * string parameters to the origin, and doesn't cache based on query string
     * parameters.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/QueryStringParameters.html">Configuring
     * CloudFront to Cache Based on Query String Parameters</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline bool GetQueryString() const{ return m_queryString; }

    /**
     * <p>Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior and cache based on the query string
     * parameters. CloudFront behavior depends on the value of <code>QueryString</code>
     * and on the values that you specify for <code>QueryStringCacheKeys</code>, if
     * any:</p> <p>If you specify true for <code>QueryString</code> and you don't
     * specify any values for <code>QueryStringCacheKeys</code>, CloudFront forwards
     * all query string parameters to the origin and caches based on all query string
     * parameters. Depending on how many query string parameters and values you have,
     * this can adversely affect performance because CloudFront must forward more
     * requests to the origin.</p> <p>If you specify true for <code>QueryString</code>
     * and you specify one or more values for <code>QueryStringCacheKeys</code>,
     * CloudFront forwards all query string parameters to the origin, but it only
     * caches based on the query string parameters that you specify.</p> <p>If you
     * specify false for <code>QueryString</code>, CloudFront doesn't forward any query
     * string parameters to the origin, and doesn't cache based on query string
     * parameters.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/QueryStringParameters.html">Configuring
     * CloudFront to Cache Based on Query String Parameters</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior and cache based on the query string
     * parameters. CloudFront behavior depends on the value of <code>QueryString</code>
     * and on the values that you specify for <code>QueryStringCacheKeys</code>, if
     * any:</p> <p>If you specify true for <code>QueryString</code> and you don't
     * specify any values for <code>QueryStringCacheKeys</code>, CloudFront forwards
     * all query string parameters to the origin and caches based on all query string
     * parameters. Depending on how many query string parameters and values you have,
     * this can adversely affect performance because CloudFront must forward more
     * requests to the origin.</p> <p>If you specify true for <code>QueryString</code>
     * and you specify one or more values for <code>QueryStringCacheKeys</code>,
     * CloudFront forwards all query string parameters to the origin, but it only
     * caches based on the query string parameters that you specify.</p> <p>If you
     * specify false for <code>QueryString</code>, CloudFront doesn't forward any query
     * string parameters to the origin, and doesn't cache based on query string
     * parameters.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/QueryStringParameters.html">Configuring
     * CloudFront to Cache Based on Query String Parameters</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline void SetQueryString(bool value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>Indicates whether you want CloudFront to forward query strings to the origin
     * that is associated with this cache behavior and cache based on the query string
     * parameters. CloudFront behavior depends on the value of <code>QueryString</code>
     * and on the values that you specify for <code>QueryStringCacheKeys</code>, if
     * any:</p> <p>If you specify true for <code>QueryString</code> and you don't
     * specify any values for <code>QueryStringCacheKeys</code>, CloudFront forwards
     * all query string parameters to the origin and caches based on all query string
     * parameters. Depending on how many query string parameters and values you have,
     * this can adversely affect performance because CloudFront must forward more
     * requests to the origin.</p> <p>If you specify true for <code>QueryString</code>
     * and you specify one or more values for <code>QueryStringCacheKeys</code>,
     * CloudFront forwards all query string parameters to the origin, but it only
     * caches based on the query string parameters that you specify.</p> <p>If you
     * specify false for <code>QueryString</code>, CloudFront doesn't forward any query
     * string parameters to the origin, and doesn't cache based on query string
     * parameters.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/QueryStringParameters.html">Configuring
     * CloudFront to Cache Based on Query String Parameters</a> in the <i>Amazon
     * CloudFront Developer Guide</i>.</p>
     */
    inline ForwardedValues& WithQueryString(bool value) { SetQueryString(value); return *this;}


    /**
     * <p>A complex type that specifies whether you want CloudFront to forward cookies
     * to the origin and, if so, which ones. For more information about forwarding
     * cookies to the origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">How
     * CloudFront Forwards, Caches, and Logs Cookies</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline const CookiePreference& GetCookies() const{ return m_cookies; }

    /**
     * <p>A complex type that specifies whether you want CloudFront to forward cookies
     * to the origin and, if so, which ones. For more information about forwarding
     * cookies to the origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">How
     * CloudFront Forwards, Caches, and Logs Cookies</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline bool CookiesHasBeenSet() const { return m_cookiesHasBeenSet; }

    /**
     * <p>A complex type that specifies whether you want CloudFront to forward cookies
     * to the origin and, if so, which ones. For more information about forwarding
     * cookies to the origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">How
     * CloudFront Forwards, Caches, and Logs Cookies</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetCookies(const CookiePreference& value) { m_cookiesHasBeenSet = true; m_cookies = value; }

    /**
     * <p>A complex type that specifies whether you want CloudFront to forward cookies
     * to the origin and, if so, which ones. For more information about forwarding
     * cookies to the origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">How
     * CloudFront Forwards, Caches, and Logs Cookies</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetCookies(CookiePreference&& value) { m_cookiesHasBeenSet = true; m_cookies = std::move(value); }

    /**
     * <p>A complex type that specifies whether you want CloudFront to forward cookies
     * to the origin and, if so, which ones. For more information about forwarding
     * cookies to the origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">How
     * CloudFront Forwards, Caches, and Logs Cookies</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline ForwardedValues& WithCookies(const CookiePreference& value) { SetCookies(value); return *this;}

    /**
     * <p>A complex type that specifies whether you want CloudFront to forward cookies
     * to the origin and, if so, which ones. For more information about forwarding
     * cookies to the origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/Cookies.html">How
     * CloudFront Forwards, Caches, and Logs Cookies</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline ForwardedValues& WithCookies(CookiePreference&& value) { SetCookies(std::move(value)); return *this;}


    /**
     * <p>A complex type that specifies the <code>Headers</code>, if any, that you want
     * CloudFront to forward to the origin for this cache behavior (whitelisted
     * headers). For the headers that you specify, CloudFront also caches separate
     * versions of a specified object that is based on the header values in viewer
     * requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
     * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline const Headers& GetHeaders() const{ return m_headers; }

    /**
     * <p>A complex type that specifies the <code>Headers</code>, if any, that you want
     * CloudFront to forward to the origin for this cache behavior (whitelisted
     * headers). For the headers that you specify, CloudFront also caches separate
     * versions of a specified object that is based on the header values in viewer
     * requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
     * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>A complex type that specifies the <code>Headers</code>, if any, that you want
     * CloudFront to forward to the origin for this cache behavior (whitelisted
     * headers). For the headers that you specify, CloudFront also caches separate
     * versions of a specified object that is based on the header values in viewer
     * requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
     * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetHeaders(const Headers& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>A complex type that specifies the <code>Headers</code>, if any, that you want
     * CloudFront to forward to the origin for this cache behavior (whitelisted
     * headers). For the headers that you specify, CloudFront also caches separate
     * versions of a specified object that is based on the header values in viewer
     * requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
     * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetHeaders(Headers&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>A complex type that specifies the <code>Headers</code>, if any, that you want
     * CloudFront to forward to the origin for this cache behavior (whitelisted
     * headers). For the headers that you specify, CloudFront also caches separate
     * versions of a specified object that is based on the header values in viewer
     * requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
     * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline ForwardedValues& WithHeaders(const Headers& value) { SetHeaders(value); return *this;}

    /**
     * <p>A complex type that specifies the <code>Headers</code>, if any, that you want
     * CloudFront to forward to the origin for this cache behavior (whitelisted
     * headers). For the headers that you specify, CloudFront also caches separate
     * versions of a specified object that is based on the header values in viewer
     * requests.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">
     * Caching Content Based on Request Headers</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline ForwardedValues& WithHeaders(Headers&& value) { SetHeaders(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about the query string parameters
     * that you want CloudFront to use for caching for this cache behavior.</p>
     */
    inline const QueryStringCacheKeys& GetQueryStringCacheKeys() const{ return m_queryStringCacheKeys; }

    /**
     * <p>A complex type that contains information about the query string parameters
     * that you want CloudFront to use for caching for this cache behavior.</p>
     */
    inline bool QueryStringCacheKeysHasBeenSet() const { return m_queryStringCacheKeysHasBeenSet; }

    /**
     * <p>A complex type that contains information about the query string parameters
     * that you want CloudFront to use for caching for this cache behavior.</p>
     */
    inline void SetQueryStringCacheKeys(const QueryStringCacheKeys& value) { m_queryStringCacheKeysHasBeenSet = true; m_queryStringCacheKeys = value; }

    /**
     * <p>A complex type that contains information about the query string parameters
     * that you want CloudFront to use for caching for this cache behavior.</p>
     */
    inline void SetQueryStringCacheKeys(QueryStringCacheKeys&& value) { m_queryStringCacheKeysHasBeenSet = true; m_queryStringCacheKeys = std::move(value); }

    /**
     * <p>A complex type that contains information about the query string parameters
     * that you want CloudFront to use for caching for this cache behavior.</p>
     */
    inline ForwardedValues& WithQueryStringCacheKeys(const QueryStringCacheKeys& value) { SetQueryStringCacheKeys(value); return *this;}

    /**
     * <p>A complex type that contains information about the query string parameters
     * that you want CloudFront to use for caching for this cache behavior.</p>
     */
    inline ForwardedValues& WithQueryStringCacheKeys(QueryStringCacheKeys&& value) { SetQueryStringCacheKeys(std::move(value)); return *this;}

  private:

    bool m_queryString;
    bool m_queryStringHasBeenSet;

    CookiePreference m_cookies;
    bool m_cookiesHasBeenSet;

    Headers m_headers;
    bool m_headersHasBeenSet;

    QueryStringCacheKeys m_queryStringCacheKeys;
    bool m_queryStringCacheKeysHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
