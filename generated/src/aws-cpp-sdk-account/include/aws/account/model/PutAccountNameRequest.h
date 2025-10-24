﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/AccountRequest.h>
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Account {
namespace Model {

/**
 */
class PutAccountNameRequest : public AccountRequest {
 public:
  AWS_ACCOUNT_API PutAccountNameRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAccountName"; }

  AWS_ACCOUNT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies the 12 digit account ID number of the Amazon Web Services account
   * that you want to access or modify with this operation.</p> <p>If you do not
   * specify this parameter, it defaults to the Amazon Web Services account of the
   * identity used to call the operation.</p> <p>To use this parameter, the caller
   * must be an identity in the <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">organization's
   * management account</a> or a delegated administrator account, and the specified
   * account ID must be a member account in the same organization. The organization
   * must have <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
   * features enabled</a>, and the organization must have <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/using-orgs-trusted-access.html">trusted
   * access</a> enabled for the Account Management service, and optionally a <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/using-orgs-delegated-admin.html">delegated
   * admin</a> account assigned.</p>  <p>The management account can't specify
   * its own <code>AccountId</code>; it must call the operation in standalone context
   * by not including the <code>AccountId</code> parameter.</p>  <p>To call
   * this operation on an account that is not a member of an organization, then don't
   * specify this parameter, and call the operation using an identity belonging to
   * the account whose contacts you wish to retrieve or modify.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  PutAccountNameRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the account.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  PutAccountNameRequest& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  Aws::String m_accountName;
  bool m_accountNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Account
}  // namespace Aws
