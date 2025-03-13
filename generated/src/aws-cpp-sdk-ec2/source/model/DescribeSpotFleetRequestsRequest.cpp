/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotFleetRequestsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeSpotFleetRequestsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSpotFleetRequests&";
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

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeSpotFleetRequestsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
