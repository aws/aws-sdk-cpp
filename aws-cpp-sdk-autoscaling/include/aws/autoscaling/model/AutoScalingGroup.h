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
    AWS_AUTOSCALING_API AutoScalingGroup();
    AWS_AUTOSCALING_API AutoScalingGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AutoScalingGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline AutoScalingGroup& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline AutoScalingGroup& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline AutoScalingGroup& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupARN() const{ return m_autoScalingGroupARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupARNHasBeenSet() const { return m_autoScalingGroupARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupARN(const Aws::String& value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupARN(Aws::String&& value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupARN(const char* value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline AutoScalingGroup& WithAutoScalingGroupARN(const Aws::String& value) { SetAutoScalingGroupARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline AutoScalingGroup& WithAutoScalingGroupARN(Aws::String&& value) { SetAutoScalingGroupARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline AutoScalingGroup& WithAutoScalingGroupARN(const char* value) { SetAutoScalingGroupARN(value); return *this;}


    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline AutoScalingGroup& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline AutoScalingGroup& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the associated launch configuration.</p>
     */
    inline AutoScalingGroup& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}


    /**
     * <p>The launch template for the group.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template for the group.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template for the group.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template for the group.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template for the group.</p>
     */
    inline AutoScalingGroup& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template for the group.</p>
     */
    inline AutoScalingGroup& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline const MixedInstancesPolicy& GetMixedInstancesPolicy() const{ return m_mixedInstancesPolicy; }

    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }

    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline void SetMixedInstancesPolicy(const MixedInstancesPolicy& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = value; }

    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline void SetMixedInstancesPolicy(MixedInstancesPolicy&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::move(value); }

    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline AutoScalingGroup& WithMixedInstancesPolicy(const MixedInstancesPolicy& value) { SetMixedInstancesPolicy(value); return *this;}

    /**
     * <p>The mixed instances policy for the group.</p>
     */
    inline AutoScalingGroup& WithMixedInstancesPolicy(MixedInstancesPolicy&& value) { SetMixedInstancesPolicy(std::move(value)); return *this;}


    /**
     * <p>The minimum size of the group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size of the group.</p>
     */
    inline AutoScalingGroup& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum size of the group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size of the group.</p>
     */
    inline AutoScalingGroup& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The desired size of the group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The desired size of the group.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The desired size of the group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The desired size of the group.</p>
     */
    inline AutoScalingGroup& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}


    /**
     * <p>The predicted capacity of the group when it has a predictive scaling
     * policy.</p>
     */
    inline int GetPredictedCapacity() const{ return m_predictedCapacity; }

    /**
     * <p>The predicted capacity of the group when it has a predictive scaling
     * policy.</p>
     */
    inline bool PredictedCapacityHasBeenSet() const { return m_predictedCapacityHasBeenSet; }

    /**
     * <p>The predicted capacity of the group when it has a predictive scaling
     * policy.</p>
     */
    inline void SetPredictedCapacity(int value) { m_predictedCapacityHasBeenSet = true; m_predictedCapacity = value; }

    /**
     * <p>The predicted capacity of the group when it has a predictive scaling
     * policy.</p>
     */
    inline AutoScalingGroup& WithPredictedCapacity(int value) { SetPredictedCapacity(value); return *this;}


    /**
     * <p>The duration of the default cooldown period, in seconds.</p>
     */
    inline int GetDefaultCooldown() const{ return m_defaultCooldown; }

    /**
     * <p>The duration of the default cooldown period, in seconds.</p>
     */
    inline bool DefaultCooldownHasBeenSet() const { return m_defaultCooldownHasBeenSet; }

    /**
     * <p>The duration of the default cooldown period, in seconds.</p>
     */
    inline void SetDefaultCooldown(int value) { m_defaultCooldownHasBeenSet = true; m_defaultCooldown = value; }

    /**
     * <p>The duration of the default cooldown period, in seconds.</p>
     */
    inline AutoScalingGroup& WithDefaultCooldown(int value) { SetDefaultCooldown(value); return *this;}


    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline AutoScalingGroup& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline AutoScalingGroup& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline AutoScalingGroup& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline AutoScalingGroup& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Availability Zones for the group.</p>
     */
    inline AutoScalingGroup& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline void SetLoadBalancerNames(Aws::Vector<Aws::String>&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::move(value); }

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline AutoScalingGroup& WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline AutoScalingGroup& WithLoadBalancerNames(Aws::Vector<Aws::String>&& value) { SetLoadBalancerNames(std::move(value)); return *this;}

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline AutoScalingGroup& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline AutoScalingGroup& AddLoadBalancerNames(Aws::String&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more load balancers associated with the group.</p>
     */
    inline AutoScalingGroup& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetGroupARNs() const{ return m_targetGroupARNs; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline bool TargetGroupARNsHasBeenSet() const { return m_targetGroupARNsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline void SetTargetGroupARNs(const Aws::Vector<Aws::String>& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline void SetTargetGroupARNs(Aws::Vector<Aws::String>&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline AutoScalingGroup& WithTargetGroupARNs(const Aws::Vector<Aws::String>& value) { SetTargetGroupARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline AutoScalingGroup& WithTargetGroupARNs(Aws::Vector<Aws::String>&& value) { SetTargetGroupARNs(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline AutoScalingGroup& AddTargetGroupARNs(const Aws::String& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline AutoScalingGroup& AddTargetGroupARNs(Aws::String&& value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the target groups for your load
     * balancer.</p>
     */
    inline AutoScalingGroup& AddTargetGroupARNs(const char* value) { m_targetGroupARNsHasBeenSet = true; m_targetGroupARNs.push_back(value); return *this; }


    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::move(value); }

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline AutoScalingGroup& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline AutoScalingGroup& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(std::move(value)); return *this;}

    /**
     * <p>Determines whether any additional health checks are performed on the
     * instances in this group. Amazon EC2 health checks are always on.</p> <p>The
     * valid values are <code>EC2</code> (default), <code>ELB</code>, and
     * <code>VPC_LATTICE</code>. The <code>VPC_LATTICE</code> health check type is
     * reserved for use with VPC Lattice, which is in preview release and is subject to
     * change.</p>
     */
    inline AutoScalingGroup& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}


    /**
     * <p>The duration of the health check grace period, in seconds.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }

    /**
     * <p>The duration of the health check grace period, in seconds.</p>
     */
    inline bool HealthCheckGracePeriodHasBeenSet() const { return m_healthCheckGracePeriodHasBeenSet; }

    /**
     * <p>The duration of the health check grace period, in seconds.</p>
     */
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /**
     * <p>The duration of the health check grace period, in seconds.</p>
     */
    inline AutoScalingGroup& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}


    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline AutoScalingGroup& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline AutoScalingGroup& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline AutoScalingGroup& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The EC2 instances associated with the group.</p>
     */
    inline AutoScalingGroup& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the group was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time the group was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time the group was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time the group was created.</p>
     */
    inline AutoScalingGroup& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the group was created.</p>
     */
    inline AutoScalingGroup& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline const Aws::Vector<SuspendedProcess>& GetSuspendedProcesses() const{ return m_suspendedProcesses; }

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline bool SuspendedProcessesHasBeenSet() const { return m_suspendedProcessesHasBeenSet; }

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline void SetSuspendedProcesses(const Aws::Vector<SuspendedProcess>& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses = value; }

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline void SetSuspendedProcesses(Aws::Vector<SuspendedProcess>&& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses = std::move(value); }

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline AutoScalingGroup& WithSuspendedProcesses(const Aws::Vector<SuspendedProcess>& value) { SetSuspendedProcesses(value); return *this;}

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline AutoScalingGroup& WithSuspendedProcesses(Aws::Vector<SuspendedProcess>&& value) { SetSuspendedProcesses(std::move(value)); return *this;}

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline AutoScalingGroup& AddSuspendedProcesses(const SuspendedProcess& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses.push_back(value); return *this; }

    /**
     * <p>The suspended processes associated with the group.</p>
     */
    inline AutoScalingGroup& AddSuspendedProcesses(SuspendedProcess&& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::move(value); }

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline AutoScalingGroup& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline AutoScalingGroup& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the placement group into which to launch your instances, if
     * any.</p>
     */
    inline AutoScalingGroup& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}


    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline bool VPCZoneIdentifierHasBeenSet() const { return m_vPCZoneIdentifierHasBeenSet; }

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline void SetVPCZoneIdentifier(Aws::String&& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = std::move(value); }

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline AutoScalingGroup& WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline AutoScalingGroup& WithVPCZoneIdentifier(Aws::String&& value) { SetVPCZoneIdentifier(std::move(value)); return *this;}

    /**
     * <p>One or more subnet IDs, if applicable, separated by commas.</p>
     */
    inline AutoScalingGroup& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}


    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline const Aws::Vector<EnabledMetric>& GetEnabledMetrics() const{ return m_enabledMetrics; }

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline bool EnabledMetricsHasBeenSet() const { return m_enabledMetricsHasBeenSet; }

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline void SetEnabledMetrics(const Aws::Vector<EnabledMetric>& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics = value; }

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline void SetEnabledMetrics(Aws::Vector<EnabledMetric>&& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics = std::move(value); }

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline AutoScalingGroup& WithEnabledMetrics(const Aws::Vector<EnabledMetric>& value) { SetEnabledMetrics(value); return *this;}

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline AutoScalingGroup& WithEnabledMetrics(Aws::Vector<EnabledMetric>&& value) { SetEnabledMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline AutoScalingGroup& AddEnabledMetrics(const EnabledMetric& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics.push_back(value); return *this; }

    /**
     * <p>The metrics enabled for the group.</p>
     */
    inline AutoScalingGroup& AddEnabledMetrics(EnabledMetric&& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline AutoScalingGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline AutoScalingGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of the group when the <a>DeleteAutoScalingGroup</a>
     * operation is in progress.</p>
     */
    inline AutoScalingGroup& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The tags for the group.</p>
     */
    inline const Aws::Vector<TagDescription>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the group.</p>
     */
    inline void SetTags(const Aws::Vector<TagDescription>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the group.</p>
     */
    inline void SetTags(Aws::Vector<TagDescription>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the group.</p>
     */
    inline AutoScalingGroup& WithTags(const Aws::Vector<TagDescription>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the group.</p>
     */
    inline AutoScalingGroup& WithTags(Aws::Vector<TagDescription>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the group.</p>
     */
    inline AutoScalingGroup& AddTags(const TagDescription& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the group.</p>
     */
    inline AutoScalingGroup& AddTags(TagDescription&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The termination policies for the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }

    /**
     * <p>The termination policies for the group.</p>
     */
    inline bool TerminationPoliciesHasBeenSet() const { return m_terminationPoliciesHasBeenSet; }

    /**
     * <p>The termination policies for the group.</p>
     */
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /**
     * <p>The termination policies for the group.</p>
     */
    inline void SetTerminationPolicies(Aws::Vector<Aws::String>&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = std::move(value); }

    /**
     * <p>The termination policies for the group.</p>
     */
    inline AutoScalingGroup& WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}

    /**
     * <p>The termination policies for the group.</p>
     */
    inline AutoScalingGroup& WithTerminationPolicies(Aws::Vector<Aws::String>&& value) { SetTerminationPolicies(std::move(value)); return *this;}

    /**
     * <p>The termination policies for the group.</p>
     */
    inline AutoScalingGroup& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /**
     * <p>The termination policies for the group.</p>
     */
    inline AutoScalingGroup& AddTerminationPolicies(Aws::String&& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(std::move(value)); return *this; }

    /**
     * <p>The termination policies for the group.</p>
     */
    inline AutoScalingGroup& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }


    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p>
     */
    inline bool GetNewInstancesProtectedFromScaleIn() const{ return m_newInstancesProtectedFromScaleIn; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p>
     */
    inline bool NewInstancesProtectedFromScaleInHasBeenSet() const { return m_newInstancesProtectedFromScaleInHasBeenSet; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p>
     */
    inline void SetNewInstancesProtectedFromScaleIn(bool value) { m_newInstancesProtectedFromScaleInHasBeenSet = true; m_newInstancesProtectedFromScaleIn = value; }

    /**
     * <p>Indicates whether newly launched instances are protected from termination by
     * Amazon EC2 Auto Scaling when scaling in.</p>
     */
    inline AutoScalingGroup& WithNewInstancesProtectedFromScaleIn(bool value) { SetNewInstancesProtectedFromScaleIn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline const Aws::String& GetServiceLinkedRoleARN() const{ return m_serviceLinkedRoleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline bool ServiceLinkedRoleARNHasBeenSet() const { return m_serviceLinkedRoleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline void SetServiceLinkedRoleARN(const Aws::String& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline void SetServiceLinkedRoleARN(Aws::String&& value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline void SetServiceLinkedRoleARN(const char* value) { m_serviceLinkedRoleARNHasBeenSet = true; m_serviceLinkedRoleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline AutoScalingGroup& WithServiceLinkedRoleARN(const Aws::String& value) { SetServiceLinkedRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline AutoScalingGroup& WithServiceLinkedRoleARN(Aws::String&& value) { SetServiceLinkedRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto
     * Scaling group uses to call other Amazon Web Services on your behalf.</p>
     */
    inline AutoScalingGroup& WithServiceLinkedRoleARN(const char* value) { SetServiceLinkedRoleARN(value); return *this;}


    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in
     * service.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline int GetMaxInstanceLifetime() const{ return m_maxInstanceLifetime; }

    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in
     * service.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline bool MaxInstanceLifetimeHasBeenSet() const { return m_maxInstanceLifetimeHasBeenSet; }

    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in
     * service.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline void SetMaxInstanceLifetime(int value) { m_maxInstanceLifetimeHasBeenSet = true; m_maxInstanceLifetime = value; }

    /**
     * <p>The maximum amount of time, in seconds, that an instance can be in
     * service.</p> <p>Valid Range: Minimum value of 0.</p>
     */
    inline AutoScalingGroup& WithMaxInstanceLifetime(int value) { SetMaxInstanceLifetime(value); return *this;}


    /**
     * <p>Indicates whether Capacity Rebalancing is enabled.</p>
     */
    inline bool GetCapacityRebalance() const{ return m_capacityRebalance; }

    /**
     * <p>Indicates whether Capacity Rebalancing is enabled.</p>
     */
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }

    /**
     * <p>Indicates whether Capacity Rebalancing is enabled.</p>
     */
    inline void SetCapacityRebalance(bool value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = value; }

    /**
     * <p>Indicates whether Capacity Rebalancing is enabled.</p>
     */
    inline AutoScalingGroup& WithCapacityRebalance(bool value) { SetCapacityRebalance(value); return *this;}


    /**
     * <p>The warm pool for the group.</p>
     */
    inline const WarmPoolConfiguration& GetWarmPoolConfiguration() const{ return m_warmPoolConfiguration; }

    /**
     * <p>The warm pool for the group.</p>
     */
    inline bool WarmPoolConfigurationHasBeenSet() const { return m_warmPoolConfigurationHasBeenSet; }

    /**
     * <p>The warm pool for the group.</p>
     */
    inline void SetWarmPoolConfiguration(const WarmPoolConfiguration& value) { m_warmPoolConfigurationHasBeenSet = true; m_warmPoolConfiguration = value; }

    /**
     * <p>The warm pool for the group.</p>
     */
    inline void SetWarmPoolConfiguration(WarmPoolConfiguration&& value) { m_warmPoolConfigurationHasBeenSet = true; m_warmPoolConfiguration = std::move(value); }

    /**
     * <p>The warm pool for the group.</p>
     */
    inline AutoScalingGroup& WithWarmPoolConfiguration(const WarmPoolConfiguration& value) { SetWarmPoolConfiguration(value); return *this;}

    /**
     * <p>The warm pool for the group.</p>
     */
    inline AutoScalingGroup& WithWarmPoolConfiguration(WarmPoolConfiguration&& value) { SetWarmPoolConfiguration(std::move(value)); return *this;}


    /**
     * <p>The current size of the warm pool.</p>
     */
    inline int GetWarmPoolSize() const{ return m_warmPoolSize; }

    /**
     * <p>The current size of the warm pool.</p>
     */
    inline bool WarmPoolSizeHasBeenSet() const { return m_warmPoolSizeHasBeenSet; }

    /**
     * <p>The current size of the warm pool.</p>
     */
    inline void SetWarmPoolSize(int value) { m_warmPoolSizeHasBeenSet = true; m_warmPoolSize = value; }

    /**
     * <p>The current size of the warm pool.</p>
     */
    inline AutoScalingGroup& WithWarmPoolSize(int value) { SetWarmPoolSize(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p>Reserved.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline AutoScalingGroup& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline AutoScalingGroup& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline AutoScalingGroup& WithContext(const char* value) { SetContext(value); return *this;}


    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline const Aws::String& GetDesiredCapacityType() const{ return m_desiredCapacityType; }

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline bool DesiredCapacityTypeHasBeenSet() const { return m_desiredCapacityTypeHasBeenSet; }

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline void SetDesiredCapacityType(const Aws::String& value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType = value; }

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline void SetDesiredCapacityType(Aws::String&& value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType = std::move(value); }

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline void SetDesiredCapacityType(const char* value) { m_desiredCapacityTypeHasBeenSet = true; m_desiredCapacityType.assign(value); }

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline AutoScalingGroup& WithDesiredCapacityType(const Aws::String& value) { SetDesiredCapacityType(value); return *this;}

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline AutoScalingGroup& WithDesiredCapacityType(Aws::String&& value) { SetDesiredCapacityType(std::move(value)); return *this;}

    /**
     * <p>The unit of measurement for the value specified for desired capacity. Amazon
     * EC2 Auto Scaling supports <code>DesiredCapacityType</code> for attribute-based
     * instance type selection only.</p>
     */
    inline AutoScalingGroup& WithDesiredCapacityType(const char* value) { SetDesiredCapacityType(value); return *this;}


    /**
     * <p>The duration of the default instance warmup, in seconds.</p>
     */
    inline int GetDefaultInstanceWarmup() const{ return m_defaultInstanceWarmup; }

    /**
     * <p>The duration of the default instance warmup, in seconds.</p>
     */
    inline bool DefaultInstanceWarmupHasBeenSet() const { return m_defaultInstanceWarmupHasBeenSet; }

    /**
     * <p>The duration of the default instance warmup, in seconds.</p>
     */
    inline void SetDefaultInstanceWarmup(int value) { m_defaultInstanceWarmupHasBeenSet = true; m_defaultInstanceWarmup = value; }

    /**
     * <p>The duration of the default instance warmup, in seconds.</p>
     */
    inline AutoScalingGroup& WithDefaultInstanceWarmup(int value) { SetDefaultInstanceWarmup(value); return *this;}


    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline const Aws::Vector<TrafficSourceIdentifier>& GetTrafficSources() const{ return m_trafficSources; }

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline bool TrafficSourcesHasBeenSet() const { return m_trafficSourcesHasBeenSet; }

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline void SetTrafficSources(const Aws::Vector<TrafficSourceIdentifier>& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = value; }

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline void SetTrafficSources(Aws::Vector<TrafficSourceIdentifier>&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = std::move(value); }

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline AutoScalingGroup& WithTrafficSources(const Aws::Vector<TrafficSourceIdentifier>& value) { SetTrafficSources(value); return *this;}

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline AutoScalingGroup& WithTrafficSources(Aws::Vector<TrafficSourceIdentifier>&& value) { SetTrafficSources(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline AutoScalingGroup& AddTrafficSources(const TrafficSourceIdentifier& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of the traffic sources.</p>
     */
    inline AutoScalingGroup& AddTrafficSources(TrafficSourceIdentifier&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.push_back(std::move(value)); return *this; }

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

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    int m_predictedCapacity;
    bool m_predictedCapacityHasBeenSet = false;

    int m_defaultCooldown;
    bool m_defaultCooldownHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetGroupARNs;
    bool m_targetGroupARNsHasBeenSet = false;

    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet = false;

    int m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet = false;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
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

    bool m_newInstancesProtectedFromScaleIn;
    bool m_newInstancesProtectedFromScaleInHasBeenSet = false;

    Aws::String m_serviceLinkedRoleARN;
    bool m_serviceLinkedRoleARNHasBeenSet = false;

    int m_maxInstanceLifetime;
    bool m_maxInstanceLifetimeHasBeenSet = false;

    bool m_capacityRebalance;
    bool m_capacityRebalanceHasBeenSet = false;

    WarmPoolConfiguration m_warmPoolConfiguration;
    bool m_warmPoolConfigurationHasBeenSet = false;

    int m_warmPoolSize;
    bool m_warmPoolSizeHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_desiredCapacityType;
    bool m_desiredCapacityTypeHasBeenSet = false;

    int m_defaultInstanceWarmup;
    bool m_defaultInstanceWarmupHasBeenSet = false;

    Aws::Vector<TrafficSourceIdentifier> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
