/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ValidationTokenHost.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/CertificateTransparencyLoggingPreference.h>
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
   * <p>An object that represents the request for the Amazon CloudFront managed ACM
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ManagedCertificateRequest">AWS
   * API Reference</a></p>
   */
  class ManagedCertificateRequest
  {
  public:
    AWS_CLOUDFRONT_API ManagedCertificateRequest() = default;
    AWS_CLOUDFRONT_API ManagedCertificateRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ManagedCertificateRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specify how the HTTP validation token will be served when requesting the
     * CloudFront managed ACM certificate.</p> <ul> <li> <p>For
     * <code>cloudfront</code>, CloudFront will automatically serve the validation
     * token. Choose this mode if you can point the domain's DNS to CloudFront
     * immediately.</p> </li> <li> <p>For <code>self-hosted</code>, you serve the
     * validation token from your existing infrastructure. Choose this mode when you
     * need to maintain current traffic flow while your certificate is being issued.
     * You can place the validation token at the well-known path on your existing web
     * server, wait for ACM to validate and issue the certificate, and then update your
     * DNS to point to CloudFront.</p> </li> </ul>
     */
    inline ValidationTokenHost GetValidationTokenHost() const { return m_validationTokenHost; }
    inline bool ValidationTokenHostHasBeenSet() const { return m_validationTokenHostHasBeenSet; }
    inline void SetValidationTokenHost(ValidationTokenHost value) { m_validationTokenHostHasBeenSet = true; m_validationTokenHost = value; }
    inline ManagedCertificateRequest& WithValidationTokenHost(ValidationTokenHost value) { SetValidationTokenHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary domain name associated with the CloudFront managed ACM
     * certificate.</p>
     */
    inline const Aws::String& GetPrimaryDomainName() const { return m_primaryDomainName; }
    inline bool PrimaryDomainNameHasBeenSet() const { return m_primaryDomainNameHasBeenSet; }
    template<typename PrimaryDomainNameT = Aws::String>
    void SetPrimaryDomainName(PrimaryDomainNameT&& value) { m_primaryDomainNameHasBeenSet = true; m_primaryDomainName = std::forward<PrimaryDomainNameT>(value); }
    template<typename PrimaryDomainNameT = Aws::String>
    ManagedCertificateRequest& WithPrimaryDomainName(PrimaryDomainNameT&& value) { SetPrimaryDomainName(std::forward<PrimaryDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>disabled</code> option. Opt in by specifying <code>enabled</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-concepts.html#concept-transparency">Certificate
     * Transparency Logging </a> in the <i>Certificate Manager User Guide</i>.</p>
     */
    inline CertificateTransparencyLoggingPreference GetCertificateTransparencyLoggingPreference() const { return m_certificateTransparencyLoggingPreference; }
    inline bool CertificateTransparencyLoggingPreferenceHasBeenSet() const { return m_certificateTransparencyLoggingPreferenceHasBeenSet; }
    inline void SetCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference value) { m_certificateTransparencyLoggingPreferenceHasBeenSet = true; m_certificateTransparencyLoggingPreference = value; }
    inline ManagedCertificateRequest& WithCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference value) { SetCertificateTransparencyLoggingPreference(value); return *this;}
    ///@}
  private:

    ValidationTokenHost m_validationTokenHost{ValidationTokenHost::NOT_SET};
    bool m_validationTokenHostHasBeenSet = false;

    Aws::String m_primaryDomainName;
    bool m_primaryDomainNameHasBeenSet = false;

    CertificateTransparencyLoggingPreference m_certificateTransparencyLoggingPreference{CertificateTransparencyLoggingPreference::NOT_SET};
    bool m_certificateTransparencyLoggingPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
