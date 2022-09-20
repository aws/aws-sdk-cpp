/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisRouteTableRoute.h>
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

AnalysisRouteTableRoute::AnalysisRouteTableRoute() : 
    m_destinationCidrHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

AnalysisRouteTableRoute::AnalysisRouteTableRoute(const XmlNode& xmlNode) : 
    m_destinationCidrHasBeenSet(false),
    m_destinationPrefixListIdHasBeenSet(false),
    m_egressOnlyInternetGatewayIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisRouteTableRoute& AnalysisRouteTableRoute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationCidrNode = resultNode.FirstChild("destinationCidr");
    if(!destinationCidrNode.IsNull())
    {
      m_destinationCidr = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrNode.GetText());
      m_destinationCidrHasBeenSet = true;
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
    XmlNode natGatewayIdNode = resultNode.FirstChild("natGatewayId");
    if(!natGatewayIdNode.IsNull())
    {
      m_natGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(natGatewayIdNode.GetText());
      m_natGatewayIdHasBeenSet = true;
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
      m_origin = Aws::Utils::Xml::DecodeEscapedXmlText(originNode.GetText());
      m_originHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode vpcPeeringConnectionIdNode = resultNode.FirstChild("vpcPeeringConnectionId");
    if(!vpcPeeringConnectionIdNode.IsNull())
    {
      m_vpcPeeringConnectionId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcPeeringConnectionIdNode.GetText());
      m_vpcPeeringConnectionIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisRouteTableRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidr=" << StringUtils::URLEncode(m_destinationCidr.c_str()) << "&";
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

  if(m_natGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_originHasBeenSet)
  {
      oStream << location << index << locationValue << ".Origin=" << StringUtils::URLEncode(m_origin.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

}

void AnalysisRouteTableRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationCidrHasBeenSet)
  {
      oStream << location << ".DestinationCidr=" << StringUtils::URLEncode(m_destinationCidr.c_str()) << "&";
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
  if(m_natGatewayIdHasBeenSet)
  {
      oStream << location << ".NatGatewayId=" << StringUtils::URLEncode(m_natGatewayId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_originHasBeenSet)
  {
      oStream << location << ".Origin=" << StringUtils::URLEncode(m_origin.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
      oStream << location << ".VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
