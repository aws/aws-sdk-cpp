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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * A complex type that describes how you'd prefer CloudFront to respond to requests
   * that result in either a 4xx or 5xx response. You can control whether a custom
   * error page should be displayed, what the desired response code should be for
   * this error page and how long should the error response be cached by CloudFront.
   * If you don't want to specify any custom error responses, include only an empty
   * CustomErrorResponses element. To delete all custom error responses in an
   * existing distribution, update the distribution configuration and include only an
   * empty CustomErrorResponses element. To add, change, or remove one or more custom
   * error responses, update the distribution configuration and specify all of the
   * custom error responses that you want to include in the updated distribution.
   */
  class AWS_CLOUDFRONT_API CustomErrorResponse
  {
  public:
    CustomErrorResponse();
    CustomErrorResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    CustomErrorResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The 4xx or 5xx HTTP status code that you want to customize. For a list of HTTP
     * status codes that you can customize, see CloudFront documentation.
     */
    inline int GetErrorCode() const{ return m_errorCode; }

    /**
     * The 4xx or 5xx HTTP status code that you want to customize. For a list of HTTP
     * status codes that you can customize, see CloudFront documentation.
     */
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * The 4xx or 5xx HTTP status code that you want to customize. For a list of HTTP
     * status codes that you can customize, see CloudFront documentation.
     */
    inline CustomErrorResponse& WithErrorCode(int value) { SetErrorCode(value); return *this;}

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline const Aws::String& GetResponsePagePath() const{ return m_responsePagePath; }

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline void SetResponsePagePath(const Aws::String& value) { m_responsePagePathHasBeenSet = true; m_responsePagePath = value; }

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline void SetResponsePagePath(Aws::String&& value) { m_responsePagePathHasBeenSet = true; m_responsePagePath = value; }

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline void SetResponsePagePath(const char* value) { m_responsePagePathHasBeenSet = true; m_responsePagePath.assign(value); }

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline CustomErrorResponse& WithResponsePagePath(const Aws::String& value) { SetResponsePagePath(value); return *this;}

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline CustomErrorResponse& WithResponsePagePath(Aws::String&& value) { SetResponsePagePath(value); return *this;}

    /**
     * The path of the custom error page (for example, /custom_404.html). The path is
     * relative to the distribution and must begin with a slash (/). If the path
     * includes any non-ASCII characters or unsafe characters as defined in RFC 1783
     * (http://www.ietf.org/rfc/rfc1738.txt), URL encode those characters. Do not URL
     * encode any other characters in the path, or CloudFront will not return the
     * custom error page to the viewer.
     */
    inline CustomErrorResponse& WithResponsePagePath(const char* value) { SetResponsePagePath(value); return *this;}

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline const Aws::String& GetResponseCode() const{ return m_responseCode; }

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline void SetResponseCode(const Aws::String& value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline void SetResponseCode(Aws::String&& value) { m_responseCodeHasBeenSet = true; m_responseCode = value; }

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline void SetResponseCode(const char* value) { m_responseCodeHasBeenSet = true; m_responseCode.assign(value); }

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline CustomErrorResponse& WithResponseCode(const Aws::String& value) { SetResponseCode(value); return *this;}

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline CustomErrorResponse& WithResponseCode(Aws::String&& value) { SetResponseCode(value); return *this;}

    /**
     * The HTTP status code that you want CloudFront to return with the custom error
     * page to the viewer. For a list of HTTP status codes that you can replace, see
     * CloudFront Documentation.
     */
    inline CustomErrorResponse& WithResponseCode(const char* value) { SetResponseCode(value); return *this;}

    /**
     * The minimum amount of time you want HTTP error codes to stay in CloudFront
     * caches before CloudFront queries your origin to see whether the object has been
     * updated. You can specify a value from 0 to 31,536,000.
     */
    inline long long GetErrorCachingMinTTL() const{ return m_errorCachingMinTTL; }

    /**
     * The minimum amount of time you want HTTP error codes to stay in CloudFront
     * caches before CloudFront queries your origin to see whether the object has been
     * updated. You can specify a value from 0 to 31,536,000.
     */
    inline void SetErrorCachingMinTTL(long long value) { m_errorCachingMinTTLHasBeenSet = true; m_errorCachingMinTTL = value; }

    /**
     * The minimum amount of time you want HTTP error codes to stay in CloudFront
     * caches before CloudFront queries your origin to see whether the object has been
     * updated. You can specify a value from 0 to 31,536,000.
     */
    inline CustomErrorResponse& WithErrorCachingMinTTL(long long value) { SetErrorCachingMinTTL(value); return *this;}

  private:
    int m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_responsePagePath;
    bool m_responsePagePathHasBeenSet;
    Aws::String m_responseCode;
    bool m_responseCodeHasBeenSet;
    long long m_errorCachingMinTTL;
    bool m_errorCachingMinTTLHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
