/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <aws/autoscaling/model/MixedInstancesPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/InstanceMaintenancePolicy.h>
#include <aws/autoscaling/model/AvailabilityZoneDistribution.h>
#include <aws/autoscaling/model/AvailabilityZoneImpairmentPolicy.h>
#include <aws/autoscaling/model/CapacityReservationSpecification.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class UpdateAutoScalingGroupRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API UpdateAutoScalingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutoScalingGroup"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch configuration. If you specify
     * <code>LaunchConfigurationName</code> in your update request, you can't specify
     * <code>LaunchTemplate</code> or <code>MixedInstancesPolicy</code>.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template and version to use to specify the updates. If you specify
     * <code>LaunchTemplate</code> in your update request, you can't specify
     * <code>LaunchConfigurationName</code> or <code>MixedInstancesPolicy</code>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mixed instances policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-mixed-instances-groups.html">Auto
     * Scaling groups with multiple instance types and purchase options</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const MixedInstancesPolicy& GetMixedInstancesPolicy() const{ return m_mixedInstancesPolicy; }
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }
    inline void SetMixedInstancesPolicy(const MixedInstancesPolicy& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = value; }
    inline void SetMixedInstancesPolicy(MixedInstancesPolicy&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithMixedInstancesPolicy(const MixedInstancesPolicy& value) { SetMixedInstancesPolicy(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithMixedInstancesPolicy(MixedInstancesPolicy&& value) { SetMixedInstancesPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum size of the Auto Scaling group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline UpdateAutoScalingGroupRequest& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the Auto Scaling group.</p>  <p>With a mixed
     * instances policy that uses instance weighting, Amazon EC2 Auto Scaling may need
     * to go above <code>MaxSize</code> to meet your capacity requirements. In this
     * event, Amazon EC2 Auto Scaling will never go above <code>MaxSize</code> by more
     * than your largest instance weight (weights that define how many units each
     * instance contributes to the desired capacity of the group).</p> 
     */
    inline int GetMaxSize() const{ return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline UpdateAutoScalingGroupRequest& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity is the initial capacity of the Auto Scaling group after
     * this operation completes and the capacity it attempts to maintain. This number
     * must be greater than or equal to the minimum size of the group and less than or
     * equal to the maximum size of the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline UpdateAutoScalingGroupRequest& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Only needed if you use simple scaling policies.</i> </p> <p>The amount of
     * time, in seconds, between one scaling activity ending and another one starting
     * due to simple scaling policies. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-scaling-cooldowns.html">Scaling
     * cooldowns for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline int GetDefaultCooldown() const{ return m_defaultCooldown; }
    inline bool DefaultCooldownHasBeenSet() const { return m_defaultCooldownHasBeenSet; }
    inline void SetDefaultCooldown(int value) { m_defaultCooldownHasBeenSet = true; m_defaultCooldown = value; }
    inline UpdateAutoScalingGroupRequest& WithDefaultCooldown(int value) { SetDefaultCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline UpdateAutoScalingGroupRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A comma-separated value string of one or more health check types.</p> <p>The
     * valid values are <code>EC2</code>, <code>EBS</code>, <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. <code>EC2</code> is the default health check and
     * cannot be disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-health-checks.html">Health
     * checks for instances in an Auto Scaling group</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Only specify <code>EC2</code> if you must clear a
     * value that was previously set.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::move(value); }
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before
     * checking the health status of an EC2 instance that has come into service and
     * marking it unhealthy due to a failed health check. This is useful if your
     * instances do not immediately pass their health checks after they enter the
     * <code>InService</code> state. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/health-check-grace-period.html">Set
     * the health check grace period for an Auto Scaling group</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }
    inline bool HealthCheckGracePeriodHasBeenSet() const { return m_healthCheckGracePeriodHasBeenSet; }
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }
    inline UpdateAutoScalingGroupRequest& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing placement group into which to launch your instances.
     * To remove the placement group setting, pass an empty string for
     * <code>placement-group</code>. For more information about placement groups, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> 
     * <p>A <i>cluster</i> placement group is a logical grouping of instances within a
     * single Availability Zone. You cannot specify multiple Availability Zones and a
     * cluster placement group. </p> 
     */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::move(value); }
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of subnet IDs for a virtual private cloud (VPC). If
     * you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>,
     * the subnets that you specify must reside in those Availability Zones.</p>
     */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }
    inline bool VPCZoneIdentifierHasBeenSet() const { return m_vPCZoneIdentifierHasBeenSet; }
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }
    inline void SetVPCZoneIdentifier(Aws::String&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = std::move(value); }
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(Aws::String&& value) { SetVPCZoneIdentifier(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy or a list of policies that are used to select the instances to
     * terminate. The policies are executed in the order that you list them. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-termination-policies.html">Configure
     * termination policies for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid values: <code>Default</code> |
     * <code>AllocationStrategy</code> | <code>ClosestToNextInstanceHour</code> |
     * <code>NewestInstance</code> | <code>OldestInstance</code> |
     * <code>OldestLaunchConfiguration</code> | <code>OldestLaunchTemplate</code> |
     * <code>arn:aws:lambda:region:account-id:function:my-function:my-alias</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }
    inline bool TerminationPoliciesHasBeenSet() const { return m_terminationPoliciesHasBeenSet; }
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }
    inline void SetTerminationPolicies(Aws::Vector<Aws::String>&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithTerminationPolicies(Aws::Vector<Aws::String>&& value) { SetTerminationPolicies(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(Aws::String&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(std::move(value)); return *this; }
    inline UpdateAutoScalingGroupRequest& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in. For more information about preventing
     * instances from terminating on scale in, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-instance-protection.html">Use
     * instance scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline bool GetNewInstancesProtectedFromScaleIn() const{ return m_newInstancesProtectedFromScaleIn; }
    inline bool NewInstancesProtectedFromScaleInHasBeenSet() const { return m_newInstancesProtectedFromScaleInHasBeenSet; }
    inline void SetNewInstancesProtectedFromScaleIn(bool value) { m_newInstancesProtectedFromScaleInHasBeenSet = true; m_newInstancesProtectedFromScaleIn = value; }
    inline UpdateAutoScalingGroupRequest& WithNewInstancesProtectedFromScaleIn(bool value) { SetNewInstancesProtectedFromScaleIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-linked
     * roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceLinkedRoleARN() const{ return m_serviceLinkedRoleARN; }
    inline bool ServiceLinkedRoleARNHasBeenSet() const { return m_serviceLinkedRoleARNHasBeenSet; }
    inline void SetServiceLinkedRoleARN(const Aws::String& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = value; }
    inline void SetServiceLinkedRoleARN(Aws::String&& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = std::move(value); }
    inline void SetServiceLinkedRoleARN(const char* value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithServiceLinkedRoleARN(const Aws::String& value) { SetServiceLinkedRoleARN(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithServiceLinkedRoleARN(Aws::String&& value) { SetServiceLinkedRoleARN(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithServiceLinkedRoleARN(const char* value) { SetServiceLinkedRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in service.
     * The default is null. If specified, the value must be either 0 or a number equal
     * to or greater than 86,400 seconds (1 day). To clear a previously set value,
     * specify a new value of 0. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-max-instance-lifetime.html">Replacing
     * Auto Scaling instances based on maximum instance lifetime</a> in the <i>Amazon
     * EC2 Auto Scaling User Guide</i>.</p>
     */
    inline int GetMaxInstanceLifetime() const{ return m_maxInstanceLifetime; }
    inline bool MaxInstanceLifetimeHasBeenSet() const { return m_maxInstanceLifetimeHasBeenSet; }
    inline void SetMaxInstanceLifetime(int value) { m_maxInstanceLifetimeHasBeenSet = true; m_maxInstanceLifetime = value; }
    inline UpdateAutoScalingGroupRequest& WithMaxInstanceLifetime(int value) { SetMaxInstanceLifetime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Capacity Rebalancing. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-capacity-rebalancing.html">Use
     * Capacity Rebalancing to handle Amazon EC2 Spot Interruptions</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
     */
    inline bool GetCapacityRebalance() const{ return m_capacityRebalance; }
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }
    inline void SetCapacityRebalance(bool value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = value; }
    inline UpdateAutoScalingGroupRequest& WithCapacityRebalance(bool value) { SetCapacityRebalance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-mixed-instances-group-attribute-based-instance-type-selection.html">Create
     * a mixed instances group using attribute-based instance type selection</a> in the
     * <i>Amazon EC2 Auto Scaling User Guide</i>.</p> <p>By default, Amazon EC2 Auto
     * Scaling specifies <code>units</code>, which translates into number of
     * instances.</p> <p>Valid values: <code>units</code> | <code>vcpu</code> |
     * <code>memory-mib</code> </p>
     */
    inline const Aws::String& GetDesiredCapacityType() const{ return m_desiredCapacityType; }
    inline bool DesiredCapacityTypeHasBeenSet() const { return m_desiredCapacityTypeHasBeenSet; }
    inline void SetDesiredCapacityType(const Aws::String& value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType = value; }
    inline void SetDesiredCapacityType(Aws::String&& value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType = std::move(value); }
    inline void SetDesiredCapacityType(const char* value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType.assign(value); }
    inline UpdateAutoScalingGroupRequest& WithDesiredCapacityType(const Aws::String& value) { SetDesiredCapacityType(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithDesiredCapacityType(Aws::String&& value) { SetDesiredCapacityType(std::move(value)); return *this;}
    inline UpdateAutoScalingGroupRequest& WithDesiredCapacityType(const char* value) { SetDesiredCapacityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, until a new instance is considered to have
     * finished initializing and resource consumption to become stable after it enters
     * the <code>InService</code> state. </p> <p>During an instance refresh, Amazon EC2
     * Auto Scaling waits for the warm-up period after it replaces an instance before
     * it moves on to replacing the next instance. Amazon EC2 Auto Scaling also waits
     * for the warm-up period before aggregating the metrics for new instances with
     * existing instances in the Amazon CloudWatch metrics that are used for scaling,
     * resulting in more reliable usage data. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-default-instance-warmup.html">Set
     * the default instance warmup for an Auto Scaling group</a> in the <i>Amazon EC2
     * Auto Scaling User Guide</i>.</p>  <p>To manage various warm-up
     * settings at the group level, we recommend that you set the default instance
     * warmup, <i>even if it is set to 0 seconds</i>. To remove a value that you
     * previously set, include the property but specify <code>-1</code> for the value.
     * However, we strongly recommend keeping the default instance warmup enabled by
     * specifying a value of <code>0</code> or other nominal value.</p> 
     */
    inline int GetDefaultInstanceWarmup() const{ return m_defaultInstanceWarmup; }
    inline bool DefaultInstanceWarmupHasBeenSet() const { return m_defaultInstanceWarmupHasBeenSet; }
    inline void SetDefaultInstanceWarmup(int value) { m_defaultInstanceWarmupHasBeenSet = true; m_defaultInstanceWarmup = value; }
    inline UpdateAutoScalingGroupRequest& WithDefaultInstanceWarmup(int value) { SetDefaultInstanceWarmup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An instance maintenance policy. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-instance-maintenance-policy.html">Set
     * instance maintenance policy</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>.</p>
     */
    inline const InstanceMaintenancePolicy& GetInstanceMaintenancePolicy() const{ return m_instanceMaintenancePolicy; }
    inline bool InstanceMaintenancePolicyHasBeenSet() const { return m_instanceMaintenancePolicyHasBeenSet; }
    inline void SetInstanceMaintenancePolicy(const InstanceMaintenancePolicy& value) { m_instanceMaintenancePolicyHasBeenSet = true; m_instanceMaintenancePolicy = value; }
    inline void SetInstanceMaintenancePolicy(InstanceMaintenancePolicy&& value) { m_instanceMaintenancePolicyHasBeenSet = true; m_instanceMaintenancePolicy = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithInstanceMaintenancePolicy(const InstanceMaintenancePolicy& value) { SetInstanceMaintenancePolicy(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithInstanceMaintenancePolicy(InstanceMaintenancePolicy&& value) { SetInstanceMaintenancePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance capacity distribution across Availability Zones. </p>
     */
    inline const AvailabilityZoneDistribution& GetAvailabilityZoneDistribution() const{ return m_availabilityZoneDistribution; }
    inline bool AvailabilityZoneDistributionHasBeenSet() const { return m_availabilityZoneDistributionHasBeenSet; }
    inline void SetAvailabilityZoneDistribution(const AvailabilityZoneDistribution& value) { m_availabilityZoneDistributionHasBeenSet = true; m_availabilityZoneDistribution = value; }
    inline void SetAvailabilityZoneDistribution(AvailabilityZoneDistribution&& value) { m_availabilityZoneDistributionHasBeenSet = true; m_availabilityZoneDistribution = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZoneDistribution(const AvailabilityZoneDistribution& value) { SetAvailabilityZoneDistribution(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZoneDistribution(AvailabilityZoneDistribution&& value) { SetAvailabilityZoneDistribution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The policy for Availability Zone impairment. </p>
     */
    inline const AvailabilityZoneImpairmentPolicy& GetAvailabilityZoneImpairmentPolicy() const{ return m_availabilityZoneImpairmentPolicy; }
    inline bool AvailabilityZoneImpairmentPolicyHasBeenSet() const { return m_availabilityZoneImpairmentPolicyHasBeenSet; }
    inline void SetAvailabilityZoneImpairmentPolicy(const AvailabilityZoneImpairmentPolicy& value) { m_availabilityZoneImpairmentPolicyHasBeenSet = true; m_availabilityZoneImpairmentPolicy = value; }
    inline void SetAvailabilityZoneImpairmentPolicy(AvailabilityZoneImpairmentPolicy&& value) { m_availabilityZoneImpairmentPolicyHasBeenSet = true; m_availabilityZoneImpairmentPolicy = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZoneImpairmentPolicy(const AvailabilityZoneImpairmentPolicy& value) { SetAvailabilityZoneImpairmentPolicy(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithAvailabilityZoneImpairmentPolicy(AvailabilityZoneImpairmentPolicy&& value) { SetAvailabilityZoneImpairmentPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you enable zonal shift with cross-zone disabled load balancers, capacity
     * could become imbalanced across Availability Zones. To skip the validation,
     * specify <code>true</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-zonal-shift.html">Auto
     * Scaling group zonal shift</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
     * </p>
     */
    inline bool GetSkipZonalShiftValidation() const{ return m_skipZonalShiftValidation; }
    inline bool SkipZonalShiftValidationHasBeenSet() const { return m_skipZonalShiftValidationHasBeenSet; }
    inline void SetSkipZonalShiftValidation(bool value) { m_skipZonalShiftValidationHasBeenSet = true; m_skipZonalShiftValidation = value; }
    inline UpdateAutoScalingGroupRequest& WithSkipZonalShiftValidation(bool value) { SetSkipZonalShiftValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The capacity reservation specification for the Auto Scaling group. </p>
     */
    inline const CapacityReservationSpecification& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    inline void SetCapacityReservationSpecification(const CapacityReservationSpecification& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }
    inline void SetCapacityReservationSpecification(CapacityReservationSpecification&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }
    inline UpdateAutoScalingGroupRequest& WithCapacityReservationSpecification(const CapacityReservationSpecification& value) { SetCapacityReservationSpecification(value); return *this;}
    inline UpdateAutoScalingGroupRequest& WithCapacityReservationSpecification(CapacityReservationSpecification&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    MixedInstancesPolicy m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    int m_defaultCooldown;
    bool m_defaultCooldownHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet = false;

    int m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet = false;

    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet = false;

    Aws::String m_vPCZoneIdentifier;
    bool m_vPCZoneIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminationPolicies;
    bool m_terminationPoliciesHasBeenSet = false;

    bool m_newInstancesProtectedFromScaleIn;
    bool m_newInstancesProtectedFromScaleInHasBeenSet = false;

    Aws::String m_serviceLinkedRoleARN;
    bool m_serviceLinkedRoleARNHasBeenSet = false;

    int m_maxInstanceLifetime;
    bool m_maxInstanceLifetimeHasBeenSet = false;

    bool m_capacityRebalance;
    bool m_capacityRebalanceHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_desiredCapacityType;
    bool m_desiredCapacityTypeHasBeenSet = false;

    int m_defaultInstanceWarmup;
    bool m_defaultInstanceWarmupHasBeenSet = false;

    InstanceMaintenancePolicy m_instanceMaintenancePolicy;
    bool m_instanceMaintenancePolicyHasBeenSet = false;

    AvailabilityZoneDistribution m_availabilityZoneDistribution;
    bool m_availabilityZoneDistributionHasBeenSet = false;

    AvailabilityZoneImpairmentPolicy m_availabilityZoneImpairmentPolicy;
    bool m_availabilityZoneImpairmentPolicyHasBeenSet = false;

    bool m_skipZonalShiftValidation;
    bool m_skipZonalShiftValidationHasBeenSet = false;

    CapacityReservationSpecification m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
