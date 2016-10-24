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

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * Request of UpdateNotification
   */
  class AWS_BUDGETS_API UpdateNotificationRequest : public BudgetsRequest
  {
  public:
    UpdateNotificationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline UpdateNotificationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline UpdateNotificationRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    
    inline UpdateNotificationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline UpdateNotificationRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline UpdateNotificationRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(value); return *this;}

    
    inline UpdateNotificationRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

    
    inline const Notification& GetOldNotification() const{ return m_oldNotification; }

    
    inline void SetOldNotification(const Notification& value) { m_oldNotificationHasBeenSet = true; m_oldNotification = value; }

    
    inline void SetOldNotification(Notification&& value) { m_oldNotificationHasBeenSet = true; m_oldNotification = value; }

    
    inline UpdateNotificationRequest& WithOldNotification(const Notification& value) { SetOldNotification(value); return *this;}

    
    inline UpdateNotificationRequest& WithOldNotification(Notification&& value) { SetOldNotification(value); return *this;}

    
    inline const Notification& GetNewNotification() const{ return m_newNotification; }

    
    inline void SetNewNotification(const Notification& value) { m_newNotificationHasBeenSet = true; m_newNotification = value; }

    
    inline void SetNewNotification(Notification&& value) { m_newNotificationHasBeenSet = true; m_newNotification = value; }

    
    inline UpdateNotificationRequest& WithNewNotification(const Notification& value) { SetNewNotification(value); return *this;}

    
    inline UpdateNotificationRequest& WithNewNotification(Notification&& value) { SetNewNotification(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;
    Notification m_oldNotification;
    bool m_oldNotificationHasBeenSet;
    Notification m_newNotification;
    bool m_newNotificationHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
