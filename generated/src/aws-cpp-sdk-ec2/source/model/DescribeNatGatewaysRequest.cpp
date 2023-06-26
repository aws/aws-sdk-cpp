/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeNatGatewaysRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeNatGatewaysRequest::DescribeNatGatewaysRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_natGatewayIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeNatGatewaysRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNatGateways&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_filterHasBeenSet)
  {
    unsigned filterCount = 1;
    for(auto& item : m_filter)
    {
      item.OutputToStream(ss, "Filter.", filterCount, "");
      filterCount++;
    }
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_natGatewayIdsHasBeenSet)
  {
    unsigned natGatewayIdsCount = 1;
    for(auto& item : m_natGatewayIds)
    {
      ss << "NatGatewayId." << natGatewayIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      natGatewayIdsCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeNatGatewaysRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
