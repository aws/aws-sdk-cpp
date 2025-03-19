/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RequestSpotInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String RequestSpotInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RequestSpotInstances&";
  if(m_launchSpecificationHasBeenSet)
  {
    m_launchSpecification.OutputToStream(ss, "LaunchSpecification");
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
    ss << "InstanceInterruptionBehavior=" << StringUtils::URLEncode(InstanceInterruptionBehaviorMapper::GetNameForInstanceInterruptionBehavior(m_instanceInterruptionBehavior)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_spotPriceHasBeenSet)
  {
    ss << "SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(SpotInstanceTypeMapper::GetNameForSpotInstanceType(m_type)) << "&";
  }

  if(m_validFromHasBeenSet)
  {
    ss << "ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
    ss << "ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_launchGroupHasBeenSet)
  {
    ss << "LaunchGroup=" << StringUtils::URLEncode(m_launchGroup.c_str()) << "&";
  }

  if(m_availabilityZoneGroupHasBeenSet)
  {
    ss << "AvailabilityZoneGroup=" << StringUtils::URLEncode(m_availabilityZoneGroup.c_str()) << "&";
  }

  if(m_blockDurationMinutesHasBeenSet)
  {
    ss << "BlockDurationMinutes=" << m_blockDurationMinutes << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RequestSpotInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
