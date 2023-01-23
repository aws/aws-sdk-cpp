/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotInstanceRequestsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelSpotInstanceRequestsRequest::CancelSpotInstanceRequestsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_spotInstanceRequestIdsHasBeenSet(false)
{
}

Aws::String CancelSpotInstanceRequestsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelSpotInstanceRequests&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_spotInstanceRequestIdsHasBeenSet)
  {
    unsigned spotInstanceRequestIdsCount = 1;
    for(auto& item : m_spotInstanceRequestIds)
    {
      ss << "SpotInstanceRequestId." << spotInstanceRequestIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      spotInstanceRequestIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelSpotInstanceRequestsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
