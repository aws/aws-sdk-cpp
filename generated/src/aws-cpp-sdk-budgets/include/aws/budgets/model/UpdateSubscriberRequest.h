/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Notification.h>
#include <aws/budgets/model/Subscriber.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of UpdateSubscriber </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriberRequest">AWS
   * API Reference</a></p>
   */
  class UpdateSubscriberRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API UpdateSubscriberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriber"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdateSubscriberRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline const Aws::String& GetBudgetName() const { return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    template<typename BudgetNameT = Aws::String>
    void SetBudgetName(BudgetNameT&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::forward<BudgetNameT>(value); }
    template<typename BudgetNameT = Aws::String>
    UpdateSubscriberRequest& WithBudgetName(BudgetNameT&& value) { SetBudgetName(std::forward<BudgetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline const Notification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = Notification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = Notification>
    UpdateSubscriberRequest& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline const Subscriber& GetOldSubscriber() const { return m_oldSubscriber; }
    inline bool OldSubscriberHasBeenSet() const { return m_oldSubscriberHasBeenSet; }
    template<typename OldSubscriberT = Subscriber>
    void SetOldSubscriber(OldSubscriberT&& value) { m_oldSubscriberHasBeenSet = true; m_oldSubscriber = std::forward<OldSubscriberT>(value); }
    template<typename OldSubscriberT = Subscriber>
    UpdateSubscriberRequest& WithOldSubscriber(OldSubscriberT&& value) { SetOldSubscriber(std::forward<OldSubscriberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline const Subscriber& GetNewSubscriber() const { return m_newSubscriber; }
    inline bool NewSubscriberHasBeenSet() const { return m_newSubscriberHasBeenSet; }
    template<typename NewSubscriberT = Subscriber>
    void SetNewSubscriber(NewSubscriberT&& value) { m_newSubscriberHasBeenSet = true; m_newSubscriber = std::forward<NewSubscriberT>(value); }
    template<typename NewSubscriberT = Subscriber>
    UpdateSubscriberRequest& WithNewSubscriber(NewSubscriberT&& value) { SetNewSubscriber(std::forward<NewSubscriberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Subscriber m_oldSubscriber;
    bool m_oldSubscriberHasBeenSet = false;

    Subscriber m_newSubscriber;
    bool m_newSubscriberHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
