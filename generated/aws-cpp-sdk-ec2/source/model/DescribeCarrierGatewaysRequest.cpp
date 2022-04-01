/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeCarrierGatewaysRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeCarrierGatewaysRequest::DescribeCarrierGatewaysRequest() : 
    m_carrierGatewayIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeCarrierGatewaysRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeCarrierGateways&";
  if(m_carrierGatewayIdsHasBeenSet)
  {
    unsigned carrierGatewayIdsCount = 1;
    for(auto& item : m_carrierGatewayIds)
    {
      ss << "CarrierGatewayId." << carrierGatewayIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      carrierGatewayIdsCount++;
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


void  DescribeCarrierGatewaysRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
