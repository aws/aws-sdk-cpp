/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdNetworkAccessConfigRequest.h>
#include <aws/eks/model/UpdateRoleMappings.h>

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
 * <p>Configuration updates for an Argo CD capability. You only need to specify the
 * fields you want to update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateArgoCdConfig">AWS
 * API Reference</a></p>
 */
class UpdateArgoCdConfig {
 public:
  AWS_EKS_API UpdateArgoCdConfig() = default;
  AWS_EKS_API UpdateArgoCdConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API UpdateArgoCdConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Updated RBAC role mappings for the Argo CD capability. You can add, update,
   * or remove role mappings.</p>
   */
  inline const UpdateRoleMappings& GetRbacRoleMappings() const { return m_rbacRoleMappings; }
  inline bool RbacRoleMappingsHasBeenSet() const { return m_rbacRoleMappingsHasBeenSet; }
  template <typename RbacRoleMappingsT = UpdateRoleMappings>
  void SetRbacRoleMappings(RbacRoleMappingsT&& value) {
    m_rbacRoleMappingsHasBeenSet = true;
    m_rbacRoleMappings = std::forward<RbacRoleMappingsT>(value);
  }
  template <typename RbacRoleMappingsT = UpdateRoleMappings>
  UpdateArgoCdConfig& WithRbacRoleMappings(RbacRoleMappingsT&& value) {
    SetRbacRoleMappings(std::forward<RbacRoleMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated network access configuration for the Argo CD capability's managed API
   * server endpoint. You can add or remove VPC endpoint associations to control
   * which VPCs have private access to the Argo CD server.</p>
   */
  inline const ArgoCdNetworkAccessConfigRequest& GetNetworkAccess() const { return m_networkAccess; }
  inline bool NetworkAccessHasBeenSet() const { return m_networkAccessHasBeenSet; }
  template <typename NetworkAccessT = ArgoCdNetworkAccessConfigRequest>
  void SetNetworkAccess(NetworkAccessT&& value) {
    m_networkAccessHasBeenSet = true;
    m_networkAccess = std::forward<NetworkAccessT>(value);
  }
  template <typename NetworkAccessT = ArgoCdNetworkAccessConfigRequest>
  UpdateArgoCdConfig& WithNetworkAccess(NetworkAccessT&& value) {
    SetNetworkAccess(std::forward<NetworkAccessT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateRoleMappings m_rbacRoleMappings;
  bool m_rbacRoleMappingsHasBeenSet = false;

  ArgoCdNetworkAccessConfigRequest m_networkAccess;
  bool m_networkAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
