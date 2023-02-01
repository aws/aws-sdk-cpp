/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVerifiedAccessEndpointsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVerifiedAccessEndpointsRequest::DescribeVerifiedAccessEndpointsRequest() : 
    m_verifiedAccessEndpointIdsHasBeenSet(false),
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeVerifiedAccessEndpointsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVerifiedAccessEndpoints&";
  if(m_verifiedAccessEndpointIdsHasBeenSet)
  {
    unsigned verifiedAccessEndpointIdsCount = 1;
    for(auto& item : m_verifiedAccessEndpointIds)
    {
      ss << "VerifiedAccessEndpointId." << verifiedAccessEndpointIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      verifiedAccessEndpointIdsCount++;
    }
  }

  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
    ss << "VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_verifiedAccessGroupIdHasBeenSet)
  {
    ss << "VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVerifiedAccessEndpointsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
