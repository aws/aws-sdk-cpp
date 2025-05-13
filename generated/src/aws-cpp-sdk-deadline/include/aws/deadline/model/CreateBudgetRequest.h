/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UsageTrackingResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/BudgetSchedule.h>
#include <aws/deadline/model/BudgetActionToAdd.h>
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
  class CreateBudgetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateBudgetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBudget"; }

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
    CreateBudgetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID to include in this budget.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    CreateBudgetRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID provided to this budget to track usage.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const { return m_usageTrackingResource; }
    inline bool UsageTrackingResourceHasBeenSet() const { return m_usageTrackingResourceHasBeenSet; }
    template<typename UsageTrackingResourceT = UsageTrackingResource>
    void SetUsageTrackingResource(UsageTrackingResourceT&& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = std::forward<UsageTrackingResourceT>(value); }
    template<typename UsageTrackingResourceT = UsageTrackingResource>
    CreateBudgetRequest& WithUsageTrackingResource(UsageTrackingResourceT&& value) { SetUsageTrackingResource(std::forward<UsageTrackingResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateBudgetRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBudgetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar limit based on consumed usage.</p>
     */
    inline double GetApproximateDollarLimit() const { return m_approximateDollarLimit; }
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline CreateBudgetRequest& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget actions to specify what happens when the budget runs out.</p>
     */
    inline const Aws::Vector<BudgetActionToAdd>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<BudgetActionToAdd>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<BudgetActionToAdd>>
    CreateBudgetRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = BudgetActionToAdd>
    CreateBudgetRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule to associate with this budget.</p>
     */
    inline const BudgetSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = BudgetSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = BudgetSchedule>
    CreateBudgetRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    UsageTrackingResource m_usageTrackingResource;
    bool m_usageTrackingResourceHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_approximateDollarLimit{0.0};
    bool m_approximateDollarLimitHasBeenSet = false;

    Aws::Vector<BudgetActionToAdd> m_actions;
    bool m_actionsHasBeenSet = false;

    BudgetSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
