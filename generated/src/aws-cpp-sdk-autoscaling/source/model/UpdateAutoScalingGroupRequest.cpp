/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/UpdateAutoScalingGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String UpdateAutoScalingGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateAutoScalingGroup&";
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

  if(m_serviceLinkedRoleARNHasBeenSet)
  {
    ss << "ServiceLinkedRoleARN=" << StringUtils::URLEncode(m_serviceLinkedRoleARN.c_str()) << "&";
  }

  if(m_maxInstanceLifetimeHasBeenSet)
  {
    ss << "MaxInstanceLifetime=" << m_maxInstanceLifetime << "&";
  }

  if(m_capacityRebalanceHasBeenSet)
  {
    ss << "CapacityRebalance=" << std::boolalpha << m_capacityRebalance << "&";
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


void  UpdateAutoScalingGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
