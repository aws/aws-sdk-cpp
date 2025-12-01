/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdRoleMapping.h>

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
 * <p>Updates to RBAC role mappings for an Argo CD capability. You can add, update,
 * or remove role mappings in a single operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateRoleMappings">AWS
 * API Reference</a></p>
 */
class UpdateRoleMappings {
 public:
  AWS_EKS_API UpdateRoleMappings() = default;
  AWS_EKS_API UpdateRoleMappings(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API UpdateRoleMappings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of role mappings to add or update. If a mapping for the specified role
   * already exists, it will be updated with the new identities. If it doesn't exist,
   * a new mapping will be created.</p>
   */
  inline const Aws::Vector<ArgoCdRoleMapping>& GetAddOrUpdateRoleMappings() const { return m_addOrUpdateRoleMappings; }
  inline bool AddOrUpdateRoleMappingsHasBeenSet() const { return m_addOrUpdateRoleMappingsHasBeenSet; }
  template <typename AddOrUpdateRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  void SetAddOrUpdateRoleMappings(AddOrUpdateRoleMappingsT&& value) {
    m_addOrUpdateRoleMappingsHasBeenSet = true;
    m_addOrUpdateRoleMappings = std::forward<AddOrUpdateRoleMappingsT>(value);
  }
  template <typename AddOrUpdateRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  UpdateRoleMappings& WithAddOrUpdateRoleMappings(AddOrUpdateRoleMappingsT&& value) {
    SetAddOrUpdateRoleMappings(std::forward<AddOrUpdateRoleMappingsT>(value));
    return *this;
  }
  template <typename AddOrUpdateRoleMappingsT = ArgoCdRoleMapping>
  UpdateRoleMappings& AddAddOrUpdateRoleMappings(AddOrUpdateRoleMappingsT&& value) {
    m_addOrUpdateRoleMappingsHasBeenSet = true;
    m_addOrUpdateRoleMappings.emplace_back(std::forward<AddOrUpdateRoleMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of role mappings to remove from the RBAC configuration. Each mapping
   * specifies an Argo CD role (<code>ADMIN</code>, <code>EDITOR</code>, or
   * <code>VIEWER</code>) and the identities to remove from that role.</p>
   */
  inline const Aws::Vector<ArgoCdRoleMapping>& GetRemoveRoleMappings() const { return m_removeRoleMappings; }
  inline bool RemoveRoleMappingsHasBeenSet() const { return m_removeRoleMappingsHasBeenSet; }
  template <typename RemoveRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  void SetRemoveRoleMappings(RemoveRoleMappingsT&& value) {
    m_removeRoleMappingsHasBeenSet = true;
    m_removeRoleMappings = std::forward<RemoveRoleMappingsT>(value);
  }
  template <typename RemoveRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  UpdateRoleMappings& WithRemoveRoleMappings(RemoveRoleMappingsT&& value) {
    SetRemoveRoleMappings(std::forward<RemoveRoleMappingsT>(value));
    return *this;
  }
  template <typename RemoveRoleMappingsT = ArgoCdRoleMapping>
  UpdateRoleMappings& AddRemoveRoleMappings(RemoveRoleMappingsT&& value) {
    m_removeRoleMappingsHasBeenSet = true;
    m_removeRoleMappings.emplace_back(std::forward<RemoveRoleMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ArgoCdRoleMapping> m_addOrUpdateRoleMappings;
  bool m_addOrUpdateRoleMappingsHasBeenSet = false;

  Aws::Vector<ArgoCdRoleMapping> m_removeRoleMappings;
  bool m_removeRoleMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
