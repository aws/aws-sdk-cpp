/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlAllowOrigins.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlAllowHeaders.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlAllowMethods.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlExposeHeaders.h>
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
   * <p>A configuration for a set of HTTP response headers that are used for
   * cross-origin resource sharing (CORS). CloudFront adds these headers to HTTP
   * responses that it sends for CORS requests that match a cache behavior associated
   * with this response headers policy.</p> <p>For more information about CORS, see
   * <a href="https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS">Cross-Origin
   * Resource Sharing (CORS)</a> in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyCorsConfig">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyCorsConfig
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCorsConfig();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCorsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCorsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlAllowOrigins& GetAccessControlAllowOrigins() const{ return m_accessControlAllowOrigins; }

    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline bool AccessControlAllowOriginsHasBeenSet() const { return m_accessControlAllowOriginsHasBeenSet; }

    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowOrigins(const ResponseHeadersPolicyAccessControlAllowOrigins& value) { m_accessControlAllowOriginsHasBeenSet = true; m_accessControlAllowOrigins = value; }

    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowOrigins(ResponseHeadersPolicyAccessControlAllowOrigins&& value) { m_accessControlAllowOriginsHasBeenSet = true; m_accessControlAllowOrigins = std::move(value); }

    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowOrigins(const ResponseHeadersPolicyAccessControlAllowOrigins& value) { SetAccessControlAllowOrigins(value); return *this;}

    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowOrigins(ResponseHeadersPolicyAccessControlAllowOrigins&& value) { SetAccessControlAllowOrigins(std::move(value)); return *this;}


    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlAllowHeaders& GetAccessControlAllowHeaders() const{ return m_accessControlAllowHeaders; }

    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline bool AccessControlAllowHeadersHasBeenSet() const { return m_accessControlAllowHeadersHasBeenSet; }

    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowHeaders(const ResponseHeadersPolicyAccessControlAllowHeaders& value) { m_accessControlAllowHeadersHasBeenSet = true; m_accessControlAllowHeaders = value; }

    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowHeaders(ResponseHeadersPolicyAccessControlAllowHeaders&& value) { m_accessControlAllowHeadersHasBeenSet = true; m_accessControlAllowHeaders = std::move(value); }

    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowHeaders(const ResponseHeadersPolicyAccessControlAllowHeaders& value) { SetAccessControlAllowHeaders(value); return *this;}

    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowHeaders(ResponseHeadersPolicyAccessControlAllowHeaders&& value) { SetAccessControlAllowHeaders(std::move(value)); return *this;}


    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlAllowMethods& GetAccessControlAllowMethods() const{ return m_accessControlAllowMethods; }

    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline bool AccessControlAllowMethodsHasBeenSet() const { return m_accessControlAllowMethodsHasBeenSet; }

    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowMethods(const ResponseHeadersPolicyAccessControlAllowMethods& value) { m_accessControlAllowMethodsHasBeenSet = true; m_accessControlAllowMethods = value; }

    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowMethods(ResponseHeadersPolicyAccessControlAllowMethods&& value) { m_accessControlAllowMethodsHasBeenSet = true; m_accessControlAllowMethods = std::move(value); }

    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowMethods(const ResponseHeadersPolicyAccessControlAllowMethods& value) { SetAccessControlAllowMethods(value); return *this;}

    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowMethods(ResponseHeadersPolicyAccessControlAllowMethods&& value) { SetAccessControlAllowMethods(std::move(value)); return *this;}


    /**
     * <p>A Boolean that CloudFront uses as the value for the
     * <code>Access-Control-Allow-Credentials</code> HTTP response header.</p> <p>For
     * more information about the <code>Access-Control-Allow-Credentials</code> HTTP
     * response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Credentials">Access-Control-Allow-Credentials</a>
     * in the MDN Web Docs.</p>
     */
    inline bool GetAccessControlAllowCredentials() const{ return m_accessControlAllowCredentials; }

    /**
     * <p>A Boolean that CloudFront uses as the value for the
     * <code>Access-Control-Allow-Credentials</code> HTTP response header.</p> <p>For
     * more information about the <code>Access-Control-Allow-Credentials</code> HTTP
     * response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Credentials">Access-Control-Allow-Credentials</a>
     * in the MDN Web Docs.</p>
     */
    inline bool AccessControlAllowCredentialsHasBeenSet() const { return m_accessControlAllowCredentialsHasBeenSet; }

    /**
     * <p>A Boolean that CloudFront uses as the value for the
     * <code>Access-Control-Allow-Credentials</code> HTTP response header.</p> <p>For
     * more information about the <code>Access-Control-Allow-Credentials</code> HTTP
     * response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Credentials">Access-Control-Allow-Credentials</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlAllowCredentials(bool value) { m_accessControlAllowCredentialsHasBeenSet = true; m_accessControlAllowCredentials = value; }

    /**
     * <p>A Boolean that CloudFront uses as the value for the
     * <code>Access-Control-Allow-Credentials</code> HTTP response header.</p> <p>For
     * more information about the <code>Access-Control-Allow-Credentials</code> HTTP
     * response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Credentials">Access-Control-Allow-Credentials</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowCredentials(bool value) { SetAccessControlAllowCredentials(value); return *this;}


    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlExposeHeaders& GetAccessControlExposeHeaders() const{ return m_accessControlExposeHeaders; }

    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline bool AccessControlExposeHeadersHasBeenSet() const { return m_accessControlExposeHeadersHasBeenSet; }

    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlExposeHeaders(const ResponseHeadersPolicyAccessControlExposeHeaders& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = value; }

    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlExposeHeaders(ResponseHeadersPolicyAccessControlExposeHeaders&& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = std::move(value); }

    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlExposeHeaders(const ResponseHeadersPolicyAccessControlExposeHeaders& value) { SetAccessControlExposeHeaders(value); return *this;}

    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlExposeHeaders(ResponseHeadersPolicyAccessControlExposeHeaders&& value) { SetAccessControlExposeHeaders(std::move(value)); return *this;}


    /**
     * <p>A number that CloudFront uses as the value for the
     * <code>Access-Control-Max-Age</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Max-Age</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Max-Age">Access-Control-Max-Age</a>
     * in the MDN Web Docs.</p>
     */
    inline int GetAccessControlMaxAgeSec() const{ return m_accessControlMaxAgeSec; }

    /**
     * <p>A number that CloudFront uses as the value for the
     * <code>Access-Control-Max-Age</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Max-Age</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Max-Age">Access-Control-Max-Age</a>
     * in the MDN Web Docs.</p>
     */
    inline bool AccessControlMaxAgeSecHasBeenSet() const { return m_accessControlMaxAgeSecHasBeenSet; }

    /**
     * <p>A number that CloudFront uses as the value for the
     * <code>Access-Control-Max-Age</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Max-Age</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Max-Age">Access-Control-Max-Age</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetAccessControlMaxAgeSec(int value) { m_accessControlMaxAgeSecHasBeenSet = true; m_accessControlMaxAgeSec = value; }

    /**
     * <p>A number that CloudFront uses as the value for the
     * <code>Access-Control-Max-Age</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Max-Age</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Max-Age">Access-Control-Max-Age</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlMaxAgeSec(int value) { SetAccessControlMaxAgeSec(value); return *this;}


    /**
     * <p>A Boolean that determines whether CloudFront overrides HTTP response headers
     * received from the origin with the ones specified in this response headers
     * policy.</p>
     */
    inline bool GetOriginOverride() const{ return m_originOverride; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides HTTP response headers
     * received from the origin with the ones specified in this response headers
     * policy.</p>
     */
    inline bool OriginOverrideHasBeenSet() const { return m_originOverrideHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides HTTP response headers
     * received from the origin with the ones specified in this response headers
     * policy.</p>
     */
    inline void SetOriginOverride(bool value) { m_originOverrideHasBeenSet = true; m_originOverride = value; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides HTTP response headers
     * received from the origin with the ones specified in this response headers
     * policy.</p>
     */
    inline ResponseHeadersPolicyCorsConfig& WithOriginOverride(bool value) { SetOriginOverride(value); return *this;}

  private:

    ResponseHeadersPolicyAccessControlAllowOrigins m_accessControlAllowOrigins;
    bool m_accessControlAllowOriginsHasBeenSet = false;

    ResponseHeadersPolicyAccessControlAllowHeaders m_accessControlAllowHeaders;
    bool m_accessControlAllowHeadersHasBeenSet = false;

    ResponseHeadersPolicyAccessControlAllowMethods m_accessControlAllowMethods;
    bool m_accessControlAllowMethodsHasBeenSet = false;

    bool m_accessControlAllowCredentials;
    bool m_accessControlAllowCredentialsHasBeenSet = false;

    ResponseHeadersPolicyAccessControlExposeHeaders m_accessControlExposeHeaders;
    bool m_accessControlExposeHeadersHasBeenSet = false;

    int m_accessControlMaxAgeSec;
    bool m_accessControlMaxAgeSecHasBeenSet = false;

    bool m_originOverride;
    bool m_originOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
