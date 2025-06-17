/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/DomainStatus.h>
#include <aws/acm/model/ResourceRecord.h>
#include <aws/acm/model/HttpRedirect.h>
#include <aws/acm/model/ValidationMethod.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>Contains information about the validation of each domain name in the
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DomainValidation">AWS
   * API Reference</a></p>
   */
  class DomainValidation
  {
  public:
    AWS_ACM_API DomainValidation() = default;
    AWS_ACM_API DomainValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API DomainValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainValidation& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationEmails() const { return m_validationEmails; }
    inline bool ValidationEmailsHasBeenSet() const { return m_validationEmailsHasBeenSet; }
    template<typename ValidationEmailsT = Aws::Vector<Aws::String>>
    void SetValidationEmails(ValidationEmailsT&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = std::forward<ValidationEmailsT>(value); }
    template<typename ValidationEmailsT = Aws::Vector<Aws::String>>
    DomainValidation& WithValidationEmails(ValidationEmailsT&& value) { SetValidationEmails(std::forward<ValidationEmailsT>(value)); return *this;}
    template<typename ValidationEmailsT = Aws::String>
    DomainValidation& AddValidationEmails(ValidationEmailsT&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.emplace_back(std::forward<ValidationEmailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline const Aws::String& GetValidationDomain() const { return m_validationDomain; }
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }
    template<typename ValidationDomainT = Aws::String>
    void SetValidationDomain(ValidationDomainT&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::forward<ValidationDomainT>(value); }
    template<typename ValidationDomainT = Aws::String>
    DomainValidation& WithValidationDomain(ValidationDomainT&& value) { SetValidationDomain(std::forward<ValidationDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline DomainStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(DomainStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline DomainValidation& WithValidationStatus(DomainStatus value) { SetValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>  <p>The CNAME information that
     * you need does not include the name of your domain. If you include your domain
     * name in the DNS database CNAME record, validation fails. For example, if the
     * name is <code>_a79865eb4cd1a6ab990a45779b4e0b96.yourdomain.com</code>, only
     * <code>_a79865eb4cd1a6ab990a45779b4e0b96</code> must be used.</p> 
     */
    inline const ResourceRecord& GetResourceRecord() const { return m_resourceRecord; }
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }
    template<typename ResourceRecordT = ResourceRecord>
    void SetResourceRecord(ResourceRecordT&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::forward<ResourceRecordT>(value); }
    template<typename ResourceRecordT = ResourceRecord>
    DomainValidation& WithResourceRecord(ResourceRecordT&& value) { SetResourceRecord(std::forward<ResourceRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information for HTTP-based domain validation of certificates
     * requested through Amazon CloudFront and issued by ACM. This field exists only
     * when the certificate type is <code>AMAZON_ISSUED</code> and the validation
     * method is <code>HTTP</code>.</p>
     */
    inline const HttpRedirect& GetHttpRedirect() const { return m_httpRedirect; }
    inline bool HttpRedirectHasBeenSet() const { return m_httpRedirectHasBeenSet; }
    template<typename HttpRedirectT = HttpRedirect>
    void SetHttpRedirect(HttpRedirectT&& value) { m_httpRedirectHasBeenSet = true; m_httpRedirect = std::forward<HttpRedirectT>(value); }
    template<typename HttpRedirectT = HttpRedirect>
    DomainValidation& WithHttpRedirect(HttpRedirectT&& value) { SetHttpRedirect(std::forward<HttpRedirectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline ValidationMethod GetValidationMethod() const { return m_validationMethod; }
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
    inline void SetValidationMethod(ValidationMethod value) { m_validationMethodHasBeenSet = true; m_validationMethod = value; }
    inline DomainValidation& WithValidationMethod(ValidationMethod value) { SetValidationMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_validationEmails;
    bool m_validationEmailsHasBeenSet = false;

    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet = false;

    DomainStatus m_validationStatus{DomainStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;

    ResourceRecord m_resourceRecord;
    bool m_resourceRecordHasBeenSet = false;

    HttpRedirect m_httpRedirect;
    bool m_httpRedirectHasBeenSet = false;

    ValidationMethod m_validationMethod{ValidationMethod::NOT_SET};
    bool m_validationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
