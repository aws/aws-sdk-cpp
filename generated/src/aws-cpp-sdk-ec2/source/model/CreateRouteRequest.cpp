/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateRouteRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateRouteRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateRoute&";
  if(m_destinationPrefixListIdHasBeenSet)
  {
    ss << "DestinationPrefixListId=" << StringUtils::URLEncode(m_destinationPrefixListId.c_str()) << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
    ss << "VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
    ss << "TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_localGatewayIdHasBeenSet)
  {
    ss << "LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_carrierGatewayIdHasBeenSet)
  {
    ss << "CarrierGatewayId=" << StringUtils::URLEncode(m_carrierGatewayId.c_str()) << "&";
  }

  if(m_coreNetworkArnHasBeenSet)
  {
    ss << "CoreNetworkArn=" << StringUtils::URLEncode(m_coreNetworkArn.c_str()) << "&";
  }

  if(m_odbNetworkArnHasBeenSet)
  {
    ss << "OdbNetworkArn=" << StringUtils::URLEncode(m_odbNetworkArn.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_routeTableIdHasBeenSet)
  {
    ss << "RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if(m_destinationCidrBlockHasBeenSet)
  {
    ss << "DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_gatewayIdHasBeenSet)
  {
    ss << "GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }

  if(m_destinationIpv6CidrBlockHasBeenSet)
  {
    ss << "DestinationIpv6CidrBlock=" << StringUtils::URLEncode(m_destinationIpv6CidrBlock.c_str()) << "&";
  }

  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
    ss << "EgressOnlyInternetGatewayId=" << StringUtils::URLEncode(m_egressOnlyInternetGatewayId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
    ss << "NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
    ss << "VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

  if(m_natGatewayIdHasBeenSet)
  {
    ss << "NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateRouteRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
