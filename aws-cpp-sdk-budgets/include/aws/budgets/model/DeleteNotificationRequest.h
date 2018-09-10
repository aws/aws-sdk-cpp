﻿/*
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
#include <utility>

namespace Aws
{
namespace Budgets
{
namespace Model
{

  /**
   * <p> Request of DeleteNotification </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotificationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API DeleteNotificationRequest : public BudgetsRequest
  {
  public:
    DeleteNotificationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNotification"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    /**
     * <p>The name of the budget whose notification you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}


    /**
     * <p>The notification that you want to delete.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The notification that you want to delete.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The notification that you want to delete.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>The notification that you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The notification that you want to delete.</p>
     */
    inline DeleteNotificationRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet;

    Notification m_notification;
    bool m_notificationHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
