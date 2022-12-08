/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AccountDetails.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class CreateMembersRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembers"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline const Aws::Vector<AccountDetails>& GetAccountDetails() const{ return m_accountDetails; }

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline bool AccountDetailsHasBeenSet() const { return m_accountDetailsHasBeenSet; }

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline void SetAccountDetails(const Aws::Vector<AccountDetails>& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = value; }

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline void SetAccountDetails(Aws::Vector<AccountDetails>&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = std::move(value); }

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(const Aws::Vector<AccountDetails>& value) { SetAccountDetails(value); return *this;}

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(Aws::Vector<AccountDetails>&& value) { SetAccountDetails(std::move(value)); return *this;}

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(const AccountDetails& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(value); return *this; }

    /**
     * <p>The list of accounts to associate with the Security Hub administrator
     * account. For each account, the list includes the account ID and optionally the
     * email address.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(AccountDetails&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccountDetails> m_accountDetails;
    bool m_accountDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
