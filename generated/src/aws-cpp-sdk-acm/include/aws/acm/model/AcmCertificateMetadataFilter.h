/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateExport.h>
#include <aws/acm/model/CertificateKeyPairOrigin.h>
#include <aws/acm/model/CertificateManagedBy.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/CertificateType.h>
#include <aws/acm/model/RenewalStatus.h>
#include <aws/acm/model/ValidationMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Filters certificates by ACM metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AcmCertificateMetadataFilter">AWS
 * API Reference</a></p>
 */
class AcmCertificateMetadataFilter {
 public:
  AWS_ACM_API AcmCertificateMetadataFilter() = default;
  AWS_ACM_API AcmCertificateMetadataFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API AcmCertificateMetadataFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by certificate status.</p>
   */
  inline CertificateStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CertificateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcmCertificateMetadataFilter& WithStatus(CertificateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by certificate renewal status.</p>
   */
  inline RenewalStatus GetRenewalStatus() const { return m_renewalStatus; }
  inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }
  inline void SetRenewalStatus(RenewalStatus value) {
    m_renewalStatusHasBeenSet = true;
    m_renewalStatus = value;
  }
  inline AcmCertificateMetadataFilter& WithRenewalStatus(RenewalStatus value) {
    SetRenewalStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by certificate type.</p>
   */
  inline CertificateType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CertificateType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AcmCertificateMetadataFilter& WithType(CertificateType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by whether the certificate is in use.</p>
   */
  inline bool GetInUse() const { return m_inUse; }
  inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
  inline void SetInUse(bool value) {
    m_inUseHasBeenSet = true;
    m_inUse = value;
  }
  inline AcmCertificateMetadataFilter& WithInUse(bool value) {
    SetInUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by whether the certificate has been exported.</p>
   */
  inline bool GetExported() const { return m_exported; }
  inline bool ExportedHasBeenSet() const { return m_exportedHasBeenSet; }
  inline void SetExported(bool value) {
    m_exportedHasBeenSet = true;
    m_exported = value;
  }
  inline AcmCertificateMetadataFilter& WithExported(bool value) {
    SetExported(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by certificate export option.</p>
   */
  inline CertificateExport GetExportOption() const { return m_exportOption; }
  inline bool ExportOptionHasBeenSet() const { return m_exportOptionHasBeenSet; }
  inline void SetExportOption(CertificateExport value) {
    m_exportOptionHasBeenSet = true;
    m_exportOption = value;
  }
  inline AcmCertificateMetadataFilter& WithExportOption(CertificateExport value) {
    SetExportOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by the entity that manages the certificate.</p>
   */
  inline CertificateManagedBy GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  inline void SetManagedBy(CertificateManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline AcmCertificateMetadataFilter& WithManagedBy(CertificateManagedBy value) {
    SetManagedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by validation method.</p>
   */
  inline ValidationMethod GetValidationMethod() const { return m_validationMethod; }
  inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
  inline void SetValidationMethod(ValidationMethod value) {
    m_validationMethodHasBeenSet = true;
    m_validationMethod = value;
  }
  inline AcmCertificateMetadataFilter& WithValidationMethod(ValidationMethod value) {
    SetValidationMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by certificate key pair origin.</p>
   */
  inline CertificateKeyPairOrigin GetCertificateKeyPairOrigin() const { return m_certificateKeyPairOrigin; }
  inline bool CertificateKeyPairOriginHasBeenSet() const { return m_certificateKeyPairOriginHasBeenSet; }
  inline void SetCertificateKeyPairOrigin(CertificateKeyPairOrigin value) {
    m_certificateKeyPairOriginHasBeenSet = true;
    m_certificateKeyPairOrigin = value;
  }
  inline AcmCertificateMetadataFilter& WithCertificateKeyPairOrigin(CertificateKeyPairOrigin value) {
    SetCertificateKeyPairOrigin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by ACME endpoint ARN.</p>
   */
  inline const Aws::String& GetAcmeEndpointArn() const { return m_acmeEndpointArn; }
  inline bool AcmeEndpointArnHasBeenSet() const { return m_acmeEndpointArnHasBeenSet; }
  template <typename AcmeEndpointArnT = Aws::String>
  void SetAcmeEndpointArn(AcmeEndpointArnT&& value) {
    m_acmeEndpointArnHasBeenSet = true;
    m_acmeEndpointArn = std::forward<AcmeEndpointArnT>(value);
  }
  template <typename AcmeEndpointArnT = Aws::String>
  AcmCertificateMetadataFilter& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by ACME account identifier.</p>
   */
  inline const Aws::String& GetAcmeAccountId() const { return m_acmeAccountId; }
  inline bool AcmeAccountIdHasBeenSet() const { return m_acmeAccountIdHasBeenSet; }
  template <typename AcmeAccountIdT = Aws::String>
  void SetAcmeAccountId(AcmeAccountIdT&& value) {
    m_acmeAccountIdHasBeenSet = true;
    m_acmeAccountId = std::forward<AcmeAccountIdT>(value);
  }
  template <typename AcmeAccountIdT = Aws::String>
  AcmCertificateMetadataFilter& WithAcmeAccountId(AcmeAccountIdT&& value) {
    SetAcmeAccountId(std::forward<AcmeAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  CertificateStatus m_status{CertificateStatus::NOT_SET};

  RenewalStatus m_renewalStatus{RenewalStatus::NOT_SET};

  CertificateType m_type{CertificateType::NOT_SET};

  bool m_inUse{false};

  bool m_exported{false};

  CertificateExport m_exportOption{CertificateExport::NOT_SET};

  CertificateManagedBy m_managedBy{CertificateManagedBy::NOT_SET};

  ValidationMethod m_validationMethod{ValidationMethod::NOT_SET};

  CertificateKeyPairOrigin m_certificateKeyPairOrigin{CertificateKeyPairOrigin::NOT_SET};

  Aws::String m_acmeEndpointArn;

  Aws::String m_acmeAccountId;
  bool m_statusHasBeenSet = false;
  bool m_renewalStatusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_inUseHasBeenSet = false;
  bool m_exportedHasBeenSet = false;
  bool m_exportOptionHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
  bool m_validationMethodHasBeenSet = false;
  bool m_certificateKeyPairOriginHasBeenSet = false;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_acmeAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
