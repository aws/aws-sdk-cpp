/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/PolicyTypeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/Parameters.h>
#include <aws/dlm/model/EventSource.h>
#include <aws/dlm/model/PolicyLanguageValues.h>
#include <aws/dlm/model/ResourceTypeValues.h>
#include <aws/dlm/model/Exclusions.h>
#include <aws/dlm/model/ResourceLocationValues.h>
#include <aws/dlm/model/Tag.h>
#include <aws/dlm/model/Schedule.h>
#include <aws/dlm/model/Action.h>
#include <aws/dlm/model/CrossRegionCopyTarget.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies the configuration of a lifecycle policy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/PolicyDetails">AWS
   * API Reference</a></p>
   */
  class PolicyDetails
  {
  public:
    AWS_DLM_API PolicyDetails() = default;
    AWS_DLM_API PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of policy. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline PolicyTypeValues GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyTypeValues value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline PolicyDetails& WithPolicyType(PolicyTypeValues value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceTypeValues>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceTypeValues>>
    PolicyDetails& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline PolicyDetails& AddResourceTypes(ResourceTypeValues value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup.</p> <ul> <li> <p>If the source resources are located in a Region,
     * specify <code>CLOUD</code>. In this case, the policy targets all resources of
     * the specified type with matching target tags across all Availability Zones in
     * the Region.</p> </li> <li> <p> <b>[Custom snapshot policies only]</b> If the
     * source resources are located in a Local Zone, specify <code>LOCAL_ZONE</code>.
     * In this case, the policy targets all resources of the specified type with
     * matching target tags across all Local Zones in the Region.</p> </li> <li> <p>If
     * the source resources are located on an Outpost in your account, specify
     * <code>OUTPOST</code>. In this case, the policy targets all resources of the
     * specified type with matching target tags across all of the Outposts in your
     * account.</p> </li> </ul> <p/>
     */
    inline const Aws::Vector<ResourceLocationValues>& GetResourceLocations() const { return m_resourceLocations; }
    inline bool ResourceLocationsHasBeenSet() const { return m_resourceLocationsHasBeenSet; }
    template<typename ResourceLocationsT = Aws::Vector<ResourceLocationValues>>
    void SetResourceLocations(ResourceLocationsT&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = std::forward<ResourceLocationsT>(value); }
    template<typename ResourceLocationsT = Aws::Vector<ResourceLocationValues>>
    PolicyDetails& WithResourceLocations(ResourceLocationsT&& value) { SetResourceLocations(std::forward<ResourceLocationsT>(value)); return *this;}
    inline PolicyDetails& AddResourceLocations(ResourceLocationValues value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetTags() const { return m_targetTags; }
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }
    template<typename TargetTagsT = Aws::Vector<Tag>>
    void SetTargetTags(TargetTagsT&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::forward<TargetTagsT>(value); }
    template<typename TargetTagsT = Aws::Vector<Tag>>
    PolicyDetails& WithTargetTags(TargetTagsT&& value) { SetTargetTags(std::forward<TargetTagsT>(value)); return *this;}
    template<typename TargetTagsT = Tag>
    PolicyDetails& AddTargetTags(TargetTagsT&& value) { m_targetTagsHasBeenSet = true; m_targetTags.emplace_back(std::forward<TargetTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const { return m_schedules; }
    inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }
    template<typename SchedulesT = Aws::Vector<Schedule>>
    void SetSchedules(SchedulesT&& value) { m_schedulesHasBeenSet = true; m_schedules = std::forward<SchedulesT>(value); }
    template<typename SchedulesT = Aws::Vector<Schedule>>
    PolicyDetails& WithSchedules(SchedulesT&& value) { SetSchedules(std::forward<SchedulesT>(value)); return *this;}
    template<typename SchedulesT = Schedule>
    PolicyDetails& AddSchedules(SchedulesT&& value) { m_schedulesHasBeenSet = true; m_schedules.emplace_back(std::forward<SchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline const Parameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Parameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Parameters>
    PolicyDetails& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline const EventSource& GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    template<typename EventSourceT = EventSource>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = EventSource>
    PolicyDetails& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Action>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Action>>
    PolicyDetails& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    PolicyDetails& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline PolicyLanguageValues GetPolicyLanguage() const { return m_policyLanguage; }
    inline bool PolicyLanguageHasBeenSet() const { return m_policyLanguageHasBeenSet; }
    inline void SetPolicyLanguage(PolicyLanguageValues value) { m_policyLanguageHasBeenSet = true; m_policyLanguage = value; }
    inline PolicyDetails& WithPolicyLanguage(PolicyLanguageValues value) { SetPolicyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline ResourceTypeValues GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceTypeValues value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline PolicyDetails& WithResourceType(ResourceTypeValues value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline int GetCreateInterval() const { return m_createInterval; }
    inline bool CreateIntervalHasBeenSet() const { return m_createIntervalHasBeenSet; }
    inline void SetCreateInterval(int value) { m_createIntervalHasBeenSet = true; m_createInterval = value; }
    inline PolicyDetails& WithCreateInterval(int value) { SetCreateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline int GetRetainInterval() const { return m_retainInterval; }
    inline bool RetainIntervalHasBeenSet() const { return m_retainIntervalHasBeenSet; }
    inline void SetRetainInterval(int value) { m_retainIntervalHasBeenSet = true; m_retainInterval = value; }
    inline PolicyDetails& WithRetainInterval(int value) { SetRetainInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline PolicyDetails& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline const Aws::Vector<CrossRegionCopyTarget>& GetCrossRegionCopyTargets() const { return m_crossRegionCopyTargets; }
    inline bool CrossRegionCopyTargetsHasBeenSet() const { return m_crossRegionCopyTargetsHasBeenSet; }
    template<typename CrossRegionCopyTargetsT = Aws::Vector<CrossRegionCopyTarget>>
    void SetCrossRegionCopyTargets(CrossRegionCopyTargetsT&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = std::forward<CrossRegionCopyTargetsT>(value); }
    template<typename CrossRegionCopyTargetsT = Aws::Vector<CrossRegionCopyTarget>>
    PolicyDetails& WithCrossRegionCopyTargets(CrossRegionCopyTargetsT&& value) { SetCrossRegionCopyTargets(std::forward<CrossRegionCopyTargetsT>(value)); return *this;}
    template<typename CrossRegionCopyTargetsT = CrossRegionCopyTarget>
    PolicyDetails& AddCrossRegionCopyTargets(CrossRegionCopyTargetsT&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.emplace_back(std::forward<CrossRegionCopyTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Defines the snapshot or AMI retention
     * behavior for the policy if the source volume or instance is deleted, or if the
     * policy enters the error, disabled, or deleted state.</p> <p>By default
     * (<b>ExtendDeletion=false</b>):</p> <ul> <li> <p>If a source resource is deleted,
     * Amazon Data Lifecycle Manager will continue to delete previously created
     * snapshots or AMIs, up to but not including the last one, based on the specified
     * retention period. If you want Amazon Data Lifecycle Manager to delete all
     * snapshots or AMIs, including the last one, specify <code>true</code>.</p> </li>
     * <li> <p>If a policy enters the error, disabled, or deleted state, Amazon Data
     * Lifecycle Manager stops deleting snapshots and AMIs. If you want Amazon Data
     * Lifecycle Manager to continue deleting snapshots or AMIs, including the last
     * one, if the policy enters one of these states, specify <code>true</code>.</p>
     * </li> </ul> <p>If you enable extended deletion (<b>ExtendDeletion=true</b>), you
     * override both default behaviors simultaneously.</p> <p>If you do not specify a
     * value, the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetExtendDeletion() const { return m_extendDeletion; }
    inline bool ExtendDeletionHasBeenSet() const { return m_extendDeletionHasBeenSet; }
    inline void SetExtendDeletion(bool value) { m_extendDeletionHasBeenSet = true; m_extendDeletion = value; }
    inline PolicyDetails& WithExtendDeletion(bool value) { SetExtendDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline const Exclusions& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Exclusions>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Exclusions>
    PolicyDetails& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    ///@}
  private:

    PolicyTypeValues m_policyType{PolicyTypeValues::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::Vector<ResourceTypeValues> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<ResourceLocationValues> m_resourceLocations;
    bool m_resourceLocationsHasBeenSet = false;

    Aws::Vector<Tag> m_targetTags;
    bool m_targetTagsHasBeenSet = false;

    Aws::Vector<Schedule> m_schedules;
    bool m_schedulesHasBeenSet = false;

    Parameters m_parameters;
    bool m_parametersHasBeenSet = false;

    EventSource m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    PolicyLanguageValues m_policyLanguage{PolicyLanguageValues::NOT_SET};
    bool m_policyLanguageHasBeenSet = false;

    ResourceTypeValues m_resourceType{ResourceTypeValues::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    int m_createInterval{0};
    bool m_createIntervalHasBeenSet = false;

    int m_retainInterval{0};
    bool m_retainIntervalHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<CrossRegionCopyTarget> m_crossRegionCopyTargets;
    bool m_crossRegionCopyTargetsHasBeenSet = false;

    bool m_extendDeletion{false};
    bool m_extendDeletionHasBeenSet = false;

    Exclusions m_exclusions;
    bool m_exclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
