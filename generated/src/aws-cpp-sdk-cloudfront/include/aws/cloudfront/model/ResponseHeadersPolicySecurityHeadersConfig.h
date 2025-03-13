/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyXSSProtection.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyFrameOptions.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyReferrerPolicy.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyContentSecurityPolicy.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyContentTypeOptions.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyStrictTransportSecurity.h>
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
   * <p>A configuration for a set of security-related HTTP response headers.
   * CloudFront adds these headers to HTTP responses that it sends for requests that
   * match a cache behavior associated with this response headers
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicySecurityHeadersConfig">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicySecurityHeadersConfig
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicySecurityHeadersConfig() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicySecurityHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicySecurityHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyXSSProtection& GetXSSProtection() const { return m_xSSProtection; }
    inline bool XSSProtectionHasBeenSet() const { return m_xSSProtectionHasBeenSet; }
    template<typename XSSProtectionT = ResponseHeadersPolicyXSSProtection>
    void SetXSSProtection(XSSProtectionT&& value) { m_xSSProtectionHasBeenSet = true; m_xSSProtection = std::forward<XSSProtectionT>(value); }
    template<typename XSSProtectionT = ResponseHeadersPolicyXSSProtection>
    ResponseHeadersPolicySecurityHeadersConfig& WithXSSProtection(XSSProtectionT&& value) { SetXSSProtection(std::forward<XSSProtectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyFrameOptions& GetFrameOptions() const { return m_frameOptions; }
    inline bool FrameOptionsHasBeenSet() const { return m_frameOptionsHasBeenSet; }
    template<typename FrameOptionsT = ResponseHeadersPolicyFrameOptions>
    void SetFrameOptions(FrameOptionsT&& value) { m_frameOptionsHasBeenSet = true; m_frameOptions = std::forward<FrameOptionsT>(value); }
    template<typename FrameOptionsT = ResponseHeadersPolicyFrameOptions>
    ResponseHeadersPolicySecurityHeadersConfig& WithFrameOptions(FrameOptionsT&& value) { SetFrameOptions(std::forward<FrameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyReferrerPolicy& GetReferrerPolicy() const { return m_referrerPolicy; }
    inline bool ReferrerPolicyHasBeenSet() const { return m_referrerPolicyHasBeenSet; }
    template<typename ReferrerPolicyT = ResponseHeadersPolicyReferrerPolicy>
    void SetReferrerPolicy(ReferrerPolicyT&& value) { m_referrerPolicyHasBeenSet = true; m_referrerPolicy = std::forward<ReferrerPolicyT>(value); }
    template<typename ReferrerPolicyT = ResponseHeadersPolicyReferrerPolicy>
    ResponseHeadersPolicySecurityHeadersConfig& WithReferrerPolicy(ReferrerPolicyT&& value) { SetReferrerPolicy(std::forward<ReferrerPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyContentSecurityPolicy& GetContentSecurityPolicy() const { return m_contentSecurityPolicy; }
    inline bool ContentSecurityPolicyHasBeenSet() const { return m_contentSecurityPolicyHasBeenSet; }
    template<typename ContentSecurityPolicyT = ResponseHeadersPolicyContentSecurityPolicy>
    void SetContentSecurityPolicy(ContentSecurityPolicyT&& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = std::forward<ContentSecurityPolicyT>(value); }
    template<typename ContentSecurityPolicyT = ResponseHeadersPolicyContentSecurityPolicy>
    ResponseHeadersPolicySecurityHeadersConfig& WithContentSecurityPolicy(ContentSecurityPolicyT&& value) { SetContentSecurityPolicy(std::forward<ContentSecurityPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyContentTypeOptions& GetContentTypeOptions() const { return m_contentTypeOptions; }
    inline bool ContentTypeOptionsHasBeenSet() const { return m_contentTypeOptionsHasBeenSet; }
    template<typename ContentTypeOptionsT = ResponseHeadersPolicyContentTypeOptions>
    void SetContentTypeOptions(ContentTypeOptionsT&& value) { m_contentTypeOptionsHasBeenSet = true; m_contentTypeOptions = std::forward<ContentTypeOptionsT>(value); }
    template<typename ContentTypeOptionsT = ResponseHeadersPolicyContentTypeOptions>
    ResponseHeadersPolicySecurityHeadersConfig& WithContentTypeOptions(ContentTypeOptionsT&& value) { SetContentTypeOptions(std::forward<ContentTypeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/understanding-response-headers-policies.html#understanding-response-headers-policies-security">Security
     * headers</a> in the <i>Amazon CloudFront Developer Guide</i> and <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyStrictTransportSecurity& GetStrictTransportSecurity() const { return m_strictTransportSecurity; }
    inline bool StrictTransportSecurityHasBeenSet() const { return m_strictTransportSecurityHasBeenSet; }
    template<typename StrictTransportSecurityT = ResponseHeadersPolicyStrictTransportSecurity>
    void SetStrictTransportSecurity(StrictTransportSecurityT&& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = std::forward<StrictTransportSecurityT>(value); }
    template<typename StrictTransportSecurityT = ResponseHeadersPolicyStrictTransportSecurity>
    ResponseHeadersPolicySecurityHeadersConfig& WithStrictTransportSecurity(StrictTransportSecurityT&& value) { SetStrictTransportSecurity(std::forward<StrictTransportSecurityT>(value)); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyXSSProtection m_xSSProtection;
    bool m_xSSProtectionHasBeenSet = false;

    ResponseHeadersPolicyFrameOptions m_frameOptions;
    bool m_frameOptionsHasBeenSet = false;

    ResponseHeadersPolicyReferrerPolicy m_referrerPolicy;
    bool m_referrerPolicyHasBeenSet = false;

    ResponseHeadersPolicyContentSecurityPolicy m_contentSecurityPolicy;
    bool m_contentSecurityPolicyHasBeenSet = false;

    ResponseHeadersPolicyContentTypeOptions m_contentTypeOptions;
    bool m_contentTypeOptionsHasBeenSet = false;

    ResponseHeadersPolicyStrictTransportSecurity m_strictTransportSecurity;
    bool m_strictTransportSecurityHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
