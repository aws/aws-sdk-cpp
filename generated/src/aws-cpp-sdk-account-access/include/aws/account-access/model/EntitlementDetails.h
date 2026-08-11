/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/PrincipalRoleEntitlementDetails.h>

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
 * <p>Contains detailed information about an entitlement, including the principal,
 * IAM role, and target account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/EntitlementDetails">AWS
 * API Reference</a></p>
 */
class EntitlementDetails {
 public:
  AWS_ACCOUNTACCESS_API EntitlementDetails() = default;
  AWS_ACCOUNTACCESS_API EntitlementDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API EntitlementDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The principal-to-role mapping details for the entitlement, including the
   * target account.</p>
   */
  inline const PrincipalRoleEntitlementDetails& GetPrincipalRole() const { return m_principalRole; }
  inline bool PrincipalRoleHasBeenSet() const { return m_principalRoleHasBeenSet; }
  template <typename PrincipalRoleT = PrincipalRoleEntitlementDetails>
  void SetPrincipalRole(PrincipalRoleT&& value) {
    m_principalRoleHasBeenSet = true;
    m_principalRole = std::forward<PrincipalRoleT>(value);
  }
  template <typename PrincipalRoleT = PrincipalRoleEntitlementDetails>
  EntitlementDetails& WithPrincipalRole(PrincipalRoleT&& value) {
    SetPrincipalRole(std::forward<PrincipalRoleT>(value));
    return *this;
  }
  ///@}
 private:
  PrincipalRoleEntitlementDetails m_principalRole;
  bool m_principalRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
