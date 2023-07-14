/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest() : 
    m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations&";
  if(m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdsHasBeenSet)
  {
    unsigned localGatewayRouteTableVirtualInterfaceGroupAssociationIdsCount = 1;
    for(auto& item : m_localGatewayRouteTableVirtualInterfaceGroupAssociationIds)
    {
      ss << "LocalGatewayRouteTableVirtualInterfaceGroupAssociationId." << localGatewayRouteTableVirtualInterfaceGroupAssociationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      localGatewayRouteTableVirtualInterfaceGroupAssociationIdsCount++;
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


void  DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
