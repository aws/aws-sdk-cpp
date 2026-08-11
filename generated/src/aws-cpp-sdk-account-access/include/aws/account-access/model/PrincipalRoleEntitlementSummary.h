/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/model/Principal.h>
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
 * <p>Contains summary information about a principal-to-role
 * entitlement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/PrincipalRoleEntitlementSummary">AWS
 * API Reference</a></p>
 */
class PrincipalRoleEntitlementSummary {
 public:
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlementSummary() = default;
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlementSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API PrincipalRoleEntitlementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The principal (user or group) that is granted access to assume the IAM
   * role.</p>
   */
  inline const Principal& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = Principal>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = Principal>
  PrincipalRoleEntitlementSummary& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that the principal can assume.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  PrincipalRoleEntitlementSummary& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account ID where the IAM role resides.</p>
   */
  inline const Aws::String& GetAccount() const { return m_account; }
  inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
  template <typename AccountT = Aws::String>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = Aws::String>
  PrincipalRoleEntitlementSummary& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The friendly name of the Amazon Web Services account where the IAM role
   * resides.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  PrincipalRoleEntitlementSummary& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}
 private:
  Principal m_principal;

  Aws::String m_roleArn;

  Aws::String m_account;

  Aws::String m_accountName;
  bool m_principalHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_accountHasBeenSet = false;
  bool m_accountNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
