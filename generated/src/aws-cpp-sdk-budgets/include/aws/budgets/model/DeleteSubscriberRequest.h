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
   * <p> Request of DeleteSubscriber </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriberRequest">AWS
   * API Reference</a></p>
   */
  class DeleteSubscriberRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API DeleteSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubscriber"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to delete.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline DeleteSubscriberRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline DeleteSubscriberRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline DeleteSubscriberRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the budget whose subscriber you want to delete.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }
    inline DeleteSubscriberRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}
    inline DeleteSubscriberRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}
    inline DeleteSubscriberRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification whose subscriber you want to delete.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline DeleteSubscriberRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline DeleteSubscriberRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber that you want to delete.</p>
     */
    inline const Subscriber& GetSubscriber() const{ return m_subscriber; }
    inline bool SubscriberHasBeenSet() const { return m_subscriberHasBeenSet; }
    inline void SetSubscriber(const Subscriber& value) { m_subscriberHasBeenSet = true; m_subscriber = value; }
    inline void SetSubscriber(Subscriber&& value) { m_subscriberHasBeenSet = true; m_subscriber = std::move(value); }
    inline DeleteSubscriberRequest& WithSubscriber(const Subscriber& value) { SetSubscriber(value); return *this;}
    inline DeleteSubscriberRequest& WithSubscriber(Subscriber&& value) { SetSubscriber(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Subscriber m_subscriber;
    bool m_subscriberHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
