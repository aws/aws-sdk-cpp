/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteFleetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteFleetsRequest::DeleteFleetsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_fleetIdsHasBeenSet(false),
    m_terminateInstances(false),
    m_terminateInstancesHasBeenSet(false)
{
}

Aws::String DeleteFleetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteFleets&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_fleetIdsHasBeenSet)
  {
    unsigned fleetIdsCount = 1;
    for(auto& item : m_fleetIds)
    {
      ss << "FleetId." << fleetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      fleetIdsCount++;
    }
  }

  if(m_terminateInstancesHasBeenSet)
  {
    ss << "TerminateInstances=" << std::boolalpha << m_terminateInstances << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteFleetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
