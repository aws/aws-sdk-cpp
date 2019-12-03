/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_localGatewayRouteTableIdHasBeenSet(false)
{
}

LocalGatewayRoute::LocalGatewayRoute(const XmlNode& xmlNode) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_localGatewayVirtualInterfaceGroupIdHasBeenSet(false),
    m_type(LocalGatewayRouteType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(LocalGatewayRouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false)
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
