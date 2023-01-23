/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyCapacityReservationFleetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyCapacityReservationFleetRequest::ModifyCapacityReservationFleetRequest() : 
    m_capacityReservationFleetIdHasBeenSet(false),
    m_totalTargetCapacity(0),
    m_totalTargetCapacityHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_removeEndDate(false),
    m_removeEndDateHasBeenSet(false)
{
}

Aws::String ModifyCapacityReservationFleetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCapacityReservationFleet&";
  if(m_capacityReservationFleetIdHasBeenSet)
  {
    ss << "CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }

  if(m_totalTargetCapacityHasBeenSet)
  {
    ss << "TotalTargetCapacity=" << m_totalTargetCapacity << "&";
  }

  if(m_endDateHasBeenSet)
  {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_removeEndDateHasBeenSet)
  {
    ss << "RemoveEndDate=" << std::boolalpha << m_removeEndDate << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyCapacityReservationFleetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
