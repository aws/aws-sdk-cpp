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

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for UpdateAutoScalingGroup.</p>
   */
  class AWS_AUTOSCALING_API UpdateAutoScalingGroupRequest : public AutoScalingRequest
  {
  public:
    UpdateAutoScalingGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithMinSize(int value) { SetMinSize(value); return *this;}

    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size of the Auto Scaling group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}

    /**
     * <p>The number of EC2 instances that should be running in the Auto Scaling group.
     * This number must be greater than or equal to the minimum size of the group and
     * less than or equal to the maximum size of the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The number of EC2 instances that should be running in the Auto Scaling group.
     * This number must be greater than or equal to the minimum size of the group and
     * less than or equal to the maximum size of the group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The number of EC2 instances that should be running in the Auto Scaling group.
     * This number must be greater than or equal to the minimum size of the group and
     * less than or equal to the maximum size of the group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}

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
    inline UpdateAutoScalingGroupRequest& WithDefaultCooldown(int value) { SetDefaultCooldown(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The service to use for the health checks. The valid values are
     * <code>EC2</code> and <code>ELB</code>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The amount of time, in seconds, that Auto Scaling waits before checking the
     * health status of an EC2 instance that has come into service. The default is
     * 0.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }

    /**
     * <p>The amount of time, in seconds, that Auto Scaling waits before checking the
     * health status of an EC2 instance that has come into service. The default is
     * 0.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /**
     * <p>The amount of time, in seconds, that Auto Scaling waits before checking the
     * health status of an EC2 instance that has come into service. The default is
     * 0.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
     * Checks</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}

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
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The name of the placement group into which you'll launch your instances, if
     * any. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetVPCZoneIdentifier(Aws::String&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(Aws::String&& value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>The ID of the subnet, if you are launching into a VPC. You can specify
     * several subnets in a comma-separated list.</p> <p>When you specify
     * <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that
     * the subnets' Availability Zones match the values you specify for
     * <code>AvailabilityZones</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/asg-in-vpc.html">Launching
     * Auto Scaling Instances in a VPC</a> in the <i>Auto Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline void SetTerminationPolicies(Aws::Vector<Aws::String>&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& WithTerminationPolicies(Aws::Vector<Aws::String>&& value) { SetTerminationPolicies(value); return *this;}

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(Aws::String&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>A standalone termination policy or a list of termination policies used to
     * select the instance to terminate. The policies are executed in the order that
     * they are listed.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html">Controlling
     * Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Auto
     * Scaling User Guide</i>.</p>
     */
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

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
    inline UpdateAutoScalingGroupRequest& WithNewInstancesProtectedFromScaleIn(bool value) { SetNewInstancesProtectedFromScaleIn(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet;
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
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
