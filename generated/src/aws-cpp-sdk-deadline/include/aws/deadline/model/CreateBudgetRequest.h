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
    AWS_DEADLINE_API CreateBudgetRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateBudgetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateBudgetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateBudgetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID to include in this budget.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline CreateBudgetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline CreateBudgetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline CreateBudgetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID provided to this budget to track usage.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const{ return m_usageTrackingResource; }
    inline bool UsageTrackingResourceHasBeenSet() const { return m_usageTrackingResourceHasBeenSet; }
    inline void SetUsageTrackingResource(const UsageTrackingResource& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = value; }
    inline void SetUsageTrackingResource(UsageTrackingResource&& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = std::move(value); }
    inline CreateBudgetRequest& WithUsageTrackingResource(const UsageTrackingResource& value) { SetUsageTrackingResource(value); return *this;}
    inline CreateBudgetRequest& WithUsageTrackingResource(UsageTrackingResource&& value) { SetUsageTrackingResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateBudgetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateBudgetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateBudgetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateBudgetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateBudgetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateBudgetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar limit based on consumed usage.</p>
     */
    inline double GetApproximateDollarLimit() const{ return m_approximateDollarLimit; }
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline CreateBudgetRequest& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget actions to specify what happens when the budget runs out.</p>
     */
    inline const Aws::Vector<BudgetActionToAdd>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<BudgetActionToAdd>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<BudgetActionToAdd>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline CreateBudgetRequest& WithActions(const Aws::Vector<BudgetActionToAdd>& value) { SetActions(value); return *this;}
    inline CreateBudgetRequest& WithActions(Aws::Vector<BudgetActionToAdd>&& value) { SetActions(std::move(value)); return *this;}
    inline CreateBudgetRequest& AddActions(const BudgetActionToAdd& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline CreateBudgetRequest& AddActions(BudgetActionToAdd&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schedule to associate with this budget.</p>
     */
    inline const BudgetSchedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const BudgetSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(BudgetSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CreateBudgetRequest& WithSchedule(const BudgetSchedule& value) { SetSchedule(value); return *this;}
    inline CreateBudgetRequest& WithSchedule(BudgetSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    UsageTrackingResource m_usageTrackingResource;
    bool m_usageTrackingResourceHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_approximateDollarLimit;
    bool m_approximateDollarLimitHasBeenSet = false;

    Aws::Vector<BudgetActionToAdd> m_actions;
    bool m_actionsHasBeenSet = false;

    BudgetSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
