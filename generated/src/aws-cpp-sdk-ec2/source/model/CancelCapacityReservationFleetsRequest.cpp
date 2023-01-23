/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelCapacityReservationFleetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelCapacityReservationFleetsRequest::CancelCapacityReservationFleetsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_capacityReservationFleetIdsHasBeenSet(false)
{
}

Aws::String CancelCapacityReservationFleetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelCapacityReservationFleets&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_capacityReservationFleetIdsHasBeenSet)
  {
    unsigned capacityReservationFleetIdsCount = 1;
    for(auto& item : m_capacityReservationFleetIds)
    {
      ss << "CapacityReservationFleetId." << capacityReservationFleetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      capacityReservationFleetIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelCapacityReservationFleetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
