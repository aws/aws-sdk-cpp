/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeLocalGatewayRouteTablesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeLocalGatewayRouteTablesRequest::DescribeLocalGatewayRouteTablesRequest() : 
    m_localGatewayRouteTableIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeLocalGatewayRouteTablesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLocalGatewayRouteTables&";
  if(m_localGatewayRouteTableIdsHasBeenSet)
  {
    unsigned localGatewayRouteTableIdsCount = 1;
    for(auto& item : m_localGatewayRouteTableIds)
    {
      ss << "LocalGatewayRouteTableId." << localGatewayRouteTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      localGatewayRouteTableIdsCount++;
    }
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

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeLocalGatewayRouteTablesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
