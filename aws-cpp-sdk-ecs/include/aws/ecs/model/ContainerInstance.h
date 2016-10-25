/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/VersionInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/AgentUpdateStatus.h>
#include <aws/ecs/model/Resource.h>
#include <aws/ecs/model/Attribute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>An EC2 instance that is running the Amazon ECS agent and has been registered
   * with a cluster.</p>
   */
  class AWS_ECS_API ContainerInstance
  {
  public:
    ContainerInstance();
    ContainerInstance(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerInstance& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline ContainerInstance& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline ContainerInstance& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_ID</i>
     * </code>.</p>
     */
    inline ContainerInstance& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline ContainerInstance& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline ContainerInstance& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline ContainerInstance& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline const VersionInfo& GetVersionInfo() const{ return m_versionInfo; }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline void SetVersionInfo(const VersionInfo& value) { m_versionInfoHasBeenSet = true; m_versionInfo = value; }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline void SetVersionInfo(VersionInfo&& value) { m_versionInfoHasBeenSet = true; m_versionInfo = value; }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline ContainerInstance& WithVersionInfo(const VersionInfo& value) { SetVersionInfo(value); return *this;}

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline ContainerInstance& WithVersionInfo(VersionInfo&& value) { SetVersionInfo(value); return *this;}

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline const Aws::Vector<Resource>& GetRemainingResources() const{ return m_remainingResources; }

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline void SetRemainingResources(const Aws::Vector<Resource>& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources = value; }

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline void SetRemainingResources(Aws::Vector<Resource>&& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources = value; }

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& WithRemainingResources(const Aws::Vector<Resource>& value) { SetRemainingResources(value); return *this;}

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& WithRemainingResources(Aws::Vector<Resource>&& value) { SetRemainingResources(value); return *this;}

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& AddRemainingResources(const Resource& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources.push_back(value); return *this; }

    /**
     * <p>For most resource types, this parameter describes the remaining resources of
     * the container instance that are available for new tasks. For port resource
     * types, this parameter describes the ports that are reserved by the Amazon ECS
     * container agent and any containers that have reserved port mappings; any port
     * that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& AddRemainingResources(Resource&& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources.push_back(value); return *this; }

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline const Aws::Vector<Resource>& GetRegisteredResources() const{ return m_registeredResources; }

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline void SetRegisteredResources(const Aws::Vector<Resource>& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources = value; }

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline void SetRegisteredResources(Aws::Vector<Resource>&& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources = value; }

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline ContainerInstance& WithRegisteredResources(const Aws::Vector<Resource>& value) { SetRegisteredResources(value); return *this;}

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline ContainerInstance& WithRegisteredResources(Aws::Vector<Resource>&& value) { SetRegisteredResources(value); return *this;}

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline ContainerInstance& AddRegisteredResources(const Resource& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources.push_back(value); return *this; }

    /**
     * <p>For most resource types, this parameter describes the registered resources on
     * the container instance that are in use by current tasks. For port resource
     * types, this parameter describes the ports that were reserved by the Amazon ECS
     * container agent when it registered the container instance with Amazon ECS.</p>
     */
    inline ContainerInstance& AddRegisteredResources(Resource&& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources.push_back(value); return *this; }

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline ContainerInstance& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline ContainerInstance& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the container instance. The valid values are
     * <code>ACTIVE</code> or <code>INACTIVE</code>. <code>ACTIVE</code> indicates that
     * the container instance can accept tasks.</p>
     */
    inline ContainerInstance& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>This parameter returns <code>true</code> if the agent is actually connected
     * to Amazon ECS. Registered instances with an agent that may be unhealthy or
     * stopped return <code>false</code>, and instances without a connected agent
     * cannot accept placement requests.</p>
     */
    inline bool GetAgentConnected() const{ return m_agentConnected; }

    /**
     * <p>This parameter returns <code>true</code> if the agent is actually connected
     * to Amazon ECS. Registered instances with an agent that may be unhealthy or
     * stopped return <code>false</code>, and instances without a connected agent
     * cannot accept placement requests.</p>
     */
    inline void SetAgentConnected(bool value) { m_agentConnectedHasBeenSet = true; m_agentConnected = value; }

    /**
     * <p>This parameter returns <code>true</code> if the agent is actually connected
     * to Amazon ECS. Registered instances with an agent that may be unhealthy or
     * stopped return <code>false</code>, and instances without a connected agent
     * cannot accept placement requests.</p>
     */
    inline ContainerInstance& WithAgentConnected(bool value) { SetAgentConnected(value); return *this;}

    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>RUNNING</code> status.</p>
     */
    inline int GetRunningTasksCount() const{ return m_runningTasksCount; }

    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>RUNNING</code> status.</p>
     */
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }

    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>RUNNING</code> status.</p>
     */
    inline ContainerInstance& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}

    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>PENDING</code> status.</p>
     */
    inline int GetPendingTasksCount() const{ return m_pendingTasksCount; }

    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>PENDING</code> status.</p>
     */
    inline void SetPendingTasksCount(int value) { m_pendingTasksCountHasBeenSet = true; m_pendingTasksCount = value; }

    /**
     * <p>The number of tasks on the container instance that are in the
     * <code>PENDING</code> status.</p>
     */
    inline ContainerInstance& WithPendingTasksCount(int value) { SetPendingTasksCount(value); return *this;}

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline const AgentUpdateStatus& GetAgentUpdateStatus() const{ return m_agentUpdateStatus; }

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline void SetAgentUpdateStatus(const AgentUpdateStatus& value) { m_agentUpdateStatusHasBeenSet = true; m_agentUpdateStatus = value; }

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline void SetAgentUpdateStatus(AgentUpdateStatus&& value) { m_agentUpdateStatusHasBeenSet = true; m_agentUpdateStatus = value; }

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline ContainerInstance& WithAgentUpdateStatus(const AgentUpdateStatus& value) { SetAgentUpdateStatus(value); return *this;}

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline ContainerInstance& WithAgentUpdateStatus(AgentUpdateStatus&& value) { SetAgentUpdateStatus(value); return *this;}

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline ContainerInstance& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline ContainerInstance& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline ContainerInstance& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes set for the container instance by the Amazon ECS container
     * agent at instance registration.</p>
     */
    inline ContainerInstance& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

  private:
    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet;
    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet;
    VersionInfo m_versionInfo;
    bool m_versionInfoHasBeenSet;
    Aws::Vector<Resource> m_remainingResources;
    bool m_remainingResourcesHasBeenSet;
    Aws::Vector<Resource> m_registeredResources;
    bool m_registeredResourcesHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    bool m_agentConnected;
    bool m_agentConnectedHasBeenSet;
    int m_runningTasksCount;
    bool m_runningTasksCountHasBeenSet;
    int m_pendingTasksCount;
    bool m_pendingTasksCountHasBeenSet;
    AgentUpdateStatus m_agentUpdateStatus;
    bool m_agentUpdateStatusHasBeenSet;
    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
