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
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCorsConfig() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCorsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCorsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A list of origins (domain names) that CloudFront can use as the value for the
     * <code>Access-Control-Allow-Origin</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Origin</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlAllowOrigins& GetAccessControlAllowOrigins() const { return m_accessControlAllowOrigins; }
    inline bool AccessControlAllowOriginsHasBeenSet() const { return m_accessControlAllowOriginsHasBeenSet; }
    template<typename AccessControlAllowOriginsT = ResponseHeadersPolicyAccessControlAllowOrigins>
    void SetAccessControlAllowOrigins(AccessControlAllowOriginsT&& value) { m_accessControlAllowOriginsHasBeenSet = true; m_accessControlAllowOrigins = std::forward<AccessControlAllowOriginsT>(value); }
    template<typename AccessControlAllowOriginsT = ResponseHeadersPolicyAccessControlAllowOrigins>
    ResponseHeadersPolicyCorsConfig& WithAccessControlAllowOrigins(AccessControlAllowOriginsT&& value) { SetAccessControlAllowOrigins(std::forward<AccessControlAllowOriginsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP header names that CloudFront includes as values for the
     * <code>Access-Control-Allow-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Headers">Access-Control-Allow-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlAllowHeaders& GetAccessControlAllowHeaders() const { return m_accessControlAllowHeaders; }
    inline bool AccessControlAllowHeadersHasBeenSet() const { return m_accessControlAllowHeadersHasBeenSet; }
    template<typename AccessControlAllowHeadersT = ResponseHeadersPolicyAccessControlAllowHeaders>
    void SetAccessControlAllowHeaders(AccessControlAllowHeadersT&& value) { m_accessControlAllowHeadersHasBeenSet = true; m_accessControlAllowHeaders = std::forward<AccessControlAllowHeadersT>(value); }
    template<typename AccessControlAllowHeadersT = ResponseHeadersPolicyAccessControlAllowHeaders>
    ResponseHeadersPolicyCorsConfig& WithAccessControlAllowHeaders(AccessControlAllowHeadersT&& value) { SetAccessControlAllowHeaders(std::forward<AccessControlAllowHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP methods that CloudFront includes as values for the
     * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Allow-Methods</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlAllowMethods& GetAccessControlAllowMethods() const { return m_accessControlAllowMethods; }
    inline bool AccessControlAllowMethodsHasBeenSet() const { return m_accessControlAllowMethodsHasBeenSet; }
    template<typename AccessControlAllowMethodsT = ResponseHeadersPolicyAccessControlAllowMethods>
    void SetAccessControlAllowMethods(AccessControlAllowMethodsT&& value) { m_accessControlAllowMethodsHasBeenSet = true; m_accessControlAllowMethods = std::forward<AccessControlAllowMethodsT>(value); }
    template<typename AccessControlAllowMethodsT = ResponseHeadersPolicyAccessControlAllowMethods>
    ResponseHeadersPolicyCorsConfig& WithAccessControlAllowMethods(AccessControlAllowMethodsT&& value) { SetAccessControlAllowMethods(std::forward<AccessControlAllowMethodsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that CloudFront uses as the value for the
     * <code>Access-Control-Allow-Credentials</code> HTTP response header.</p> <p>For
     * more information about the <code>Access-Control-Allow-Credentials</code> HTTP
     * response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Credentials">Access-Control-Allow-Credentials</a>
     * in the MDN Web Docs.</p>
     */
    inline bool GetAccessControlAllowCredentials() const { return m_accessControlAllowCredentials; }
    inline bool AccessControlAllowCredentialsHasBeenSet() const { return m_accessControlAllowCredentialsHasBeenSet; }
    inline void SetAccessControlAllowCredentials(bool value) { m_accessControlAllowCredentialsHasBeenSet = true; m_accessControlAllowCredentials = value; }
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlAllowCredentials(bool value) { SetAccessControlAllowCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP headers that CloudFront includes as values for the
     * <code>Access-Control-Expose-Headers</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Expose-Headers</code> HTTP response
     * header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyAccessControlExposeHeaders& GetAccessControlExposeHeaders() const { return m_accessControlExposeHeaders; }
    inline bool AccessControlExposeHeadersHasBeenSet() const { return m_accessControlExposeHeadersHasBeenSet; }
    template<typename AccessControlExposeHeadersT = ResponseHeadersPolicyAccessControlExposeHeaders>
    void SetAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = std::forward<AccessControlExposeHeadersT>(value); }
    template<typename AccessControlExposeHeadersT = ResponseHeadersPolicyAccessControlExposeHeaders>
    ResponseHeadersPolicyCorsConfig& WithAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) { SetAccessControlExposeHeaders(std::forward<AccessControlExposeHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number that CloudFront uses as the value for the
     * <code>Access-Control-Max-Age</code> HTTP response header.</p> <p>For more
     * information about the <code>Access-Control-Max-Age</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Max-Age">Access-Control-Max-Age</a>
     * in the MDN Web Docs.</p>
     */
    inline int GetAccessControlMaxAgeSec() const { return m_accessControlMaxAgeSec; }
    inline bool AccessControlMaxAgeSecHasBeenSet() const { return m_accessControlMaxAgeSecHasBeenSet; }
    inline void SetAccessControlMaxAgeSec(int value) { m_accessControlMaxAgeSecHasBeenSet = true; m_accessControlMaxAgeSec = value; }
    inline ResponseHeadersPolicyCorsConfig& WithAccessControlMaxAgeSec(int value) { SetAccessControlMaxAgeSec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines whether CloudFront overrides HTTP response headers
     * received from the origin with the ones specified in this response headers
     * policy.</p>
     */
    inline bool GetOriginOverride() const { return m_originOverride; }
    inline bool OriginOverrideHasBeenSet() const { return m_originOverrideHasBeenSet; }
    inline void SetOriginOverride(bool value) { m_originOverrideHasBeenSet = true; m_originOverride = value; }
    inline ResponseHeadersPolicyCorsConfig& WithOriginOverride(bool value) { SetOriginOverride(value); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyAccessControlAllowOrigins m_accessControlAllowOrigins;
    bool m_accessControlAllowOriginsHasBeenSet = false;

    ResponseHeadersPolicyAccessControlAllowHeaders m_accessControlAllowHeaders;
    bool m_accessControlAllowHeadersHasBeenSet = false;

    ResponseHeadersPolicyAccessControlAllowMethods m_accessControlAllowMethods;
    bool m_accessControlAllowMethodsHasBeenSet = false;

    bool m_accessControlAllowCredentials{false};
    bool m_accessControlAllowCredentialsHasBeenSet = false;

    ResponseHeadersPolicyAccessControlExposeHeaders m_accessControlExposeHeaders;
    bool m_accessControlExposeHeadersHasBeenSet = false;

    int m_accessControlMaxAgeSec{0};
    bool m_accessControlMaxAgeSecHasBeenSet = false;

    bool m_originOverride{false};
    bool m_originOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
