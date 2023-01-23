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
#include <aws/dlm/model/ResourceTypeValues.h>
#include <aws/dlm/model/ResourceLocationValues.h>
#include <aws/dlm/model/Tag.h>
#include <aws/dlm/model/Schedule.h>
#include <aws/dlm/model/Action.h>
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
   * <p> <b>[All policy types]</b> Specifies the configuration of a lifecycle
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/PolicyDetails">AWS
   * API Reference</a></p>
   */
  class PolicyDetails
  {
  public:
    AWS_DLM_API PolicyDetails();
    AWS_DLM_API PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <b>[All policy types]</b> The valid target resource types and actions a
     * policy can manage. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline const PolicyTypeValues& GetPolicyType() const{ return m_policyType; }

    /**
     * <p> <b>[All policy types]</b> The valid target resource types and actions a
     * policy can manage. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p> <b>[All policy types]</b> The valid target resource types and actions a
     * policy can manage. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline void SetPolicyType(const PolicyTypeValues& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p> <b>[All policy types]</b> The valid target resource types and actions a
     * policy can manage. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline void SetPolicyType(PolicyTypeValues&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p> <b>[All policy types]</b> The valid target resource types and actions a
     * policy can manage. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline PolicyDetails& WithPolicyType(const PolicyTypeValues& value) { SetPolicyType(value); return *this;}

    /**
     * <p> <b>[All policy types]</b> The valid target resource types and actions a
     * policy can manage. Specify <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a
     * lifecycle policy that manages the lifecycle of Amazon EBS snapshots. Specify
     * <code>IMAGE_MANAGEMENT</code> to create a lifecycle policy that manages the
     * lifecycle of EBS-backed AMIs. Specify <code>EVENT_BASED_POLICY </code> to create
     * an event-based policy that performs specific actions when a defined event occurs
     * in your Amazon Web Services account.</p> <p>The default is
     * <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline PolicyDetails& WithPolicyType(PolicyTypeValues&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& WithResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& WithResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& AddResourceTypes(const ResourceTypeValues& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p> <b>[Snapshot policies only]</b> The target resource type for snapshot and
     * AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& AddResourceTypes(ResourceTypeValues&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline const Aws::Vector<ResourceLocationValues>& GetResourceLocations() const{ return m_resourceLocations; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline bool ResourceLocationsHasBeenSet() const { return m_resourceLocationsHasBeenSet; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline void SetResourceLocations(const Aws::Vector<ResourceLocationValues>& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = value; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline void SetResourceLocations(Aws::Vector<ResourceLocationValues>&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = std::move(value); }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& WithResourceLocations(const Aws::Vector<ResourceLocationValues>& value) { SetResourceLocations(value); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& WithResourceLocations(Aws::Vector<ResourceLocationValues>&& value) { SetResourceLocations(std::move(value)); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& AddResourceLocations(const ResourceLocationValues& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(value); return *this; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The location of the resources to
     * backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& AddResourceLocations(ResourceLocationValues&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetTags() const{ return m_targetTags; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline void SetTargetTags(const Aws::Vector<Tag>& value) { m_targetTagsHasBeenSet = true; m_targetTags = value; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline void SetTargetTags(Aws::Vector<Tag>&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::move(value); }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline PolicyDetails& WithTargetTags(const Aws::Vector<Tag>& value) { SetTargetTags(value); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline PolicyDetails& WithTargetTags(Aws::Vector<Tag>&& value) { SetTargetTags(std::move(value)); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline PolicyDetails& AddTargetTags(const Tag& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The single tag that identifies
     * targeted resources for this policy.</p>
     */
    inline PolicyDetails& AddTargetTags(Tag&& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const{ return m_schedules; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline void SetSchedules(const Aws::Vector<Schedule>& value) { m_schedulesHasBeenSet = true; m_schedules = value; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline void SetSchedules(Aws::Vector<Schedule>&& value) { m_schedulesHasBeenSet = true; m_schedules = std::move(value); }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline PolicyDetails& WithSchedules(const Aws::Vector<Schedule>& value) { SetSchedules(value); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline PolicyDetails& WithSchedules(Aws::Vector<Schedule>&& value) { SetSchedules(std::move(value)); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline PolicyDetails& AddSchedules(const Schedule& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(value); return *this; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> The schedules of policy-defined
     * actions for snapshot and AMI lifecycle policies. A policy can have up to four
     * schedules—one mandatory schedule and up to three optional schedules.</p>
     */
    inline PolicyDetails& AddSchedules(Schedule&& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Snapshot and AMI policies only]</b> A set of optional parameters for
     * snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> A set of optional parameters for
     * snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> A set of optional parameters for
     * snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> A set of optional parameters for
     * snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> A set of optional parameters for
     * snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline PolicyDetails& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p> <b>[Snapshot and AMI policies only]</b> A set of optional parameters for
     * snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline PolicyDetails& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline const EventSource& GetEventSource() const{ return m_eventSource; }

    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline void SetEventSource(const EventSource& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline void SetEventSource(EventSource&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline PolicyDetails& WithEventSource(const EventSource& value) { SetEventSource(value); return *this;}

    /**
     * <p> <b>[Event-based policies only]</b> The event that activates the event-based
     * policy.</p>
     */
    inline PolicyDetails& WithEventSource(EventSource&& value) { SetEventSource(std::move(value)); return *this;}


    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline PolicyDetails& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline PolicyDetails& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline PolicyDetails& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p> <b>[Event-based policies only]</b> The actions to be performed when the
     * event-based policy is activated. You can specify only one action per policy.</p>
     */
    inline PolicyDetails& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    PolicyTypeValues m_policyType;
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
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
