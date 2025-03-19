/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/CertificateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/RenewalSummary.h>
#include <aws/lightsail/model/DomainValidationRecord.h>
#include <aws/lightsail/model/Tag.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the full details of an Amazon Lightsail SSL/TLS certificate.</p>
   *  <p>To get a summary of a certificate, use the
   * <code>GetCertificates</code> action and omit
   * <code>includeCertificateDetails</code> from your request. The response will
   * include only the certificate Amazon Resource Name (ARN), certificate name,
   * domain name, and tags.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Certificate">AWS
   * API Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_LIGHTSAIL_API Certificate() = default;
    AWS_LIGHTSAIL_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Certificate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate (<code>my-certificate</code>).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Certificate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    Certificate& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the certificate.</p>
     */
    inline CertificateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Certificate& WithStatus(CertificateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    Certificate& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the alternate domains
     * (<code>example2.com</code>) and subdomains (<code>blog.example.com</code>) of
     * the certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    Certificate& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = Aws::String>
    Certificate& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline const Aws::Vector<DomainValidationRecord>& GetDomainValidationRecords() const { return m_domainValidationRecords; }
    inline bool DomainValidationRecordsHasBeenSet() const { return m_domainValidationRecordsHasBeenSet; }
    template<typename DomainValidationRecordsT = Aws::Vector<DomainValidationRecord>>
    void SetDomainValidationRecords(DomainValidationRecordsT&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = std::forward<DomainValidationRecordsT>(value); }
    template<typename DomainValidationRecordsT = Aws::Vector<DomainValidationRecord>>
    Certificate& WithDomainValidationRecords(DomainValidationRecordsT&& value) { SetDomainValidationRecords(std::forward<DomainValidationRecordsT>(value)); return *this;}
    template<typename DomainValidationRecordsT = DomainValidationRecord>
    Certificate& AddDomainValidationRecords(DomainValidationRecordsT&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.emplace_back(std::forward<DomainValidationRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline const Aws::String& GetRequestFailureReason() const { return m_requestFailureReason; }
    inline bool RequestFailureReasonHasBeenSet() const { return m_requestFailureReasonHasBeenSet; }
    template<typename RequestFailureReasonT = Aws::String>
    void SetRequestFailureReason(RequestFailureReasonT&& value) { m_requestFailureReasonHasBeenSet = true; m_requestFailureReason = std::forward<RequestFailureReasonT>(value); }
    template<typename RequestFailureReasonT = Aws::String>
    Certificate& WithRequestFailureReason(RequestFailureReasonT&& value) { SetRequestFailureReason(std::forward<RequestFailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Lightsail resources that the certificate is attached to.</p>
     */
    inline int GetInUseResourceCount() const { return m_inUseResourceCount; }
    inline bool InUseResourceCountHasBeenSet() const { return m_inUseResourceCountHasBeenSet; }
    inline void SetInUseResourceCount(int value) { m_inUseResourceCountHasBeenSet = true; m_inUseResourceCount = value; }
    inline Certificate& WithInUseResourceCount(int value) { SetInUseResourceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline const Aws::String& GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    template<typename KeyAlgorithmT = Aws::String>
    void SetKeyAlgorithm(KeyAlgorithmT&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::forward<KeyAlgorithmT>(value); }
    template<typename KeyAlgorithmT = Aws::String>
    Certificate& WithKeyAlgorithm(KeyAlgorithmT&& value) { SetKeyAlgorithm(std::forward<KeyAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Certificate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
    template<typename IssuedAtT = Aws::Utils::DateTime>
    void SetIssuedAt(IssuedAtT&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::forward<IssuedAtT>(value); }
    template<typename IssuedAtT = Aws::Utils::DateTime>
    Certificate& WithIssuedAt(IssuedAtT&& value) { SetIssuedAt(std::forward<IssuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline const Aws::String& GetIssuerCA() const { return m_issuerCA; }
    inline bool IssuerCAHasBeenSet() const { return m_issuerCAHasBeenSet; }
    template<typename IssuerCAT = Aws::String>
    void SetIssuerCA(IssuerCAT&& value) { m_issuerCAHasBeenSet = true; m_issuerCA = std::forward<IssuerCAT>(value); }
    template<typename IssuerCAT = Aws::String>
    Certificate& WithIssuerCA(IssuerCAT&& value) { SetIssuerCA(std::forward<IssuerCAT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    Certificate& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    Certificate& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline const Aws::String& GetEligibleToRenew() const { return m_eligibleToRenew; }
    inline bool EligibleToRenewHasBeenSet() const { return m_eligibleToRenewHasBeenSet; }
    template<typename EligibleToRenewT = Aws::String>
    void SetEligibleToRenew(EligibleToRenewT&& value) { m_eligibleToRenewHasBeenSet = true; m_eligibleToRenew = std::forward<EligibleToRenewT>(value); }
    template<typename EligibleToRenewT = Aws::String>
    Certificate& WithEligibleToRenew(EligibleToRenewT&& value) { SetEligibleToRenew(std::forward<EligibleToRenewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline const RenewalSummary& GetRenewalSummary() const { return m_renewalSummary; }
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }
    template<typename RenewalSummaryT = RenewalSummary>
    void SetRenewalSummary(RenewalSummaryT&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::forward<RenewalSummaryT>(value); }
    template<typename RenewalSummaryT = RenewalSummary>
    Certificate& WithRenewalSummary(RenewalSummaryT&& value) { SetRenewalSummary(std::forward<RenewalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    void SetRevokedAt(RevokedAtT&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::forward<RevokedAtT>(value); }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    Certificate& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline const Aws::String& GetRevocationReason() const { return m_revocationReason; }
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }
    template<typename RevocationReasonT = Aws::String>
    void SetRevocationReason(RevocationReasonT&& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = std::forward<RevocationReasonT>(value); }
    template<typename RevocationReasonT = Aws::String>
    Certificate& WithRevocationReason(RevocationReasonT&& value) { SetRevocationReason(std::forward<RevocationReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Certificate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Certificate& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    Certificate& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    CertificateStatus m_status{CertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::Vector<DomainValidationRecord> m_domainValidationRecords;
    bool m_domainValidationRecordsHasBeenSet = false;

    Aws::String m_requestFailureReason;
    bool m_requestFailureReasonHasBeenSet = false;

    int m_inUseResourceCount{0};
    bool m_inUseResourceCountHasBeenSet = false;

    Aws::String m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt{};
    bool m_issuedAtHasBeenSet = false;

    Aws::String m_issuerCA;
    bool m_issuerCAHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    Aws::String m_eligibleToRenew;
    bool m_eligibleToRenewHasBeenSet = false;

    RenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_revocationReason;
    bool m_revocationReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
