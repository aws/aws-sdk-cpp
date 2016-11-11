/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * Request of CreateBudget
   */
  class AWS_BUDGETS_API CreateBudgetRequest : public BudgetsRequest
  {
  public:
    CreateBudgetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline CreateBudgetRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline CreateBudgetRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    
    inline CreateBudgetRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    
    inline const Budget& GetBudget() const{ return m_budget; }

    
    inline void SetBudget(const Budget& value) { m_budgetHasBeenSet = true; m_budget = value; }

    
    inline void SetBudget(Budget&& value) { m_budgetHasBeenSet = true; m_budget = value; }

    
    inline CreateBudgetRequest& WithBudget(const Budget& value) { SetBudget(value); return *this;}

    
    inline CreateBudgetRequest& WithBudget(Budget&& value) { SetBudget(value); return *this;}

    
    inline const Aws::Vector<NotificationWithSubscribers>& GetNotificationsWithSubscribers() const{ return m_notificationsWithSubscribers; }

    
    inline void SetNotificationsWithSubscribers(const Aws::Vector<NotificationWithSubscribers>& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers = value; }

    
    inline void SetNotificationsWithSubscribers(Aws::Vector<NotificationWithSubscribers>&& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers = value; }

    
    inline CreateBudgetRequest& WithNotificationsWithSubscribers(const Aws::Vector<NotificationWithSubscribers>& value) { SetNotificationsWithSubscribers(value); return *this;}

    
    inline CreateBudgetRequest& WithNotificationsWithSubscribers(Aws::Vector<NotificationWithSubscribers>&& value) { SetNotificationsWithSubscribers(value); return *this;}

    
    inline CreateBudgetRequest& AddNotificationsWithSubscribers(const NotificationWithSubscribers& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers.push_back(value); return *this; }

    
    inline CreateBudgetRequest& AddNotificationsWithSubscribers(NotificationWithSubscribers&& value) { m_notificationsWithSubscribersHasBeenSet = true; m_notificationsWithSubscribers.push_back(value); return *this; }

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
