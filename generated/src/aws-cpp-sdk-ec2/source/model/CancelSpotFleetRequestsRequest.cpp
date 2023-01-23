/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotFleetRequestsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelSpotFleetRequestsRequest::CancelSpotFleetRequestsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_spotFleetRequestIdsHasBeenSet(false),
    m_terminateInstances(false),
    m_terminateInstancesHasBeenSet(false)
{
}

Aws::String CancelSpotFleetRequestsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelSpotFleetRequests&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_spotFleetRequestIdsHasBeenSet)
  {
    unsigned spotFleetRequestIdsCount = 1;
    for(auto& item : m_spotFleetRequestIds)
    {
      ss << "SpotFleetRequestId." << spotFleetRequestIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      spotFleetRequestIdsCount++;
    }
  }

  if(m_terminateInstancesHasBeenSet)
  {
    ss << "TerminateInstances=" << std::boolalpha << m_terminateInstances << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelSpotFleetRequestsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
