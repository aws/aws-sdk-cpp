﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_ACM_API CertificateDetail();
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
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline CertificateDetail& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline CertificateDetail& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline CertificateDetail& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name for the certificate, such as www.example.com
     * or example.com.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CertificateDetail& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CertificateDetail& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CertificateDetail& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }
    inline CertificateDetail& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}
    inline CertificateDetail& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}
    inline CertificateDetail& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }
    inline CertificateDetail& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }
    inline CertificateDetail& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <a>RequestCertificate</a> request. This field exists
     * only when the certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline const Aws::Vector<DomainValidation>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }
    inline CertificateDetail& WithDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { SetDomainValidationOptions(value); return *this;}
    inline CertificateDetail& WithDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}
    inline CertificateDetail& AddDomainValidationOptions(const DomainValidation& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }
    inline CertificateDetail& AddDomainValidationOptions(DomainValidation&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerial() const{ return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    inline void SetSerial(const Aws::String& value) { m_serialHasBeenSet = true; m_serial = value; }
    inline void SetSerial(Aws::String&& value) { m_serialHasBeenSet = true; m_serial = std::move(value); }
    inline void SetSerial(const char* value) { m_serialHasBeenSet = true; m_serial.assign(value); }
    inline CertificateDetail& WithSerial(const Aws::String& value) { SetSerial(value); return *this;}
    inline CertificateDetail& WithSerial(Aws::String&& value) { SetSerial(std::move(value)); return *this;}
    inline CertificateDetail& WithSerial(const char* value) { SetSerial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline CertificateDetail& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline CertificateDetail& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline CertificateDetail& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline CertificateDetail& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline CertificateDetail& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline CertificateDetail& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline CertificateDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CertificateDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const{ return m_issuedAt; }
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
    inline void SetIssuedAt(const Aws::Utils::DateTime& value) { m_issuedAtHasBeenSet = true; m_issuedAt = value; }
    inline void SetIssuedAt(Aws::Utils::DateTime&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::move(value); }
    inline CertificateDetail& WithIssuedAt(const Aws::Utils::DateTime& value) { SetIssuedAt(value); return *this;}
    inline CertificateDetail& WithIssuedAt(Aws::Utils::DateTime&& value) { SetIssuedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetImportedAt() const{ return m_importedAt; }
    inline bool ImportedAtHasBeenSet() const { return m_importedAtHasBeenSet; }
    inline void SetImportedAt(const Aws::Utils::DateTime& value) { m_importedAtHasBeenSet = true; m_importedAt = value; }
    inline void SetImportedAt(Aws::Utils::DateTime&& value) { m_importedAtHasBeenSet = true; m_importedAt = std::move(value); }
    inline CertificateDetail& WithImportedAt(const Aws::Utils::DateTime& value) { SetImportedAt(value); return *this;}
    inline CertificateDetail& WithImportedAt(Aws::Utils::DateTime&& value) { SetImportedAt(std::move(value)); return *this;}
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
    inline const CertificateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CertificateDetail& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}
    inline CertificateDetail& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::move(value); }
    inline CertificateDetail& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}
    inline CertificateDetail& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the certificate was revoked. This value exists only when the
     * certificate status is <code>REVOKED</code>. </p>
     */
    inline const RevocationReason& GetRevocationReason() const{ return m_revocationReason; }
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }
    inline void SetRevocationReason(const RevocationReason& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }
    inline void SetRevocationReason(RevocationReason&& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = std::move(value); }
    inline CertificateDetail& WithRevocationReason(const RevocationReason& value) { SetRevocationReason(value); return *this;}
    inline CertificateDetail& WithRevocationReason(RevocationReason&& value) { SetRevocationReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }
    inline CertificateDetail& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}
    inline CertificateDetail& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }
    inline CertificateDetail& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}
    inline CertificateDetail& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline const KeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(const KeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline void SetKeyAlgorithm(KeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }
    inline CertificateDetail& WithKeyAlgorithm(const KeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}
    inline CertificateDetail& WithKeyAlgorithm(KeyAlgorithm&& value) { SetKeyAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const{ return m_signatureAlgorithm; }
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }
    inline void SetSignatureAlgorithm(const Aws::String& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = value; }
    inline void SetSignatureAlgorithm(Aws::String&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::move(value); }
    inline void SetSignatureAlgorithm(const char* value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm.assign(value); }
    inline CertificateDetail& WithSignatureAlgorithm(const Aws::String& value) { SetSignatureAlgorithm(value); return *this;}
    inline CertificateDetail& WithSignatureAlgorithm(Aws::String&& value) { SetSignatureAlgorithm(std::move(value)); return *this;}
    inline CertificateDetail& WithSignatureAlgorithm(const char* value) { SetSignatureAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ARNs for the Amazon Web Services resources that are using the
     * certificate. A certificate can be used by multiple Amazon Web Services
     * resources. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInUseBy() const{ return m_inUseBy; }
    inline bool InUseByHasBeenSet() const { return m_inUseByHasBeenSet; }
    inline void SetInUseBy(const Aws::Vector<Aws::String>& value) { m_inUseByHasBeenSet = true; m_inUseBy = value; }
    inline void SetInUseBy(Aws::Vector<Aws::String>&& value) { m_inUseByHasBeenSet = true; m_inUseBy = std::move(value); }
    inline CertificateDetail& WithInUseBy(const Aws::Vector<Aws::String>& value) { SetInUseBy(value); return *this;}
    inline CertificateDetail& WithInUseBy(Aws::Vector<Aws::String>&& value) { SetInUseBy(std::move(value)); return *this;}
    inline CertificateDetail& AddInUseBy(const Aws::String& value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }
    inline CertificateDetail& AddInUseBy(Aws::String&& value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(std::move(value)); return *this; }
    inline CertificateDetail& AddInUseBy(const char* value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason the certificate request failed. This value exists only when the
     * certificate status is <code>FAILED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting.html#troubleshooting-failed">Certificate
     * Request Failed</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline const FailureReason& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const FailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(FailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline CertificateDetail& WithFailureReason(const FailureReason& value) { SetFailureReason(value); return *this;}
    inline CertificateDetail& WithFailureReason(FailureReason&& value) { SetFailureReason(std::move(value)); return *this;}
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
    inline const CertificateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CertificateDetail& WithType(const CertificateType& value) { SetType(value); return *this;}
    inline CertificateDetail& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the status of ACM's <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for the certificate. This field exists only when the certificate
     * type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const RenewalSummary& GetRenewalSummary() const{ return m_renewalSummary; }
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }
    inline void SetRenewalSummary(const RenewalSummary& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = value; }
    inline void SetRenewalSummary(RenewalSummary&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::move(value); }
    inline CertificateDetail& WithRenewalSummary(const RenewalSummary& value) { SetRenewalSummary(value); return *this;}
    inline CertificateDetail& WithRenewalSummary(RenewalSummary&& value) { SetRenewalSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline const Aws::Vector<KeyUsage>& GetKeyUsages() const{ return m_keyUsages; }
    inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }
    inline void SetKeyUsages(const Aws::Vector<KeyUsage>& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = value; }
    inline void SetKeyUsages(Aws::Vector<KeyUsage>&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = std::move(value); }
    inline CertificateDetail& WithKeyUsages(const Aws::Vector<KeyUsage>& value) { SetKeyUsages(value); return *this;}
    inline CertificateDetail& WithKeyUsages(Aws::Vector<KeyUsage>&& value) { SetKeyUsages(std::move(value)); return *this;}
    inline CertificateDetail& AddKeyUsages(const KeyUsage& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(value); return *this; }
    inline CertificateDetail& AddKeyUsages(KeyUsage&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline const Aws::Vector<ExtendedKeyUsage>& GetExtendedKeyUsages() const{ return m_extendedKeyUsages; }
    inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }
    inline void SetExtendedKeyUsages(const Aws::Vector<ExtendedKeyUsage>& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = value; }
    inline void SetExtendedKeyUsages(Aws::Vector<ExtendedKeyUsage>&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = std::move(value); }
    inline CertificateDetail& WithExtendedKeyUsages(const Aws::Vector<ExtendedKeyUsage>& value) { SetExtendedKeyUsages(value); return *this;}
    inline CertificateDetail& WithExtendedKeyUsages(Aws::Vector<ExtendedKeyUsage>&& value) { SetExtendedKeyUsages(std::move(value)); return *this;}
    inline CertificateDetail& AddExtendedKeyUsages(const ExtendedKeyUsage& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(value); return *this; }
    inline CertificateDetail& AddExtendedKeyUsages(ExtendedKeyUsage&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * issued the certificate. This has the following format: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }
    inline CertificateDetail& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}
    inline CertificateDetail& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}
    inline CertificateDetail& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline const RenewalEligibility& GetRenewalEligibility() const{ return m_renewalEligibility; }
    inline bool RenewalEligibilityHasBeenSet() const { return m_renewalEligibilityHasBeenSet; }
    inline void SetRenewalEligibility(const RenewalEligibility& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = value; }
    inline void SetRenewalEligibility(RenewalEligibility&& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = std::move(value); }
    inline CertificateDetail& WithRenewalEligibility(const RenewalEligibility& value) { SetRenewalEligibility(value); return *this;}
    inline CertificateDetail& WithRenewalEligibility(RenewalEligibility&& value) { SetRenewalEligibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value that specifies whether to add the certificate to a transparency log.
     * Certificate transparency makes it possible to detect SSL certificates that have
     * been mistakenly or maliciously issued. A browser might respond to certificate
     * that has not been logged by showing an error message. The logs are
     * cryptographically secure. </p>
     */
    inline const CertificateOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const CertificateOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(CertificateOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline CertificateDetail& WithOptions(const CertificateOptions& value) { SetOptions(value); return *this;}
    inline CertificateDetail& WithOptions(CertificateOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::Vector<DomainValidation> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt;
    bool m_issuedAtHasBeenSet = false;

    Aws::Utils::DateTime m_importedAt;
    bool m_importedAtHasBeenSet = false;

    CertificateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet = false;

    RevocationReason m_revocationReason;
    bool m_revocationReasonHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    KeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_inUseBy;
    bool m_inUseByHasBeenSet = false;

    FailureReason m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    RenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    Aws::Vector<KeyUsage> m_keyUsages;
    bool m_keyUsagesHasBeenSet = false;

    Aws::Vector<ExtendedKeyUsage> m_extendedKeyUsages;
    bool m_extendedKeyUsagesHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    RenewalEligibility m_renewalEligibility;
    bool m_renewalEligibilityHasBeenSet = false;

    CertificateOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
