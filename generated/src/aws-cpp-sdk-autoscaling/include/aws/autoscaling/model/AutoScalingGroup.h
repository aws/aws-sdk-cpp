/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/LaunchTemplateSpecification.h>
#include <aws/autoscaling/model/MixedInstancesPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling/model/WarmPoolConfiguration.h>
#include <aws/autoscaling/model/InstanceMaintenancePolicy.h>
#include <aws/autoscaling/model/AvailabilityZoneDistribution.h>
#include <aws/autoscaling/model/AvailabilityZoneImpairmentPolicy.h>
#include <aws/autoscaling/model/CapacityReservationSpecification.h>
#include <aws/autoscaling/model/Instance.h>
#include <aws/autoscaling/model/SuspendedProcess.h>
#include <aws/autoscaling/model/EnabledMetric.h>
#include <aws/autoscaling/model/TagDescription.h>
#include <aws/autoscaling/model/TrafficSourceIdentifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes an Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AutoScalingGroup">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroup
  {
  public:
    AWS_AUTOSCALING_API AutoScalingGroup() = default;
    AWS_AUTOSCALING_API AutoScalingGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AutoScalingGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    AutoScalingGroup& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupARN() const { return m_autoScalingGroupARN; }
    inline bool AutoScalingGroupARNHasBeenSet() const { return m_autoScalingGroupARNHasBeenSet; }
    template<typename AutoScalingGroupARNT = Aws::String>
    void SetAutoScalingGroupARN(AutoScalingGroupARNT&& value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN = std::forward<AutoScalingGroupARNT>(value); }
    template<typename AutoScalingGroupARNT = Aws::String>
    AutoScalingGroup& WithAutoScalingGroupARN(AutoScalingGroupARNT&& value) { SetAutoScalingGroupARN(std::forward<AutoScalingGroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const { return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    template<typename LaunchConfigurationNameT = Aws::String>
    void SetLaunchConfigurationName(LaunchConfigurationNameT&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::forward<LaunchConfigurationNameT>(value); }
    template<typename LaunchConfigurationNameT = Aws::String>
    AutoScalingGroup& WithLaunchConfigurationName(LaunchConfigurationNameT&& value) { SetLaunchConfigurationName(std::forward<LaunchConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template for the group.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    AutoScalingGroup& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline const MixedInstancesPolicy& GetMixedInstancesPolicy() const { return m_mixedInstancesPolicy; }
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }
    template<typename MixedInstancesPolicyT = MixedInstancesPolicy>
    void SetMixedInstancesPolicy(MixedInstancesPolicyT&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::forward<MixedInstancesPolicyT>(value); }
    template<typename MixedInstancesPolicyT = MixedInstancesPolicy>
    AutoScalingGroup& WithMixedInstancesPolicy(MixedInstancesPolicyT&& value) { SetMixedInstancesPolicy(std::forward<MixedInstancesPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum size of the group.</p>
     */
    inline int GetMinSize() const { return m_minSize; }
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }
    inline AutoScalingGroup& WithMinSize(int value) { SetMinSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the group.</p>
     */
    inline int GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline AutoScalingGroup& WithMaxSize(int value) { SetMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired size of the group.</p>
     */
    inline int GetDesiredCapacity() const { return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline AutoScalingGroup& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predicted capacity of the group when it has a predictive scaling
     * policy.</p>
     */
    inline int GetPredictedCapacity() const { return m_predictedCapacity; }
    inline bool PredictedCapacityHasBeenSet() const { return m_predictedCapacityHasBeenSet; }
    inline void SetPredictedCapacity(int value) { m_predictedCapacityHasBeenSet = true; m_predictedCapacity = value; }
    inline AutoScalingGroup& WithPredictedCapacity(int value) { SetPredictedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the default cooldown period, in seconds.</p>
     */
    inline int GetDefaultCooldown() const { return m_defaultCooldown; }
    inline bool DefaultCooldownHasBeenSet() const { return m_defaultCooldownHasBeenSet; }
    inline void SetDefaultCooldown(int value) { m_defaultCooldownHasBeenSet = true; m_defaultCooldown = value; }
    inline AutoScalingGroup& WithDefaultCooldown(int value) { SetDefaultCooldown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    AutoScalingGroup& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    AutoScalingGroup& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const { return m_loadBalancerNames; }
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    void SetLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::forward<LoadBalancerNamesT>(value); }
    template<typename LoadBalancerNamesT = Aws::Vector<Aws::String>>
    AutoScalingGroup& WithLoadBalancerNames(LoadBalancerNamesT&& value) { SetLoadBalancerNames(std::forward<LoadBalancerNamesT>(value)); return *this;}
    template<typename LoadBalancerNamesT = Aws::String>
    AutoScalingGroup& AddLoadBalancerNames(LoadBalancerNamesT&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.emplace_back(std::forward<LoadBalancerNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupARNs() const { return m_targetGroupARNs; }
    inline bool TargetGroupARNsHasBeenSet() const { return m_targetGroupARNsHasBeenSet; }
    template<typename TargetGroupARNsT = Aws::Vector<Aws::String>>
    void SetTargetGroupARNs(TargetGroupARNsT&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = std::forward<TargetGroupARNsT>(value); }
    template<typename TargetGroupARNsT = Aws::Vector<Aws::String>>
    AutoScalingGroup& WithTargetGroupARNs(TargetGroupARNsT&& value) { SetTargetGroupARNs(std::forward<TargetGroupARNsT>(value)); return *this;}
    template<typename TargetGroupARNsT = Aws::String>
    AutoScalingGroup& AddTargetGroupARNs(TargetGroupARNsT&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.emplace_back(std::forward<TargetGroupARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A comma-separated value string of one or more health check types.</p>
     */
    inline const Aws::String& GetHealthCheckType() const { return m_healthCheckType; }
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }
    template<typename HealthCheckTypeT = Aws::String>
    void SetHealthCheckType(HealthCheckTypeT&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::forward<HealthCheckTypeT>(value); }
    template<typename HealthCheckTypeT = Aws::String>
    AutoScalingGroup& WithHealthCheckType(HealthCheckTypeT&& value) { SetHealthCheckType(std::forward<HealthCheckTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the health check grace period, in seconds.</p>
     */
    inline int GetHealthCheckGracePeriod() const { return m_healthCheckGracePeriod; }
    inline bool HealthCheckGracePeriodHasBeenSet() const { return m_healthCheckGracePeriodHasBeenSet; }
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }
    inline AutoScalingGroup& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<Instance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Instance>>
    AutoScalingGroup& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Instance>
    AutoScalingGroup& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    AutoScalingGroup& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline const Aws::Vector<SuspendedProcess>& GetSuspendedProcesses() const { return m_suspendedProcesses; }
    inline bool SuspendedProcessesHasBeenSet() const { return m_suspendedProcessesHasBeenSet; }
    template<typename SuspendedProcessesT = Aws::Vector<SuspendedProcess>>
    void SetSuspendedProcesses(SuspendedProcessesT&& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses = std::forward<SuspendedProcessesT>(value); }
    template<typename SuspendedProcessesT = Aws::Vector<SuspendedProcess>>
    AutoScalingGroup& WithSuspendedProcesses(SuspendedProcessesT&& value) { SetSuspendedProcesses(std::forward<SuspendedProcessesT>(value)); return *this;}
    template<typename SuspendedProcessesT = SuspendedProcess>
    AutoScalingGroup& AddSuspendedProcesses(SuspendedProcessesT&& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses.emplace_back(std::forward<SuspendedProcessesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline const Aws::String& GetPlacementGroup() const { return m_placementGroup; }
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }
    template<typename PlacementGroupT = Aws::String>
    void SetPlacementGroup(PlacementGroupT&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::forward<PlacementGroupT>(value); }
    template<typename PlacementGroupT = Aws::String>
    AutoScalingGroup& WithPlacementGroup(PlacementGroupT&& value) { SetPlacementGroup(std::forward<PlacementGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline const Aws::String& GetVPCZoneIdentifier() const { return m_vPCZoneIdentifier; }
    inline bool VPCZoneIdentifierHasBeenSet() const { return m_vPCZoneIdentifierHasBeenSet; }
    template<typename VPCZoneIdentifierT = Aws::String>
    void SetVPCZoneIdentifier(VPCZoneIdentifierT&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = std::forward<VPCZoneIdentifierT>(value); }
    template<typename VPCZoneIdentifierT = Aws::String>
    AutoScalingGroup& WithVPCZoneIdentifier(VPCZoneIdentifierT&& value) { SetVPCZoneIdentifier(std::forward<VPCZoneIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline const Aws::Vector<EnabledMetric>& GetEnabledMetrics() const { return m_enabledMetrics; }
    inline bool EnabledMetricsHasBeenSet() const { return m_enabledMetricsHasBeenSet; }
    template<typename EnabledMetricsT = Aws::Vector<EnabledMetric>>
    void SetEnabledMetrics(EnabledMetricsT&& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics = std::forward<EnabledMetricsT>(value); }
    template<typename EnabledMetricsT = Aws::Vector<EnabledMetric>>
    AutoScalingGroup& WithEnabledMetrics(EnabledMetricsT&& value) { SetEnabledMetrics(std::forward<EnabledMetricsT>(value)); return *this;}
    template<typename EnabledMetricsT = EnabledMetric>
    AutoScalingGroup& AddEnabledMetrics(EnabledMetricsT&& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics.emplace_back(std::forward<EnabledMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the group when the <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/API_DeleteAutoScalingGroup.html">DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AutoScalingGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the group.</p>
     */
    inline const Aws::Vector<TagDescription>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagDescription>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagDescription>>
    AutoScalingGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagDescription>
    AutoScalingGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The termination policies for the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const { return m_terminationPolicies; }
    inline bool TerminationPoliciesHasBeenSet() const { return m_terminationPoliciesHasBeenSet; }
    template<typename TerminationPoliciesT = Aws::Vector<Aws::String>>
    void SetTerminationPolicies(TerminationPoliciesT&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = std::forward<TerminationPoliciesT>(value); }
    template<typename TerminationPoliciesT = Aws::Vector<Aws::String>>
    AutoScalingGroup& WithTerminationPolicies(TerminationPoliciesT&& value) { SetTerminationPolicies(std::forward<TerminationPoliciesT>(value)); return *this;}
    template<typename TerminationPoliciesT = Aws::String>
    AutoScalingGroup& AddTerminationPolicies(TerminationPoliciesT&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.emplace_back(std::forward<TerminationPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in. For more information about preventing
     * instances from terminating on scale in, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-instance-protection.html">Use
     * instance scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User
     * Guide</i>. </p>
     */
    inline bool GetNewInstancesProtectedFromScaleIn() const { return m_newInstancesProtectedFromScaleIn; }
    inline bool NewInstancesProtectedFromScaleInHasBeenSet() const { return m_newInstancesProtectedFromScaleInHasBeenSet; }
    inline void SetNewInstancesProtectedFromScaleIn(bool value) { m_newInstancesProtectedFromScaleInHasBeenSet = true; m_newInstancesProtectedFromScaleIn = value; }
    inline AutoScalingGroup& WithNewInstancesProtectedFromScaleIn(bool value) { SetNewInstancesProtectedFromScaleIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline const Aws::String& GetServiceLinkedRoleARN() const { return m_serviceLinkedRoleARN; }
    inline bool ServiceLinkedRoleARNHasBeenSet() const { return m_serviceLinkedRoleARNHasBeenSet; }
    template<typename ServiceLinkedRoleARNT = Aws::String>
    void SetServiceLinkedRoleARN(ServiceLinkedRoleARNT&& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = std::forward<ServiceLinkedRoleARNT>(value); }
    template<typename ServiceLinkedRoleARNT = Aws::String>
    AutoScalingGroup& WithServiceLinkedRoleARN(ServiceLinkedRoleARNT&& value) { SetServiceLinkedRoleARN(std::forward<ServiceLinkedRoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in
     * service.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline int GetMaxInstanceLifetime() const { return m_maxInstanceLifetime; }
    inline bool MaxInstanceLifetimeHasBeenSet() const { return m_maxInstanceLifetimeHasBeenSet; }
    inline void SetMaxInstanceLifetime(int value) { m_maxInstanceLifetimeHasBeenSet = true; m_maxInstanceLifetime = value; }
    inline AutoScalingGroup& WithMaxInstanceLifetime(int value) { SetMaxInstanceLifetime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Capacity Rebalancing is enabled.</p>
     */
    inline bool GetCapacityRebalance() const { return m_capacityRebalance; }
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }
    inline void SetCapacityRebalance(bool value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = value; }
    inline AutoScalingGroup& WithCapacityRebalance(bool value) { SetCapacityRebalance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warm pool for the group.</p>
     */
    inline const WarmPoolConfiguration& GetWarmPoolConfiguration() const { return m_warmPoolConfiguration; }
    inline bool WarmPoolConfigurationHasBeenSet() const { return m_warmPoolConfigurationHasBeenSet; }
    template<typename WarmPoolConfigurationT = WarmPoolConfiguration>
    void SetWarmPoolConfiguration(WarmPoolConfigurationT&& value) { m_warmPoolConfigurationHasBeenSet = true; m_warmPoolConfiguration = std::forward<WarmPoolConfigurationT>(value); }
    template<typename WarmPoolConfigurationT = WarmPoolConfiguration>
    AutoScalingGroup& WithWarmPoolConfiguration(WarmPoolConfigurationT&& value) { SetWarmPoolConfiguration(std::forward<WarmPoolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current size of the warm pool.</p>
     */
    inline int GetWarmPoolSize() const { return m_warmPoolSize; }
    inline bool WarmPoolSizeHasBeenSet() const { return m_warmPoolSizeHasBeenSet; }
    inline void SetWarmPoolSize(int value) { m_warmPoolSizeHasBeenSet = true; m_warmPoolSize = value; }
    inline AutoScalingGroup& WithWarmPoolSize(int value) { SetWarmPoolSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    AutoScalingGroup& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline const Aws::String& GetDesiredCapacityType() const { return m_desiredCapacityType; }
    inline bool DesiredCapacityTypeHasBeenSet() const { return m_desiredCapacityTypeHasBeenSet; }
    template<typename DesiredCapacityTypeT = Aws::String>
    void SetDesiredCapacityType(DesiredCapacityTypeT&& value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType = std::forward<DesiredCapacityTypeT>(value); }
    template<typename DesiredCapacityTypeT = Aws::String>
    AutoScalingGroup& WithDesiredCapacityType(DesiredCapacityTypeT&& value) { SetDesiredCapacityType(std::forward<DesiredCapacityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the default instance warmup, in seconds.</p>
     */
    inline int GetDefaultInstanceWarmup() const { return m_defaultInstanceWarmup; }
    inline bool DefaultInstanceWarmupHasBeenSet() const { return m_defaultInstanceWarmupHasBeenSet; }
    inline void SetDefaultInstanceWarmup(int value) { m_defaultInstanceWarmupHasBeenSet = true; m_defaultInstanceWarmup = value; }
    inline AutoScalingGroup& WithDefaultInstanceWarmup(int value) { SetDefaultInstanceWarmup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The traffic sources associated with this Auto Scaling group.</p>
     */
    inline const Aws::Vector<TrafficSourceIdentifier>& GetTrafficSources() const { return m_trafficSources; }
    inline bool TrafficSourcesHasBeenSet() const { return m_trafficSourcesHasBeenSet; }
    template<typename TrafficSourcesT = Aws::Vector<TrafficSourceIdentifier>>
    void SetTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = std::forward<TrafficSourcesT>(value); }
    template<typename TrafficSourcesT = Aws::Vector<TrafficSourceIdentifier>>
    AutoScalingGroup& WithTrafficSources(TrafficSourcesT&& value) { SetTrafficSources(std::forward<TrafficSourcesT>(value)); return *this;}
    template<typename TrafficSourcesT = TrafficSourceIdentifier>
    AutoScalingGroup& AddTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.emplace_back(std::forward<TrafficSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An instance maintenance policy.</p>
     */
    inline const InstanceMaintenancePolicy& GetInstanceMaintenancePolicy() const { return m_instanceMaintenancePolicy; }
    inline bool InstanceMaintenancePolicyHasBeenSet() const { return m_instanceMaintenancePolicyHasBeenSet; }
    template<typename InstanceMaintenancePolicyT = InstanceMaintenancePolicy>
    void SetInstanceMaintenancePolicy(InstanceMaintenancePolicyT&& value) { m_instanceMaintenancePolicyHasBeenSet = true; m_instanceMaintenancePolicy = std::forward<InstanceMaintenancePolicyT>(value); }
    template<typename InstanceMaintenancePolicyT = InstanceMaintenancePolicy>
    AutoScalingGroup& WithInstanceMaintenancePolicy(InstanceMaintenancePolicyT&& value) { SetInstanceMaintenancePolicy(std::forward<InstanceMaintenancePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance capacity distribution across Availability Zones. </p>
     */
    inline const AvailabilityZoneDistribution& GetAvailabilityZoneDistribution() const { return m_availabilityZoneDistribution; }
    inline bool AvailabilityZoneDistributionHasBeenSet() const { return m_availabilityZoneDistributionHasBeenSet; }
    template<typename AvailabilityZoneDistributionT = AvailabilityZoneDistribution>
    void SetAvailabilityZoneDistribution(AvailabilityZoneDistributionT&& value) { m_availabilityZoneDistributionHasBeenSet = true; m_availabilityZoneDistribution = std::forward<AvailabilityZoneDistributionT>(value); }
    template<typename AvailabilityZoneDistributionT = AvailabilityZoneDistribution>
    AutoScalingGroup& WithAvailabilityZoneDistribution(AvailabilityZoneDistributionT&& value) { SetAvailabilityZoneDistribution(std::forward<AvailabilityZoneDistributionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Availability Zone impairment policy. </p>
     */
    inline const AvailabilityZoneImpairmentPolicy& GetAvailabilityZoneImpairmentPolicy() const { return m_availabilityZoneImpairmentPolicy; }
    inline bool AvailabilityZoneImpairmentPolicyHasBeenSet() const { return m_availabilityZoneImpairmentPolicyHasBeenSet; }
    template<typename AvailabilityZoneImpairmentPolicyT = AvailabilityZoneImpairmentPolicy>
    void SetAvailabilityZoneImpairmentPolicy(AvailabilityZoneImpairmentPolicyT&& value) { m_availabilityZoneImpairmentPolicyHasBeenSet = true; m_availabilityZoneImpairmentPolicy = std::forward<AvailabilityZoneImpairmentPolicyT>(value); }
    template<typename AvailabilityZoneImpairmentPolicyT = AvailabilityZoneImpairmentPolicy>
    AutoScalingGroup& WithAvailabilityZoneImpairmentPolicy(AvailabilityZoneImpairmentPolicyT&& value) { SetAvailabilityZoneImpairmentPolicy(std::forward<AvailabilityZoneImpairmentPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The capacity reservation specification. </p>
     */
    inline const CapacityReservationSpecification& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    template<typename CapacityReservationSpecificationT = CapacityReservationSpecification>
    void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value); }
    template<typename CapacityReservationSpecificationT = CapacityReservationSpecification>
    AutoScalingGroup& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_autoScalingGroupARN;
    bool m_autoScalingGroupARNHasBeenSet = false;

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    MixedInstancesPolicy m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet = false;

    int m_minSize{0};
    bool m_minSizeHasBeenSet = false;

    int m_maxSize{0};
    bool m_maxSizeHasBeenSet = false;

    int m_desiredCapacity{0};
    bool m_desiredCapacityHasBeenSet = false;

    int m_predictedCapacity{0};
    bool m_predictedCapacityHasBeenSet = false;

    int m_defaultCooldown{0};
    bool m_defaultCooldownHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetGroupARNs;
    bool m_targetGroupARNsHasBeenSet = false;

    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet = false;

    int m_healthCheckGracePeriod{0};
    bool m_healthCheckGracePeriodHasBeenSet = false;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<SuspendedProcess> m_suspendedProcesses;
    bool m_suspendedProcessesHasBeenSet = false;

    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet = false;

    Aws::String m_vPCZoneIdentifier;
    bool m_vPCZoneIdentifierHasBeenSet = false;

    Aws::Vector<EnabledMetric> m_enabledMetrics;
    bool m_enabledMetricsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<TagDescription> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminationPolicies;
    bool m_terminationPoliciesHasBeenSet = false;

    bool m_newInstancesProtectedFromScaleIn{false};
    bool m_newInstancesProtectedFromScaleInHasBeenSet = false;

    Aws::String m_serviceLinkedRoleARN;
    bool m_serviceLinkedRoleARNHasBeenSet = false;

    int m_maxInstanceLifetime{0};
    bool m_maxInstanceLifetimeHasBeenSet = false;

    bool m_capacityRebalance{false};
    bool m_capacityRebalanceHasBeenSet = false;

    WarmPoolConfiguration m_warmPoolConfiguration;
    bool m_warmPoolConfigurationHasBeenSet = false;

    int m_warmPoolSize{0};
    bool m_warmPoolSizeHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_desiredCapacityType;
    bool m_desiredCapacityTypeHasBeenSet = false;

    int m_defaultInstanceWarmup{0};
    bool m_defaultInstanceWarmupHasBeenSet = false;

    Aws::Vector<TrafficSourceIdentifier> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;

    InstanceMaintenancePolicy m_instanceMaintenancePolicy;
    bool m_instanceMaintenancePolicyHasBeenSet = false;

    AvailabilityZoneDistribution m_availabilityZoneDistribution;
    bool m_availabilityZoneDistributionHasBeenSet = false;

    AvailabilityZoneImpairmentPolicy m_availabilityZoneImpairmentPolicy;
    bool m_availabilityZoneImpairmentPolicyHasBeenSet = false;

    CapacityReservationSpecification m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
