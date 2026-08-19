/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/eks/EKS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The validity period of a certificate authority's certificate.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CertificateAuthorityValidity">AWS
 * API Reference</a></p>
 */
class CertificateAuthorityValidity {
 public:
  AWS_EKS_API CertificateAuthorityValidity() = default;
  AWS_EKS_API CertificateAuthorityValidity(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CertificateAuthorityValidity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for the start of the certificate
   * authority's validity period.</p>
   */
  inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
  inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
  template <typename NotBeforeT = Aws::Utils::DateTime>
  void SetNotBefore(NotBeforeT&& value) {
    m_notBeforeHasBeenSet = true;
    m_notBefore = std::forward<NotBeforeT>(value);
  }
  template <typename NotBeforeT = Aws::Utils::DateTime>
  CertificateAuthorityValidity& WithNotBefore(NotBeforeT&& value) {
    SetNotBefore(std::forward<NotBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for the end of the certificate
   * authority's validity period.</p>
   */
  inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
  inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
  template <typename NotAfterT = Aws::Utils::DateTime>
  void SetNotAfter(NotAfterT&& value) {
    m_notAfterHasBeenSet = true;
    m_notAfter = std::forward<NotAfterT>(value);
  }
  template <typename NotAfterT = Aws::Utils::DateTime>
  CertificateAuthorityValidity& WithNotAfter(NotAfterT&& value) {
    SetNotAfter(std::forward<NotAfterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_notBefore{};

  Aws::Utils::DateTime m_notAfter{};
  bool m_notBeforeHasBeenSet = false;
  bool m_notAfterHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
