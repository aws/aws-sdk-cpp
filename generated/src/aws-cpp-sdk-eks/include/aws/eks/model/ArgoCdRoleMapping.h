/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdRole.h>
#include <aws/eks/model/SsoIdentity.h>

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
 * <p>A mapping between an Argo CD role and IAM Identity CenterIAM; Identity Center
 * identities. This defines which users or groups have specific permissions in Argo
 * CD.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ArgoCdRoleMapping">AWS
 * API Reference</a></p>
 */
class ArgoCdRoleMapping {
 public:
  AWS_EKS_API ArgoCdRoleMapping() = default;
  AWS_EKS_API ArgoCdRoleMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ArgoCdRoleMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Argo CD role to assign. Valid values are:</p> <ul> <li> <p>
   * <code>ADMIN</code> – Full administrative access to Argo CD.</p> </li> <li> <p>
   * <code>EDITOR</code> – Edit access to Argo CD resources.</p> </li> <li> <p>
   * <code>VIEWER</code> – Read-only access to Argo CD resources.</p> </li> </ul>
   */
  inline ArgoCdRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(ArgoCdRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline ArgoCdRoleMapping& WithRole(ArgoCdRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IAM Identity CenterIAM; Identity Center identities (users or
   * groups) that should be assigned this Argo CD role.</p>
   */
  inline const Aws::Vector<SsoIdentity>& GetIdentities() const { return m_identities; }
  inline bool IdentitiesHasBeenSet() const { return m_identitiesHasBeenSet; }
  template <typename IdentitiesT = Aws::Vector<SsoIdentity>>
  void SetIdentities(IdentitiesT&& value) {
    m_identitiesHasBeenSet = true;
    m_identities = std::forward<IdentitiesT>(value);
  }
  template <typename IdentitiesT = Aws::Vector<SsoIdentity>>
  ArgoCdRoleMapping& WithIdentities(IdentitiesT&& value) {
    SetIdentities(std::forward<IdentitiesT>(value));
    return *this;
  }
  template <typename IdentitiesT = SsoIdentity>
  ArgoCdRoleMapping& AddIdentities(IdentitiesT&& value) {
    m_identitiesHasBeenSet = true;
    m_identities.emplace_back(std::forward<IdentitiesT>(value));
    return *this;
  }
  ///@}
 private:
  ArgoCdRole m_role{ArgoCdRole::NOT_SET};

  Aws::Vector<SsoIdentity> m_identities;
  bool m_roleHasBeenSet = false;
  bool m_identitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
