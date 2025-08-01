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
#include <aws/arc-region-switch/model/RecoveryApproach.h>
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
  class CreatePlanRequest : public ARCRegionswitchRequest
  {
  public:
    AWS_ARCREGIONSWITCH_API CreatePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlan"; }

    AWS_ARCREGIONSWITCH_API Aws::String SerializePayload() const override;

    AWS_ARCREGIONSWITCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_ARCREGIONSWITCH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The description of a Region switch plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePlanRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of workflows included in a Region switch plan.</p>
     */
    inline const Aws::Vector<Workflow>& GetWorkflows() const { return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    CreatePlanRequest& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = Workflow>
    CreatePlanRequest& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An execution role is a way to categorize a Region switch plan.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    CreatePlanRequest& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally, you can specify an recovery time objective for a Region switch
     * plan, in minutes.</p>
     */
    inline int GetRecoveryTimeObjectiveMinutes() const { return m_recoveryTimeObjectiveMinutes; }
    inline bool RecoveryTimeObjectiveMinutesHasBeenSet() const { return m_recoveryTimeObjectiveMinutesHasBeenSet; }
    inline void SetRecoveryTimeObjectiveMinutes(int value) { m_recoveryTimeObjectiveMinutesHasBeenSet = true; m_recoveryTimeObjectiveMinutes = value; }
    inline CreatePlanRequest& WithRecoveryTimeObjectiveMinutes(int value) { SetRecoveryTimeObjectiveMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alarms associated with a Region switch plan.</p>
     */
    inline const Aws::Map<Aws::String, AssociatedAlarm>& GetAssociatedAlarms() const { return m_associatedAlarms; }
    inline bool AssociatedAlarmsHasBeenSet() const { return m_associatedAlarmsHasBeenSet; }
    template<typename AssociatedAlarmsT = Aws::Map<Aws::String, AssociatedAlarm>>
    void SetAssociatedAlarms(AssociatedAlarmsT&& value) { m_associatedAlarmsHasBeenSet = true; m_associatedAlarms = std::forward<AssociatedAlarmsT>(value); }
    template<typename AssociatedAlarmsT = Aws::Map<Aws::String, AssociatedAlarm>>
    CreatePlanRequest& WithAssociatedAlarms(AssociatedAlarmsT&& value) { SetAssociatedAlarms(std::forward<AssociatedAlarmsT>(value)); return *this;}
    template<typename AssociatedAlarmsKeyT = Aws::String, typename AssociatedAlarmsValueT = AssociatedAlarm>
    CreatePlanRequest& AddAssociatedAlarms(AssociatedAlarmsKeyT&& key, AssociatedAlarmsValueT&& value) {
      m_associatedAlarmsHasBeenSet = true; m_associatedAlarms.emplace(std::forward<AssociatedAlarmsKeyT>(key), std::forward<AssociatedAlarmsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The triggers associated with a Region switch plan.</p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const { return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    template<typename TriggersT = Aws::Vector<Trigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<Trigger>>
    CreatePlanRequest& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = Trigger>
    CreatePlanRequest& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a Region switch plan.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePlanRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that specifies the Amazon Web Services Regions for a Region switch
     * plan. Specify two Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    CreatePlanRequest& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    CreatePlanRequest& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recovery approach for a Region switch plan, which can be active/active
     * (activeActive) or active/passive (activePassive).</p>
     */
    inline RecoveryApproach GetRecoveryApproach() const { return m_recoveryApproach; }
    inline bool RecoveryApproachHasBeenSet() const { return m_recoveryApproachHasBeenSet; }
    inline void SetRecoveryApproach(RecoveryApproach value) { m_recoveryApproachHasBeenSet = true; m_recoveryApproach = value; }
    inline CreatePlanRequest& WithRecoveryApproach(RecoveryApproach value) { SetRecoveryApproach(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary Amazon Web Services Region for the application. This is the
     * Region where the application normally runs before any Region switch occurs.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    CreatePlanRequest& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Region switch plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePlanRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    RecoveryApproach m_recoveryApproach{RecoveryApproach::NOT_SET};
    bool m_recoveryApproachHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
