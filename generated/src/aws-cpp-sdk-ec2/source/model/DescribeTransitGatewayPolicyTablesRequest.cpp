﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeTransitGatewayPolicyTablesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeTransitGatewayPolicyTablesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTransitGatewayPolicyTables&";
  if(m_transitGatewayPolicyTableIdsHasBeenSet)
  {
    unsigned transitGatewayPolicyTableIdsCount = 1;
    for(auto& item : m_transitGatewayPolicyTableIds)
    {
      ss << "TransitGatewayPolicyTableIds." << transitGatewayPolicyTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      transitGatewayPolicyTableIdsCount++;
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


void  DescribeTransitGatewayPolicyTablesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
