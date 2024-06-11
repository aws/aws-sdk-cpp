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
    AWS_BUDGETS_API UpdateSubscriberRequest();

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
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline UpdateSubscriberRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UpdateSubscriberRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UpdateSubscriberRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }
    inline UpdateSubscriberRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}
    inline UpdateSubscriberRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}
    inline UpdateSubscriberRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline UpdateSubscriberRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline UpdateSubscriberRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline const Subscriber& GetOldSubscriber() const{ return m_oldSubscriber; }
    inline bool OldSubscriberHasBeenSet() const { return m_oldSubscriberHasBeenSet; }
    inline void SetOldSubscriber(const Subscriber& value) { m_oldSubscriberHasBeenSet = true; m_oldSubscriber = value; }
    inline void SetOldSubscriber(Subscriber&& value) { m_oldSubscriberHasBeenSet = true; m_oldSubscriber = std::move(value); }
    inline UpdateSubscriberRequest& WithOldSubscriber(const Subscriber& value) { SetOldSubscriber(value); return *this;}
    inline UpdateSubscriberRequest& WithOldSubscriber(Subscriber&& value) { SetOldSubscriber(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline const Subscriber& GetNewSubscriber() const{ return m_newSubscriber; }
    inline bool NewSubscriberHasBeenSet() const { return m_newSubscriberHasBeenSet; }
    inline void SetNewSubscriber(const Subscriber& value) { m_newSubscriberHasBeenSet = true; m_newSubscriber = value; }
    inline void SetNewSubscriber(Subscriber&& value) { m_newSubscriberHasBeenSet = true; m_newSubscriber = std::move(value); }
    inline UpdateSubscriberRequest& WithNewSubscriber(const Subscriber& value) { SetNewSubscriber(value); return *this;}
    inline UpdateSubscriberRequest& WithNewSubscriber(Subscriber&& value) { SetNewSubscriber(std::move(value)); return *this;}
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
