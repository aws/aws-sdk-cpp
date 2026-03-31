/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmCertificateMetadataFilter.h>
#include <aws/acm/model/X509AttributeFilter.h>
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
 * <p>Defines a filter for searching certificates by ARN, X.509 attributes, or ACM
 * metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateFilter">AWS
 * API Reference</a></p>
 */
class CertificateFilter {
 public:
  AWS_ACM_API CertificateFilter() = default;
  AWS_ACM_API CertificateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API CertificateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by certificate ARN.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  CertificateFilter& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by X.509 certificate attributes.</p>
   */
  inline const X509AttributeFilter& GetX509AttributeFilter() const { return m_x509AttributeFilter; }
  inline bool X509AttributeFilterHasBeenSet() const { return m_x509AttributeFilterHasBeenSet; }
  template <typename X509AttributeFilterT = X509AttributeFilter>
  void SetX509AttributeFilter(X509AttributeFilterT&& value) {
    m_x509AttributeFilterHasBeenSet = true;
    m_x509AttributeFilter = std::forward<X509AttributeFilterT>(value);
  }
  template <typename X509AttributeFilterT = X509AttributeFilter>
  CertificateFilter& WithX509AttributeFilter(X509AttributeFilterT&& value) {
    SetX509AttributeFilter(std::forward<X509AttributeFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by ACM certificate metadata.</p>
   */
  inline const AcmCertificateMetadataFilter& GetAcmCertificateMetadataFilter() const { return m_acmCertificateMetadataFilter; }
  inline bool AcmCertificateMetadataFilterHasBeenSet() const { return m_acmCertificateMetadataFilterHasBeenSet; }
  template <typename AcmCertificateMetadataFilterT = AcmCertificateMetadataFilter>
  void SetAcmCertificateMetadataFilter(AcmCertificateMetadataFilterT&& value) {
    m_acmCertificateMetadataFilterHasBeenSet = true;
    m_acmCertificateMetadataFilter = std::forward<AcmCertificateMetadataFilterT>(value);
  }
  template <typename AcmCertificateMetadataFilterT = AcmCertificateMetadataFilter>
  CertificateFilter& WithAcmCertificateMetadataFilter(AcmCertificateMetadataFilterT&& value) {
    SetAcmCertificateMetadataFilter(std::forward<AcmCertificateMetadataFilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateArn;

  X509AttributeFilter m_x509AttributeFilter;

  AcmCertificateMetadataFilter m_acmCertificateMetadataFilter;
  bool m_certificateArnHasBeenSet = false;
  bool m_x509AttributeFilterHasBeenSet = false;
  bool m_acmCertificateMetadataFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
