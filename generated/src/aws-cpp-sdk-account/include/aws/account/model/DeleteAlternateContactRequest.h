﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/account/model/AlternateContactType.h>
#include <utility>

namespace Aws
{
namespace Account
{
namespace Model
{

  /**
   */
  class DeleteAlternateContactRequest : public AccountRequest
  {
  public:
    AWS_ACCOUNT_API DeleteAlternateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlternateContact"; }

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
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline DeleteAlternateContactRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DeleteAlternateContactRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DeleteAlternateContactRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which of the alternate contacts to delete. </p>
     */
    inline const AlternateContactType& GetAlternateContactType() const{ return m_alternateContactType; }
    inline bool AlternateContactTypeHasBeenSet() const { return m_alternateContactTypeHasBeenSet; }
    inline void SetAlternateContactType(const AlternateContactType& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = value; }
    inline void SetAlternateContactType(AlternateContactType&& value) { m_alternateContactTypeHasBeenSet = true; m_alternateContactType = std::move(value); }
    inline DeleteAlternateContactRequest& WithAlternateContactType(const AlternateContactType& value) { SetAlternateContactType(value); return *this;}
    inline DeleteAlternateContactRequest& WithAlternateContactType(AlternateContactType&& value) { SetAlternateContactType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AlternateContactType m_alternateContactType;
    bool m_alternateContactTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
