/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/PrincipalRoleEntitlementSummary.h>

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
 * <p>Contains summary information about an entitlement.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/EntitlementSummary">AWS
 * API Reference</a></p>
 */
class EntitlementSummary {
 public:
  AWS_ACCOUNTACCESS_API EntitlementSummary() = default;
  AWS_ACCOUNTACCESS_API EntitlementSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API EntitlementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The principal-to-role mapping summary for the entitlement.</p>
   */
  inline const PrincipalRoleEntitlementSummary& GetPrincipalRole() const { return m_principalRole; }
  inline bool PrincipalRoleHasBeenSet() const { return m_principalRoleHasBeenSet; }
  template <typename PrincipalRoleT = PrincipalRoleEntitlementSummary>
  void SetPrincipalRole(PrincipalRoleT&& value) {
    m_principalRoleHasBeenSet = true;
    m_principalRole = std::forward<PrincipalRoleT>(value);
  }
  template <typename PrincipalRoleT = PrincipalRoleEntitlementSummary>
  EntitlementSummary& WithPrincipalRole(PrincipalRoleT&& value) {
    SetPrincipalRole(std::forward<PrincipalRoleT>(value));
    return *this;
  }
  ///@}
 private:
  PrincipalRoleEntitlementSummary m_principalRole;
  bool m_principalRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
