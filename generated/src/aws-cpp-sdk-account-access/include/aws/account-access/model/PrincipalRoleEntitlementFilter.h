/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/PrincipalFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Specifies filter criteria for principal-to-role entitlements. All specified
 * criteria must match for an entitlement to be returned.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/PrincipalRoleEntitlementFilter">AWS
 * API Reference</a></p>
 */
class PrincipalRoleEntitlementFilter {
 public:
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlementFilter() = default;
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlementFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlementFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The principal to filter entitlements by.</p>
   */
  inline const PrincipalFilter& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = PrincipalFilter>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = PrincipalFilter>
  PrincipalRoleEntitlementFilter& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role ARN to filter entitlements by.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  PrincipalRoleEntitlementFilter& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account ID to filter entitlements by.</p>
   */
  inline const Aws::String& GetAccount() const { return m_account; }
  inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
  template <typename AccountT = Aws::String>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = Aws::String>
  PrincipalRoleEntitlementFilter& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}
 private:
  PrincipalFilter m_principal;

  Aws::String m_roleArn;

  Aws::String m_account;
  bool m_principalHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_accountHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
