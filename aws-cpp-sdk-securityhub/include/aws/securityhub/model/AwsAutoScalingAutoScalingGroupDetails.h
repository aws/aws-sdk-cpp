/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an auto scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingAutoScalingGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails();
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch configuration.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}


    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline bool LoadBalancerNamesHasBeenSet() const { return m_loadBalancerNamesHasBeenSet; }

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline void SetLoadBalancerNames(Aws::Vector<Aws::String>&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = std::move(value); }

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLoadBalancerNames(Aws::Vector<Aws::String>&& value) { SetLoadBalancerNames(std::move(value)); return *this;}

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(Aws::String&& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of load balancers associated with the group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }


    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline bool HealthCheckTypeHasBeenSet() const { return m_healthCheckTypeHasBeenSet; }

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = value; }

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline void SetHealthCheckType(Aws::String&& value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType = std::move(value); }

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline void SetHealthCheckType(const char* value) { m_healthCheckTypeHasBeenSet = true; m_healthCheckType.assign(value); }

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(Aws::String&& value) { SetHealthCheckType(std::move(value)); return *this;}

    /**
     * <p>The service to use for the health checks. Valid values are <code>EC2</code>
     * or <code>ELB</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before it
     * checks the health status of an EC2 instance that has come into service.</p>
     */
    inline int GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }

    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before it
     * checks the health status of an EC2 instance that has come into service.</p>
     */
    inline bool HealthCheckGracePeriodHasBeenSet() const { return m_healthCheckGracePeriodHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before it
     * checks the health status of an EC2 instance that has come into service.</p>
     */
    inline void SetHealthCheckGracePeriod(int value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /**
     * <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before it
     * checks the health status of an EC2 instance that has come into service.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithHealthCheckGracePeriod(int value) { SetHealthCheckGracePeriod(value); return *this;}


    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the auto scaling group was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& GetMixedInstancesPolicy() const{ return m_mixedInstancesPolicy; }

    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline bool MixedInstancesPolicyHasBeenSet() const { return m_mixedInstancesPolicyHasBeenSet; }

    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline void SetMixedInstancesPolicy(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = value; }

    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline void SetMixedInstancesPolicy(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails&& value) { m_mixedInstancesPolicyHasBeenSet = true; m_mixedInstancesPolicy = std::move(value); }

    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithMixedInstancesPolicy(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& value) { SetMixedInstancesPolicy(value); return *this;}

    /**
     * <p>The mixed instances policy for the automatic scaling group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithMixedInstancesPolicy(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails&& value) { SetMixedInstancesPolicy(std::move(value)); return *this;}


    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithAvailabilityZones(const Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithAvailabilityZones(Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& AddAvailabilityZones(const AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones for the automatic scaling group.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& AddAvailabilityZones(AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch template to use.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template to use.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template to use.</p>
     */
    inline void SetLaunchTemplate(const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template to use.</p>
     */
    inline void SetLaunchTemplate(AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template to use.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchTemplate(const AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template to use.</p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithLaunchTemplate(AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>Indicates whether capacity rebalancing is enabled. </p>
     */
    inline bool GetCapacityRebalance() const{ return m_capacityRebalance; }

    /**
     * <p>Indicates whether capacity rebalancing is enabled. </p>
     */
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }

    /**
     * <p>Indicates whether capacity rebalancing is enabled. </p>
     */
    inline void SetCapacityRebalance(bool value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = value; }

    /**
     * <p>Indicates whether capacity rebalancing is enabled. </p>
     */
    inline AwsAutoScalingAutoScalingGroupDetails& WithCapacityRebalance(bool value) { SetCapacityRebalance(value); return *this;}

  private:

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet = false;

    Aws::String m_healthCheckType;
    bool m_healthCheckTypeHasBeenSet = false;

    int m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails m_mixedInstancesPolicy;
    bool m_mixedInstancesPolicyHasBeenSet = false;

    Aws::Vector<AwsAutoScalingAutoScalingGroupAvailabilityZonesListDetails> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    AwsAutoScalingAutoScalingGroupLaunchTemplateLaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    bool m_capacityRebalance;
    bool m_capacityRebalanceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
