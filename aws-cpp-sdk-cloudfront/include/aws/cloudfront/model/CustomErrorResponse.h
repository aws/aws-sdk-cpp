/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that controls:</p> <ul> <li> <p>Whether CloudFront replaces
   * HTTP status codes in the 4xx and 5xx range with custom error messages before
   * returning the response to the viewer.</p> </li> <li> <p>How long CloudFront
   * caches HTTP status codes in the 4xx and 5xx range.</p> </li> </ul> <p>For more
   * information about custom error pages, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
   * Error Responses</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CustomErrorResponse">AWS
   * API Reference</a></p>
   */
  class CustomErrorResponse
  {
  public:
    AWS_CLOUDFRONT_API CustomErrorResponse();
    AWS_CLOUDFRONT_API CustomErrorResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API CustomErrorResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The HTTP status code for which you want to specify a custom error page and/or
     * a caching duration.</p>
     */
    inline int GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The HTTP status code for which you want to specify a custom error page and/or
     * a caching duration.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The HTTP status code for which you want to specify a custom error page and/or
     * a caching duration.</p>
     */
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The HTTP status code for which you want to specify a custom error page and/or
     * a caching duration.</p>
     */
    inline CustomErrorResponse& WithErrorCode(int value) { SetErrorCode(value); return *this;}


    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline const Aws::String& GetResponsePagePath() const{ return m_responsePagePath; }

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline bool ResponsePagePathHasBeenSet() const { return m_responsePagePathHasBeenSet; }

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline void SetResponsePagePath(const Aws::String& value) { m_responsePagePathHasBeenSet = true; m_responsePagePath = value; }

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline void SetResponsePagePath(Aws::String&& value) { m_responsePagePathHasBeenSet = true; m_responsePagePath = std::move(value); }

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline void SetResponsePagePath(const char* value) { m_responsePagePathHasBeenSet = true; m_responsePagePath.assign(value); }

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline CustomErrorResponse& WithResponsePagePath(const Aws::String& value) { SetResponsePagePath(value); return *this;}

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline CustomErrorResponse& WithResponsePagePath(Aws::String&& value) { SetResponsePagePath(std::move(value)); return *this;}

    /**
     * <p>The path to the custom error page that you want CloudFront to return to a
     * viewer when your origin returns the HTTP status code specified by
     * <code>ErrorCode</code>, for example,
     * <code>/4xx-errors/403-forbidden.html</code>. If you want to store your objects
     * and your custom error pages in different locations, your distribution must
     * include a cache behavior for which the following is true:</p> <ul> <li> <p>The
     * value of <code>PathPattern</code> matches the path to your custom error
     * messages. For example, suppose you saved custom error pages for 4xx errors in an
     * Amazon S3 bucket in a directory named <code>/4xx-errors</code>. Your
     * distribution must include a cache behavior for which the path pattern routes
     * requests for your custom error pages to that location, for example,
     * <code>/4xx-errors/ *</code>.</p> </li> <li> <p>The value of
     * <code>TargetOriginId</code> specifies the value of the <code>ID</code> element
     * for the origin that contains your custom error pages.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponsePagePath</code>, you must also specify a value
     * for <code>ResponseCode</code>.</p> <p>We recommend that you store custom error
     * pages in an Amazon S3 bucket. If you store custom error pages on an HTTP server
     * and the server starts to return 5xx errors, CloudFront can't get the files that
     * you want to return to viewers because the origin server is unavailable.</p>
     */
    inline CustomErrorResponse& WithResponsePagePath(const char* value) { SetResponsePagePath(value); return *this;}


    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline const Aws::String& GetResponseCode() const{ return m_responseCode; }

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline void SetResponseCode(const Aws::String& value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline void SetResponseCode(Aws::String&& value) { m_responseCodeHasBeenSet = true; m_responseCode = std::move(value); }

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline void SetResponseCode(const char* value) { m_responseCodeHasBeenSet = true; m_responseCode.assign(value); }

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline CustomErrorResponse& WithResponseCode(const Aws::String& value) { SetResponseCode(value); return *this;}

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline CustomErrorResponse& WithResponseCode(Aws::String&& value) { SetResponseCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP status code that you want CloudFront to return to the viewer along
     * with the custom error page. There are a variety of reasons that you might want
     * CloudFront to return a status code different from the status code that your
     * origin returned to CloudFront, for example:</p> <ul> <li> <p>Some Internet
     * devices (some firewalls and corporate proxies, for example) intercept HTTP 4xx
     * and 5xx and prevent the response from being returned to the viewer. If you
     * substitute <code>200</code>, the response typically won't be intercepted.</p>
     * </li> <li> <p>If you don't care about distinguishing among different client
     * errors or server errors, you can specify <code>400</code> or <code>500</code> as
     * the <code>ResponseCode</code> for all 4xx or 5xx errors.</p> </li> <li> <p>You
     * might want to return a <code>200</code> status code (OK) and static website so
     * your customers don't know that your website is down.</p> </li> </ul> <p>If you
     * specify a value for <code>ResponseCode</code>, you must also specify a value for
     * <code>ResponsePagePath</code>.</p>
     */
    inline CustomErrorResponse& WithResponseCode(const char* value) { SetResponseCode(value); return *this;}


    /**
     * <p>The minimum amount of time, in seconds, that you want CloudFront to cache the
     * HTTP status code specified in <code>ErrorCode</code>. When this time period has
     * elapsed, CloudFront queries your origin to see whether the problem that caused
     * the error has been resolved and the requested object is now available.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline long long GetErrorCachingMinTTL() const{ return m_errorCachingMinTTL; }

    /**
     * <p>The minimum amount of time, in seconds, that you want CloudFront to cache the
     * HTTP status code specified in <code>ErrorCode</code>. When this time period has
     * elapsed, CloudFront queries your origin to see whether the problem that caused
     * the error has been resolved and the requested object is now available.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline bool ErrorCachingMinTTLHasBeenSet() const { return m_errorCachingMinTTLHasBeenSet; }

    /**
     * <p>The minimum amount of time, in seconds, that you want CloudFront to cache the
     * HTTP status code specified in <code>ErrorCode</code>. When this time period has
     * elapsed, CloudFront queries your origin to see whether the problem that caused
     * the error has been resolved and the requested object is now available.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline void SetErrorCachingMinTTL(long long value) { m_errorCachingMinTTLHasBeenSet = true; m_errorCachingMinTTL = value; }

    /**
     * <p>The minimum amount of time, in seconds, that you want CloudFront to cache the
     * HTTP status code specified in <code>ErrorCode</code>. When this time period has
     * elapsed, CloudFront queries your origin to see whether the problem that caused
     * the error has been resolved and the requested object is now available.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/custom-error-pages.html">Customizing
     * Error Responses</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
     */
    inline CustomErrorResponse& WithErrorCachingMinTTL(long long value) { SetErrorCachingMinTTL(value); return *this;}

  private:

    int m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_responsePagePath;
    bool m_responsePagePathHasBeenSet = false;

    Aws::String m_responseCode;
    bool m_responseCodeHasBeenSet = false;

    long long m_errorCachingMinTTL;
    bool m_errorCachingMinTTLHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
