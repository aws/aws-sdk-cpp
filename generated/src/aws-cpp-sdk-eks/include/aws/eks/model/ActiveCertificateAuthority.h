/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CertificateAuthorityActivatedBy.h>

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
 * <p>Identifies the certificate authority that is currently signing certificates
 * for the cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ActiveCertificateAuthority">AWS
 * API Reference</a></p>
 */
class ActiveCertificateAuthority {
 public:
  AWS_EKS_API ActiveCertificateAuthority() = default;
  AWS_EKS_API ActiveCertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ActiveCertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the certificate authority that is currently signing
   * certificates for the cluster.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ActiveCertificateAuthority& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that activated the current signing certificate authority, either
   * <code>CUSTOMER</code> or <code>EKS</code>.</p>
   */
  inline CertificateAuthorityActivatedBy GetActivatedBy() const { return m_activatedBy; }
  inline bool ActivatedByHasBeenSet() const { return m_activatedByHasBeenSet; }
  inline void SetActivatedBy(CertificateAuthorityActivatedBy value) {
    m_activatedByHasBeenSet = true;
    m_activatedBy = value;
  }
  inline ActiveCertificateAuthority& WithActivatedBy(CertificateAuthorityActivatedBy value) {
    SetActivatedBy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  CertificateAuthorityActivatedBy m_activatedBy{CertificateAuthorityActivatedBy::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_activatedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
