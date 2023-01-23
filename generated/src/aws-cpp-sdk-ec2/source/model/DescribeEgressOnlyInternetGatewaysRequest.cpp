/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeEgressOnlyInternetGatewaysRequest::DescribeEgressOnlyInternetGatewaysRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_egressOnlyInternetGatewayIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeEgressOnlyInternetGatewaysRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEgressOnlyInternetGateways&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_egressOnlyInternetGatewayIdsHasBeenSet)
  {
    unsigned egressOnlyInternetGatewayIdsCount = 1;
    for(auto& item : m_egressOnlyInternetGatewayIds)
    {
      ss << "EgressOnlyInternetGatewayId." << egressOnlyInternetGatewayIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      egressOnlyInternetGatewayIdsCount++;
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


void  DescribeEgressOnlyInternetGatewaysRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
