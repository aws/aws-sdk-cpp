/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpnGatewaysRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVpnGatewaysRequest::DescribeVpnGatewaysRequest() : 
    m_filtersHasBeenSet(false),
    m_vpnGatewayIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeVpnGatewaysRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVpnGateways&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_vpnGatewayIdsHasBeenSet)
  {
    unsigned vpnGatewayIdsCount = 1;
    for(auto& item : m_vpnGatewayIds)
    {
      ss << "VpnGatewayId." << vpnGatewayIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpnGatewayIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVpnGatewaysRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
