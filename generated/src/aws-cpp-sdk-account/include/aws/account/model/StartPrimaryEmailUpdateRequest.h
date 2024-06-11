﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/AccountRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Account
{
namespace Model
{

  /**
   */
  class StartPrimaryEmailUpdateRequest : public AccountRequest
  {
  public:
    AWS_ACCOUNT_API StartPrimaryEmailUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPrimaryEmailUpdate"; }

    AWS_ACCOUNT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the 12-digit account ID number of the Amazon Web Services account
     * that you want to access or modify with this operation. To use this parameter,
     * the caller must be an identity in the <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">organization's
     * management account</a> or a delegated administrator account. The specified
     * account ID must be a member account in the same organization. The organization
     * must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
     * features enabled</a>, and the organization must have <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/using-orgs-trusted-access.html">trusted
     * access</a> enabled for the Account Management service, and optionally a <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/using-orgs-delegated-admin.html">delegated
     * admin</a> account assigned.</p> <p>This operation can only be called from the
     * management account or the delegated administrator account of an organization for
     * a member account.</p>  <p>The management account can't specify its own
     * <code>AccountId</code>.</p> 
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline StartPrimaryEmailUpdateRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline StartPrimaryEmailUpdateRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline StartPrimaryEmailUpdateRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new primary email address (also known as the root user email address) to
     * use in the specified account.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const{ return m_primaryEmail; }
    inline bool PrimaryEmailHasBeenSet() const { return m_primaryEmailHasBeenSet; }
    inline void SetPrimaryEmail(const Aws::String& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = value; }
    inline void SetPrimaryEmail(Aws::String&& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = std::move(value); }
    inline void SetPrimaryEmail(const char* value) { m_primaryEmailHasBeenSet = true; m_primaryEmail.assign(value); }
    inline StartPrimaryEmailUpdateRequest& WithPrimaryEmail(const Aws::String& value) { SetPrimaryEmail(value); return *this;}
    inline StartPrimaryEmailUpdateRequest& WithPrimaryEmail(Aws::String&& value) { SetPrimaryEmail(std::move(value)); return *this;}
    inline StartPrimaryEmailUpdateRequest& WithPrimaryEmail(const char* value) { SetPrimaryEmail(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_primaryEmail;
    bool m_primaryEmailHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
