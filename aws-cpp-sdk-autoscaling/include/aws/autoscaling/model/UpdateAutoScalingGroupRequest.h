/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /*
  */
  class AWS_AUTOSCALING_API UpdateAutoScalingGroupRequest : public AutoScalingRequest
  {
  public:
    UpdateAutoScalingGroupRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the Auto Scaling group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the launch configuration.</p>
    */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /*
     <p>The name of the launch configuration.</p>
    */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /*
     <p>The name of the launch configuration.</p>
    */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /*
     <p>The name of the launch configuration.</p>
    */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /*
     <p>The name of the launch configuration.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /*
     <p>The name of the launch configuration.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(value); return *this;}

    /*
     <p>The name of the launch configuration.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}

    /*
     <p>The minimum size of the Auto Scaling group.</p>
    */
    inline long GetMinSize() const{ return m_minSize; }

    /*
     <p>The minimum size of the Auto Scaling group.</p>
    */
    inline void SetMinSize(long value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /*
     <p>The minimum size of the Auto Scaling group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithMinSize(long value) { SetMinSize(value); return *this;}

    /*
     <p>The maximum size of the Auto Scaling group.</p>
    */
    inline long GetMaxSize() const{ return m_maxSize; }

    /*
     <p>The maximum size of the Auto Scaling group.</p>
    */
    inline void SetMaxSize(long value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /*
     <p>The maximum size of the Auto Scaling group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithMaxSize(long value) { SetMaxSize(value); return *this;}

    /*
     <p>The number of EC2 instances that should be running in the Auto Scaling group. This number must be greater than or equal to the minimum size of the group and less than or equal to the maximum size of the group.</p>
    */
    inline long GetDesiredCapacity() const{ return m_desiredCapacity; }

    /*
     <p>The number of EC2 instances that should be running in the Auto Scaling group. This number must be greater than or equal to the minimum size of the group and less than or equal to the maximum size of the group.</p>
    */
    inline void SetDesiredCapacity(long value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /*
     <p>The number of EC2 instances that should be running in the Auto Scaling group. This number must be greater than or equal to the minimum size of the group and less than or equal to the maximum size of the group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithDesiredCapacity(long value) { SetDesiredCapacity(value); return *this;}

    /*
     <p>The amount of time, in seconds, after a scaling activity completes before another scaling activity can start. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/Cooldown.html">Understanding Auto Scaling Cooldowns</a>.</p>
    */
    inline long GetDefaultCooldown() const{ return m_defaultCooldown; }

    /*
     <p>The amount of time, in seconds, after a scaling activity completes before another scaling activity can start. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/Cooldown.html">Understanding Auto Scaling Cooldowns</a>.</p>
    */
    inline void SetDefaultCooldown(long value) { m_defaultCooldownHasBeenSet = true; m_defaultCooldown = value; }

    /*
     <p>The amount of time, in seconds, after a scaling activity completes before another scaling activity can start. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/Cooldown.html">Understanding Auto Scaling Cooldowns</a>.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithDefaultCooldown(long value) { SetDefaultCooldown(value); return *this;}

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(value); return *this;}

    /*
     <p>The type of health check for the instances in the Auto Scaling group. The health check type can either be <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}

    /*
     <p>The amount of time, in seconds, that Auto Scaling waits before checking the health status of an instance. The grace period begins when the instance passes the system status and instance status checks from Amazon EC2. For more information, see <a href=""></a>. </p>
    */
    inline long GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }

    /*
     <p>The amount of time, in seconds, that Auto Scaling waits before checking the health status of an instance. The grace period begins when the instance passes the system status and instance status checks from Amazon EC2. For more information, see <a href=""></a>. </p>
    */
    inline void SetHealthCheckGracePeriod(long value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /*
     <p>The amount of time, in seconds, that Auto Scaling waits before checking the health status of an instance. The grace period begins when the instance passes the system status and instance status checks from Amazon EC2. For more information, see <a href=""></a>. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithHealthCheckGracePeriod(long value) { SetHealthCheckGracePeriod(value); return *this;}

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(value); return *this;}

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline void SetVPCZoneIdentifier(Aws::String&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(Aws::String&& value) { SetVPCZoneIdentifier(value); return *this;}

    /*
     <p>The ID of the subnet, if you are launching into a VPC. You can specify several subnets in a comma-separated list.</p> <p>When you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, ensure that the subnets' Availability Zones match the values you specify for <code>AvailabilityZones</code>. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/autoscalingsubnets.html">Auto Scaling and Amazon Virtual Private Cloud</a> in the <i>Auto Scaling Developer Guide</i>. </p>
    */
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline void SetTerminationPolicies(Aws::Vector<Aws::String>&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline UpdateAutoScalingGroupRequest& WithTerminationPolicies(Aws::Vector<Aws::String>&& value) { SetTerminationPolicies(value); return *this;}

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(Aws::String&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /*
     <p> A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/us-termination-policy.html">Choosing a Termination Policy for Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet;
    long m_minSize;
    bool m_minSizeHasBeenSet;
    long m_maxSize;
    bool m_maxSizeHasBeenSet;
    long m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet;
    long m_defaultCooldown;
    bool m_defaultCooldownHasBeenSet;
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet;
    long m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet;
    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet;
    Aws::String m_vPCZoneIdentifier;
    bool m_vPCZoneIdentifierHasBeenSet;
    Aws::Vector<Aws::String> m_terminationPolicies;
    bool m_terminationPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
