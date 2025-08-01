/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/arc-region-switch/model/RecoveryApproach.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-region-switch/model/Workflow.h>
#include <aws/arc-region-switch/model/AssociatedAlarm.h>
#include <aws/arc-region-switch/model/Trigger.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Represents a Region switch plan. A plan defines the steps required to shift
   * traffic from one Amazon Web Services Region to another.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Plan">AWS
   * API Reference</a></p>
   */
  class Plan
  {
  public:
    AWS_ARCREGIONSWITCH_API Plan() = default;
    AWS_ARCREGIONSWITCH_API Plan(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Plan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the plan.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Plan& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for a plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Plan& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflows for a plan.</p>
     */
    inline const Aws::Vector<Workflow>& GetWorkflows() const { return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<Workflow>>
    Plan& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = Workflow>
    Plan& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The execution role for a plan.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    Plan& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recovery time objective for a plan.</p>
     */
    inline int GetRecoveryTimeObjectiveMinutes() const { return m_recoveryTimeObjectiveMinutes; }
    inline bool RecoveryTimeObjectiveMinutesHasBeenSet() const { return m_recoveryTimeObjectiveMinutesHasBeenSet; }
    inline void SetRecoveryTimeObjectiveMinutes(int value) { m_recoveryTimeObjectiveMinutesHasBeenSet = true; m_recoveryTimeObjectiveMinutes = value; }
    inline Plan& WithRecoveryTimeObjectiveMinutes(int value) { SetRecoveryTimeObjectiveMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated application health alarms for a plan.</p>
     */
    inline const Aws::Map<Aws::String, AssociatedAlarm>& GetAssociatedAlarms() const { return m_associatedAlarms; }
    inline bool AssociatedAlarmsHasBeenSet() const { return m_associatedAlarmsHasBeenSet; }
    template<typename AssociatedAlarmsT = Aws::Map<Aws::String, AssociatedAlarm>>
    void SetAssociatedAlarms(AssociatedAlarmsT&& value) { m_associatedAlarmsHasBeenSet = true; m_associatedAlarms = std::forward<AssociatedAlarmsT>(value); }
    template<typename AssociatedAlarmsT = Aws::Map<Aws::String, AssociatedAlarm>>
    Plan& WithAssociatedAlarms(AssociatedAlarmsT&& value) { SetAssociatedAlarms(std::forward<AssociatedAlarmsT>(value)); return *this;}
    template<typename AssociatedAlarmsKeyT = Aws::String, typename AssociatedAlarmsValueT = AssociatedAlarm>
    Plan& AddAssociatedAlarms(AssociatedAlarmsKeyT&& key, AssociatedAlarmsValueT&& value) {
      m_associatedAlarmsHasBeenSet = true; m_associatedAlarms.emplace(std::forward<AssociatedAlarmsKeyT>(key), std::forward<AssociatedAlarmsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The triggers for a plan.</p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const { return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    template<typename TriggersT = Aws::Vector<Trigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<Trigger>>
    Plan& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = Trigger>
    Plan& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for a plan.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Plan& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions for a plan.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    Plan& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    Plan& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recovery approach for a Region switch plan, which can be active/active
     * (activeActive) or active/passive (activePassive).</p>
     */
    inline RecoveryApproach GetRecoveryApproach() const { return m_recoveryApproach; }
    inline bool RecoveryApproachHasBeenSet() const { return m_recoveryApproachHasBeenSet; }
    inline void SetRecoveryApproach(RecoveryApproach value) { m_recoveryApproachHasBeenSet = true; m_recoveryApproach = value; }
    inline Plan& WithRecoveryApproach(RecoveryApproach value) { SetRecoveryApproach(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary Region for a plan.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const { return m_primaryRegion; }
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }
    template<typename PrimaryRegionT = Aws::String>
    void SetPrimaryRegion(PrimaryRegionT&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::forward<PrimaryRegionT>(value); }
    template<typename PrimaryRegionT = Aws::String>
    Plan& WithPrimaryRegion(PrimaryRegionT&& value) { SetPrimaryRegion(std::forward<PrimaryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of a plan.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Plan& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the plan.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Plan& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Plan& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    RecoveryApproach m_recoveryApproach{RecoveryApproach::NOT_SET};
    bool m_recoveryApproachHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
