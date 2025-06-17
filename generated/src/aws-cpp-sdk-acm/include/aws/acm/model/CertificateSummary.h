/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/CertificateType.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/CertificateExport.h>
#include <aws/acm/model/RenewalEligibility.h>
#include <aws/core/utils/DateTime.h>
#include <aws/acm/model/CertificateManagedBy.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
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
   * <p>This structure is returned in the response object of <a>ListCertificates</a>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateSummary">AWS
   * API Reference</a></p>
   */
  class CertificateSummary
  {
  public:
    AWS_ACM_API CertificateSummary() = default;
    AWS_ACM_API CertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API CertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CertificateSummary& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CertificateSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNameSummaries() const { return m_subjectAlternativeNameSummaries; }
    inline bool SubjectAlternativeNameSummariesHasBeenSet() const { return m_subjectAlternativeNameSummariesHasBeenSet; }
    template<typename SubjectAlternativeNameSummariesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNameSummaries(SubjectAlternativeNameSummariesT&& value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries = std::forward<SubjectAlternativeNameSummariesT>(value); }
    template<typename SubjectAlternativeNameSummariesT = Aws::Vector<Aws::String>>
    CertificateSummary& WithSubjectAlternativeNameSummaries(SubjectAlternativeNameSummariesT&& value) { SetSubjectAlternativeNameSummaries(std::forward<SubjectAlternativeNameSummariesT>(value)); return *this;}
    template<typename SubjectAlternativeNameSummariesT = Aws::String>
    CertificateSummary& AddSubjectAlternativeNameSummaries(SubjectAlternativeNameSummariesT&& value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries.emplace_back(std::forward<SubjectAlternativeNameSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * indicates whether the full list of subject alternative names has been included
     * in the response. If false, the response includes all of the subject alternative
     * names included in the certificate. If true, the response only includes the first
     * 100 subject alternative names included in the certificate. To display the full
     * list of subject alternative names, use <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline bool GetHasAdditionalSubjectAlternativeNames() const { return m_hasAdditionalSubjectAlternativeNames; }
    inline bool HasAdditionalSubjectAlternativeNamesHasBeenSet() const { return m_hasAdditionalSubjectAlternativeNamesHasBeenSet; }
    inline void SetHasAdditionalSubjectAlternativeNames(bool value) { m_hasAdditionalSubjectAlternativeNamesHasBeenSet = true; m_hasAdditionalSubjectAlternativeNames = value; }
    inline CertificateSummary& WithHasAdditionalSubjectAlternativeNames(bool value) { SetHasAdditionalSubjectAlternativeNames(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline CertificateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CertificateSummary& WithStatus(CertificateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline CertificateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CertificateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CertificateSummary& WithType(CertificateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(KeyAlgorithm value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline CertificateSummary& WithKeyAlgorithm(KeyAlgorithm value) { SetKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline const Aws::Vector<KeyUsageName>& GetKeyUsages() const { return m_keyUsages; }
    inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }
    template<typename KeyUsagesT = Aws::Vector<KeyUsageName>>
    void SetKeyUsages(KeyUsagesT&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = std::forward<KeyUsagesT>(value); }
    template<typename KeyUsagesT = Aws::Vector<KeyUsageName>>
    CertificateSummary& WithKeyUsages(KeyUsagesT&& value) { SetKeyUsages(std::forward<KeyUsagesT>(value)); return *this;}
    inline CertificateSummary& AddKeyUsages(KeyUsageName value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline const Aws::Vector<ExtendedKeyUsageName>& GetExtendedKeyUsages() const { return m_extendedKeyUsages; }
    inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }
    template<typename ExtendedKeyUsagesT = Aws::Vector<ExtendedKeyUsageName>>
    void SetExtendedKeyUsages(ExtendedKeyUsagesT&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = std::forward<ExtendedKeyUsagesT>(value); }
    template<typename ExtendedKeyUsagesT = Aws::Vector<ExtendedKeyUsageName>>
    CertificateSummary& WithExtendedKeyUsages(ExtendedKeyUsagesT&& value) { SetExtendedKeyUsages(std::forward<ExtendedKeyUsagesT>(value)); return *this;}
    inline CertificateSummary& AddExtendedKeyUsages(ExtendedKeyUsageName value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if export is enabled for the certificate.</p>
     */
    inline CertificateExport GetExportOption() const { return m_exportOption; }
    inline bool ExportOptionHasBeenSet() const { return m_exportOptionHasBeenSet; }
    inline void SetExportOption(CertificateExport value) { m_exportOptionHasBeenSet = true; m_exportOption = value; }
    inline CertificateSummary& WithExportOption(CertificateExport value) { SetExportOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the certificate is currently in use by any Amazon Web
     * Services resources.</p>
     */
    inline bool GetInUse() const { return m_inUse; }
    inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
    inline void SetInUse(bool value) { m_inUseHasBeenSet = true; m_inUse = value; }
    inline CertificateSummary& WithInUse(bool value) { SetInUse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the certificate has been exported. This value exists only
     * when the certificate type is <code>PRIVATE</code>.</p>
     */
    inline bool GetExported() const { return m_exported; }
    inline bool ExportedHasBeenSet() const { return m_exportedHasBeenSet; }
    inline void SetExported(bool value) { m_exportedHasBeenSet = true; m_exported = value; }
    inline CertificateSummary& WithExported(bool value) { SetExported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline RenewalEligibility GetRenewalEligibility() const { return m_renewalEligibility; }
    inline bool RenewalEligibilityHasBeenSet() const { return m_renewalEligibilityHasBeenSet; }
    inline void SetRenewalEligibility(RenewalEligibility value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = value; }
    inline CertificateSummary& WithRenewalEligibility(RenewalEligibility value) { SetRenewalEligibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    CertificateSummary& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    CertificateSummary& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CertificateSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
    template<typename IssuedAtT = Aws::Utils::DateTime>
    void SetIssuedAt(IssuedAtT&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::forward<IssuedAtT>(value); }
    template<typename IssuedAtT = Aws::Utils::DateTime>
    CertificateSummary& WithIssuedAt(IssuedAtT&& value) { SetIssuedAt(std::forward<IssuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetImportedAt() const { return m_importedAt; }
    inline bool ImportedAtHasBeenSet() const { return m_importedAtHasBeenSet; }
    template<typename ImportedAtT = Aws::Utils::DateTime>
    void SetImportedAt(ImportedAtT&& value) { m_importedAtHasBeenSet = true; m_importedAt = std::forward<ImportedAtT>(value); }
    template<typename ImportedAtT = Aws::Utils::DateTime>
    CertificateSummary& WithImportedAt(ImportedAtT&& value) { SetImportedAt(std::forward<ImportedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    void SetRevokedAt(RevokedAtT&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::forward<RevokedAtT>(value); }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    CertificateSummary& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services service that manages the certificate
     * issued by ACM.</p>
     */
    inline CertificateManagedBy GetManagedBy() const { return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(CertificateManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline CertificateSummary& WithManagedBy(CertificateManagedBy value) { SetManagedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNameSummaries;
    bool m_subjectAlternativeNameSummariesHasBeenSet = false;

    bool m_hasAdditionalSubjectAlternativeNames{false};
    bool m_hasAdditionalSubjectAlternativeNamesHasBeenSet = false;

    CertificateStatus m_status{CertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CertificateType m_type{CertificateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Vector<KeyUsageName> m_keyUsages;
    bool m_keyUsagesHasBeenSet = false;

    Aws::Vector<ExtendedKeyUsageName> m_extendedKeyUsages;
    bool m_extendedKeyUsagesHasBeenSet = false;

    CertificateExport m_exportOption{CertificateExport::NOT_SET};
    bool m_exportOptionHasBeenSet = false;

    bool m_inUse{false};
    bool m_inUseHasBeenSet = false;

    bool m_exported{false};
    bool m_exportedHasBeenSet = false;

    RenewalEligibility m_renewalEligibility{RenewalEligibility::NOT_SET};
    bool m_renewalEligibilityHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt{};
    bool m_issuedAtHasBeenSet = false;

    Aws::Utils::DateTime m_importedAt{};
    bool m_importedAtHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;

    CertificateManagedBy m_managedBy{CertificateManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
