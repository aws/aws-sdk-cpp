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
#include <aws/budgets/model/Notification.h>
#include <aws/budgets/model/Subscriber.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * Request of DeleteSubscriber
   */
  class AWS_BUDGETS_API DeleteSubscriberRequest : public BudgetsRequest
  {
  public:
    DeleteSubscriberRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline DeleteSubscriberRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline DeleteSubscriberRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    
    inline DeleteSubscriberRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline DeleteSubscriberRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline DeleteSubscriberRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(value); return *this;}

    
    inline DeleteSubscriberRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

    
    inline const Notification& GetNotification() const{ return m_notification; }

    
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = value; }

    
    inline DeleteSubscriberRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    
    inline DeleteSubscriberRequest& WithNotification(Notification&& value) { SetNotification(value); return *this;}

    
    inline const Subscriber& GetSubscriber() const{ return m_subscriber; }

    
    inline void SetSubscriber(const Subscriber& value) { m_subscriberHasBeenSet = true; m_subscriber = value; }

    
    inline void SetSubscriber(Subscriber&& value) { m_subscriberHasBeenSet = true; m_subscriber = value; }

    
    inline DeleteSubscriberRequest& WithSubscriber(const Subscriber& value) { SetSubscriber(value); return *this;}

    
    inline DeleteSubscriberRequest& WithSubscriber(Subscriber&& value) { SetSubscriber(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;
    Notification m_notification;
    bool m_notificationHasBeenSet;
    Subscriber m_subscriber;
    bool m_subscriberHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
