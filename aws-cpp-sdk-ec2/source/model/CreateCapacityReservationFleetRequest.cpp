/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateCapacityReservationFleetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateCapacityReservationFleetRequest::CreateCapacityReservationFleetRequest() : 
    m_allocationStrategyHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_instanceTypeSpecificationsHasBeenSet(false),
    m_tenancy(FleetCapacityReservationTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_totalTargetCapacity(0),
    m_totalTargetCapacityHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_instanceMatchCriteria(FleetInstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateCapacityReservationFleetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCapacityReservationFleet&";
  if(m_allocationStrategyHasBeenSet)
  {
    ss << "AllocationStrategy=" << StringUtils::URLEncode(m_allocationStrategy.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceTypeSpecificationsHasBeenSet)
  {
    unsigned instanceTypeSpecificationsCount = 1;
    for(auto& item : m_instanceTypeSpecifications)
    {
      item.OutputToStream(ss, "InstanceTypeSpecification.", instanceTypeSpecificationsCount, "");
      instanceTypeSpecificationsCount++;
    }
  }

  if(m_tenancyHasBeenSet)
  {
    ss << "Tenancy=" << FleetCapacityReservationTenancyMapper::GetNameForFleetCapacityReservationTenancy(m_tenancy) << "&";
  }

  if(m_totalTargetCapacityHasBeenSet)
  {
    ss << "TotalTargetCapacity=" << m_totalTargetCapacity << "&";
  }

  if(m_endDateHasBeenSet)
  {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceMatchCriteriaHasBeenSet)
  {
    ss << "InstanceMatchCriteria=" << FleetInstanceMatchCriteriaMapper::GetNameForFleetInstanceMatchCriteria(m_instanceMatchCriteria) << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateCapacityReservationFleetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
