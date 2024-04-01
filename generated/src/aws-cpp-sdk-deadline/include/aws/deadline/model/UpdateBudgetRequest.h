/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/BudgetSchedule.h>
#include <aws/deadline/model/BudgetStatus.h>
#include <aws/deadline/model/BudgetActionToAdd.h>
#include <aws/deadline/model/BudgetActionToRemove.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateBudgetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateBudgetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBudget"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline const Aws::Vector<BudgetActionToAdd>& GetActionsToAdd() const{ return m_actionsToAdd; }

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline bool ActionsToAddHasBeenSet() const { return m_actionsToAddHasBeenSet; }

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline void SetActionsToAdd(const Aws::Vector<BudgetActionToAdd>& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd = value; }

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline void SetActionsToAdd(Aws::Vector<BudgetActionToAdd>&& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd = std::move(value); }

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline UpdateBudgetRequest& WithActionsToAdd(const Aws::Vector<BudgetActionToAdd>& value) { SetActionsToAdd(value); return *this;}

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline UpdateBudgetRequest& WithActionsToAdd(Aws::Vector<BudgetActionToAdd>&& value) { SetActionsToAdd(std::move(value)); return *this;}

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline UpdateBudgetRequest& AddActionsToAdd(const BudgetActionToAdd& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd.push_back(value); return *this; }

    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline UpdateBudgetRequest& AddActionsToAdd(BudgetActionToAdd&& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline const Aws::Vector<BudgetActionToRemove>& GetActionsToRemove() const{ return m_actionsToRemove; }

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline bool ActionsToRemoveHasBeenSet() const { return m_actionsToRemoveHasBeenSet; }

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline void SetActionsToRemove(const Aws::Vector<BudgetActionToRemove>& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove = value; }

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline void SetActionsToRemove(Aws::Vector<BudgetActionToRemove>&& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove = std::move(value); }

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline UpdateBudgetRequest& WithActionsToRemove(const Aws::Vector<BudgetActionToRemove>& value) { SetActionsToRemove(value); return *this;}

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline UpdateBudgetRequest& WithActionsToRemove(Aws::Vector<BudgetActionToRemove>&& value) { SetActionsToRemove(std::move(value)); return *this;}

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline UpdateBudgetRequest& AddActionsToRemove(const BudgetActionToRemove& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove.push_back(value); return *this; }

    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline UpdateBudgetRequest& AddActionsToRemove(BudgetActionToRemove&& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove.push_back(std::move(value)); return *this; }


    /**
     * <p>The dollar limit to update on the budget. Based on consumed usage.</p>
     */
    inline double GetApproximateDollarLimit() const{ return m_approximateDollarLimit; }

    /**
     * <p>The dollar limit to update on the budget. Based on consumed usage.</p>
     */
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }

    /**
     * <p>The dollar limit to update on the budget. Based on consumed usage.</p>
     */
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }

    /**
     * <p>The dollar limit to update on the budget. Based on consumed usage.</p>
     */
    inline UpdateBudgetRequest& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}


    /**
     * <p>The budget ID to update.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }

    /**
     * <p>The budget ID to update.</p>
     */
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }

    /**
     * <p>The budget ID to update.</p>
     */
    inline void SetBudgetId(const Aws::String& value) { m_budgetIdHasBeenSet = true; m_budgetId = value; }

    /**
     * <p>The budget ID to update.</p>
     */
    inline void SetBudgetId(Aws::String&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::move(value); }

    /**
     * <p>The budget ID to update.</p>
     */
    inline void SetBudgetId(const char* value) { m_budgetIdHasBeenSet = true; m_budgetId.assign(value); }

    /**
     * <p>The budget ID to update.</p>
     */
    inline UpdateBudgetRequest& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}

    /**
     * <p>The budget ID to update.</p>
     */
    inline UpdateBudgetRequest& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}

    /**
     * <p>The budget ID to update.</p>
     */
    inline UpdateBudgetRequest& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}


    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateBudgetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateBudgetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateBudgetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the budget to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the budget to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the budget to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the budget to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the budget to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the budget to update.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline UpdateBudgetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The schedule to update.</p>
     */
    inline const BudgetSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule to update.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule to update.</p>
     */
    inline void SetSchedule(const BudgetSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule to update.</p>
     */
    inline void SetSchedule(BudgetSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule to update.</p>
     */
    inline UpdateBudgetRequest& WithSchedule(const BudgetSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule to update.</p>
     */
    inline UpdateBudgetRequest& WithSchedule(BudgetSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline const BudgetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline void SetStatus(const BudgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline void SetStatus(BudgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline UpdateBudgetRequest& WithStatus(const BudgetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline UpdateBudgetRequest& WithStatus(BudgetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<BudgetActionToAdd> m_actionsToAdd;
    bool m_actionsToAddHasBeenSet = false;

    Aws::Vector<BudgetActionToRemove> m_actionsToRemove;
    bool m_actionsToRemoveHasBeenSet = false;

    double m_approximateDollarLimit;
    bool m_approximateDollarLimitHasBeenSet = false;

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    BudgetSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    BudgetStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
