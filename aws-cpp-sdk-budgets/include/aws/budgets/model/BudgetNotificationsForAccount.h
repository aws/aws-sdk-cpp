/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Notification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * <p> The budget name and associated notifications for an account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/BudgetNotificationsForAccount">AWS
   * API Reference</a></p>
   */
  class BudgetNotificationsForAccount
  {
  public:
    AWS_BUDGETS_API BudgetNotificationsForAccount();
    AWS_BUDGETS_API BudgetNotificationsForAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API BudgetNotificationsForAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<Notification>& GetNotifications() const{ return m_notifications; }

    
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    
    inline void SetNotifications(const Aws::Vector<Notification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    
    inline void SetNotifications(Aws::Vector<Notification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    
    inline BudgetNotificationsForAccount& WithNotifications(const Aws::Vector<Notification>& value) { SetNotifications(value); return *this;}

    
    inline BudgetNotificationsForAccount& WithNotifications(Aws::Vector<Notification>&& value) { SetNotifications(std::move(value)); return *this;}

    
    inline BudgetNotificationsForAccount& AddNotifications(const Notification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }

    
    inline BudgetNotificationsForAccount& AddNotifications(Notification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }

    
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }

    
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }

    
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }

    
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }

    
    inline BudgetNotificationsForAccount& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}

    
    inline BudgetNotificationsForAccount& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}

    
    inline BudgetNotificationsForAccount& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}

  private:

    Aws::Vector<Notification> m_notifications;
    bool m_notificationsHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
