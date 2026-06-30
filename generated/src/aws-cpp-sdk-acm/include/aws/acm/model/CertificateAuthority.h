/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/PublicCertificateAuthority.h>

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
 * <p>Defines the certificate authority to use for an ACME endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateAuthority">AWS
 * API Reference</a></p>
 */
class CertificateAuthority {
 public:
  AWS_ACM_API CertificateAuthority() = default;
  AWS_ACM_API CertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API CertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for using a public certificate authority.</p>
   */
  inline const PublicCertificateAuthority& GetPublicCertificateAuthority() const { return m_publicCertificateAuthority; }
  inline bool PublicCertificateAuthorityHasBeenSet() const { return m_publicCertificateAuthorityHasBeenSet; }
  template <typename PublicCertificateAuthorityT = PublicCertificateAuthority>
  void SetPublicCertificateAuthority(PublicCertificateAuthorityT&& value) {
    m_publicCertificateAuthorityHasBeenSet = true;
    m_publicCertificateAuthority = std::forward<PublicCertificateAuthorityT>(value);
  }
  template <typename PublicCertificateAuthorityT = PublicCertificateAuthority>
  CertificateAuthority& WithPublicCertificateAuthority(PublicCertificateAuthorityT&& value) {
    SetPublicCertificateAuthority(std::forward<PublicCertificateAuthorityT>(value));
    return *this;
  }
  ///@}
 private:
  PublicCertificateAuthority m_publicCertificateAuthority;
  bool m_publicCertificateAuthorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
