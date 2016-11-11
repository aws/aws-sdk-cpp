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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/MatchFieldType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>Specifies where in a web request to look for <code>TargetString</code>.</p>
   */
  class AWS_WAF_API FieldToMatch
  {
  public:
    FieldToMatch();
    FieldToMatch(const Aws::Utils::Json::JsonValue& jsonValue);
    FieldToMatch& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The part of the web request that you want AWS WAF to search for a specified
     * string. Parts of a request that you can search include the following:</p> <ul>
     * <li> <p> <code>HEADER</code>: A specified request header, for example, the value
     * of the <code>User-Agent</code> or <code>Referer</code> header. If you choose
     * <code>HEADER</code> for the type, specify the name of the header in
     * <code>Data</code>.</p> </li> <li> <p> <code>METHOD</code>: The HTTP method,
     * which indicated the type of operation that the request is asking the origin to
     * perform. Amazon CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: A query string, which is the part of a URL that
     * appears after a <code>?</code> character, if any.</p> </li> <li> <p>
     * <code>URI</code>: The part of a web request that identifies a resource, for
     * example, <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p>
     * <code>BODY</code>: The part of a request that contains any additional data that
     * you want to send to your web server as the HTTP request body, such as data from
     * a form. The request body immediately follows the request headers. Note that only
     * the first <code>8192</code> bytes of the request body are forwarded to AWS WAF
     * for inspection. To allow or block requests based on the length of the body, you
     * can create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> </ul>
     */
    inline const MatchFieldType& GetType() const{ return m_type; }

    /**
     * <p>The part of the web request that you want AWS WAF to search for a specified
     * string. Parts of a request that you can search include the following:</p> <ul>
     * <li> <p> <code>HEADER</code>: A specified request header, for example, the value
     * of the <code>User-Agent</code> or <code>Referer</code> header. If you choose
     * <code>HEADER</code> for the type, specify the name of the header in
     * <code>Data</code>.</p> </li> <li> <p> <code>METHOD</code>: The HTTP method,
     * which indicated the type of operation that the request is asking the origin to
     * perform. Amazon CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: A query string, which is the part of a URL that
     * appears after a <code>?</code> character, if any.</p> </li> <li> <p>
     * <code>URI</code>: The part of a web request that identifies a resource, for
     * example, <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p>
     * <code>BODY</code>: The part of a request that contains any additional data that
     * you want to send to your web server as the HTTP request body, such as data from
     * a form. The request body immediately follows the request headers. Note that only
     * the first <code>8192</code> bytes of the request body are forwarded to AWS WAF
     * for inspection. To allow or block requests based on the length of the body, you
     * can create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> </ul>
     */
    inline void SetType(const MatchFieldType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The part of the web request that you want AWS WAF to search for a specified
     * string. Parts of a request that you can search include the following:</p> <ul>
     * <li> <p> <code>HEADER</code>: A specified request header, for example, the value
     * of the <code>User-Agent</code> or <code>Referer</code> header. If you choose
     * <code>HEADER</code> for the type, specify the name of the header in
     * <code>Data</code>.</p> </li> <li> <p> <code>METHOD</code>: The HTTP method,
     * which indicated the type of operation that the request is asking the origin to
     * perform. Amazon CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: A query string, which is the part of a URL that
     * appears after a <code>?</code> character, if any.</p> </li> <li> <p>
     * <code>URI</code>: The part of a web request that identifies a resource, for
     * example, <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p>
     * <code>BODY</code>: The part of a request that contains any additional data that
     * you want to send to your web server as the HTTP request body, such as data from
     * a form. The request body immediately follows the request headers. Note that only
     * the first <code>8192</code> bytes of the request body are forwarded to AWS WAF
     * for inspection. To allow or block requests based on the length of the body, you
     * can create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> </ul>
     */
    inline void SetType(MatchFieldType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The part of the web request that you want AWS WAF to search for a specified
     * string. Parts of a request that you can search include the following:</p> <ul>
     * <li> <p> <code>HEADER</code>: A specified request header, for example, the value
     * of the <code>User-Agent</code> or <code>Referer</code> header. If you choose
     * <code>HEADER</code> for the type, specify the name of the header in
     * <code>Data</code>.</p> </li> <li> <p> <code>METHOD</code>: The HTTP method,
     * which indicated the type of operation that the request is asking the origin to
     * perform. Amazon CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: A query string, which is the part of a URL that
     * appears after a <code>?</code> character, if any.</p> </li> <li> <p>
     * <code>URI</code>: The part of a web request that identifies a resource, for
     * example, <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p>
     * <code>BODY</code>: The part of a request that contains any additional data that
     * you want to send to your web server as the HTTP request body, such as data from
     * a form. The request body immediately follows the request headers. Note that only
     * the first <code>8192</code> bytes of the request body are forwarded to AWS WAF
     * for inspection. To allow or block requests based on the length of the body, you
     * can create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> </ul>
     */
    inline FieldToMatch& WithType(const MatchFieldType& value) { SetType(value); return *this;}

    /**
     * <p>The part of the web request that you want AWS WAF to search for a specified
     * string. Parts of a request that you can search include the following:</p> <ul>
     * <li> <p> <code>HEADER</code>: A specified request header, for example, the value
     * of the <code>User-Agent</code> or <code>Referer</code> header. If you choose
     * <code>HEADER</code> for the type, specify the name of the header in
     * <code>Data</code>.</p> </li> <li> <p> <code>METHOD</code>: The HTTP method,
     * which indicated the type of operation that the request is asking the origin to
     * perform. Amazon CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: A query string, which is the part of a URL that
     * appears after a <code>?</code> character, if any.</p> </li> <li> <p>
     * <code>URI</code>: The part of a web request that identifies a resource, for
     * example, <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p>
     * <code>BODY</code>: The part of a request that contains any additional data that
     * you want to send to your web server as the HTTP request body, such as data from
     * a form. The request body immediately follows the request headers. Note that only
     * the first <code>8192</code> bytes of the request body are forwarded to AWS WAF
     * for inspection. To allow or block requests based on the length of the body, you
     * can create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> </ul>
     */
    inline FieldToMatch& WithType(MatchFieldType&& value) { SetType(value); return *this;}

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline FieldToMatch& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline FieldToMatch& WithData(Aws::String&& value) { SetData(value); return *this;}

    /**
     * <p>When the value of <code>Type</code> is <code>HEADER</code>, enter the name of
     * the header that you want AWS WAF to search, for example, <code>User-Agent</code>
     * or <code>Referer</code>. If the value of <code>Type</code> is any other value,
     * omit <code>Data</code>.</p> <p>The name of the header is not case sensitive.</p>
     */
    inline FieldToMatch& WithData(const char* value) { SetData(value); return *this;}

  private:
    MatchFieldType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
