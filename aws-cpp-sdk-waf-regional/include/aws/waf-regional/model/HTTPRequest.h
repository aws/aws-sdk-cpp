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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/HTTPHeader.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>The response from a <a>GetSampledRequests</a> request includes an
   * <code>HTTPRequest</code> complex type that appears as <code>Request</code> in
   * the response syntax. <code>HTTPRequest</code> contains information about one of
   * the web requests that were returned by <code>GetSampledRequests</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/HTTPRequest">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API HTTPRequest
  {
  public:
    HTTPRequest();
    HTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    HTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline const Aws::String& GetClientIP() const{ return m_clientIP; }

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline bool ClientIPHasBeenSet() const { return m_clientIPHasBeenSet; }

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline void SetClientIP(const Aws::String& value) { m_clientIPHasBeenSet = true; m_clientIP = value; }

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline void SetClientIP(Aws::String&& value) { m_clientIPHasBeenSet = true; m_clientIP = std::move(value); }

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline void SetClientIP(const char* value) { m_clientIPHasBeenSet = true; m_clientIP.assign(value); }

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline HTTPRequest& WithClientIP(const Aws::String& value) { SetClientIP(value); return *this;}

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline HTTPRequest& WithClientIP(Aws::String&& value) { SetClientIP(std::move(value)); return *this;}

    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline HTTPRequest& WithClientIP(const char* value) { SetClientIP(value); return *this;}


    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline HTTPRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline HTTPRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline HTTPRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline HTTPRequest& WithURI(const Aws::String& value) { SetURI(value); return *this;}

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline HTTPRequest& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}

    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline HTTPRequest& WithURI(const char* value) { SetURI(value); return *this;}


    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline HTTPRequest& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline HTTPRequest& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}

    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline HTTPRequest& WithMethod(const char* value) { SetMethod(value); return *this;}


    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline const Aws::String& GetHTTPVersion() const{ return m_hTTPVersion; }

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline bool HTTPVersionHasBeenSet() const { return m_hTTPVersionHasBeenSet; }

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline void SetHTTPVersion(const Aws::String& value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion = value; }

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline void SetHTTPVersion(Aws::String&& value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion = std::move(value); }

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline void SetHTTPVersion(const char* value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion.assign(value); }

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline HTTPRequest& WithHTTPVersion(const Aws::String& value) { SetHTTPVersion(value); return *this;}

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline HTTPRequest& WithHTTPVersion(Aws::String&& value) { SetHTTPVersion(std::move(value)); return *this;}

    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline HTTPRequest& WithHTTPVersion(const char* value) { SetHTTPVersion(value); return *this;}


    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline const Aws::Vector<HTTPHeader>& GetHeaders() const{ return m_headers; }

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline void SetHeaders(const Aws::Vector<HTTPHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline void SetHeaders(Aws::Vector<HTTPHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline HTTPRequest& WithHeaders(const Aws::Vector<HTTPHeader>& value) { SetHeaders(value); return *this;}

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline HTTPRequest& WithHeaders(Aws::Vector<HTTPHeader>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline HTTPRequest& AddHeaders(const HTTPHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }

    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline HTTPRequest& AddHeaders(HTTPHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientIP;
    bool m_clientIPHasBeenSet;

    Aws::String m_country;
    bool m_countryHasBeenSet;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet;

    Aws::String m_method;
    bool m_methodHasBeenSet;

    Aws::String m_hTTPVersion;
    bool m_hTTPVersionHasBeenSet;

    Aws::Vector<HTTPHeader> m_headers;
    bool m_headersHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
