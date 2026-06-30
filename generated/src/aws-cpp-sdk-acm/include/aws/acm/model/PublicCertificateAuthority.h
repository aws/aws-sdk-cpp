/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/PublicKeyAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration for a public certificate authority.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/PublicCertificateAuthority">AWS
 * API Reference</a></p>
 */
class PublicCertificateAuthority {
 public:
  AWS_ACM_API PublicCertificateAuthority() = default;
  AWS_ACM_API PublicCertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API PublicCertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key algorithms allowed for certificates issued by this certificate
   * authority.</p>
   */
  inline const Aws::Vector<PublicKeyAlgorithm>& GetAllowedKeyAlgorithms() const { return m_allowedKeyAlgorithms; }
  inline bool AllowedKeyAlgorithmsHasBeenSet() const { return m_allowedKeyAlgorithmsHasBeenSet; }
  template <typename AllowedKeyAlgorithmsT = Aws::Vector<PublicKeyAlgorithm>>
  void SetAllowedKeyAlgorithms(AllowedKeyAlgorithmsT&& value) {
    m_allowedKeyAlgorithmsHasBeenSet = true;
    m_allowedKeyAlgorithms = std::forward<AllowedKeyAlgorithmsT>(value);
  }
  template <typename AllowedKeyAlgorithmsT = Aws::Vector<PublicKeyAlgorithm>>
  PublicCertificateAuthority& WithAllowedKeyAlgorithms(AllowedKeyAlgorithmsT&& value) {
    SetAllowedKeyAlgorithms(std::forward<AllowedKeyAlgorithmsT>(value));
    return *this;
  }
  inline PublicCertificateAuthority& AddAllowedKeyAlgorithms(PublicKeyAlgorithm value) {
    m_allowedKeyAlgorithmsHasBeenSet = true;
    m_allowedKeyAlgorithms.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PublicKeyAlgorithm> m_allowedKeyAlgorithms;
  bool m_allowedKeyAlgorithmsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
