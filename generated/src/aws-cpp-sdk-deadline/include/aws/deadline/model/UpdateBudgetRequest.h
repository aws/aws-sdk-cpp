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
    AWS_DEADLINE_API UpdateBudgetRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateBudgetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the budget to update.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    UpdateBudgetRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget ID to update.</p>
     */
    inline const Aws::String& GetBudgetId() const { return m_budgetId; }
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }
    template<typename BudgetIdT = Aws::String>
    void SetBudgetId(BudgetIdT&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::forward<BudgetIdT>(value); }
    template<typename BudgetIdT = Aws::String>
    UpdateBudgetRequest& WithBudgetId(BudgetIdT&& value) { SetBudgetId(std::forward<BudgetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget to update.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateBudgetRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the budget to update.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateBudgetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The
     * budget is being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget
     * is inactive. This can include Expired, Canceled, or deleted Deleted
     * statuses.</p> </li> </ul>
     */
    inline BudgetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BudgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateBudgetRequest& WithStatus(BudgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar limit to update on the budget. Based on consumed usage.</p>
     */
    inline double GetApproximateDollarLimit() const { return m_approximateDollarLimit; }
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline UpdateBudgetRequest& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget actions to add. Budget actions specify what happens when the
     * budget runs out.</p>
     */
    inline const Aws::Vector<BudgetActionToAdd>& GetActionsToAdd() const { return m_actionsToAdd; }
    inline bool ActionsToAddHasBeenSet() const { return m_actionsToAddHasBeenSet; }
    template<typename ActionsToAddT = Aws::Vector<BudgetActionToAdd>>
    void SetActionsToAdd(ActionsToAddT&& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd = std::forward<ActionsToAddT>(value); }
    template<typename ActionsToAddT = Aws::Vector<BudgetActionToAdd>>
    UpdateBudgetRequest& WithActionsToAdd(ActionsToAddT&& value) { SetActionsToAdd(std::forward<ActionsToAddT>(value)); return *this;}
    template<typename ActionsToAddT = BudgetActionToAdd>
    UpdateBudgetRequest& AddActionsToAdd(ActionsToAddT&& value) { m_actionsToAddHasBeenSet = true; m_actionsToAdd.emplace_back(std::forward<ActionsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The budget actions to remove from the budget.</p>
     */
    inline const Aws::Vector<BudgetActionToRemove>& GetActionsToRemove() const { return m_actionsToRemove; }
    inline bool ActionsToRemoveHasBeenSet() const { return m_actionsToRemoveHasBeenSet; }
    template<typename ActionsToRemoveT = Aws::Vector<BudgetActionToRemove>>
    void SetActionsToRemove(ActionsToRemoveT&& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove = std::forward<ActionsToRemoveT>(value); }
    template<typename ActionsToRemoveT = Aws::Vector<BudgetActionToRemove>>
    UpdateBudgetRequest& WithActionsToRemove(ActionsToRemoveT&& value) { SetActionsToRemove(std::forward<ActionsToRemoveT>(value)); return *this;}
    template<typename ActionsToRemoveT = BudgetActionToRemove>
    UpdateBudgetRequest& AddActionsToRemove(ActionsToRemoveT&& value) { m_actionsToRemoveHasBeenSet = true; m_actionsToRemove.emplace_back(std::forward<ActionsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule to update.</p>
     */
    inline const BudgetSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = BudgetSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = BudgetSchedule>
    UpdateBudgetRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BudgetStatus m_status{BudgetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    double m_approximateDollarLimit{0.0};
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
