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
#include <aws/waf-regional/model/FieldToMatch.h>
#include <aws/core/utils/Array.h>
#include <aws/waf-regional/model/TextTransformation.h>
#include <aws/waf-regional/model/PositionalConstraint.h>
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
   * <p>The bytes (typically a string that corresponds with ASCII characters) that
   * you want AWS WAF to search for in web requests, the location in requests that
   * you want AWS WAF to search, and other settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ByteMatchTuple">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API ByteMatchTuple
  {
  public:
    ByteMatchTuple();
    ByteMatchTuple(Aws::Utils::Json::JsonView jsonValue);
    ByteMatchTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The part of a web request that you want AWS WAF to search, such as a
     * specified header or a query string. For more information, see
     * <a>FieldToMatch</a>.</p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>The part of a web request that you want AWS WAF to search, such as a
     * specified header or a query string. For more information, see
     * <a>FieldToMatch</a>.</p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>The part of a web request that you want AWS WAF to search, such as a
     * specified header or a query string. For more information, see
     * <a>FieldToMatch</a>.</p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>The part of a web request that you want AWS WAF to search, such as a
     * specified header or a query string. For more information, see
     * <a>FieldToMatch</a>.</p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>The part of a web request that you want AWS WAF to search, such as a
     * specified header or a query string. For more information, see
     * <a>FieldToMatch</a>.</p>
     */
    inline ByteMatchTuple& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>The part of a web request that you want AWS WAF to search, such as a
     * specified header or a query string. For more information, see
     * <a>FieldToMatch</a>.</p>
     */
    inline ByteMatchTuple& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>The value that you want AWS WAF to search for. AWS WAF searches for the
     * specified string in the part of web requests that you specified in
     * <code>FieldToMatch</code>. The maximum length of the value is 50 bytes.</p>
     * <p>Valid values depend on the values that you specified for
     * <code>FieldToMatch</code>:</p> <ul> <li> <p> <code>HEADER</code>: The value that
     * you want AWS WAF to search for in the request header that you specified in
     * <a>FieldToMatch</a>, for example, the value of the <code>User-Agent</code> or
     * <code>Referer</code> header.</p> </li> <li> <p> <code>METHOD</code>: The HTTP
     * method, which indicates the type of operation specified in the request.
     * CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: The value that you want AWS WAF to search for in the
     * query string, which is the part of a URL that appears after a <code>?</code>
     * character.</p> </li> <li> <p> <code>URI</code>: The value that you want AWS WAF
     * to search for in the part of a URL that identifies a resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p> <code>BODY</code>: The
     * part of a request that contains any additional data that you want to send to
     * your web server as the HTTP request body, such as data from a form. The request
     * body immediately follows the request headers. Note that only the first
     * <code>8192</code> bytes of the request body are forwarded to AWS WAF for
     * inspection. To allow or block requests based on the length of the body, you can
     * create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * instead of inspecting a single parameter, AWS WAF inspects all parameters within
     * the query string for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul> <p>If <code>TargetString</code>
     * includes alphabetic characters A-Z and a-z, note that the value is case
     * sensitive.</p> <p> <b>If you're using the AWS WAF API</b> </p> <p>Specify a
     * base64-encoded version of the value. The maximum length of the value before you
     * base64-encode it is 50 bytes.</p> <p>For example, suppose the value of
     * <code>Type</code> is <code>HEADER</code> and the value of <code>Data</code> is
     * <code>User-Agent</code>. If you want to search the <code>User-Agent</code>
     * header for the value <code>BadBot</code>, you base64-encode <code>BadBot</code>
     * using MIME base64-encoding and include the resulting value,
     * <code>QmFkQm90</code>, in the value of <code>TargetString</code>.</p> <p> <b>If
     * you're using the AWS CLI or one of the AWS SDKs</b> </p> <p>The value that you
     * want AWS WAF to search for. The SDK automatically base64 encodes the value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetTargetString() const{ return m_targetString; }

    /**
     * <p>The value that you want AWS WAF to search for. AWS WAF searches for the
     * specified string in the part of web requests that you specified in
     * <code>FieldToMatch</code>. The maximum length of the value is 50 bytes.</p>
     * <p>Valid values depend on the values that you specified for
     * <code>FieldToMatch</code>:</p> <ul> <li> <p> <code>HEADER</code>: The value that
     * you want AWS WAF to search for in the request header that you specified in
     * <a>FieldToMatch</a>, for example, the value of the <code>User-Agent</code> or
     * <code>Referer</code> header.</p> </li> <li> <p> <code>METHOD</code>: The HTTP
     * method, which indicates the type of operation specified in the request.
     * CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: The value that you want AWS WAF to search for in the
     * query string, which is the part of a URL that appears after a <code>?</code>
     * character.</p> </li> <li> <p> <code>URI</code>: The value that you want AWS WAF
     * to search for in the part of a URL that identifies a resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p> <code>BODY</code>: The
     * part of a request that contains any additional data that you want to send to
     * your web server as the HTTP request body, such as data from a form. The request
     * body immediately follows the request headers. Note that only the first
     * <code>8192</code> bytes of the request body are forwarded to AWS WAF for
     * inspection. To allow or block requests based on the length of the body, you can
     * create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * instead of inspecting a single parameter, AWS WAF inspects all parameters within
     * the query string for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul> <p>If <code>TargetString</code>
     * includes alphabetic characters A-Z and a-z, note that the value is case
     * sensitive.</p> <p> <b>If you're using the AWS WAF API</b> </p> <p>Specify a
     * base64-encoded version of the value. The maximum length of the value before you
     * base64-encode it is 50 bytes.</p> <p>For example, suppose the value of
     * <code>Type</code> is <code>HEADER</code> and the value of <code>Data</code> is
     * <code>User-Agent</code>. If you want to search the <code>User-Agent</code>
     * header for the value <code>BadBot</code>, you base64-encode <code>BadBot</code>
     * using MIME base64-encoding and include the resulting value,
     * <code>QmFkQm90</code>, in the value of <code>TargetString</code>.</p> <p> <b>If
     * you're using the AWS CLI or one of the AWS SDKs</b> </p> <p>The value that you
     * want AWS WAF to search for. The SDK automatically base64 encodes the value.</p>
     */
    inline bool TargetStringHasBeenSet() const { return m_targetStringHasBeenSet; }

    /**
     * <p>The value that you want AWS WAF to search for. AWS WAF searches for the
     * specified string in the part of web requests that you specified in
     * <code>FieldToMatch</code>. The maximum length of the value is 50 bytes.</p>
     * <p>Valid values depend on the values that you specified for
     * <code>FieldToMatch</code>:</p> <ul> <li> <p> <code>HEADER</code>: The value that
     * you want AWS WAF to search for in the request header that you specified in
     * <a>FieldToMatch</a>, for example, the value of the <code>User-Agent</code> or
     * <code>Referer</code> header.</p> </li> <li> <p> <code>METHOD</code>: The HTTP
     * method, which indicates the type of operation specified in the request.
     * CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: The value that you want AWS WAF to search for in the
     * query string, which is the part of a URL that appears after a <code>?</code>
     * character.</p> </li> <li> <p> <code>URI</code>: The value that you want AWS WAF
     * to search for in the part of a URL that identifies a resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p> <code>BODY</code>: The
     * part of a request that contains any additional data that you want to send to
     * your web server as the HTTP request body, such as data from a form. The request
     * body immediately follows the request headers. Note that only the first
     * <code>8192</code> bytes of the request body are forwarded to AWS WAF for
     * inspection. To allow or block requests based on the length of the body, you can
     * create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * instead of inspecting a single parameter, AWS WAF inspects all parameters within
     * the query string for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul> <p>If <code>TargetString</code>
     * includes alphabetic characters A-Z and a-z, note that the value is case
     * sensitive.</p> <p> <b>If you're using the AWS WAF API</b> </p> <p>Specify a
     * base64-encoded version of the value. The maximum length of the value before you
     * base64-encode it is 50 bytes.</p> <p>For example, suppose the value of
     * <code>Type</code> is <code>HEADER</code> and the value of <code>Data</code> is
     * <code>User-Agent</code>. If you want to search the <code>User-Agent</code>
     * header for the value <code>BadBot</code>, you base64-encode <code>BadBot</code>
     * using MIME base64-encoding and include the resulting value,
     * <code>QmFkQm90</code>, in the value of <code>TargetString</code>.</p> <p> <b>If
     * you're using the AWS CLI or one of the AWS SDKs</b> </p> <p>The value that you
     * want AWS WAF to search for. The SDK automatically base64 encodes the value.</p>
     */
    inline void SetTargetString(const Aws::Utils::ByteBuffer& value) { m_targetStringHasBeenSet = true; m_targetString = value; }

    /**
     * <p>The value that you want AWS WAF to search for. AWS WAF searches for the
     * specified string in the part of web requests that you specified in
     * <code>FieldToMatch</code>. The maximum length of the value is 50 bytes.</p>
     * <p>Valid values depend on the values that you specified for
     * <code>FieldToMatch</code>:</p> <ul> <li> <p> <code>HEADER</code>: The value that
     * you want AWS WAF to search for in the request header that you specified in
     * <a>FieldToMatch</a>, for example, the value of the <code>User-Agent</code> or
     * <code>Referer</code> header.</p> </li> <li> <p> <code>METHOD</code>: The HTTP
     * method, which indicates the type of operation specified in the request.
     * CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: The value that you want AWS WAF to search for in the
     * query string, which is the part of a URL that appears after a <code>?</code>
     * character.</p> </li> <li> <p> <code>URI</code>: The value that you want AWS WAF
     * to search for in the part of a URL that identifies a resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p> <code>BODY</code>: The
     * part of a request that contains any additional data that you want to send to
     * your web server as the HTTP request body, such as data from a form. The request
     * body immediately follows the request headers. Note that only the first
     * <code>8192</code> bytes of the request body are forwarded to AWS WAF for
     * inspection. To allow or block requests based on the length of the body, you can
     * create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * instead of inspecting a single parameter, AWS WAF inspects all parameters within
     * the query string for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul> <p>If <code>TargetString</code>
     * includes alphabetic characters A-Z and a-z, note that the value is case
     * sensitive.</p> <p> <b>If you're using the AWS WAF API</b> </p> <p>Specify a
     * base64-encoded version of the value. The maximum length of the value before you
     * base64-encode it is 50 bytes.</p> <p>For example, suppose the value of
     * <code>Type</code> is <code>HEADER</code> and the value of <code>Data</code> is
     * <code>User-Agent</code>. If you want to search the <code>User-Agent</code>
     * header for the value <code>BadBot</code>, you base64-encode <code>BadBot</code>
     * using MIME base64-encoding and include the resulting value,
     * <code>QmFkQm90</code>, in the value of <code>TargetString</code>.</p> <p> <b>If
     * you're using the AWS CLI or one of the AWS SDKs</b> </p> <p>The value that you
     * want AWS WAF to search for. The SDK automatically base64 encodes the value.</p>
     */
    inline void SetTargetString(Aws::Utils::ByteBuffer&& value) { m_targetStringHasBeenSet = true; m_targetString = std::move(value); }

    /**
     * <p>The value that you want AWS WAF to search for. AWS WAF searches for the
     * specified string in the part of web requests that you specified in
     * <code>FieldToMatch</code>. The maximum length of the value is 50 bytes.</p>
     * <p>Valid values depend on the values that you specified for
     * <code>FieldToMatch</code>:</p> <ul> <li> <p> <code>HEADER</code>: The value that
     * you want AWS WAF to search for in the request header that you specified in
     * <a>FieldToMatch</a>, for example, the value of the <code>User-Agent</code> or
     * <code>Referer</code> header.</p> </li> <li> <p> <code>METHOD</code>: The HTTP
     * method, which indicates the type of operation specified in the request.
     * CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: The value that you want AWS WAF to search for in the
     * query string, which is the part of a URL that appears after a <code>?</code>
     * character.</p> </li> <li> <p> <code>URI</code>: The value that you want AWS WAF
     * to search for in the part of a URL that identifies a resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p> <code>BODY</code>: The
     * part of a request that contains any additional data that you want to send to
     * your web server as the HTTP request body, such as data from a form. The request
     * body immediately follows the request headers. Note that only the first
     * <code>8192</code> bytes of the request body are forwarded to AWS WAF for
     * inspection. To allow or block requests based on the length of the body, you can
     * create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * instead of inspecting a single parameter, AWS WAF inspects all parameters within
     * the query string for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul> <p>If <code>TargetString</code>
     * includes alphabetic characters A-Z and a-z, note that the value is case
     * sensitive.</p> <p> <b>If you're using the AWS WAF API</b> </p> <p>Specify a
     * base64-encoded version of the value. The maximum length of the value before you
     * base64-encode it is 50 bytes.</p> <p>For example, suppose the value of
     * <code>Type</code> is <code>HEADER</code> and the value of <code>Data</code> is
     * <code>User-Agent</code>. If you want to search the <code>User-Agent</code>
     * header for the value <code>BadBot</code>, you base64-encode <code>BadBot</code>
     * using MIME base64-encoding and include the resulting value,
     * <code>QmFkQm90</code>, in the value of <code>TargetString</code>.</p> <p> <b>If
     * you're using the AWS CLI or one of the AWS SDKs</b> </p> <p>The value that you
     * want AWS WAF to search for. The SDK automatically base64 encodes the value.</p>
     */
    inline ByteMatchTuple& WithTargetString(const Aws::Utils::ByteBuffer& value) { SetTargetString(value); return *this;}

    /**
     * <p>The value that you want AWS WAF to search for. AWS WAF searches for the
     * specified string in the part of web requests that you specified in
     * <code>FieldToMatch</code>. The maximum length of the value is 50 bytes.</p>
     * <p>Valid values depend on the values that you specified for
     * <code>FieldToMatch</code>:</p> <ul> <li> <p> <code>HEADER</code>: The value that
     * you want AWS WAF to search for in the request header that you specified in
     * <a>FieldToMatch</a>, for example, the value of the <code>User-Agent</code> or
     * <code>Referer</code> header.</p> </li> <li> <p> <code>METHOD</code>: The HTTP
     * method, which indicates the type of operation specified in the request.
     * CloudFront supports the following methods: <code>DELETE</code>,
     * <code>GET</code>, <code>HEAD</code>, <code>OPTIONS</code>, <code>PATCH</code>,
     * <code>POST</code>, and <code>PUT</code>.</p> </li> <li> <p>
     * <code>QUERY_STRING</code>: The value that you want AWS WAF to search for in the
     * query string, which is the part of a URL that appears after a <code>?</code>
     * character.</p> </li> <li> <p> <code>URI</code>: The value that you want AWS WAF
     * to search for in the part of a URL that identifies a resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p> </li> <li> <p> <code>BODY</code>: The
     * part of a request that contains any additional data that you want to send to
     * your web server as the HTTP request body, such as data from a form. The request
     * body immediately follows the request headers. Note that only the first
     * <code>8192</code> bytes of the request body are forwarded to AWS WAF for
     * inspection. To allow or block requests based on the length of the body, you can
     * create a size constraint set. For more information, see
     * <a>CreateSizeConstraintSet</a>. </p> </li> <li> <p>
     * <code>SINGLE_QUERY_ARG</code>: The parameter in the query string that you will
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The maximum length for
     * <code>SINGLE_QUERY_ARG</code> is 30 characters.</p> </li> <li> <p>
     * <code>ALL_QUERY_ARGS</code>: Similar to <code>SINGLE_QUERY_ARG</code>, but
     * instead of inspecting a single parameter, AWS WAF inspects all parameters within
     * the query string for the value or regex pattern that you specify in
     * <code>TargetString</code>.</p> </li> </ul> <p>If <code>TargetString</code>
     * includes alphabetic characters A-Z and a-z, note that the value is case
     * sensitive.</p> <p> <b>If you're using the AWS WAF API</b> </p> <p>Specify a
     * base64-encoded version of the value. The maximum length of the value before you
     * base64-encode it is 50 bytes.</p> <p>For example, suppose the value of
     * <code>Type</code> is <code>HEADER</code> and the value of <code>Data</code> is
     * <code>User-Agent</code>. If you want to search the <code>User-Agent</code>
     * header for the value <code>BadBot</code>, you base64-encode <code>BadBot</code>
     * using MIME base64-encoding and include the resulting value,
     * <code>QmFkQm90</code>, in the value of <code>TargetString</code>.</p> <p> <b>If
     * you're using the AWS CLI or one of the AWS SDKs</b> </p> <p>The value that you
     * want AWS WAF to search for. The SDK automatically base64 encodes the value.</p>
     */
    inline ByteMatchTuple& WithTargetString(Aws::Utils::ByteBuffer&& value) { SetTargetString(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>TargetString</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline const TextTransformation& GetTextTransformation() const{ return m_textTransformation; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>TargetString</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline bool TextTransformationHasBeenSet() const { return m_textTransformationHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>TargetString</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline void SetTextTransformation(const TextTransformation& value) { m_textTransformationHasBeenSet = true; m_textTransformation = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>TargetString</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline void SetTextTransformation(TextTransformation&& value) { m_textTransformationHasBeenSet = true; m_textTransformation = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>TargetString</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline ByteMatchTuple& WithTextTransformation(const TextTransformation& value) { SetTextTransformation(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on <code>TargetString</code>
     * before inspecting a request for a match.</p> <p>You can only specify a single
     * type of TextTransformation.</p> <p> <b>CMD_LINE</b> </p> <p>When you're
     * concerned that attackers are injecting an operating system command line command
     * and using unusual formatting to disguise some or all of the command, use this
     * option to perform the following transformations:</p> <ul> <li> <p>Delete the
     * following characters: \ " ' ^</p> </li> <li> <p>Delete spaces before the
     * following characters: / (</p> </li> <li> <p>Replace the following characters
     * with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one space</p>
     * </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p> </li> </ul>
     * <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace the following
     * characters with a space character (decimal 32):</p> <ul> <li> <p>\f, formfeed,
     * decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li> <p>\n, newline,
     * decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p> </li> <li>
     * <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space, decimal
     * 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces multiple
     * spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use this option
     * to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline ByteMatchTuple& WithTextTransformation(TextTransformation&& value) { SetTextTransformation(std::move(value)); return *this;}


    /**
     * <p>Within the portion of a web request that you want to search (for example, in
     * the query string, if any), specify where you want AWS WAF to search. Valid
     * values include the following:</p> <p> <b>CONTAINS</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, but the
     * location doesn't matter.</p> <p> <b>CONTAINS_WORD</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, and
     * <code>TargetString</code> must contain only alphanumeric characters or
     * underscore (A-Z, a-z, 0-9, or _). In addition, <code>TargetString</code> must be
     * a word, which means one of the following:</p> <ul> <li> <p>
     * <code>TargetString</code> exactly matches the value of the specified part of the
     * web request, such as the value of a header.</p> </li> <li> <p>
     * <code>TargetString</code> is at the beginning of the specified part of the web
     * request and is followed by a character other than an alphanumeric character or
     * underscore (_), for example, <code>BadBot;</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is at the end of the specified part of the web request
     * and is preceded by a character other than an alphanumeric character or
     * underscore (_), for example, <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is in the middle of the specified part of the web
     * request and is preceded and followed by characters other than alphanumeric
     * characters or underscore (_), for example, <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>TargetString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>TargetString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>TargetString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline const PositionalConstraint& GetPositionalConstraint() const{ return m_positionalConstraint; }

    /**
     * <p>Within the portion of a web request that you want to search (for example, in
     * the query string, if any), specify where you want AWS WAF to search. Valid
     * values include the following:</p> <p> <b>CONTAINS</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, but the
     * location doesn't matter.</p> <p> <b>CONTAINS_WORD</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, and
     * <code>TargetString</code> must contain only alphanumeric characters or
     * underscore (A-Z, a-z, 0-9, or _). In addition, <code>TargetString</code> must be
     * a word, which means one of the following:</p> <ul> <li> <p>
     * <code>TargetString</code> exactly matches the value of the specified part of the
     * web request, such as the value of a header.</p> </li> <li> <p>
     * <code>TargetString</code> is at the beginning of the specified part of the web
     * request and is followed by a character other than an alphanumeric character or
     * underscore (_), for example, <code>BadBot;</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is at the end of the specified part of the web request
     * and is preceded by a character other than an alphanumeric character or
     * underscore (_), for example, <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is in the middle of the specified part of the web
     * request and is preceded and followed by characters other than alphanumeric
     * characters or underscore (_), for example, <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>TargetString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>TargetString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>TargetString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline bool PositionalConstraintHasBeenSet() const { return m_positionalConstraintHasBeenSet; }

    /**
     * <p>Within the portion of a web request that you want to search (for example, in
     * the query string, if any), specify where you want AWS WAF to search. Valid
     * values include the following:</p> <p> <b>CONTAINS</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, but the
     * location doesn't matter.</p> <p> <b>CONTAINS_WORD</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, and
     * <code>TargetString</code> must contain only alphanumeric characters or
     * underscore (A-Z, a-z, 0-9, or _). In addition, <code>TargetString</code> must be
     * a word, which means one of the following:</p> <ul> <li> <p>
     * <code>TargetString</code> exactly matches the value of the specified part of the
     * web request, such as the value of a header.</p> </li> <li> <p>
     * <code>TargetString</code> is at the beginning of the specified part of the web
     * request and is followed by a character other than an alphanumeric character or
     * underscore (_), for example, <code>BadBot;</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is at the end of the specified part of the web request
     * and is preceded by a character other than an alphanumeric character or
     * underscore (_), for example, <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is in the middle of the specified part of the web
     * request and is preceded and followed by characters other than alphanumeric
     * characters or underscore (_), for example, <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>TargetString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>TargetString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>TargetString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline void SetPositionalConstraint(const PositionalConstraint& value) { m_positionalConstraintHasBeenSet = true; m_positionalConstraint = value; }

    /**
     * <p>Within the portion of a web request that you want to search (for example, in
     * the query string, if any), specify where you want AWS WAF to search. Valid
     * values include the following:</p> <p> <b>CONTAINS</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, but the
     * location doesn't matter.</p> <p> <b>CONTAINS_WORD</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, and
     * <code>TargetString</code> must contain only alphanumeric characters or
     * underscore (A-Z, a-z, 0-9, or _). In addition, <code>TargetString</code> must be
     * a word, which means one of the following:</p> <ul> <li> <p>
     * <code>TargetString</code> exactly matches the value of the specified part of the
     * web request, such as the value of a header.</p> </li> <li> <p>
     * <code>TargetString</code> is at the beginning of the specified part of the web
     * request and is followed by a character other than an alphanumeric character or
     * underscore (_), for example, <code>BadBot;</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is at the end of the specified part of the web request
     * and is preceded by a character other than an alphanumeric character or
     * underscore (_), for example, <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is in the middle of the specified part of the web
     * request and is preceded and followed by characters other than alphanumeric
     * characters or underscore (_), for example, <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>TargetString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>TargetString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>TargetString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline void SetPositionalConstraint(PositionalConstraint&& value) { m_positionalConstraintHasBeenSet = true; m_positionalConstraint = std::move(value); }

    /**
     * <p>Within the portion of a web request that you want to search (for example, in
     * the query string, if any), specify where you want AWS WAF to search. Valid
     * values include the following:</p> <p> <b>CONTAINS</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, but the
     * location doesn't matter.</p> <p> <b>CONTAINS_WORD</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, and
     * <code>TargetString</code> must contain only alphanumeric characters or
     * underscore (A-Z, a-z, 0-9, or _). In addition, <code>TargetString</code> must be
     * a word, which means one of the following:</p> <ul> <li> <p>
     * <code>TargetString</code> exactly matches the value of the specified part of the
     * web request, such as the value of a header.</p> </li> <li> <p>
     * <code>TargetString</code> is at the beginning of the specified part of the web
     * request and is followed by a character other than an alphanumeric character or
     * underscore (_), for example, <code>BadBot;</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is at the end of the specified part of the web request
     * and is preceded by a character other than an alphanumeric character or
     * underscore (_), for example, <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is in the middle of the specified part of the web
     * request and is preceded and followed by characters other than alphanumeric
     * characters or underscore (_), for example, <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>TargetString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>TargetString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>TargetString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline ByteMatchTuple& WithPositionalConstraint(const PositionalConstraint& value) { SetPositionalConstraint(value); return *this;}

    /**
     * <p>Within the portion of a web request that you want to search (for example, in
     * the query string, if any), specify where you want AWS WAF to search. Valid
     * values include the following:</p> <p> <b>CONTAINS</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, but the
     * location doesn't matter.</p> <p> <b>CONTAINS_WORD</b> </p> <p>The specified part
     * of the web request must include the value of <code>TargetString</code>, and
     * <code>TargetString</code> must contain only alphanumeric characters or
     * underscore (A-Z, a-z, 0-9, or _). In addition, <code>TargetString</code> must be
     * a word, which means one of the following:</p> <ul> <li> <p>
     * <code>TargetString</code> exactly matches the value of the specified part of the
     * web request, such as the value of a header.</p> </li> <li> <p>
     * <code>TargetString</code> is at the beginning of the specified part of the web
     * request and is followed by a character other than an alphanumeric character or
     * underscore (_), for example, <code>BadBot;</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is at the end of the specified part of the web request
     * and is preceded by a character other than an alphanumeric character or
     * underscore (_), for example, <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>TargetString</code> is in the middle of the specified part of the web
     * request and is preceded and followed by characters other than alphanumeric
     * characters or underscore (_), for example, <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>TargetString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>TargetString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>TargetString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline ByteMatchTuple& WithPositionalConstraint(PositionalConstraint&& value) { SetPositionalConstraint(std::move(value)); return *this;}

  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet;

    Aws::Utils::ByteBuffer m_targetString;
    bool m_targetStringHasBeenSet;

    TextTransformation m_textTransformation;
    bool m_textTransformationHasBeenSet;

    PositionalConstraint m_positionalConstraint;
    bool m_positionalConstraintHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
