/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeNetworkInterfacePermissionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeNetworkInterfacePermissionsRequest::DescribeNetworkInterfacePermissionsRequest() : 
    m_networkInterfacePermissionIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeNetworkInterfacePermissionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNetworkInterfacePermissions&";
  if(m_networkInterfacePermissionIdsHasBeenSet)
  {
    unsigned networkInterfacePermissionIdsCount = 1;
    for(auto& item : m_networkInterfacePermissionIds)
    {
      ss << "NetworkInterfacePermissionId." << networkInterfacePermissionIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkInterfacePermissionIdsCount++;
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

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeNetworkInterfacePermissionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
