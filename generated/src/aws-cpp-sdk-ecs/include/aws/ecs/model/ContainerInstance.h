/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/VersionInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/AgentUpdateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ContainerInstanceHealthStatus.h>
#include <aws/ecs/model/Resource.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/Attachment.h>
#include <aws/ecs/model/Tag.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An Amazon EC2 or External instance that's running the Amazon ECS agent and
   * has been registered with a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerInstance">AWS
   * API Reference</a></p>
   */
  class ContainerInstance
  {
  public:
    AWS_ECS_API ContainerInstance() = default;
    AWS_ECS_API ContainerInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. For more
     * information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const { return m_containerInstanceArn; }
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }
    template<typename ContainerInstanceArnT = Aws::String>
    void SetContainerInstanceArn(ContainerInstanceArnT&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::forward<ContainerInstanceArnT>(value); }
    template<typename ContainerInstanceArnT = Aws::String>
    ContainerInstance& WithContainerInstanceArn(ContainerInstanceArnT&& value) { SetContainerInstanceArn(std::forward<ContainerInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the container instance. For Amazon EC2 instances, this value is the
     * Amazon EC2 instance ID. For external instances, this value is the Amazon Web
     * Services Systems Manager managed instance ID.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    ContainerInstance& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider that's associated with the container instance.</p>
     */
    inline const Aws::String& GetCapacityProviderName() const { return m_capacityProviderName; }
    inline bool CapacityProviderNameHasBeenSet() const { return m_capacityProviderNameHasBeenSet; }
    template<typename CapacityProviderNameT = Aws::String>
    void SetCapacityProviderName(CapacityProviderNameT&& value) { m_capacityProviderNameHasBeenSet = true; m_capacityProviderName = std::forward<CapacityProviderNameT>(value); }
    template<typename CapacityProviderNameT = Aws::String>
    ContainerInstance& WithCapacityProviderName(CapacityProviderNameT&& value) { SetCapacityProviderName(std::forward<CapacityProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version counter for the container instance. Every time a container
     * instance experiences a change that triggers a CloudWatch event, the version
     * counter is incremented. If you're replicating your Amazon ECS container instance
     * state with CloudWatch Events, you can compare the version of a container
     * instance reported by the Amazon ECS APIs with the version reported in CloudWatch
     * Events for the container instance (inside the <code>detail</code> object) to
     * verify that the version in your event stream is current.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ContainerInstance& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline const VersionInfo& GetVersionInfo() const { return m_versionInfo; }
    inline bool VersionInfoHasBeenSet() const { return m_versionInfoHasBeenSet; }
    template<typename VersionInfoT = VersionInfo>
    void SetVersionInfo(VersionInfoT&& value) { m_versionInfoHasBeenSet = true; m_versionInfo = std::forward<VersionInfoT>(value); }
    template<typename VersionInfoT = VersionInfo>
    ContainerInstance& WithVersionInfo(VersionInfoT&& value) { SetVersionInfo(std::forward<VersionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that wasn't already allocated to tasks and is therefore available for
     * new tasks. For port resource types, this parameter describes the ports that were
     * reserved by the Amazon ECS container agent (at instance registration time) and
     * any task containers that have reserved port mappings on the host (with the
     * <code>host</code> or <code>bridge</code> network mode). Any port that's not
     * specified here is available for new tasks.</p>
     */
    inline const Aws::Vector<Resource>& GetRemainingResources() const { return m_remainingResources; }
    inline bool RemainingResourcesHasBeenSet() const { return m_remainingResourcesHasBeenSet; }
    template<typename RemainingResourcesT = Aws::Vector<Resource>>
    void SetRemainingResources(RemainingResourcesT&& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources = std::forward<RemainingResourcesT>(value); }
    template<typename RemainingResourcesT = Aws::Vector<Resource>>
    ContainerInstance& WithRemainingResources(RemainingResourcesT&& value) { SetRemainingResources(std::forward<RemainingResourcesT>(value)); return *this;}
    template<typename RemainingResourcesT = Resource>
    ContainerInstance& AddRemainingResources(RemainingResourcesT&& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources.emplace_back(std::forward<RemainingResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline const Aws::Vector<Resource>& GetRegisteredResources() const { return m_registeredResources; }
    inline bool RegisteredResourcesHasBeenSet() const { return m_registeredResourcesHasBeenSet; }
    template<typename RegisteredResourcesT = Aws::Vector<Resource>>
    void SetRegisteredResources(RegisteredResourcesT&& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources = std::forward<RegisteredResourcesT>(value); }
    template<typename RegisteredResourcesT = Aws::Vector<Resource>>
    ContainerInstance& WithRegisteredResources(RegisteredResourcesT&& value) { SetRegisteredResources(std::forward<RegisteredResourcesT>(value)); return *this;}
    template<typename RegisteredResourcesT = Resource>
    ContainerInstance& AddRegisteredResources(RegisteredResourcesT&& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources.emplace_back(std::forward<RegisteredResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the container instance. The valid values are
     * <code>REGISTERING</code>, <code>REGISTRATION_FAILED</code>, <code>ACTIVE</code>,
     * <code>INACTIVE</code>, <code>DEREGISTERING</code>, or <code>DRAINING</code>.</p>
     * <p>If your account has opted in to the <code>awsvpcTrunking</code> account
     * setting, then any newly registered container instance will transition to a
     * <code>REGISTERING</code> status while the trunk elastic network interface is
     * provisioned for the instance. If the registration fails, the instance will
     * transition to a <code>REGISTRATION_FAILED</code> status. You can describe the
     * container instance and see the reason for failure in the
     * <code>statusReason</code> parameter. Once the container instance is terminated,
     * the instance transitions to a <code>DEREGISTERING</code> status while the trunk
     * elastic network interface is deprovisioned. The instance then transitions to an
     * <code>INACTIVE</code> status.</p> <p>The <code>ACTIVE</code> status indicates
     * that the container instance can accept tasks. The <code>DRAINING</code>
     * indicates that new tasks aren't placed on the container instance and any service
     * tasks running on the container instance are removed if possible. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * instance draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ContainerInstance& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ContainerInstance& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter returns <code>true</code> if the agent is connected to Amazon
     * ECS. An instance with an agent that may be unhealthy or stopped return
     * <code>false</code>. Only instances connected to an agent can accept task
     * placement requests.</p>
     */
    inline bool GetAgentConnected() const { return m_agentConnected; }
    inline bool AgentConnectedHasBeenSet() const { return m_agentConnectedHasBeenSet; }
    inline void SetAgentConnected(bool value) { m_agentConnectedHasBeenSet = true; m_agentConnected = value; }
    inline ContainerInstance& WithAgentConnected(bool value) { SetAgentConnected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks on the container instance that have a desired status
     * (<code>desiredStatus</code>) of <code>RUNNING</code>.</p>
     */
    inline int GetRunningTasksCount() const { return m_runningTasksCount; }
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }
    inline ContainerInstance& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>PENDING</code> status.</p>
     */
    inline int GetPendingTasksCount() const { return m_pendingTasksCount; }
    inline bool PendingTasksCountHasBeenSet() const { return m_pendingTasksCountHasBeenSet; }
    inline void SetPendingTasksCount(int value) { m_pendingTasksCountHasBeenSet = true; m_pendingTasksCount = value; }
    inline ContainerInstance& WithPendingTasksCount(int value) { SetPendingTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the most recent agent update. If an update wasn't ever
     * requested, this value is <code>NULL</code>.</p>
     */
    inline AgentUpdateStatus GetAgentUpdateStatus() const { return m_agentUpdateStatus; }
    inline bool AgentUpdateStatusHasBeenSet() const { return m_agentUpdateStatusHasBeenSet; }
    inline void SetAgentUpdateStatus(AgentUpdateStatus value) { m_agentUpdateStatusHasBeenSet = true; m_agentUpdateStatus = value; }
    inline ContainerInstance& WithAgentUpdateStatus(AgentUpdateStatus value) { SetAgentUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAttributes.html">PutAttributes</a>
     * operation.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    ContainerInstance& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    ContainerInstance& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container instance was
     * registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    void SetRegisteredAt(RegisteredAtT&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::forward<RegisteredAtT>(value); }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    ContainerInstance& WithRegisteredAt(RegisteredAtT&& value) { SetRegisteredAt(std::forward<RegisteredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources attached to a container instance, such as an elastic network
     * interface.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    ContainerInstance& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = Attachment>
    ContainerInstance& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ContainerInstance& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ContainerInstance& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object representing the health status of the container instance.</p>
     */
    inline const ContainerInstanceHealthStatus& GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    template<typename HealthStatusT = ContainerInstanceHealthStatus>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = ContainerInstanceHealthStatus>
    ContainerInstance& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::String m_capacityProviderName;
    bool m_capacityProviderNameHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    VersionInfo m_versionInfo;
    bool m_versionInfoHasBeenSet = false;

    Aws::Vector<Resource> m_remainingResources;
    bool m_remainingResourcesHasBeenSet = false;

    Aws::Vector<Resource> m_registeredResources;
    bool m_registeredResourcesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    bool m_agentConnected{false};
    bool m_agentConnectedHasBeenSet = false;

    int m_runningTasksCount{0};
    bool m_runningTasksCountHasBeenSet = false;

    int m_pendingTasksCount{0};
    bool m_pendingTasksCountHasBeenSet = false;

    AgentUpdateStatus m_agentUpdateStatus{AgentUpdateStatus::NOT_SET};
    bool m_agentUpdateStatusHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt{};
    bool m_registeredAtHasBeenSet = false;

    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ContainerInstanceHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
