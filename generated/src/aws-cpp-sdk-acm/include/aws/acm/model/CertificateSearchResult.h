/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateMetadata.h>
#include <aws/acm/model/X509Attributes.h>
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
 * <p>Contains information about a certificate returned by the
 * <a>SearchCertificates</a> action. This structure includes the certificate ARN,
 * X.509 attributes, and ACM metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateSearchResult">AWS
 * API Reference</a></p>
 */
class CertificateSearchResult {
 public:
  AWS_ACM_API CertificateSearchResult() = default;
  AWS_ACM_API CertificateSearchResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API CertificateSearchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the certificate.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  CertificateSearchResult& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>X.509 certificate attributes such as subject, issuer, and validity
   * period.</p>
   */
  inline const X509Attributes& GetX509Attributes() const { return m_x509Attributes; }
  inline bool X509AttributesHasBeenSet() const { return m_x509AttributesHasBeenSet; }
  template <typename X509AttributesT = X509Attributes>
  void SetX509Attributes(X509AttributesT&& value) {
    m_x509AttributesHasBeenSet = true;
    m_x509Attributes = std::forward<X509AttributesT>(value);
  }
  template <typename X509AttributesT = X509Attributes>
  CertificateSearchResult& WithX509Attributes(X509AttributesT&& value) {
    SetX509Attributes(std::forward<X509AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ACM-specific metadata about the certificate.</p>
   */
  inline const CertificateMetadata& GetCertificateMetadata() const { return m_certificateMetadata; }
  inline bool CertificateMetadataHasBeenSet() const { return m_certificateMetadataHasBeenSet; }
  template <typename CertificateMetadataT = CertificateMetadata>
  void SetCertificateMetadata(CertificateMetadataT&& value) {
    m_certificateMetadataHasBeenSet = true;
    m_certificateMetadata = std::forward<CertificateMetadataT>(value);
  }
  template <typename CertificateMetadataT = CertificateMetadata>
  CertificateSearchResult& WithCertificateMetadata(CertificateMetadataT&& value) {
    SetCertificateMetadata(std::forward<CertificateMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateArn;

  X509Attributes m_x509Attributes;

  CertificateMetadata m_certificateMetadata;
  bool m_certificateArnHasBeenSet = false;
  bool m_x509AttributesHasBeenSet = false;
  bool m_certificateMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
