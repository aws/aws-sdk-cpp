/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/PrincipalRoleEntitlementFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccountAccess {
namespace Model {

/**
 * <p>Specifies filter criteria for listing entitlements.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/EntitlementFilter">AWS
 * API Reference</a></p>
 */
class EntitlementFilter {
 public:
  AWS_ACCOUNTACCESS_API EntitlementFilter() = default;
  AWS_ACCOUNTACCESS_API EntitlementFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API EntitlementFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The principal-to-role filter criteria for narrowing entitlement results.</p>
   */
  inline const PrincipalRoleEntitlementFilter& GetPrincipalRole() const { return m_principalRole; }
  inline bool PrincipalRoleHasBeenSet() const { return m_principalRoleHasBeenSet; }
  template <typename PrincipalRoleT = PrincipalRoleEntitlementFilter>
  void SetPrincipalRole(PrincipalRoleT&& value) {
    m_principalRoleHasBeenSet = true;
    m_principalRole = std::forward<PrincipalRoleT>(value);
  }
  template <typename PrincipalRoleT = PrincipalRoleEntitlementFilter>
  EntitlementFilter& WithPrincipalRole(PrincipalRoleT&& value) {
    SetPrincipalRole(std::forward<PrincipalRoleT>(value));
    return *this;
  }
  ///@}
 private:
  PrincipalRoleEntitlementFilter m_principalRole;
  bool m_principalRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
