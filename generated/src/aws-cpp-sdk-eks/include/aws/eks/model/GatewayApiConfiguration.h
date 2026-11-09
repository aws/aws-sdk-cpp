/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CrdManagementConfiguration.h>

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
 * <p>Indicates the current configuration of the Kubernetes Gateway API for the
 * load balancing capability on your EKS Auto Mode cluster. For more information,
 * see EKS Auto Mode load balancing capability in the <i>Amazon EKS User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/GatewayApiConfiguration">AWS
 * API Reference</a></p>
 */
class GatewayApiConfiguration {
 public:
  AWS_EKS_API GatewayApiConfiguration() = default;
  AWS_EKS_API GatewayApiConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API GatewayApiConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates the current configuration of Gateway API custom resource definition
   * (CRD) management on your EKS Auto Mode cluster. For example, if CRD management
   * is enabled or disabled.</p>
   */
  inline const CrdManagementConfiguration& GetCrds() const { return m_crds; }
  inline bool CrdsHasBeenSet() const { return m_crdsHasBeenSet; }
  template <typename CrdsT = CrdManagementConfiguration>
  void SetCrds(CrdsT&& value) {
    m_crdsHasBeenSet = true;
    m_crds = std::forward<CrdsT>(value);
  }
  template <typename CrdsT = CrdManagementConfiguration>
  GatewayApiConfiguration& WithCrds(CrdsT&& value) {
    SetCrds(std::forward<CrdsT>(value));
    return *this;
  }
  ///@}
 private:
  CrdManagementConfiguration m_crds;
  bool m_crdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
