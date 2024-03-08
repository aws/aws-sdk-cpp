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
    AWS_DLM_API PolicyDetails();
    AWS_DLM_API PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <b>[Custom policies only]</b> The valid target resource types and actions a
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
     * <p> <b>[Custom policies only]</b> The valid target resource types and actions a
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
     * <p> <b>[Custom policies only]</b> The valid target resource types and actions a
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
     * <p> <b>[Custom policies only]</b> The valid target resource types and actions a
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
     * <p> <b>[Custom policies only]</b> The valid target resource types and actions a
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
     * <p> <b>[Custom policies only]</b> The valid target resource types and actions a
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
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& WithResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& WithResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& AddResourceTypes(const ResourceTypeValues& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p> <b>[Custom snapshot policies only]</b> The target resource type for snapshot
     * and AMI lifecycle policies. Use <code>VOLUME </code>to create snapshots of
     * individual volumes or use <code>INSTANCE</code> to create multi-volume snapshots
     * from the volumes for an instance.</p>
     */
    inline PolicyDetails& AddResourceTypes(ResourceTypeValues&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline const Aws::Vector<ResourceLocationValues>& GetResourceLocations() const{ return m_resourceLocations; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline bool ResourceLocationsHasBeenSet() const { return m_resourceLocationsHasBeenSet; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline void SetResourceLocations(const Aws::Vector<ResourceLocationValues>& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = value; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline void SetResourceLocations(Aws::Vector<ResourceLocationValues>&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations = std::move(value); }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& WithResourceLocations(const Aws::Vector<ResourceLocationValues>& value) { SetResourceLocations(value); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& WithResourceLocations(Aws::Vector<ResourceLocationValues>&& value) { SetResourceLocations(std::move(value)); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& AddResourceLocations(const ResourceLocationValues& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(value); return *this; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The location of the resources
     * to backup. If the source resources are located in an Amazon Web Services Region,
     * specify <code>CLOUD</code>. If the source resources are located on an Outpost in
     * your account, specify <code>OUTPOST</code>.</p> <p>If you specify
     * <code>OUTPOST</code>, Amazon Data Lifecycle Manager backs up all resources of
     * the specified type with matching target tags across all of the Outposts in your
     * account.</p>
     */
    inline PolicyDetails& AddResourceLocations(ResourceLocationValues&& value) { m_resourceLocationsHasBeenSet = true; m_resourceLocations.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetTags() const{ return m_targetTags; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline void SetTargetTags(const Aws::Vector<Tag>& value) { m_targetTagsHasBeenSet = true; m_targetTags = value; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline void SetTargetTags(Aws::Vector<Tag>&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::move(value); }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& WithTargetTags(const Aws::Vector<Tag>& value) { SetTargetTags(value); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& WithTargetTags(Aws::Vector<Tag>&& value) { SetTargetTags(std::move(value)); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& AddTargetTags(const Tag& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The single tag that
     * identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& AddTargetTags(Tag&& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const{ return m_schedules; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline void SetSchedules(const Aws::Vector<Schedule>& value) { m_schedulesHasBeenSet = true; m_schedules = value; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline void SetSchedules(Aws::Vector<Schedule>&& value) { m_schedulesHasBeenSet = true; m_schedules = std::move(value); }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline PolicyDetails& WithSchedules(const Aws::Vector<Schedule>& value) { SetSchedules(value); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline PolicyDetails& WithSchedules(Aws::Vector<Schedule>&& value) { SetSchedules(std::move(value)); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline PolicyDetails& AddSchedules(const Schedule& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(value); return *this; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> The schedules of
     * policy-defined actions for snapshot and AMI lifecycle policies. A policy can
     * have up to four schedules—one mandatory schedule and up to three optional
     * schedules.</p>
     */
    inline PolicyDetails& AddSchedules(Schedule&& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(std::move(value)); return *this; }


    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
     * policy that was created or previously modified using the Amazon Data Lifecycle
     * Manager console, then you must include this parameter and specify either the
     * default values or the new values that you require. You can't omit this parameter
     * or set its values to null.</p> 
     */
    inline PolicyDetails& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p> <b>[Custom snapshot and AMI policies only]</b> A set of optional parameters
     * for snapshot and AMI lifecycle policies. </p>  <p>If you are modifying a
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


    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline const PolicyLanguageValues& GetPolicyLanguage() const{ return m_policyLanguage; }

    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline bool PolicyLanguageHasBeenSet() const { return m_policyLanguageHasBeenSet; }

    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline void SetPolicyLanguage(const PolicyLanguageValues& value) { m_policyLanguageHasBeenSet = true; m_policyLanguage = value; }

    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline void SetPolicyLanguage(PolicyLanguageValues&& value) { m_policyLanguageHasBeenSet = true; m_policyLanguage = std::move(value); }

    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline PolicyDetails& WithPolicyLanguage(const PolicyLanguageValues& value) { SetPolicyLanguage(value); return *this;}

    /**
     * <p>The type of policy to create. Specify one of the following:</p> <ul> <li> <p>
     * <code>SIMPLIFIED</code> To create a default policy.</p> </li> <li> <p>
     * <code>STANDARD</code> To create a custom policy.</p> </li> </ul>
     */
    inline PolicyDetails& WithPolicyLanguage(PolicyLanguageValues&& value) { SetPolicyLanguage(std::move(value)); return *this;}


    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline const ResourceTypeValues& GetResourceType() const{ return m_resourceType; }

    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline void SetResourceType(const ResourceTypeValues& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline void SetResourceType(ResourceTypeValues&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline PolicyDetails& WithResourceType(const ResourceTypeValues& value) { SetResourceType(value); return *this;}

    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline PolicyDetails& WithResourceType(ResourceTypeValues&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline int GetCreateInterval() const{ return m_createInterval; }

    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline bool CreateIntervalHasBeenSet() const { return m_createIntervalHasBeenSet; }

    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline void SetCreateInterval(int value) { m_createIntervalHasBeenSet = true; m_createInterval = value; }

    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline PolicyDetails& WithCreateInterval(int value) { SetCreateInterval(value); return *this;}


    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline int GetRetainInterval() const{ return m_retainInterval; }

    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline bool RetainIntervalHasBeenSet() const { return m_retainIntervalHasBeenSet; }

    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline void SetRetainInterval(int value) { m_retainIntervalHasBeenSet = true; m_retainInterval = value; }

    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline PolicyDetails& WithRetainInterval(int value) { SetRetainInterval(value); return *this;}


    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline PolicyDetails& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline const Aws::Vector<CrossRegionCopyTarget>& GetCrossRegionCopyTargets() const{ return m_crossRegionCopyTargets; }

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline bool CrossRegionCopyTargetsHasBeenSet() const { return m_crossRegionCopyTargetsHasBeenSet; }

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline void SetCrossRegionCopyTargets(const Aws::Vector<CrossRegionCopyTarget>& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = value; }

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline void SetCrossRegionCopyTargets(Aws::Vector<CrossRegionCopyTarget>&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = std::move(value); }

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline PolicyDetails& WithCrossRegionCopyTargets(const Aws::Vector<CrossRegionCopyTarget>& value) { SetCrossRegionCopyTargets(value); return *this;}

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline PolicyDetails& WithCrossRegionCopyTargets(Aws::Vector<CrossRegionCopyTarget>&& value) { SetCrossRegionCopyTargets(std::move(value)); return *this;}

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline PolicyDetails& AddCrossRegionCopyTargets(const CrossRegionCopyTarget& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.push_back(value); return *this; }

    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline PolicyDetails& AddCrossRegionCopyTargets(CrossRegionCopyTarget&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.push_back(std::move(value)); return *this; }


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
    inline bool GetExtendDeletion() const{ return m_extendDeletion; }

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
    inline bool ExtendDeletionHasBeenSet() const { return m_extendDeletionHasBeenSet; }

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
    inline void SetExtendDeletion(bool value) { m_extendDeletionHasBeenSet = true; m_extendDeletion = value; }

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
    inline PolicyDetails& WithExtendDeletion(bool value) { SetExtendDeletion(value); return *this;}


    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline const Exclusions& GetExclusions() const{ return m_exclusions; }

    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }

    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline void SetExclusions(const Exclusions& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }

    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline void SetExclusions(Exclusions&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }

    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline PolicyDetails& WithExclusions(const Exclusions& value) { SetExclusions(value); return *this;}

    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline PolicyDetails& WithExclusions(Exclusions&& value) { SetExclusions(std::move(value)); return *this;}

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

    PolicyLanguageValues m_policyLanguage;
    bool m_policyLanguageHasBeenSet = false;

    ResourceTypeValues m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_createInterval;
    bool m_createIntervalHasBeenSet = false;

    int m_retainInterval;
    bool m_retainIntervalHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<CrossRegionCopyTarget> m_crossRegionCopyTargets;
    bool m_crossRegionCopyTargetsHasBeenSet = false;

    bool m_extendDeletion;
    bool m_extendDeletionHasBeenSet = false;

    Exclusions m_exclusions;
    bool m_exclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
