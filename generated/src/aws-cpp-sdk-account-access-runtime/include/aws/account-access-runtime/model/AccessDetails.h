/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccountAccessRuntime {
namespace Model {

/**
 * <p>Describes a role that you can access, including the Amazon Web Services
 * account that contains the role and the role's ARN.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-runtime-2018-05-10/AccessDetails">AWS
 * API Reference</a></p>
 */
class AccessDetails {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API AccessDetails() = default;
  AWS_ACCOUNTACCESSRUNTIME_API AccessDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESSRUNTIME_API AccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESSRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The 12-digit identifier of the Amazon Web Services account that contains the
   * role.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccessDetails& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the Amazon Web Services account, if available. This value
   * can be absent when the account name can't be resolved.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  AccessDetails& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the role that you can access.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  AccessDetails& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_accountName;

  Aws::String m_roleArn;
  bool m_accountIdHasBeenSet = false;
  bool m_accountNameHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
