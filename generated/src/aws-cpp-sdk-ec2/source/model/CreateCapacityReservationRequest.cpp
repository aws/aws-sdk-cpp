/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateCapacityReservationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateCapacityReservationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCapacityReservation&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instancePlatformHasBeenSet)
  {
    ss << "InstancePlatform=" << StringUtils::URLEncode(CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform)) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
    ss << "AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
    ss << "Tenancy=" << StringUtils::URLEncode(CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy)) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
    ss << "EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_ephemeralStorageHasBeenSet)
  {
    ss << "EphemeralStorage=" << std::boolalpha << m_ephemeralStorage << "&";
  }

  if(m_endDateHasBeenSet)
  {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateTypeHasBeenSet)
  {
    ss << "EndDateType=" << StringUtils::URLEncode(EndDateTypeMapper::GetNameForEndDateType(m_endDateType)) << "&";
  }

  if(m_instanceMatchCriteriaHasBeenSet)
  {
    ss << "InstanceMatchCriteria=" << StringUtils::URLEncode(InstanceMatchCriteriaMapper::GetNameForInstanceMatchCriteria(m_instanceMatchCriteria)) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecifications.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
    ss << "OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_placementGroupArnHasBeenSet)
  {
    ss << "PlacementGroupArn=" << StringUtils::URLEncode(m_placementGroupArn.c_str()) << "&";
  }

  if(m_startDateHasBeenSet)
  {
    ss << "StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_commitmentDurationHasBeenSet)
  {
    ss << "CommitmentDuration=" << m_commitmentDuration << "&";
  }

  if(m_deliveryPreferenceHasBeenSet)
  {
    ss << "DeliveryPreference=" << StringUtils::URLEncode(CapacityReservationDeliveryPreferenceMapper::GetNameForCapacityReservationDeliveryPreference(m_deliveryPreference)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateCapacityReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
