/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CreateAutoScalingGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_defaultCooldown(0),
    m_defaultCooldownHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_loadBalancerNamesHasBeenSet(false),
    m_targetGroupARNsHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_newInstancesProtectedFromScaleIn(false),
    m_newInstancesProtectedFromScaleInHasBeenSet(false),
    m_capacityRebalance(false),
    m_capacityRebalanceHasBeenSet(false),
    m_lifecycleHookSpecificationListHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serviceLinkedRoleARNHasBeenSet(false),
    m_maxInstanceLifetime(0),
    m_maxInstanceLifetimeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_desiredCapacityTypeHasBeenSet(false),
    m_defaultInstanceWarmup(0),
    m_defaultInstanceWarmupHasBeenSet(false),
    m_trafficSourcesHasBeenSet(false)
{
}

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
    unsigned availabilityZonesCount = 1;
    for(auto& item : m_availabilityZones)
    {
      ss << "AvailabilityZones.member." << availabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZonesCount++;
    }
  }

  if(m_loadBalancerNamesHasBeenSet)
  {
    unsigned loadBalancerNamesCount = 1;
    for(auto& item : m_loadBalancerNames)
    {
      ss << "LoadBalancerNames.member." << loadBalancerNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      loadBalancerNamesCount++;
    }
  }

  if(m_targetGroupARNsHasBeenSet)
  {
    unsigned targetGroupARNsCount = 1;
    for(auto& item : m_targetGroupARNs)
    {
      ss << "TargetGroupARNs.member." << targetGroupARNsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      targetGroupARNsCount++;
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
    unsigned terminationPoliciesCount = 1;
    for(auto& item : m_terminationPolicies)
    {
      ss << "TerminationPolicies.member." << terminationPoliciesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      terminationPoliciesCount++;
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
    unsigned lifecycleHookSpecificationListCount = 1;
    for(auto& item : m_lifecycleHookSpecificationList)
    {
      item.OutputToStream(ss, "LifecycleHookSpecificationList.member.", lifecycleHookSpecificationListCount, "");
      lifecycleHookSpecificationListCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
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
    unsigned trafficSourcesCount = 1;
    for(auto& item : m_trafficSources)
    {
      item.OutputToStream(ss, "TrafficSources.member.", trafficSourcesCount, "");
      trafficSourcesCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  CreateAutoScalingGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
