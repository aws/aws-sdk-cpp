/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeIpv6PoolsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeIpv6PoolsRequest::DescribeIpv6PoolsRequest() : 
    m_poolIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeIpv6PoolsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeIpv6Pools&";
  if(m_poolIdsHasBeenSet)
  {
    unsigned poolIdsCount = 1;
    for(auto& item : m_poolIds)
    {
      ss << "PoolId." << poolIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      poolIdsCount++;
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeIpv6PoolsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
