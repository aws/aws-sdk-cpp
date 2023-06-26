﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Route.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

Route::Route() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationIpv6CidrBlockHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_carrierGatewayIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_origin(RouteOrigin::NOT_SET),
    m_originHasBeenSet(false),
    m_state(RouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false)
{
}

Route::Route(const XmlNode& xmlNode) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationIpv6CidrBlockHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceOwnerIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_carrierGatewayIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_origin(RouteOrigin::NOT_SET),
    m_originHasBeenSet(false),
    m_state(RouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false)
{
  *this = xmlNode;
}

Route& Route::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if(!destinationCidrBlockNode.IsNull())
    {
      m_destinationCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrBlockNode.GetText());
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode destinationIpv6CidrBlockNode = resultNode.FirstChild("destinationIpv6CidrBlock");
    if(!destinationIpv6CidrBlockNode.IsNull())
    {
      m_destinationIpv6CidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(destinationIpv6CidrBlockNode.GetText());
      m_destinationIpv6CidrBlockHasBeenSet = true;
    }
    XmlNode destinationPrefixListIdNode = resultNode.FirstChild("destinationPrefixListId");
    if(!destinationPrefixListIdNode.IsNull())
    {
      m_destinationPrefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(destinationPrefixListIdNode.GetText());
      m_destinationPrefixListIdHasBeenSet = true;
    }
    XmlNode egressOnlyInternetGatewayIdNode = resultNode.FirstChild("egressOnlyInternetGatewayId");
    if(!egressOnlyInternetGatewayIdNode.IsNull())
    {
      m_egressOnlyInternetGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(egressOnlyInternetGatewayIdNode.GetText());
      m_egressOnlyInternetGatewayIdHasBeenSet = true;
    }
    XmlNode gatewayIdNode = resultNode.FirstChild("gatewayId");
    if(!gatewayIdNode.IsNull())
    {
      m_gatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(gatewayIdNode.GetText());
      m_gatewayIdHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceOwnerIdNode = resultNode.FirstChild("instanceOwnerId");
    if(!instanceOwnerIdNode.IsNull())
    {
      m_instanceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceOwnerIdNode.GetText());
      m_instanceOwnerIdHasBeenSet = true;
    }
    XmlNode natGatewayIdNode = resultNode.FirstChild("natGatewayId");
    if(!natGatewayIdNode.IsNull())
    {
      m_natGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(natGatewayIdNode.GetText());
      m_natGatewayIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode localGatewayIdNode = resultNode.FirstChild("localGatewayId");
    if(!localGatewayIdNode.IsNull())
    {
      m_localGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayIdNode.GetText());
      m_localGatewayIdHasBeenSet = true;
    }
    XmlNode carrierGatewayIdNode = resultNode.FirstChild("carrierGatewayId");
    if(!carrierGatewayIdNode.IsNull())
    {
      m_carrierGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(carrierGatewayIdNode.GetText());
      m_carrierGatewayIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode originNode = resultNode.FirstChild("origin");
    if(!originNode.IsNull())
    {
      m_origin = RouteOriginMapper::GetRouteOriginForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originNode.GetText()).c_str()).c_str());
      m_originHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = RouteStateMapper::GetRouteStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode vpcPeeringConnectionIdNode = resultNode.FirstChild("vpcPeeringConnectionId");
    if(!vpcPeeringConnectionIdNode.IsNull())
    {
      m_vpcPeeringConnectionId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcPeeringConnectionIdNode.GetText());
      m_vpcPeeringConnectionIdHasBeenSet = true;
    }
    XmlNode coreNetworkArnNode = resultNode.FirstChild("coreNetworkArn");
    if(!coreNetworkArnNode.IsNull())
    {
      m_coreNetworkArn = Aws::Utils::Xml::DecodeEscapedXmlText(coreNetworkArnNode.GetText());
      m_coreNetworkArnHasBeenSet = true;
    }
  }

  return *this;
}

void Route::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_destinationIpv6CidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationIpv6CidrBlock=" << StringUtils::URLEncode(m_destinationIpv6CidrBlock.c_str()) << "&";
  }

  if(m_destinationPrefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationPrefixListId=" << StringUtils::URLEncode(m_destinationPrefixListId.c_str()) << "&";
  }

  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EgressOnlyInternetGatewayId=" << StringUtils::URLEncode(m_egressOnlyInternetGatewayId.c_str()) << "&";
  }

  if(m_gatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceOwnerId=" << StringUtils::URLEncode(m_instanceOwnerId.c_str()) << "&";
  }

  if(m_natGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_carrierGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CarrierGatewayId=" << StringUtils::URLEncode(m_carrierGatewayId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_originHasBeenSet)
  {
      oStream << location << index << locationValue << ".Origin=" << RouteOriginMapper::GetNameForRouteOrigin(m_origin) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << RouteStateMapper::GetNameForRouteState(m_state) << "&";
  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

  if(m_coreNetworkArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoreNetworkArn=" << StringUtils::URLEncode(m_coreNetworkArn.c_str()) << "&";
  }

}

void Route::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_destinationIpv6CidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationIpv6CidrBlock=" << StringUtils::URLEncode(m_destinationIpv6CidrBlock.c_str()) << "&";
  }
  if(m_destinationPrefixListIdHasBeenSet)
  {
      oStream << location << ".DestinationPrefixListId=" << StringUtils::URLEncode(m_destinationPrefixListId.c_str()) << "&";
  }
  if(m_egressOnlyInternetGatewayIdHasBeenSet)
  {
      oStream << location << ".EgressOnlyInternetGatewayId=" << StringUtils::URLEncode(m_egressOnlyInternetGatewayId.c_str()) << "&";
  }
  if(m_gatewayIdHasBeenSet)
  {
      oStream << location << ".GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceOwnerIdHasBeenSet)
  {
      oStream << location << ".InstanceOwnerId=" << StringUtils::URLEncode(m_instanceOwnerId.c_str()) << "&";
  }
  if(m_natGatewayIdHasBeenSet)
  {
      oStream << location << ".NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }
  if(m_carrierGatewayIdHasBeenSet)
  {
      oStream << location << ".CarrierGatewayId=" << StringUtils::URLEncode(m_carrierGatewayId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_originHasBeenSet)
  {
      oStream << location << ".Origin=" << RouteOriginMapper::GetNameForRouteOrigin(m_origin) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << RouteStateMapper::GetNameForRouteState(m_state) << "&";
  }
  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }
  if(m_coreNetworkArnHasBeenSet)
  {
      oStream << location << ".CoreNetworkArn=" << StringUtils::URLEncode(m_coreNetworkArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
