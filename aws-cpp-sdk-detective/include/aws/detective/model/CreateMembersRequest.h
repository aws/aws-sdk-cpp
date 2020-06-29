/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/model/Account.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class AWS_DETECTIVE_API CreateMembersRequest : public DetectiveRequest
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
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline CreateMembersRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline CreateMembersRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph to invite the member accounts to contribute
     * their data to.</p>
     */
    inline CreateMembersRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline CreateMembersRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline CreateMembersRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline CreateMembersRequest& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline const Aws::Vector<Account>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline void SetAccounts(const Aws::Vector<Account>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline void SetAccounts(Aws::Vector<Account>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline CreateMembersRequest& WithAccounts(const Aws::Vector<Account>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline CreateMembersRequest& WithAccounts(Aws::Vector<Account>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline CreateMembersRequest& AddAccounts(const Account& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The list of AWS accounts to invite to become member accounts in the behavior
     * graph. For each invited account, the account list contains the account
     * identifier and the AWS account root user email address.</p>
     */
    inline CreateMembersRequest& AddAccounts(Account&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Vector<Account> m_accounts;
    bool m_accountsHasBeenSet;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
