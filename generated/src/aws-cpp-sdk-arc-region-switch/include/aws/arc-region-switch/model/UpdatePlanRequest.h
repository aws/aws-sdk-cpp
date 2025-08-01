/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/ARCRegionswitchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/arc-region-switch/model/Workflow.h>
#include <aws/arc-region-switch/model/AssociatedAlarm.h>
#include <aws/arc-region-switch/model/Trigger.h>
#include <utility>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

  /**
   */
  class UpdatePlanRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API UpdatePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePlan"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_ARCREGIONSWITCH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdatePlanRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for the Region switch plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePlanRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated workflows for the Region switch plan.</p>
     */
    inline const Aws::Vector<Workflow>& GetWorkflows() const { return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    UpdatePlanRequest& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = Workflow>
    UpdatePlanRequest& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated IAM role ARN that grants Region switch the permissions needed to
     * execute the plan steps.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    UpdatePlanRequest& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated target recovery time objective (RTO) in minutes for the plan.</p>
     */
    inline int GetRecoveryTimeObjectiveMinutes() const { return m_recoveryTimeObjectiveMinutes; }
    inline bool RecoveryTimeObjectiveMinutesHasBeenSet() const { return m_recoveryTimeObjectiveMinutesHasBeenSet; }
    inline void SetRecoveryTimeObjectiveMinutes(int value) { m_recoveryTimeObjectiveMinutesHasBeenSet = true; m_recoveryTimeObjectiveMinutes = value; }
    inline UpdatePlanRequest& WithRecoveryTimeObjectiveMinutes(int value) { SetRecoveryTimeObjectiveMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated CloudWatch alarms associated with the plan.</p>
     */
    inline const Aws::Map<Aws::String, AssociatedAlarm>& GetAssociatedAlarms() const { return m_associatedAlarms; }
    inline bool AssociatedAlarmsHasBeenSet() const { return m_associatedAlarmsHasBeenSet; }
    template<typename AssociatedAlarmsT = Aws::Map<Aws::String, AssociatedAlarm>>
    void SetAssociatedAlarms(AssociatedAlarmsT&& value) { m_associatedAlarmsHasBeenSet = true; m_associatedAlarms = std::forward<AssociatedAlarmsT>(value); }
    template<typename AssociatedAlarmsT = Aws::Map<Aws::String, AssociatedAlarm>>
    UpdatePlanRequest& WithAssociatedAlarms(AssociatedAlarmsT&& value) { SetAssociatedAlarms(std::forward<AssociatedAlarmsT>(value)); return *this;}
    template<typename AssociatedAlarmsKeyT = Aws::String, typename AssociatedAlarmsValueT = AssociatedAlarm>
    UpdatePlanRequest& AddAssociatedAlarms(AssociatedAlarmsKeyT&& key, AssociatedAlarmsValueT&& value) {
      m_associatedAlarmsHasBeenSet = true; m_associatedAlarms.emplace(std::forward<AssociatedAlarmsKeyT>(key), std::forward<AssociatedAlarmsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The updated conditions that can automatically trigger the execution of the
     * plan.</p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const { return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    template<typename TriggersT = Aws::Vector<Trigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<Trigger>>
    UpdatePlanRequest& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = Trigger>
    UpdatePlanRequest& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Workflow> m_workflows;
    bool m_workflowsHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    int m_recoveryTimeObjectiveMinutes{0};
    bool m_recoveryTimeObjectiveMinutesHasBeenSet = false;

    Aws::Map<Aws::String, AssociatedAlarm> m_associatedAlarms;
    bool m_associatedAlarmsHasBeenSet = false;

    Aws::Vector<Trigger> m_triggers;
    bool m_triggersHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
