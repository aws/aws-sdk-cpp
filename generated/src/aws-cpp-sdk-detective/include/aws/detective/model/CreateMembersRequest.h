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
  class CreateMembersRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API CreateMembersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembers"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    CreateMembersRequest& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customized message text to include in the invitation email message to the
     * invited member accounts.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CreateMembersRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>if set to <code>true</code>, then the invited accounts do not receive email
     * notifications. By default, this is set to <code>false</code>, and the invited
     * accounts receive email notifications.</p> <p>Organization accounts in the
     * organization behavior graph do not receive email notifications.</p>
     */
    inline bool GetDisableEmailNotification() const { return m_disableEmailNotification; }
    inline bool DisableEmailNotificationHasBeenSet() const { return m_disableEmailNotificationHasBeenSet; }
    inline void SetDisableEmailNotification(bool value) { m_disableEmailNotificationHasBeenSet = true; m_disableEmailNotification = value; }
    inline CreateMembersRequest& WithDisableEmailNotification(bool value) { SetDisableEmailNotification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Web Services accounts to invite or to enable. You can
     * invite or enable up to 50 accounts at a time. For each invited account, the
     * account list contains the account identifier and the Amazon Web Services account
     * root user email address. For organization accounts in the organization behavior
     * graph, the email address is not required.</p>
     */
    inline const Aws::Vector<Account>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Account>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Account>>
    CreateMembersRequest& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Account>
    CreateMembersRequest& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_disableEmailNotification{false};
    bool m_disableEmailNotificationHasBeenSet = false;

    Aws::Vector<Account> m_accounts;
    bool m_accountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
