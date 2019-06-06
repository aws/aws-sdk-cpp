/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
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
   * <p>An EC2 instance that is running the Amazon ECS agent and has been registered
   * with a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerInstance">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ContainerInstance
  {
  public:
    ContainerInstance();
    ContainerInstance(Aws::Utils::Json::JsonView jsonValue);
    ContainerInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline ContainerInstance& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline ContainerInstance& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance. The ARN contains
     * the <code>arn:aws:ecs</code> namespace, followed by the Region of the container
     * instance, the AWS account ID of the container instance owner, the
     * <code>container-instance</code> namespace, and then the container instance ID.
     * For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline ContainerInstance& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}


    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }

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
    inline ContainerInstance& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance ID of the container instance.</p>
     */
    inline ContainerInstance& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}


    /**
     * <p>The version counter for the container instance. Every time a container
     * instance experiences a change that triggers a CloudWatch event, the version
     * counter is incremented. If you are replicating your Amazon ECS container
     * instance state with CloudWatch Events, you can compare the version of a
     * container instance reported by the Amazon ECS APIs with the version reported in
     * CloudWatch Events for the container instance (inside the <code>detail</code>
     * object) to verify that the version in your event stream is current.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version counter for the container instance. Every time a container
     * instance experiences a change that triggers a CloudWatch event, the version
     * counter is incremented. If you are replicating your Amazon ECS container
     * instance state with CloudWatch Events, you can compare the version of a
     * container instance reported by the Amazon ECS APIs with the version reported in
     * CloudWatch Events for the container instance (inside the <code>detail</code>
     * object) to verify that the version in your event stream is current.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version counter for the container instance. Every time a container
     * instance experiences a change that triggers a CloudWatch event, the version
     * counter is incremented. If you are replicating your Amazon ECS container
     * instance state with CloudWatch Events, you can compare the version of a
     * container instance reported by the Amazon ECS APIs with the version reported in
     * CloudWatch Events for the container instance (inside the <code>detail</code>
     * object) to verify that the version in your event stream is current.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version counter for the container instance. Every time a container
     * instance experiences a change that triggers a CloudWatch event, the version
     * counter is incremented. If you are replicating your Amazon ECS container
     * instance state with CloudWatch Events, you can compare the version of a
     * container instance reported by the Amazon ECS APIs with the version reported in
     * CloudWatch Events for the container instance (inside the <code>detail</code>
     * object) to verify that the version in your event stream is current.</p>
     */
    inline ContainerInstance& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline const VersionInfo& GetVersionInfo() const{ return m_versionInfo; }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline bool VersionInfoHasBeenSet() const { return m_versionInfoHasBeenSet; }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline void SetVersionInfo(const VersionInfo& value) { m_versionInfoHasBeenSet = true; m_versionInfo = value; }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline void SetVersionInfo(VersionInfo&& value) { m_versionInfoHasBeenSet = true; m_versionInfo = std::move(value); }

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline ContainerInstance& WithVersionInfo(const VersionInfo& value) { SetVersionInfo(value); return *this;}

    /**
     * <p>The version information for the Amazon ECS container agent and Docker daemon
     * running on the container instance.</p>
     */
    inline ContainerInstance& WithVersionInfo(VersionInfo&& value) { SetVersionInfo(std::move(value)); return *this;}


    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline const Aws::Vector<Resource>& GetRemainingResources() const{ return m_remainingResources; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline bool RemainingResourcesHasBeenSet() const { return m_remainingResourcesHasBeenSet; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline void SetRemainingResources(const Aws::Vector<Resource>& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources = value; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline void SetRemainingResources(Aws::Vector<Resource>&& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources = std::move(value); }

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& WithRemainingResources(const Aws::Vector<Resource>& value) { SetRemainingResources(value); return *this;}

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& WithRemainingResources(Aws::Vector<Resource>&& value) { SetRemainingResources(std::move(value)); return *this;}

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& AddRemainingResources(const Resource& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources.push_back(value); return *this; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the remaining CPU
     * and memory that has not already been allocated to tasks and is therefore
     * available for new tasks. For port resource types, this parameter describes the
     * ports that were reserved by the Amazon ECS container agent (at instance
     * registration time) and any task containers that have reserved port mappings on
     * the host (with the <code>host</code> or <code>bridge</code> network mode). Any
     * port that is not specified here is available for new tasks.</p>
     */
    inline ContainerInstance& AddRemainingResources(Resource&& value) { m_remainingResourcesHasBeenSet = true; m_remainingResources.push_back(std::move(value)); return *this; }


    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline const Aws::Vector<Resource>& GetRegisteredResources() const{ return m_registeredResources; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline bool RegisteredResourcesHasBeenSet() const { return m_registeredResourcesHasBeenSet; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline void SetRegisteredResources(const Aws::Vector<Resource>& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources = value; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline void SetRegisteredResources(Aws::Vector<Resource>&& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources = std::move(value); }

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline ContainerInstance& WithRegisteredResources(const Aws::Vector<Resource>& value) { SetRegisteredResources(value); return *this;}

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline ContainerInstance& WithRegisteredResources(Aws::Vector<Resource>&& value) { SetRegisteredResources(std::move(value)); return *this;}

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline ContainerInstance& AddRegisteredResources(const Resource& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources.push_back(value); return *this; }

    /**
     * <p>For CPU and memory resource types, this parameter describes the amount of
     * each resource that was available on the container instance when the container
     * agent registered it with Amazon ECS. This value represents the total amount of
     * CPU and memory that can be allocated on this container instance to tasks. For
     * port resource types, this parameter describes the ports that were reserved by
     * the Amazon ECS container agent when it registered the container instance with
     * Amazon ECS.</p>
     */
    inline ContainerInstance& AddRegisteredResources(Resource&& value) { m_registeredResourcesHasBeenSet = true; m_registeredResources.push_back(std::move(value)); return *this; }


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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerInstance& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerInstance& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

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
     * indicates that new tasks are not placed on the container instance and any
     * service tasks running on the container instance are removed if possible. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-instance-draining.html">Container
     * Instance Draining</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerInstance& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline ContainerInstance& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline ContainerInstance& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the container instance reached its current status.</p>
     */
    inline ContainerInstance& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>This parameter returns <code>true</code> if the agent is connected to Amazon
     * ECS. Registered instances with an agent that may be unhealthy or stopped return
     * <code>false</code>. Only instances connected to an agent can accept placement
     * requests.</p>
     */
    inline bool GetAgentConnected() const{ return m_agentConnected; }

    /**
     * <p>This parameter returns <code>true</code> if the agent is connected to Amazon
     * ECS. Registered instances with an agent that may be unhealthy or stopped return
     * <code>false</code>. Only instances connected to an agent can accept placement
     * requests.</p>
     */
    inline bool AgentConnectedHasBeenSet() const { return m_agentConnectedHasBeenSet; }

    /**
     * <p>This parameter returns <code>true</code> if the agent is connected to Amazon
     * ECS. Registered instances with an agent that may be unhealthy or stopped return
     * <code>false</code>. Only instances connected to an agent can accept placement
     * requests.</p>
     */
    inline void SetAgentConnected(bool value) { m_agentConnectedHasBeenSet = true; m_agentConnected = value; }

    /**
     * <p>This parameter returns <code>true</code> if the agent is connected to Amazon
     * ECS. Registered instances with an agent that may be unhealthy or stopped return
     * <code>false</code>. Only instances connected to an agent can accept placement
     * requests.</p>
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
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }

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
    inline bool PendingTasksCountHasBeenSet() const { return m_pendingTasksCountHasBeenSet; }

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
    inline bool AgentUpdateStatusHasBeenSet() const { return m_agentUpdateStatusHasBeenSet; }

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline void SetAgentUpdateStatus(const AgentUpdateStatus& value) { m_agentUpdateStatusHasBeenSet = true; m_agentUpdateStatus = value; }

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline void SetAgentUpdateStatus(AgentUpdateStatus&& value) { m_agentUpdateStatusHasBeenSet = true; m_agentUpdateStatus = std::move(value); }

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline ContainerInstance& WithAgentUpdateStatus(const AgentUpdateStatus& value) { SetAgentUpdateStatus(value); return *this;}

    /**
     * <p>The status of the most recent agent update. If an update has never been
     * requested, this value is <code>NULL</code>.</p>
     */
    inline ContainerInstance& WithAgentUpdateStatus(AgentUpdateStatus&& value) { SetAgentUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline ContainerInstance& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline ContainerInstance& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline ContainerInstance& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes set for the container instance, either by the Amazon ECS
     * container agent at instance registration or manually with the
     * <a>PutAttributes</a> operation.</p>
     */
    inline ContainerInstance& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Unix timestamp for when the container instance was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const{ return m_registeredAt; }

    /**
     * <p>The Unix timestamp for when the container instance was registered.</p>
     */
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the container instance was registered.</p>
     */
    inline void SetRegisteredAt(const Aws::Utils::DateTime& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }

    /**
     * <p>The Unix timestamp for when the container instance was registered.</p>
     */
    inline void SetRegisteredAt(Aws::Utils::DateTime&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the container instance was registered.</p>
     */
    inline ContainerInstance& WithRegisteredAt(const Aws::Utils::DateTime& value) { SetRegisteredAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the container instance was registered.</p>
     */
    inline ContainerInstance& WithRegisteredAt(Aws::Utils::DateTime&& value) { SetRegisteredAt(std::move(value)); return *this;}


    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline void SetAttachments(const Aws::Vector<Attachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline void SetAttachments(Aws::Vector<Attachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline ContainerInstance& WithAttachments(const Aws::Vector<Attachment>& value) { SetAttachments(value); return *this;}

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline ContainerInstance& WithAttachments(Aws::Vector<Attachment>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline ContainerInstance& AddAttachments(const Attachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>The resources attached to a container instance, such as elastic network
     * interfaces.</p>
     */
    inline ContainerInstance& AddAttachments(Attachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline ContainerInstance& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline ContainerInstance& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline ContainerInstance& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the container instance to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline ContainerInstance& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;

    VersionInfo m_versionInfo;
    bool m_versionInfoHasBeenSet;

    Aws::Vector<Resource> m_remainingResources;
    bool m_remainingResourcesHasBeenSet;

    Aws::Vector<Resource> m_registeredResources;
    bool m_registeredResourcesHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

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

    Aws::Utils::DateTime m_registeredAt;
    bool m_registeredAtHasBeenSet;

    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
