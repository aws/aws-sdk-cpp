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
    AWS_CLOUDFRONT_API ResponseHeadersPolicySecurityHeadersConfig();
    AWS_CLOUDFRONT_API ResponseHeadersPolicySecurityHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicySecurityHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyXSSProtection& GetXSSProtection() const{ return m_xSSProtection; }

    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline bool XSSProtectionHasBeenSet() const { return m_xSSProtectionHasBeenSet; }

    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetXSSProtection(const ResponseHeadersPolicyXSSProtection& value) { m_xSSProtectionHasBeenSet = true; m_xSSProtection = value; }

    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetXSSProtection(ResponseHeadersPolicyXSSProtection&& value) { m_xSSProtectionHasBeenSet = true; m_xSSProtection = std::move(value); }

    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithXSSProtection(const ResponseHeadersPolicyXSSProtection& value) { SetXSSProtection(value); return *this;}

    /**
     * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-XSS-Protection</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithXSSProtection(ResponseHeadersPolicyXSSProtection&& value) { SetXSSProtection(std::move(value)); return *this;}


    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyFrameOptions& GetFrameOptions() const{ return m_frameOptions; }

    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline bool FrameOptionsHasBeenSet() const { return m_frameOptionsHasBeenSet; }

    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetFrameOptions(const ResponseHeadersPolicyFrameOptions& value) { m_frameOptionsHasBeenSet = true; m_frameOptions = value; }

    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetFrameOptions(ResponseHeadersPolicyFrameOptions&& value) { m_frameOptionsHasBeenSet = true; m_frameOptions = std::move(value); }

    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithFrameOptions(const ResponseHeadersPolicyFrameOptions& value) { SetFrameOptions(value); return *this;}

    /**
     * <p>Determines whether CloudFront includes the <code>X-Frame-Options</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>X-Frame-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options">X-Frame-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithFrameOptions(ResponseHeadersPolicyFrameOptions&& value) { SetFrameOptions(std::move(value)); return *this;}


    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyReferrerPolicy& GetReferrerPolicy() const{ return m_referrerPolicy; }

    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline bool ReferrerPolicyHasBeenSet() const { return m_referrerPolicyHasBeenSet; }

    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetReferrerPolicy(const ResponseHeadersPolicyReferrerPolicy& value) { m_referrerPolicyHasBeenSet = true; m_referrerPolicy = value; }

    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetReferrerPolicy(ResponseHeadersPolicyReferrerPolicy&& value) { m_referrerPolicyHasBeenSet = true; m_referrerPolicy = std::move(value); }

    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithReferrerPolicy(const ResponseHeadersPolicyReferrerPolicy& value) { SetReferrerPolicy(value); return *this;}

    /**
     * <p>Determines whether CloudFront includes the <code>Referrer-Policy</code> HTTP
     * response header and the header's value.</p> <p>For more information about the
     * <code>Referrer-Policy</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Referrer-Policy">Referrer-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithReferrerPolicy(ResponseHeadersPolicyReferrerPolicy&& value) { SetReferrerPolicy(std::move(value)); return *this;}


    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyContentSecurityPolicy& GetContentSecurityPolicy() const{ return m_contentSecurityPolicy; }

    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline bool ContentSecurityPolicyHasBeenSet() const { return m_contentSecurityPolicyHasBeenSet; }

    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetContentSecurityPolicy(const ResponseHeadersPolicyContentSecurityPolicy& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = value; }

    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetContentSecurityPolicy(ResponseHeadersPolicyContentSecurityPolicy&& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = std::move(value); }

    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithContentSecurityPolicy(const ResponseHeadersPolicyContentSecurityPolicy& value) { SetContentSecurityPolicy(value); return *this;}

    /**
     * <p>The policy directives and their values that CloudFront includes as values for
     * the <code>Content-Security-Policy</code> HTTP response header.</p> <p>For more
     * information about the <code>Content-Security-Policy</code> HTTP response header,
     * see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy">Content-Security-Policy</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithContentSecurityPolicy(ResponseHeadersPolicyContentSecurityPolicy&& value) { SetContentSecurityPolicy(std::move(value)); return *this;}


    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyContentTypeOptions& GetContentTypeOptions() const{ return m_contentTypeOptions; }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline bool ContentTypeOptionsHasBeenSet() const { return m_contentTypeOptionsHasBeenSet; }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetContentTypeOptions(const ResponseHeadersPolicyContentTypeOptions& value) { m_contentTypeOptionsHasBeenSet = true; m_contentTypeOptions = value; }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetContentTypeOptions(ResponseHeadersPolicyContentTypeOptions&& value) { m_contentTypeOptionsHasBeenSet = true; m_contentTypeOptions = std::move(value); }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithContentTypeOptions(const ResponseHeadersPolicyContentTypeOptions& value) { SetContentTypeOptions(value); return *this;}

    /**
     * <p>Determines whether CloudFront includes the
     * <code>X-Content-Type-Options</code> HTTP response header with its value set to
     * <code>nosniff</code>.</p> <p>For more information about the
     * <code>X-Content-Type-Options</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithContentTypeOptions(ResponseHeadersPolicyContentTypeOptions&& value) { SetContentTypeOptions(std::move(value)); return *this;}


    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline const ResponseHeadersPolicyStrictTransportSecurity& GetStrictTransportSecurity() const{ return m_strictTransportSecurity; }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline bool StrictTransportSecurityHasBeenSet() const { return m_strictTransportSecurityHasBeenSet; }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetStrictTransportSecurity(const ResponseHeadersPolicyStrictTransportSecurity& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = value; }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline void SetStrictTransportSecurity(ResponseHeadersPolicyStrictTransportSecurity&& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = std::move(value); }

    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithStrictTransportSecurity(const ResponseHeadersPolicyStrictTransportSecurity& value) { SetStrictTransportSecurity(value); return *this;}

    /**
     * <p>Determines whether CloudFront includes the
     * <code>Strict-Transport-Security</code> HTTP response header and the header's
     * value.</p> <p>For more information about the
     * <code>Strict-Transport-Security</code> HTTP response header, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
     * in the MDN Web Docs.</p>
     */
    inline ResponseHeadersPolicySecurityHeadersConfig& WithStrictTransportSecurity(ResponseHeadersPolicyStrictTransportSecurity&& value) { SetStrictTransportSecurity(std::move(value)); return *this;}

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
