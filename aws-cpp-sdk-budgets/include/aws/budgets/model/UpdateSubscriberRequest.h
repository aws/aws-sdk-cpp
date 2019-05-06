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
  class AWS_BUDGETS_API UpdateSubscriberRequest : public BudgetsRequest
  {
  public:
    UpdateSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriber"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>The name of the budget whose subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The notification whose subscriber you want to update.</p>
     */
    inline UpdateSubscriberRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline const Subscriber& GetOldSubscriber() const{ return m_oldSubscriber; }

    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline bool OldSubscriberHasBeenSet() const { return m_oldSubscriberHasBeenSet; }

    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline void SetOldSubscriber(const Subscriber& value) { m_oldSubscriberHasBeenSet = true; m_oldSubscriber = value; }

    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline void SetOldSubscriber(Subscriber&& value) { m_oldSubscriberHasBeenSet = true; m_oldSubscriber = std::move(value); }

    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline UpdateSubscriberRequest& WithOldSubscriber(const Subscriber& value) { SetOldSubscriber(value); return *this;}

    /**
     * <p>The previous subscriber that is associated with a budget notification.</p>
     */
    inline UpdateSubscriberRequest& WithOldSubscriber(Subscriber&& value) { SetOldSubscriber(std::move(value)); return *this;}


    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline const Subscriber& GetNewSubscriber() const{ return m_newSubscriber; }

    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline bool NewSubscriberHasBeenSet() const { return m_newSubscriberHasBeenSet; }

    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline void SetNewSubscriber(const Subscriber& value) { m_newSubscriberHasBeenSet = true; m_newSubscriber = value; }

    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline void SetNewSubscriber(Subscriber&& value) { m_newSubscriberHasBeenSet = true; m_newSubscriber = std::move(value); }

    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline UpdateSubscriberRequest& WithNewSubscriber(const Subscriber& value) { SetNewSubscriber(value); return *this;}

    /**
     * <p>The updated subscriber that is associated with a budget notification.</p>
     */
    inline UpdateSubscriberRequest& WithNewSubscriber(Subscriber&& value) { SetNewSubscriber(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    Notification m_notification;
    bool m_notificationHasBeenSet;

    Subscriber m_oldSubscriber;
    bool m_oldSubscriberHasBeenSet;

    Subscriber m_newSubscriber;
    bool m_newSubscriberHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
