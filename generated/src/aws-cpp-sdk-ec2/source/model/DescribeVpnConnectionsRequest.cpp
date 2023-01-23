/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpnConnectionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeVpnConnectionsRequest::DescribeVpnConnectionsRequest() : 
    m_filtersHasBeenSet(false),
    m_vpnConnectionIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeVpnConnectionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeVpnConnections&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_vpnConnectionIdsHasBeenSet)
  {
    unsigned vpnConnectionIdsCount = 1;
    for(auto& item : m_vpnConnectionIds)
    {
      ss << "VpnConnectionId." << vpnConnectionIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpnConnectionIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeVpnConnectionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
