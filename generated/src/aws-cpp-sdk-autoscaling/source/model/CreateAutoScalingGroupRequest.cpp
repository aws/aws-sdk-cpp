/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CreateAutoScalingGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String CreateAutoScalingGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateAutoScalingGroup&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_launchConfigurationNameHasBeenSet)
  {
    ss << "LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  if(m_launchTemplateHasBeenSet)
  {
    m_launchTemplate.OutputToStream(ss, "LaunchTemplate");
  }

  if(m_mixedInstancesPolicyHasBeenSet)
  {
    m_mixedInstancesPolicy.OutputToStream(ss, "MixedInstancesPolicy");
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_minSizeHasBeenSet)
  {
    ss << "MinSize=" << m_minSize << "&";
  }

  if(m_maxSizeHasBeenSet)
  {
    ss << "MaxSize=" << m_maxSize << "&";
  }

  if(m_desiredCapacityHasBeenSet)
  {
    ss << "DesiredCapacity=" << m_desiredCapacity << "&";
  }

  if(m_defaultCooldownHasBeenSet)
  {
    ss << "DefaultCooldown=" << m_defaultCooldown << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
    if (m_availabilityZones.empty())
    {
      ss << "AvailabilityZones=&";
    }
    else
    {
      unsigned availabilityZonesCount = 1;
      for(auto& item : m_availabilityZones)
      {
        ss << "AvailabilityZones.member." << availabilityZonesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        availabilityZonesCount++;
      }
    }
  }

  if(m_loadBalancerNamesHasBeenSet)
  {
    if (m_loadBalancerNames.empty())
    {
      ss << "LoadBalancerNames=&";
    }
    else
    {
      unsigned loadBalancerNamesCount = 1;
      for(auto& item : m_loadBalancerNames)
      {
        ss << "LoadBalancerNames.member." << loadBalancerNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        loadBalancerNamesCount++;
      }
    }
  }

  if(m_targetGroupARNsHasBeenSet)
  {
    if (m_targetGroupARNs.empty())
    {
      ss << "TargetGroupARNs=&";
    }
    else
    {
      unsigned targetGroupARNsCount = 1;
      for(auto& item : m_targetGroupARNs)
      {
        ss << "TargetGroupARNs.member." << targetGroupARNsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        targetGroupARNsCount++;
      }
    }
  }

  if(m_healthCheckTypeHasBeenSet)
  {
    ss << "HealthCheckType=" << StringUtils::URLEncode(m_healthCheckType.c_str()) << "&";
  }

  if(m_healthCheckGracePeriodHasBeenSet)
  {
    ss << "HealthCheckGracePeriod=" << m_healthCheckGracePeriod << "&";
  }

  if(m_placementGroupHasBeenSet)
  {
    ss << "PlacementGroup=" << StringUtils::URLEncode(m_placementGroup.c_str()) << "&";
  }

  if(m_vPCZoneIdentifierHasBeenSet)
  {
    ss << "VPCZoneIdentifier=" << StringUtils::URLEncode(m_vPCZoneIdentifier.c_str()) << "&";
  }

  if(m_terminationPoliciesHasBeenSet)
  {
    if (m_terminationPolicies.empty())
    {
      ss << "TerminationPolicies=&";
    }
    else
    {
      unsigned terminationPoliciesCount = 1;
      for(auto& item : m_terminationPolicies)
      {
        ss << "TerminationPolicies.member." << terminationPoliciesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        terminationPoliciesCount++;
      }
    }
  }

  if(m_newInstancesProtectedFromScaleInHasBeenSet)
  {
    ss << "NewInstancesProtectedFromScaleIn=" << std::boolalpha << m_newInstancesProtectedFromScaleIn << "&";
  }

  if(m_capacityRebalanceHasBeenSet)
  {
    ss << "CapacityRebalance=" << std::boolalpha << m_capacityRebalance << "&";
  }

  if(m_lifecycleHookSpecificationListHasBeenSet)
  {
    if (m_lifecycleHookSpecificationList.empty())
    {
      ss << "LifecycleHookSpecificationList=&";
    }
    else
    {
      unsigned lifecycleHookSpecificationListCount = 1;
      for(auto& item : m_lifecycleHookSpecificationList)
      {
        item.OutputToStream(ss, "LifecycleHookSpecificationList.member.", lifecycleHookSpecificationListCount, "");
        lifecycleHookSpecificationListCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_serviceLinkedRoleARNHasBeenSet)
  {
    ss << "ServiceLinkedRoleARN=" << StringUtils::URLEncode(m_serviceLinkedRoleARN.c_str()) << "&";
  }

  if(m_maxInstanceLifetimeHasBeenSet)
  {
    ss << "MaxInstanceLifetime=" << m_maxInstanceLifetime << "&";
  }

  if(m_contextHasBeenSet)
  {
    ss << "Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }

  if(m_desiredCapacityTypeHasBeenSet)
  {
    ss << "DesiredCapacityType=" << StringUtils::URLEncode(m_desiredCapacityType.c_str()) << "&";
  }

  if(m_defaultInstanceWarmupHasBeenSet)
  {
    ss << "DefaultInstanceWarmup=" << m_defaultInstanceWarmup << "&";
  }

  if(m_trafficSourcesHasBeenSet)
  {
    if (m_trafficSources.empty())
    {
      ss << "TrafficSources=&";
    }
    else
    {
      unsigned trafficSourcesCount = 1;
      for(auto& item : m_trafficSources)
      {
        item.OutputToStream(ss, "TrafficSources.member.", trafficSourcesCount, "");
        trafficSourcesCount++;
      }
    }
  }

  if(m_instanceMaintenancePolicyHasBeenSet)
  {
    m_instanceMaintenancePolicy.OutputToStream(ss, "InstanceMaintenancePolicy");
  }

  if(m_availabilityZoneDistributionHasBeenSet)
  {
    m_availabilityZoneDistribution.OutputToStream(ss, "AvailabilityZoneDistribution");
  }

  if(m_availabilityZoneImpairmentPolicyHasBeenSet)
  {
    m_availabilityZoneImpairmentPolicy.OutputToStream(ss, "AvailabilityZoneImpairmentPolicy");
  }

  if(m_skipZonalShiftValidationHasBeenSet)
  {
    ss << "SkipZonalShiftValidation=" << std::boolalpha << m_skipZonalShiftValidation << "&";
  }

  if(m_capacityReservationSpecificationHasBeenSet)
  {
    m_capacityReservationSpecification.OutputToStream(ss, "CapacityReservationSpecification");
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  CreateAutoScalingGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
