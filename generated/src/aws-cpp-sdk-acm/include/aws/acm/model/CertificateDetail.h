/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateManagedBy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/RevocationReason.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/FailureReason.h>
#include <aws/acm/model/CertificateType.h>
#include <aws/acm/model/RenewalSummary.h>
#include <aws/acm/model/RenewalEligibility.h>
#include <aws/acm/model/CertificateOptions.h>
#include <aws/acm/model/DomainValidation.h>
#include <aws/acm/model/KeyUsage.h>
#include <aws/acm/model/ExtendedKeyUsage.h>
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
   * <p>Contains metadata about an ACM certificate. This structure is returned in the
   * response to a <a>DescribeCertificate</a> request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateDetail">AWS
   * API Reference</a></p>
   */
  class CertificateDetail
  {
  public:
    AWS_ACM_API CertificateDetail() = default;
    AWS_ACM_API CertificateDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API CertificateDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CertificateDetail& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name for the certificate, such as www.example.com
     * or example.com.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CertificateDetail& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    CertificateDetail& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = Aws::String>
    CertificateDetail& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services service that manages the certificate
     * issued by ACM.</p>
     */
    inline CertificateManagedBy GetManagedBy() const { return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(CertificateManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline CertificateDetail& WithManagedBy(CertificateManagedBy value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <a>RequestCertificate</a> request. This field exists
     * only when the certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline const Aws::Vector<DomainValidation>& GetDomainValidationOptions() const { return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    template<typename DomainValidationOptionsT = Aws::Vector<DomainValidation>>
    void SetDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::forward<DomainValidationOptionsT>(value); }
    template<typename DomainValidationOptionsT = Aws::Vector<DomainValidation>>
    CertificateDetail& WithDomainValidationOptions(DomainValidationOptionsT&& value) { SetDomainValidationOptions(std::forward<DomainValidationOptionsT>(value)); return *this;}
    template<typename DomainValidationOptionsT = DomainValidation>
    CertificateDetail& AddDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.emplace_back(std::forward<DomainValidationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerial() const { return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    template<typename SerialT = Aws::String>
    void SetSerial(SerialT&& value) { m_serialHasBeenSet = true; m_serial = std::forward<SerialT>(value); }
    template<typename SerialT = Aws::String>
    CertificateDetail& WithSerial(SerialT&& value) { SetSerial(std::forward<SerialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    CertificateDetail& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    CertificateDetail& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
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
    CertificateDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    CertificateDetail& WithIssuedAt(IssuedAtT&& value) { SetIssuedAt(std::forward<IssuedAtT>(value)); return *this;}
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
    CertificateDetail& WithImportedAt(ImportedAtT&& value) { SetImportedAt(std::forward<ImportedAtT>(value)); return *this;}
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
    inline CertificateDetail& WithStatus(CertificateStatus value) { SetStatus(value); return *this;}
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
    CertificateDetail& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the certificate was revoked. This value exists only when the
     * certificate status is <code>REVOKED</code>. </p>
     */
    inline RevocationReason GetRevocationReason() const { return m_revocationReason; }
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }
    inline void SetRevocationReason(RevocationReason value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }
    inline CertificateDetail& WithRevocationReason(RevocationReason value) { SetRevocationReason(value); return *this;}
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
    CertificateDetail& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
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
    CertificateDetail& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(KeyAlgorithm value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline CertificateDetail& WithKeyAlgorithm(KeyAlgorithm value) { SetKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const { return m_signatureAlgorithm; }
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }
    template<typename SignatureAlgorithmT = Aws::String>
    void SetSignatureAlgorithm(SignatureAlgorithmT&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::forward<SignatureAlgorithmT>(value); }
    template<typename SignatureAlgorithmT = Aws::String>
    CertificateDetail& WithSignatureAlgorithm(SignatureAlgorithmT&& value) { SetSignatureAlgorithm(std::forward<SignatureAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ARNs for the Amazon Web Services resources that are using the
     * certificate. A certificate can be used by multiple Amazon Web Services
     * resources. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInUseBy() const { return m_inUseBy; }
    inline bool InUseByHasBeenSet() const { return m_inUseByHasBeenSet; }
    template<typename InUseByT = Aws::Vector<Aws::String>>
    void SetInUseBy(InUseByT&& value) { m_inUseByHasBeenSet = true; m_inUseBy = std::forward<InUseByT>(value); }
    template<typename InUseByT = Aws::Vector<Aws::String>>
    CertificateDetail& WithInUseBy(InUseByT&& value) { SetInUseBy(std::forward<InUseByT>(value)); return *this;}
    template<typename InUseByT = Aws::String>
    CertificateDetail& AddInUseBy(InUseByT&& value) { m_inUseByHasBeenSet = true; m_inUseBy.emplace_back(std::forward<InUseByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason the certificate request failed. This value exists only when the
     * certificate status is <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting.html#troubleshooting-failed">Certificate
     * Request Failed</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline FailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(FailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline CertificateDetail& WithFailureReason(FailureReason value) { SetFailureReason(value); return *this;}
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
    inline CertificateDetail& WithType(CertificateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for the certificate. This field exists only when the certificate
     * type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const RenewalSummary& GetRenewalSummary() const { return m_renewalSummary; }
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }
    template<typename RenewalSummaryT = RenewalSummary>
    void SetRenewalSummary(RenewalSummaryT&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::forward<RenewalSummaryT>(value); }
    template<typename RenewalSummaryT = RenewalSummary>
    CertificateDetail& WithRenewalSummary(RenewalSummaryT&& value) { SetRenewalSummary(std::forward<RenewalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline const Aws::Vector<KeyUsage>& GetKeyUsages() const { return m_keyUsages; }
    inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }
    template<typename KeyUsagesT = Aws::Vector<KeyUsage>>
    void SetKeyUsages(KeyUsagesT&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = std::forward<KeyUsagesT>(value); }
    template<typename KeyUsagesT = Aws::Vector<KeyUsage>>
    CertificateDetail& WithKeyUsages(KeyUsagesT&& value) { SetKeyUsages(std::forward<KeyUsagesT>(value)); return *this;}
    template<typename KeyUsagesT = KeyUsage>
    CertificateDetail& AddKeyUsages(KeyUsagesT&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.emplace_back(std::forward<KeyUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline const Aws::Vector<ExtendedKeyUsage>& GetExtendedKeyUsages() const { return m_extendedKeyUsages; }
    inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }
    template<typename ExtendedKeyUsagesT = Aws::Vector<ExtendedKeyUsage>>
    void SetExtendedKeyUsages(ExtendedKeyUsagesT&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = std::forward<ExtendedKeyUsagesT>(value); }
    template<typename ExtendedKeyUsagesT = Aws::Vector<ExtendedKeyUsage>>
    CertificateDetail& WithExtendedKeyUsages(ExtendedKeyUsagesT&& value) { SetExtendedKeyUsages(std::forward<ExtendedKeyUsagesT>(value)); return *this;}
    template<typename ExtendedKeyUsagesT = ExtendedKeyUsage>
    CertificateDetail& AddExtendedKeyUsages(ExtendedKeyUsagesT&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.emplace_back(std::forward<ExtendedKeyUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * issued the certificate. This has the following format: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    CertificateDetail& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
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
    inline CertificateDetail& WithRenewalEligibility(RenewalEligibility value) { SetRenewalEligibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value that specifies whether to add the certificate to a transparency log.
     * Certificate transparency makes it possible to detect SSL certificates that have
     * been mistakenly or maliciously issued. A browser might respond to certificate
     * that has not been logged by showing an error message. The logs are
     * cryptographically secure. </p>
     */
    inline const CertificateOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = CertificateOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = CertificateOptions>
    CertificateDetail& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    CertificateManagedBy m_managedBy{CertificateManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;

    Aws::Vector<DomainValidation> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt{};
    bool m_issuedAtHasBeenSet = false;

    Aws::Utils::DateTime m_importedAt{};
    bool m_importedAtHasBeenSet = false;

    CertificateStatus m_status{CertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;

    RevocationReason m_revocationReason{RevocationReason::NOT_SET};
    bool m_revocationReasonHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_inUseBy;
    bool m_inUseByHasBeenSet = false;

    FailureReason m_failureReason{FailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;

    CertificateType m_type{CertificateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    Aws::Vector<KeyUsage> m_keyUsages;
    bool m_keyUsagesHasBeenSet = false;

    Aws::Vector<ExtendedKeyUsage> m_extendedKeyUsages;
    bool m_extendedKeyUsagesHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    RenewalEligibility m_renewalEligibility{RenewalEligibility::NOT_SET};
    bool m_renewalEligibilityHasBeenSet = false;

    CertificateOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
