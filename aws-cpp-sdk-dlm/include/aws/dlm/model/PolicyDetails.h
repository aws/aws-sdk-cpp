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
   * <p>Specifies the configuration of a lifecycle policy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/PolicyDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API PolicyDetails
  {
  public:
    PolicyDetails();
    PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The valid target resource types and actions a policy can manage. Specify
     * <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a lifecycle policy that manages
     * the lifecycle of Amazon EBS snapshots. Specify <code>IMAGE_MANAGEMENT</code> to
     * create a lifecycle policy that manages the lifecycle of EBS-backed AMIs. Specify
     * <code>EVENT_BASED_POLICY </code> to create an event-based policy that performs
     * specific actions when a defined event occurs in your AWS account.</p> <p>The
     * default is <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline const PolicyTypeValues& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The valid target resource types and actions a policy can manage. Specify
     * <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a lifecycle policy that manages
     * the lifecycle of Amazon EBS snapshots. Specify <code>IMAGE_MANAGEMENT</code> to
     * create a lifecycle policy that manages the lifecycle of EBS-backed AMIs. Specify
     * <code>EVENT_BASED_POLICY </code> to create an event-based policy that performs
     * specific actions when a defined event occurs in your AWS account.</p> <p>The
     * default is <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The valid target resource types and actions a policy can manage. Specify
     * <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a lifecycle policy that manages
     * the lifecycle of Amazon EBS snapshots. Specify <code>IMAGE_MANAGEMENT</code> to
     * create a lifecycle policy that manages the lifecycle of EBS-backed AMIs. Specify
     * <code>EVENT_BASED_POLICY </code> to create an event-based policy that performs
     * specific actions when a defined event occurs in your AWS account.</p> <p>The
     * default is <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline void SetPolicyType(const PolicyTypeValues& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The valid target resource types and actions a policy can manage. Specify
     * <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a lifecycle policy that manages
     * the lifecycle of Amazon EBS snapshots. Specify <code>IMAGE_MANAGEMENT</code> to
     * create a lifecycle policy that manages the lifecycle of EBS-backed AMIs. Specify
     * <code>EVENT_BASED_POLICY </code> to create an event-based policy that performs
     * specific actions when a defined event occurs in your AWS account.</p> <p>The
     * default is <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline void SetPolicyType(PolicyTypeValues&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The valid target resource types and actions a policy can manage. Specify
     * <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a lifecycle policy that manages
     * the lifecycle of Amazon EBS snapshots. Specify <code>IMAGE_MANAGEMENT</code> to
     * create a lifecycle policy that manages the lifecycle of EBS-backed AMIs. Specify
     * <code>EVENT_BASED_POLICY </code> to create an event-based policy that performs
     * specific actions when a defined event occurs in your AWS account.</p> <p>The
     * default is <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline PolicyDetails& WithPolicyType(const PolicyTypeValues& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The valid target resource types and actions a policy can manage. Specify
     * <code>EBS_SNAPSHOT_MANAGEMENT</code> to create a lifecycle policy that manages
     * the lifecycle of Amazon EBS snapshots. Specify <code>IMAGE_MANAGEMENT</code> to
     * create a lifecycle policy that manages the lifecycle of EBS-backed AMIs. Specify
     * <code>EVENT_BASED_POLICY </code> to create an event-based policy that performs
     * specific actions when a defined event occurs in your AWS account.</p> <p>The
     * default is <code>EBS_SNAPSHOT_MANAGEMENT</code>.</p>
     */
    inline PolicyDetails& WithPolicyType(PolicyTypeValues&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& AddResourceTypes(const ResourceTypeValues& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The target resource type for snapshot and AMI lifecycle policies. Use
     * <code>VOLUME </code>to create snapshots of individual volumes or use
     * <code>INSTANCE</code> to create multi-volume snapshots from the volumes for an
     * instance.</p> <p>This parameter is required for snapshot and AMI policies only.
     * If you are creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& AddResourceTypes(ResourceTypeValues&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline const Aws::Vector<ResourceLocationValues>& GetResourceLocations() const{ return m_resourceLocations; }

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline bool ResourceLocationsHasBeenSet() const { return m_resourceLocationsHasBeenSet; }

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline void SetResourceLocations(const Aws::Vector<ResourceLocationValues>& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = value; }

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline void SetResourceLocations(Aws::Vector<ResourceLocationValues>&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = std::move(value); }

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline PolicyDetails& WithResourceLocations(const Aws::Vector<ResourceLocationValues>& value) { SetResourceLocations(value); return *this;}

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline PolicyDetails& WithResourceLocations(Aws::Vector<ResourceLocationValues>&& value) { SetResourceLocations(std::move(value)); return *this;}

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline PolicyDetails& AddResourceLocations(const ResourceLocationValues& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(value); return *this; }

    /**
     * <p>The location of the resources to backup. If the source resources are located
     * in an AWS Region, specify <code>CLOUD</code>. If the source resources are
     * located on an AWS Outpost in your account, specify <code>OUTPOST</code>. </p>
     * <p>If you specify <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up
     * all resources of the specified type with matching target tags across all of the
     * Outposts in your account.</p>
     */
    inline PolicyDetails& AddResourceLocations(ResourceLocationValues&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(std::move(value)); return *this; }


    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetTags() const{ return m_targetTags; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline void SetTargetTags(const Aws::Vector<Tag>& value) { m_targetTagsHasBeenSet = true; m_targetTags = value; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline void SetTargetTags(Aws::Vector<Tag>&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::move(value); }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithTargetTags(const Aws::Vector<Tag>& value) { SetTargetTags(value); return *this;}

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithTargetTags(Aws::Vector<Tag>&& value) { SetTargetTags(std::move(value)); return *this;}

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& AddTargetTags(const Tag& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& AddTargetTags(Tag&& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const{ return m_schedules; }

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline void SetSchedules(const Aws::Vector<Schedule>& value) { m_schedulesHasBeenSet = true; m_schedules = value; }

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline void SetSchedules(Aws::Vector<Schedule>&& value) { m_schedulesHasBeenSet = true; m_schedules = std::move(value); }

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline PolicyDetails& WithSchedules(const Aws::Vector<Schedule>& value) { SetSchedules(value); return *this;}

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline PolicyDetails& WithSchedules(Aws::Vector<Schedule>&& value) { SetSchedules(std::move(value)); return *this;}

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline PolicyDetails& AddSchedules(const Schedule& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(value); return *this; }

    /**
     * <p>The schedules of policy-defined actions for snapshot and AMI lifecycle
     * policies. A policy can have up to four schedules—one mandatory schedule and up
     * to three optional schedules.</p> <p>This parameter is required for snapshot and
     * AMI policies only. If you are creating an event-based policy, omit this
     * parameter.</p>
     */
    inline PolicyDetails& AddSchedules(Schedule&& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of optional parameters for snapshot and AMI lifecycle policies. </p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>A set of optional parameters for snapshot and AMI lifecycle policies. </p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A set of optional parameters for snapshot and AMI lifecycle policies. </p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A set of optional parameters for snapshot and AMI lifecycle policies. </p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A set of optional parameters for snapshot and AMI lifecycle policies. </p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>A set of optional parameters for snapshot and AMI lifecycle policies. </p>
     * <p>This parameter is required for snapshot and AMI policies only. If you are
     * creating an event-based policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>The event that triggers the event-based policy. </p> <p>This parameter is
     * required for event-based policies only. If you are creating a snapshot or AMI
     * policy, omit this parameter.</p>
     */
    inline const EventSource& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The event that triggers the event-based policy. </p> <p>This parameter is
     * required for event-based policies only. If you are creating a snapshot or AMI
     * policy, omit this parameter.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The event that triggers the event-based policy. </p> <p>This parameter is
     * required for event-based policies only. If you are creating a snapshot or AMI
     * policy, omit this parameter.</p>
     */
    inline void SetEventSource(const EventSource& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The event that triggers the event-based policy. </p> <p>This parameter is
     * required for event-based policies only. If you are creating a snapshot or AMI
     * policy, omit this parameter.</p>
     */
    inline void SetEventSource(EventSource&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The event that triggers the event-based policy. </p> <p>This parameter is
     * required for event-based policies only. If you are creating a snapshot or AMI
     * policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithEventSource(const EventSource& value) { SetEventSource(value); return *this;}

    /**
     * <p>The event that triggers the event-based policy. </p> <p>This parameter is
     * required for event-based policies only. If you are creating a snapshot or AMI
     * policy, omit this parameter.</p>
     */
    inline PolicyDetails& WithEventSource(EventSource&& value) { SetEventSource(std::move(value)); return *this;}


    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline PolicyDetails& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline PolicyDetails& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline PolicyDetails& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions to be performed when the event-based policy is triggered. You can
     * specify only one action per policy.</p> <p>This parameter is required for
     * event-based policies only. If you are creating a snapshot or AMI policy, omit
     * this parameter.</p>
     */
    inline PolicyDetails& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    PolicyTypeValues m_policyType;
    bool m_policyTypeHasBeenSet;

    Aws::Vector<ResourceTypeValues> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;

    Aws::Vector<ResourceLocationValues> m_resourceLocations;
    bool m_resourceLocationsHasBeenSet;

    Aws::Vector<Tag> m_targetTags;
    bool m_targetTagsHasBeenSet;

    Aws::Vector<Schedule> m_schedules;
    bool m_schedulesHasBeenSet;

    Parameters m_parameters;
    bool m_parametersHasBeenSet;

    EventSource m_eventSource;
    bool m_eventSourceHasBeenSet;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
