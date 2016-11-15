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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/Tag.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateAutoScalingGroup.</p>
   */
  class AWS_AUTOSCALING_API CreateAutoScalingGroupRequest : public AutoScalingRequest
  {
  public:
    CreateAutoScalingGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the group. This name must be unique within the scope of your AWS
     * account.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration. Alternatively, specify an EC2 instance
     * instead of a launch configuration.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance used to create a launch configuration for the group.
     * Alternatively, specify a launch configuration instead of an EC2 instance.</p>
     * <p>When you specify an ID of an instance, Auto Scaling creates a new launch
     * configuration and associates it with the group. This launch configuration
     * derives its attributes from the specified instance, with the exception of the
     * block device mapping.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Create
     * an Auto Scaling Group Using an EC2 Instance</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The minimum size of the group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline CreateAutoScalingGroupRequest& WithMinSize(int value) { SetMinSize(value); return *this;}

    /**
     * <p>The maximum size of the group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline CreateAutoScalingGroupRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}

    /**
     * <p>The number of EC2 instances that should be running in the group. This number
     * must be greater than or equal to the minimum size of the group and less than or
     * equal to the maximum size of the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The number of EC2 instances that should be running in the group. This number
     * must be greater than or equal to the minimum size of the group and less than or
     * equal to the maximum size of the group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The number of EC2 instances that should be running in the group. This number
     * must be greater than or equal to the minimum size of the group and less than or
     * equal to the maximum size of the group.</p>
     */
    inline CreateAutoScalingGroupRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default is 300.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline int GetDefaultCooldown() const{ return m_defaultCooldown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default is 300.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetDefaultCooldown(int value) { m_defaultCooldownHasBeenSet = true; m_defaultCooldown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before
     * another scaling activity can start. The default is 300.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/Cooldown.html">Auto
     * Scaling Cooldowns</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithDefaultCooldown(int value) { SetDefaultCooldown(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline CreateAutoScalingGroupRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline CreateAutoScalingGroupRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline CreateAutoScalingGroupRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones for the group. This parameter is optional if
     * you specify one or more subnets.</p>
     */
    inline CreateAutoScalingGroupRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline void SetLoadBalancerNames(Aws::Vector<Aws::String>&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithLoadBalancerNames(Aws::Vector<Aws::String>&& value) { SetLoadBalancerNames(value); return *this;}

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLoadBalancerNames(Aws::String&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>One or more Classic load balancers. To specify an Application load balancer,
     * use <code>TargetGroupARNs</code> instead.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/create-asg-from-instance.html">Using
     * a Load Balancer With an Auto Scaling Group</a> in the <i>Auto Scaling User
     * Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupARNs() const{ return m_targetGroupARNs; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline void SetTargetGroupARNs(const Aws::Vector<Aws::String>& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline void SetTargetGroupARNs(Aws::Vector<Aws::String>&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTargetGroupARNs(const Aws::Vector<Aws::String>& value) { SetTargetGroupARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTargetGroupARNs(Aws::Vector<Aws::String>&& value) { SetTargetGroupARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTargetGroupARNs(const Aws::String& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTargetGroupARNs(Aws::String&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTargetGroupARNs(const char* value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p> <p>By default, health checks use
     * Amazon EC2 instance status checks to determine the health of an instance. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The amount of time, in seconds, that Auto Scaling waits before checking the
     * health status of an EC2 instance that has come into service. During this time,
     * any health check failures for the instance are ignored. The default is 0.</p>
     * <p>This parameter is required if you are adding an <code>ELB</code> health
     * check.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }

    /**
     * <p>The amount of time, in seconds, that Auto Scaling waits before checking the
     * health status of an EC2 instance that has come into service. During this time,
     * any health check failures for the instance are ignored. The default is 0.</p>
     * <p>This parameter is required if you are adding an <code>ELB</code> health
     * check.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /**
     * <p>The amount of time, in seconds, that Auto Scaling waits before checking the
     * health status of an EC2 instance that has come into service. During this time,
     * any health check failures for the instance are ignored. The default is 0.</p>
     * <p>This parameter is required if you are adding an <code>ELB</code> health
     * check.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetVPCZoneIdentifier(Aws::String&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithVPCZoneIdentifier(Aws::String&& value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>A comma-separated list of subnet identifiers for your virtual private cloud
     * (VPC).</p> <p>If you specify subnets and Availability Zones with this call,
     * ensure that the subnets' Availability Zones match the Availability Zones
     * specified.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetTerminationPolicies(Aws::Vector<Aws::String>&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTerminationPolicies(Aws::Vector<Aws::String>&& value) { SetTerminationPolicies(value); return *this;}

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTerminationPolicies(Aws::String&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>One or more termination policies used to select the instance to terminate.
     * These policies are executed in the order that they are listed.</p> <p>For more
     * information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Auto Scaling when scaling in.</p>
     */
    inline bool GetNewInstancesProtectedFromScaleIn() const{ return m_newInstancesProtectedFromScaleIn; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Auto Scaling when scaling in.</p>
     */
    inline void SetNewInstancesProtectedFromScaleIn(bool value) { m_newInstancesProtectedFromScaleInHasBeenSet = true; m_newInstancesProtectedFromScaleIn = value; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Auto Scaling when scaling in.</p>
     */
    inline CreateAutoScalingGroupRequest& WithNewInstancesProtectedFromScaleIn(bool value) { SetNewInstancesProtectedFromScaleIn(value); return *this;}

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging
     * Auto Scaling Groups and Instances</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline CreateAutoScalingGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    int m_minSize;
    bool m_minSizeHasBeenSet;
    int m_maxSize;
    bool m_maxSizeHasBeenSet;
    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet;
    int m_defaultCooldown;
    bool m_defaultCooldownHasBeenSet;
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet;
    Aws::Vector<Aws::String> m_targetGroupARNs;
    bool m_targetGroupARNsHasBeenSet;
    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet;
    int m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet;
    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet;
    Aws::String m_vPCZoneIdentifier;
    bool m_vPCZoneIdentifierHasBeenSet;
    Aws::Vector<Aws::String> m_terminationPolicies;
    bool m_terminationPoliciesHasBeenSet;
    bool m_newInstancesProtectedFromScaleIn;
    bool m_newInstancesProtectedFromScaleInHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
