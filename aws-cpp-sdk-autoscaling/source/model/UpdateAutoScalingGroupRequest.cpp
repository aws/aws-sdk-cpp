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
#include <aws/autoscaling/model/UpdateAutoScalingGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

UpdateAutoScalingGroupRequest::UpdateAutoScalingGroupRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_defaultCooldown(0),
    m_defaultCooldownHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_newInstancesProtectedFromScaleIn(false),
    m_newInstancesProtectedFromScaleInHasBeenSet(false)
{
}

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
    ss << "NewInstancesProtectedFromScaleIn=" << m_newInstancesProtectedFromScaleIn << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

