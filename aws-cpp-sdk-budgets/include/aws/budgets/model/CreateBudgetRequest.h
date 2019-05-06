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
#include <aws/budgets/model/Budget.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/NotificationWithSubscribers.h>
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of CreateBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudgetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API CreateBudgetRequest : public BudgetsRequest
  {
  public:
    CreateBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBudget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline CreateBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline CreateBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget.</p>
     */
    inline CreateBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The budget object that you want to create.</p>
     */
    inline const Budget& GetBudget() const{ return m_budget; }

    /**
     * <p>The budget object that you want to create.</p>
     */
    inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }

    /**
     * <p>The budget object that you want to create.</p>
     */
    inline void SetBudget(const Budget& value) { m_budgetHasBeenSet = true; m_budget = value; }

    /**
     * <p>The budget object that you want to create.</p>
     */
    inline void SetBudget(Budget&& value) { m_budgetHasBeenSet = true; m_budget = std::move(value); }

    /**
     * <p>The budget object that you want to create.</p>
     */
    inline CreateBudgetRequest& WithBudget(const Budget& value) { SetBudget(value); return *this;}

    /**
     * <p>The budget object that you want to create.</p>
     */
    inline CreateBudgetRequest& WithBudget(Budget&& value) { SetBudget(std::move(value)); return *this;}


    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline const Aws::Vector<NotificationWithSubscribers>& GetNotificationsWithSubscribers() const{ return m_notificationsWithSubscribers; }

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline bool NotificationsWithSubscribersHasBeenSet() const { return m_notificationsWithSubscribersHasBeenSet; }

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline void SetNotificationsWithSubscribers(const Aws::Vector<NotificationWithSubscribers>& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers = value; }

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline void SetNotificationsWithSubscribers(Aws::Vector<NotificationWithSubscribers>&& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers = std::move(value); }

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline CreateBudgetRequest& WithNotificationsWithSubscribers(const Aws::Vector<NotificationWithSubscribers>& value) { SetNotificationsWithSubscribers(value); return *this;}

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline CreateBudgetRequest& WithNotificationsWithSubscribers(Aws::Vector<NotificationWithSubscribers>&& value) { SetNotificationsWithSubscribers(std::move(value)); return *this;}

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline CreateBudgetRequest& AddNotificationsWithSubscribers(const NotificationWithSubscribers& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers.push_back(value); return *this; }

    /**
     * <p>A notification that you want to associate with a budget. A budget can have up
     * to five notifications, and each notification can have one SNS subscriber and up
     * to 10 email subscribers. If you include notifications and subscribers in your
     * <code>CreateBudget</code> call, AWS creates the notifications and subscribers
     * for you.</p>
     */
    inline CreateBudgetRequest& AddNotificationsWithSubscribers(NotificationWithSubscribers&& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Budget m_budget;
    bool m_budgetHasBeenSet;

    Aws::Vector<NotificationWithSubscribers> m_notificationsWithSubscribers;
    bool m_notificationsWithSubscribersHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
