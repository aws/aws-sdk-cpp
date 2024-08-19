/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/BudgetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/BudgetSchedule.h>
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


    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateBudgetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateBudgetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateBudgetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline UpdateBudgetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateBudgetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateBudgetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget ID to update.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }
    inline void SetBudgetId(const Aws::String& value) { m_budgetIdHasBeenSet = true; m_budgetId = value; }
    inline void SetBudgetId(Aws::String&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::move(value); }
    inline void SetBudgetId(const char* value) { m_budgetIdHasBeenSet = true; m_budgetId.assign(value); }
    inline UpdateBudgetRequest& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}
    inline UpdateBudgetRequest& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}
    inline UpdateBudgetRequest& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget to update.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateBudgetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateBudgetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateBudgetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the budget to update.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateBudgetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBudgetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBudgetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline const BudgetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BudgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BudgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateBudgetRequest& WithStatus(const BudgetStatus& value) { SetStatus(value); return *this;}
    inline UpdateBudgetRequest& WithStatus(BudgetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar limit to update on the budget. Based on consumed usage.</p>
     */
    inline double GetApproximateDollarLimit() const{ return m_approximateDollarLimit; }
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline UpdateBudgetRequest& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline const Aws::Vector<BudgetActionToAdd>& GetActionsToAdd() const{ return m_actionsToAdd; }
    inline bool ActionsToAddHasBeenSet() const { return m_actionsToAddHasBeenSet; }
    inline void SetActionsToAdd(const Aws::Vector<BudgetActionToAdd>& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd = value; }
    inline void SetActionsToAdd(Aws::Vector<BudgetActionToAdd>&& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd = std::move(value); }
    inline UpdateBudgetRequest& WithActionsToAdd(const Aws::Vector<BudgetActionToAdd>& value) { SetActionsToAdd(value); return *this;}
    inline UpdateBudgetRequest& WithActionsToAdd(Aws::Vector<BudgetActionToAdd>&& value) { SetActionsToAdd(std::move(value)); return *this;}
    inline UpdateBudgetRequest& AddActionsToAdd(const BudgetActionToAdd& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd.push_back(value); return *this; }
    inline UpdateBudgetRequest& AddActionsToAdd(BudgetActionToAdd&& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline const Aws::Vector<BudgetActionToRemove>& GetActionsToRemove() const{ return m_actionsToRemove; }
    inline bool ActionsToRemoveHasBeenSet() const { return m_actionsToRemoveHasBeenSet; }
    inline void SetActionsToRemove(const Aws::Vector<BudgetActionToRemove>& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove = value; }
    inline void SetActionsToRemove(Aws::Vector<BudgetActionToRemove>&& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove = std::move(value); }
    inline UpdateBudgetRequest& WithActionsToRemove(const Aws::Vector<BudgetActionToRemove>& value) { SetActionsToRemove(value); return *this;}
    inline UpdateBudgetRequest& WithActionsToRemove(Aws::Vector<BudgetActionToRemove>&& value) { SetActionsToRemove(std::move(value)); return *this;}
    inline UpdateBudgetRequest& AddActionsToRemove(const BudgetActionToRemove& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove.push_back(value); return *this; }
    inline UpdateBudgetRequest& AddActionsToRemove(BudgetActionToRemove&& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule to update.</p>
     */
    inline const BudgetSchedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const BudgetSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(BudgetSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline UpdateBudgetRequest& WithSchedule(const BudgetSchedule& value) { SetSchedule(value); return *this;}
    inline UpdateBudgetRequest& WithSchedule(BudgetSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BudgetStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_approximateDollarLimit;
    bool m_approximateDollarLimitHasBeenSet = false;

    Aws::Vector<BudgetActionToAdd> m_actionsToAdd;
    bool m_actionsToAddHasBeenSet = false;

    Aws::Vector<BudgetActionToRemove> m_actionsToRemove;
    bool m_actionsToRemoveHasBeenSet = false;

    BudgetSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
