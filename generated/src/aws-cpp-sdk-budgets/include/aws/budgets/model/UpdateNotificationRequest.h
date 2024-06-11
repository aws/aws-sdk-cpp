/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> Request of UpdateNotification </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotificationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateNotificationRequest : public BudgetsRequest
  {
  public:
    AWS_BUDGETS_API UpdateNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotification"; }

    AWS_BUDGETS_API Aws::String SerializePayload() const override;

    AWS_BUDGETS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>accountId</code> that is associated with the budget whose
     * notification you want to update.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline UpdateNotificationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UpdateNotificationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UpdateNotificationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the budget whose notification you want to update.</p>
     */
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }
    inline bool BudgetNameHasBeenSet() const { return m_budgetNameHasBeenSet; }
    inline void SetBudgetName(const Aws::String& value) { m_budgetNameHasBeenSet = true; m_budgetName = value; }
    inline void SetBudgetName(Aws::String&& value) { m_budgetNameHasBeenSet = true; m_budgetName = std::move(value); }
    inline void SetBudgetName(const char* value) { m_budgetNameHasBeenSet = true; m_budgetName.assign(value); }
    inline UpdateNotificationRequest& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}
    inline UpdateNotificationRequest& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}
    inline UpdateNotificationRequest& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous notification that is associated with a budget.</p>
     */
    inline const Notification& GetOldNotification() const{ return m_oldNotification; }
    inline bool OldNotificationHasBeenSet() const { return m_oldNotificationHasBeenSet; }
    inline void SetOldNotification(const Notification& value) { m_oldNotificationHasBeenSet = true; m_oldNotification = value; }
    inline void SetOldNotification(Notification&& value) { m_oldNotificationHasBeenSet = true; m_oldNotification = std::move(value); }
    inline UpdateNotificationRequest& WithOldNotification(const Notification& value) { SetOldNotification(value); return *this;}
    inline UpdateNotificationRequest& WithOldNotification(Notification&& value) { SetOldNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated notification to be associated with a budget.</p>
     */
    inline const Notification& GetNewNotification() const{ return m_newNotification; }
    inline bool NewNotificationHasBeenSet() const { return m_newNotificationHasBeenSet; }
    inline void SetNewNotification(const Notification& value) { m_newNotificationHasBeenSet = true; m_newNotification = value; }
    inline void SetNewNotification(Notification&& value) { m_newNotificationHasBeenSet = true; m_newNotification = std::move(value); }
    inline UpdateNotificationRequest& WithNewNotification(const Notification& value) { SetNewNotification(value); return *this;}
    inline UpdateNotificationRequest& WithNewNotification(Notification&& value) { SetNewNotification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_budgetName;
    bool m_budgetNameHasBeenSet = false;

    Notification m_oldNotification;
    bool m_oldNotificationHasBeenSet = false;

    Notification m_newNotification;
    bool m_newNotificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
