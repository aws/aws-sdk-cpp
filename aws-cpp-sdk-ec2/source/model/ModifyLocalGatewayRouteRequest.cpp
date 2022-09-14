/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyLocalGatewayRouteRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyLocalGatewayRouteRequest::ModifyLocalGatewayRouteRequest() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayVirtualInterfaceGroupIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ModifyLocalGatewayRouteRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyLocalGatewayRoute&";
  if(m_destinationCidrBlockHasBeenSet)
  {
    ss << "DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_localGatewayRouteTableIdHasBeenSet)
  {
    ss << "LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }

  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
    ss << "LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyLocalGatewayRouteRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
