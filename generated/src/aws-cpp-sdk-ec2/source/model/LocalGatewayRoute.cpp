/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayRoute.h>
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

LocalGatewayRoute::LocalGatewayRoute() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_localGatewayVirtualInterfaceGroupIdHasBeenSet(false),
    m_type(LocalGatewayRouteType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(LocalGatewayRouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayRouteTableArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_coipPoolIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

LocalGatewayRoute::LocalGatewayRoute(const XmlNode& xmlNode) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_localGatewayVirtualInterfaceGroupIdHasBeenSet(false),
    m_type(LocalGatewayRouteType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(LocalGatewayRouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayRouteTableArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_coipPoolIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = xmlNode;
}

LocalGatewayRoute& LocalGatewayRoute::operator =(const XmlNode& xmlNode)
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
    XmlNode localGatewayVirtualInterfaceGroupIdNode = resultNode.FirstChild("localGatewayVirtualInterfaceGroupId");
    if(!localGatewayVirtualInterfaceGroupIdNode.IsNull())
    {
      m_localGatewayVirtualInterfaceGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceGroupIdNode.GetText());
      m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = LocalGatewayRouteTypeMapper::GetLocalGatewayRouteTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = LocalGatewayRouteStateMapper::GetLocalGatewayRouteStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableIdNode = resultNode.FirstChild("localGatewayRouteTableId");
    if(!localGatewayRouteTableIdNode.IsNull())
    {
      m_localGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableIdNode.GetText());
      m_localGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableArnNode = resultNode.FirstChild("localGatewayRouteTableArn");
    if(!localGatewayRouteTableArnNode.IsNull())
    {
      m_localGatewayRouteTableArn = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableArnNode.GetText());
      m_localGatewayRouteTableArnHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode coipPoolIdNode = resultNode.FirstChild("coipPoolId");
    if(!coipPoolIdNode.IsNull())
    {
      m_coipPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(coipPoolIdNode.GetText());
      m_coipPoolIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
  }

  return *this;
}

void LocalGatewayRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << LocalGatewayRouteTypeMapper::GetNameForLocalGatewayRouteType(m_type) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << LocalGatewayRouteStateMapper::GetNameForLocalGatewayRouteState(m_state) << "&";
  }

  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }

  if(m_localGatewayRouteTableArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableArn=" << StringUtils::URLEncode(m_localGatewayRouteTableArn.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_coipPoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoipPoolId=" << StringUtils::URLEncode(m_coipPoolId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

}

void LocalGatewayRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << LocalGatewayRouteTypeMapper::GetNameForLocalGatewayRouteType(m_type) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << LocalGatewayRouteStateMapper::GetNameForLocalGatewayRouteState(m_state) << "&";
  }
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }
  if(m_localGatewayRouteTableArnHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableArn=" << StringUtils::URLEncode(m_localGatewayRouteTableArn.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_coipPoolIdHasBeenSet)
  {
      oStream << location << ".CoipPoolId=" << StringUtils::URLEncode(m_coipPoolId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
