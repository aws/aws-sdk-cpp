/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class ResendValidationEmailRequest : public ACMRequest
  {
  public:
    AWS_ACM_API ResendValidationEmailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResendValidationEmail"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    ResendValidationEmailRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    ResendValidationEmailRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline const Aws::String& GetValidationDomain() const { return m_validationDomain; }
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }
    template<typename ValidationDomainT = Aws::String>
    void SetValidationDomain(ValidationDomainT&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::forward<ValidationDomainT>(value); }
    template<typename ValidationDomainT = Aws::String>
    ResendValidationEmailRequest& WithValidationDomain(ValidationDomainT&& value) { SetValidationDomain(std::forward<ValidationDomainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
