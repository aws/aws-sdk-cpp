/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/SingleHeader.h>
#include <aws/wafv2/model/SingleQueryArgument.h>
#include <aws/wafv2/model/AllQueryArguments.h>
#include <aws/wafv2/model/UriPath.h>
#include <aws/wafv2/model/QueryString.h>
#include <aws/wafv2/model/Body.h>
#include <aws/wafv2/model/Method.h>
#include <aws/wafv2/model/JsonBody.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The part of a web request that you want AWS WAF to inspect. Include the
   * single <code>FieldToMatch</code> type that you want to inspect, with additional
   * specifications as needed, according to the type. You specify a single request
   * component in <code>FieldToMatch</code> for each rule statement that requires it.
   * To inspect more than one component of a web request, create a separate rule
   * statement for each component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FieldToMatch">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API FieldToMatch
  {
  public:
    FieldToMatch();
    FieldToMatch(Aws::Utils::Json::JsonView jsonValue);
    FieldToMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p>
     */
    inline const SingleHeader& GetSingleHeader() const{ return m_singleHeader; }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p>
     */
    inline bool SingleHeaderHasBeenSet() const { return m_singleHeaderHasBeenSet; }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p>
     */
    inline void SetSingleHeader(const SingleHeader& value) { m_singleHeaderHasBeenSet = true; m_singleHeader = value; }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p>
     */
    inline void SetSingleHeader(SingleHeader&& value) { m_singleHeaderHasBeenSet = true; m_singleHeader = std::move(value); }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p>
     */
    inline FieldToMatch& WithSingleHeader(const SingleHeader& value) { SetSingleHeader(value); return *this;}

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p>
     */
    inline FieldToMatch& WithSingleHeader(SingleHeader&& value) { SetSingleHeader(std::move(value)); return *this;}


    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>This is used only to indicate
     * the web request component for AWS WAF to inspect, in the <a>FieldToMatch</a>
     * specification. </p> <p>Example JSON: <code>"SingleQueryArgument": { "Name":
     * "myArgument" }</code> </p>
     */
    inline const SingleQueryArgument& GetSingleQueryArgument() const{ return m_singleQueryArgument; }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>This is used only to indicate
     * the web request component for AWS WAF to inspect, in the <a>FieldToMatch</a>
     * specification. </p> <p>Example JSON: <code>"SingleQueryArgument": { "Name":
     * "myArgument" }</code> </p>
     */
    inline bool SingleQueryArgumentHasBeenSet() const { return m_singleQueryArgumentHasBeenSet; }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>This is used only to indicate
     * the web request component for AWS WAF to inspect, in the <a>FieldToMatch</a>
     * specification. </p> <p>Example JSON: <code>"SingleQueryArgument": { "Name":
     * "myArgument" }</code> </p>
     */
    inline void SetSingleQueryArgument(const SingleQueryArgument& value) { m_singleQueryArgumentHasBeenSet = true; m_singleQueryArgument = value; }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>This is used only to indicate
     * the web request component for AWS WAF to inspect, in the <a>FieldToMatch</a>
     * specification. </p> <p>Example JSON: <code>"SingleQueryArgument": { "Name":
     * "myArgument" }</code> </p>
     */
    inline void SetSingleQueryArgument(SingleQueryArgument&& value) { m_singleQueryArgumentHasBeenSet = true; m_singleQueryArgument = std::move(value); }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>This is used only to indicate
     * the web request component for AWS WAF to inspect, in the <a>FieldToMatch</a>
     * specification. </p> <p>Example JSON: <code>"SingleQueryArgument": { "Name":
     * "myArgument" }</code> </p>
     */
    inline FieldToMatch& WithSingleQueryArgument(const SingleQueryArgument& value) { SetSingleQueryArgument(value); return *this;}

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>This is used only to indicate
     * the web request component for AWS WAF to inspect, in the <a>FieldToMatch</a>
     * specification. </p> <p>Example JSON: <code>"SingleQueryArgument": { "Name":
     * "myArgument" }</code> </p>
     */
    inline FieldToMatch& WithSingleQueryArgument(SingleQueryArgument&& value) { SetSingleQueryArgument(std::move(value)); return *this;}


    /**
     * <p>Inspect all query arguments. </p>
     */
    inline const AllQueryArguments& GetAllQueryArguments() const{ return m_allQueryArguments; }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline bool AllQueryArgumentsHasBeenSet() const { return m_allQueryArgumentsHasBeenSet; }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline void SetAllQueryArguments(const AllQueryArguments& value) { m_allQueryArgumentsHasBeenSet = true; m_allQueryArguments = value; }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline void SetAllQueryArguments(AllQueryArguments&& value) { m_allQueryArgumentsHasBeenSet = true; m_allQueryArguments = std::move(value); }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline FieldToMatch& WithAllQueryArguments(const AllQueryArguments& value) { SetAllQueryArguments(value); return *this;}

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline FieldToMatch& WithAllQueryArguments(AllQueryArguments&& value) { SetAllQueryArguments(std::move(value)); return *this;}


    /**
     * <p>Inspect the request URI path. This is the part of a web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline const UriPath& GetUriPath() const{ return m_uriPath; }

    /**
     * <p>Inspect the request URI path. This is the part of a web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }

    /**
     * <p>Inspect the request URI path. This is the part of a web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetUriPath(const UriPath& value) { m_uriPathHasBeenSet = true; m_uriPath = value; }

    /**
     * <p>Inspect the request URI path. This is the part of a web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetUriPath(UriPath&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::move(value); }

    /**
     * <p>Inspect the request URI path. This is the part of a web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline FieldToMatch& WithUriPath(const UriPath& value) { SetUriPath(value); return *this;}

    /**
     * <p>Inspect the request URI path. This is the part of a web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline FieldToMatch& WithUriPath(UriPath&& value) { SetUriPath(std::move(value)); return *this;}


    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline const QueryString& GetQueryString() const{ return m_queryString; }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline void SetQueryString(const QueryString& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline void SetQueryString(QueryString&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline FieldToMatch& WithQueryString(const QueryString& value) { SetQueryString(value); return *this;}

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline FieldToMatch& WithQueryString(QueryString&& value) { SetQueryString(std::move(value)); return *this;}


    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the
     * request body are forwarded to AWS WAF for inspection by the underlying host
     * service. If you don't need to inspect more than 8 KB, you can guarantee that you
     * don't allow additional bytes in by combining a statement that inspects the body
     * of the web request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline const Body& GetBody() const{ return m_body; }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the
     * request body are forwarded to AWS WAF for inspection by the underlying host
     * service. If you don't need to inspect more than 8 KB, you can guarantee that you
     * don't allow additional bytes in by combining a statement that inspects the body
     * of the web request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the
     * request body are forwarded to AWS WAF for inspection by the underlying host
     * service. If you don't need to inspect more than 8 KB, you can guarantee that you
     * don't allow additional bytes in by combining a statement that inspects the body
     * of the web request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline void SetBody(const Body& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the
     * request body are forwarded to AWS WAF for inspection by the underlying host
     * service. If you don't need to inspect more than 8 KB, you can guarantee that you
     * don't allow additional bytes in by combining a statement that inspects the body
     * of the web request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline void SetBody(Body&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the
     * request body are forwarded to AWS WAF for inspection by the underlying host
     * service. If you don't need to inspect more than 8 KB, you can guarantee that you
     * don't allow additional bytes in by combining a statement that inspects the body
     * of the web request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline FieldToMatch& WithBody(const Body& value) { SetBody(value); return *this;}

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the
     * request body are forwarded to AWS WAF for inspection by the underlying host
     * service. If you don't need to inspect more than 8 KB, you can guarantee that you
     * don't allow additional bytes in by combining a statement that inspects the body
     * of the web request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline FieldToMatch& WithBody(Body&& value) { SetBody(std::move(value)); return *this;}


    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline const Method& GetMethod() const{ return m_method; }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline void SetMethod(const Method& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline void SetMethod(Method&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline FieldToMatch& WithMethod(const Method& value) { SetMethod(value); return *this;}

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline FieldToMatch& WithMethod(Method&& value) { SetMethod(std::move(value)); return *this;}


    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the request
     * body are forwarded to AWS WAF for inspection by the underlying host service. If
     * you don't need to inspect more than 8 KB, you can guarantee that you don't allow
     * additional bytes in by combining a statement that inspects the body of the web
     * request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline const JsonBody& GetJsonBody() const{ return m_jsonBody; }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the request
     * body are forwarded to AWS WAF for inspection by the underlying host service. If
     * you don't need to inspect more than 8 KB, you can guarantee that you don't allow
     * additional bytes in by combining a statement that inspects the body of the web
     * request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline bool JsonBodyHasBeenSet() const { return m_jsonBodyHasBeenSet; }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the request
     * body are forwarded to AWS WAF for inspection by the underlying host service. If
     * you don't need to inspect more than 8 KB, you can guarantee that you don't allow
     * additional bytes in by combining a statement that inspects the body of the web
     * request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline void SetJsonBody(const JsonBody& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = value; }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the request
     * body are forwarded to AWS WAF for inspection by the underlying host service. If
     * you don't need to inspect more than 8 KB, you can guarantee that you don't allow
     * additional bytes in by combining a statement that inspects the body of the web
     * request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline void SetJsonBody(JsonBody&& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = std::move(value); }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the request
     * body are forwarded to AWS WAF for inspection by the underlying host service. If
     * you don't need to inspect more than 8 KB, you can guarantee that you don't allow
     * additional bytes in by combining a statement that inspects the body of the web
     * request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline FieldToMatch& WithJsonBody(const JsonBody& value) { SetJsonBody(value); return *this;}

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Note that only the first 8 KB (8192 bytes) of the request
     * body are forwarded to AWS WAF for inspection by the underlying host service. If
     * you don't need to inspect more than 8 KB, you can guarantee that you don't allow
     * additional bytes in by combining a statement that inspects the body of the web
     * request, such as <a>ByteMatchStatement</a> or
     * <a>RegexPatternSetReferenceStatement</a>, with a <a>SizeConstraintStatement</a>
     * that enforces an 8 KB size limit on the body of the request. AWS WAF doesn't
     * support inspecting the entire contents of web requests whose bodies exceed the 8
     * KB limit.</p>
     */
    inline FieldToMatch& WithJsonBody(JsonBody&& value) { SetJsonBody(std::move(value)); return *this;}

  private:

    SingleHeader m_singleHeader;
    bool m_singleHeaderHasBeenSet;

    SingleQueryArgument m_singleQueryArgument;
    bool m_singleQueryArgumentHasBeenSet;

    AllQueryArguments m_allQueryArguments;
    bool m_allQueryArgumentsHasBeenSet;

    UriPath m_uriPath;
    bool m_uriPathHasBeenSet;

    QueryString m_queryString;
    bool m_queryStringHasBeenSet;

    Body m_body;
    bool m_bodyHasBeenSet;

    Method m_method;
    bool m_methodHasBeenSet;

    JsonBody m_jsonBody;
    bool m_jsonBodyHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
