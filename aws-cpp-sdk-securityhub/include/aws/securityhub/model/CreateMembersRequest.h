/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SECURITYHUB_API CreateMembersRequest : public SecurityHubRequest
  {
  public:
    CreateMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembers"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline const Aws::Vector<AccountDetails>& GetAccountDetails() const{ return m_accountDetails; }

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline bool AccountDetailsHasBeenSet() const { return m_accountDetailsHasBeenSet; }

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline void SetAccountDetails(const Aws::Vector<AccountDetails>& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = value; }

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline void SetAccountDetails(Aws::Vector<AccountDetails>&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = std::move(value); }

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(const Aws::Vector<AccountDetails>& value) { SetAccountDetails(value); return *this;}

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(Aws::Vector<AccountDetails>&& value) { SetAccountDetails(std::move(value)); return *this;}

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(const AccountDetails& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(value); return *this; }

    /**
     * <p>A list of account ID and email address pairs of the accounts to associate
     * with the Security Hub master account.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(AccountDetails&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccountDetails> m_accountDetails;
    bool m_accountDetailsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
