/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribePublicIpv4PoolsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribePublicIpv4PoolsRequest::DescribePublicIpv4PoolsRequest() : 
    m_poolIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribePublicIpv4PoolsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePublicIpv4Pools&";
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


void  DescribePublicIpv4PoolsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
