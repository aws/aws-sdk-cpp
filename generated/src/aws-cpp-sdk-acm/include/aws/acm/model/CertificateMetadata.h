/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmCertificateMetadata.h>

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
 * <p>Contains metadata about a certificate. Currently supports ACM certificate
 * metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateMetadata">AWS
 * API Reference</a></p>
 */
class CertificateMetadata {
 public:
  AWS_ACM_API CertificateMetadata() = default;
  AWS_ACM_API CertificateMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API CertificateMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Metadata for an ACM certificate.</p>
   */
  inline const AcmCertificateMetadata& GetAcmCertificateMetadata() const { return m_acmCertificateMetadata; }
  inline bool AcmCertificateMetadataHasBeenSet() const { return m_acmCertificateMetadataHasBeenSet; }
  template <typename AcmCertificateMetadataT = AcmCertificateMetadata>
  void SetAcmCertificateMetadata(AcmCertificateMetadataT&& value) {
    m_acmCertificateMetadataHasBeenSet = true;
    m_acmCertificateMetadata = std::forward<AcmCertificateMetadataT>(value);
  }
  template <typename AcmCertificateMetadataT = AcmCertificateMetadata>
  CertificateMetadata& WithAcmCertificateMetadata(AcmCertificateMetadataT&& value) {
    SetAcmCertificateMetadata(std::forward<AcmCertificateMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  AcmCertificateMetadata m_acmCertificateMetadata;
  bool m_acmCertificateMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
