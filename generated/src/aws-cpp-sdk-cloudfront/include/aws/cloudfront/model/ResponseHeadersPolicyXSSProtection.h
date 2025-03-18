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
   * <p>Determines whether CloudFront includes the <code>X-XSS-Protection</code> HTTP
   * response header and the header's value.</p> <p>For more information about the
   * <code>X-XSS-Protection</code> HTTP response header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyXSSProtection">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyXSSProtection
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyXSSProtection() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyXSSProtection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyXSSProtection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A Boolean that determines whether CloudFront overrides the
     * <code>X-XSS-Protection</code> HTTP response header received from the origin with
     * the one specified in this response headers policy.</p>
     */
    inline bool GetOverride() const { return m_override; }
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }
    inline ResponseHeadersPolicyXSSProtection& WithOverride(bool value) { SetOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines the value of the <code>X-XSS-Protection</code> HTTP
     * response header. When this setting is <code>true</code>, the value of the
     * <code>X-XSS-Protection</code> header is <code>1</code>. When this setting is
     * <code>false</code>, the value of the <code>X-XSS-Protection</code> header is
     * <code>0</code>.</p> <p>For more information about these settings, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline bool GetProtection() const { return m_protection; }
    inline bool ProtectionHasBeenSet() const { return m_protectionHasBeenSet; }
    inline void SetProtection(bool value) { m_protectionHasBeenSet = true; m_protection = value; }
    inline ResponseHeadersPolicyXSSProtection& WithProtection(bool value) { SetProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines whether CloudFront includes the
     * <code>mode=block</code> directive in the <code>X-XSS-Protection</code>
     * header.</p> <p>For more information about this directive, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline bool GetModeBlock() const { return m_modeBlock; }
    inline bool ModeBlockHasBeenSet() const { return m_modeBlockHasBeenSet; }
    inline void SetModeBlock(bool value) { m_modeBlockHasBeenSet = true; m_modeBlock = value; }
    inline ResponseHeadersPolicyXSSProtection& WithModeBlock(bool value) { SetModeBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reporting URI, which CloudFront uses as the value of the
     * <code>report</code> directive in the <code>X-XSS-Protection</code> header.</p>
     * <p>You cannot specify a <code>ReportUri</code> when <code>ModeBlock</code> is
     * <code>true</code>.</p> <p>For more information about using a reporting URL, see
     * <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-XSS-Protection">X-XSS-Protection</a>
     * in the MDN Web Docs.</p>
     */
    inline const Aws::String& GetReportUri() const { return m_reportUri; }
    inline bool ReportUriHasBeenSet() const { return m_reportUriHasBeenSet; }
    template<typename ReportUriT = Aws::String>
    void SetReportUri(ReportUriT&& value) { m_reportUriHasBeenSet = true; m_reportUri = std::forward<ReportUriT>(value); }
    template<typename ReportUriT = Aws::String>
    ResponseHeadersPolicyXSSProtection& WithReportUri(ReportUriT&& value) { SetReportUri(std::forward<ReportUriT>(value)); return *this;}
    ///@}
  private:

    bool m_override{false};
    bool m_overrideHasBeenSet = false;

    bool m_protection{false};
    bool m_protectionHasBeenSet = false;

    bool m_modeBlock{false};
    bool m_modeBlockHasBeenSet = false;

    Aws::String m_reportUri;
    bool m_reportUriHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
