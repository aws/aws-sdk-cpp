/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ActiveCertificateAuthority.h>

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
 * <p>An object representing the <code>certificate-authority-data</code> for your
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Certificate">AWS API
 * Reference</a></p>
 */
class Certificate {
 public:
  AWS_EKS_API Certificate() = default;
  AWS_EKS_API Certificate(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Base64-encoded certificate data required to communicate with your
   * cluster. Add this to the <code>certificate-authority-data</code> section of the
   * <code>kubeconfig</code> file for your cluster.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  Certificate& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object identifying the certificate authority that is currently signing
   * certificates for the cluster.</p>
   */
  inline const ActiveCertificateAuthority& GetActive() const { return m_active; }
  inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
  template <typename ActiveT = ActiveCertificateAuthority>
  void SetActive(ActiveT&& value) {
    m_activeHasBeenSet = true;
    m_active = std::forward<ActiveT>(value);
  }
  template <typename ActiveT = ActiveCertificateAuthority>
  Certificate& WithActive(ActiveT&& value) {
    SetActive(std::forward<ActiveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  ActiveCertificateAuthority m_active;
  bool m_dataHasBeenSet = false;
  bool m_activeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
