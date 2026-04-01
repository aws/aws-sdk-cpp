/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateExport.h>
#include <aws/acm/model/CertificateManagedBy.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/CertificateType.h>
#include <aws/acm/model/RenewalEligibility.h>
#include <aws/acm/model/RenewalStatus.h>
#include <aws/acm/model/ValidationMethod.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains ACM-specific metadata about a certificate.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AcmCertificateMetadata">AWS
 * API Reference</a></p>
 */
class AcmCertificateMetadata {
 public:
  AWS_ACM_API AcmCertificateMetadata() = default;
  AWS_ACM_API AcmCertificateMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API AcmCertificateMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time at which the certificate was requested.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcmCertificateMetadata& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the certificate has been exported.</p>
   */
  inline bool GetExported() const { return m_exported; }
  inline bool ExportedHasBeenSet() const { return m_exportedHasBeenSet; }
  inline void SetExported(bool value) {
    m_exportedHasBeenSet = true;
    m_exported = value;
  }
  inline AcmCertificateMetadata& WithExported(bool value) {
    SetExported(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the certificate was imported. This value exists only
   * when the certificate type is <code>IMPORTED</code>. </p>
   */
  inline const Aws::Utils::DateTime& GetImportedAt() const { return m_importedAt; }
  inline bool ImportedAtHasBeenSet() const { return m_importedAtHasBeenSet; }
  template <typename ImportedAtT = Aws::Utils::DateTime>
  void SetImportedAt(ImportedAtT&& value) {
    m_importedAtHasBeenSet = true;
    m_importedAt = std::forward<ImportedAtT>(value);
  }
  template <typename ImportedAtT = Aws::Utils::DateTime>
  AcmCertificateMetadata& WithImportedAt(ImportedAtT&& value) {
    SetImportedAt(std::forward<ImportedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the certificate is currently in use by an Amazon Web
   * Services service.</p>
   */
  inline bool GetInUse() const { return m_inUse; }
  inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
  inline void SetInUse(bool value) {
    m_inUseHasBeenSet = true;
    m_inUse = value;
  }
  inline AcmCertificateMetadata& WithInUse(bool value) {
    SetInUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the certificate was issued. This value exists only when the
   * certificate type is <code>AMAZON_ISSUED</code>. </p>
   */
  inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
  inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  void SetIssuedAt(IssuedAtT&& value) {
    m_issuedAtHasBeenSet = true;
    m_issuedAt = std::forward<IssuedAtT>(value);
  }
  template <typename IssuedAtT = Aws::Utils::DateTime>
  AcmCertificateMetadata& WithIssuedAt(IssuedAtT&& value) {
    SetIssuedAt(std::forward<IssuedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the certificate is eligible for renewal. At this time, only
   * exported private certificates can be renewed with the <a>RenewCertificate</a>
   * command.</p>
   */
  inline RenewalEligibility GetRenewalEligibility() const { return m_renewalEligibility; }
  inline bool RenewalEligibilityHasBeenSet() const { return m_renewalEligibilityHasBeenSet; }
  inline void SetRenewalEligibility(RenewalEligibility value) {
    m_renewalEligibilityHasBeenSet = true;
    m_renewalEligibility = value;
  }
  inline AcmCertificateMetadata& WithRenewalEligibility(RenewalEligibility value) {
    SetRenewalEligibility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the certificate was revoked. This value exists only when
   * the certificate status is <code>REVOKED</code>. </p>
   */
  inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
  inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
  template <typename RevokedAtT = Aws::Utils::DateTime>
  void SetRevokedAt(RevokedAtT&& value) {
    m_revokedAtHasBeenSet = true;
    m_revokedAt = std::forward<RevokedAtT>(value);
  }
  template <typename RevokedAtT = Aws::Utils::DateTime>
  AcmCertificateMetadata& WithRevokedAt(RevokedAtT&& value) {
    SetRevokedAt(std::forward<RevokedAtT>(value));
    return *this;
  }
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
  inline void SetStatus(CertificateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcmCertificateMetadata& WithStatus(CertificateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The renewal status of the certificate.</p>
   */
  inline RenewalStatus GetRenewalStatus() const { return m_renewalStatus; }
  inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }
  inline void SetRenewalStatus(RenewalStatus value) {
    m_renewalStatusHasBeenSet = true;
    m_renewalStatus = value;
  }
  inline AcmCertificateMetadata& WithRenewalStatus(RenewalStatus value) {
    SetRenewalStatus(value);
    return *this;
  }
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
  inline void SetType(CertificateType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AcmCertificateMetadata& WithType(CertificateType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the certificate can be exported.</p>
   */
  inline CertificateExport GetExportOption() const { return m_exportOption; }
  inline bool ExportOptionHasBeenSet() const { return m_exportOptionHasBeenSet; }
  inline void SetExportOption(CertificateExport value) {
    m_exportOptionHasBeenSet = true;
    m_exportOption = value;
  }
  inline AcmCertificateMetadata& WithExportOption(CertificateExport value) {
    SetExportOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifies the Amazon Web Services service that manages the certificate
   * issued by ACM.</p>
   */
  inline CertificateManagedBy GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  inline void SetManagedBy(CertificateManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline AcmCertificateMetadata& WithManagedBy(CertificateManagedBy value) {
    SetManagedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the domain validation method.</p>
   */
  inline ValidationMethod GetValidationMethod() const { return m_validationMethod; }
  inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
  inline void SetValidationMethod(ValidationMethod value) {
    m_validationMethodHasBeenSet = true;
    m_validationMethod = value;
  }
  inline AcmCertificateMetadata& WithValidationMethod(ValidationMethod value) {
    SetValidationMethod(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createdAt{};

  bool m_exported{false};

  Aws::Utils::DateTime m_importedAt{};

  bool m_inUse{false};

  Aws::Utils::DateTime m_issuedAt{};

  RenewalEligibility m_renewalEligibility{RenewalEligibility::NOT_SET};

  Aws::Utils::DateTime m_revokedAt{};

  CertificateStatus m_status{CertificateStatus::NOT_SET};

  RenewalStatus m_renewalStatus{RenewalStatus::NOT_SET};

  CertificateType m_type{CertificateType::NOT_SET};

  CertificateExport m_exportOption{CertificateExport::NOT_SET};

  CertificateManagedBy m_managedBy{CertificateManagedBy::NOT_SET};

  ValidationMethod m_validationMethod{ValidationMethod::NOT_SET};
  bool m_createdAtHasBeenSet = false;
  bool m_exportedHasBeenSet = false;
  bool m_importedAtHasBeenSet = false;
  bool m_inUseHasBeenSet = false;
  bool m_issuedAtHasBeenSet = false;
  bool m_renewalEligibilityHasBeenSet = false;
  bool m_revokedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_renewalStatusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_exportOptionHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
  bool m_validationMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
