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

#include <aws/ec2/model/TransitGatewayRoute.h>
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

TransitGatewayRoute::TransitGatewayRoute() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_transitGatewayAttachmentsHasBeenSet(false),
    m_type(TransitGatewayRouteType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(TransitGatewayRouteState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

TransitGatewayRoute::TransitGatewayRoute(const XmlNode& xmlNode) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_transitGatewayAttachmentsHasBeenSet(false),
    m_type(TransitGatewayRouteType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(TransitGatewayRouteState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayRoute& TransitGatewayRoute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if(!destinationCidrBlockNode.IsNull())
    {
      m_destinationCidrBlock = destinationCidrBlockNode.GetText();
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentsNode = resultNode.FirstChild("transitGatewayAttachments");
    if(!transitGatewayAttachmentsNode.IsNull())
    {
      XmlNode transitGatewayAttachmentsMember = transitGatewayAttachmentsNode.FirstChild("item");
      while(!transitGatewayAttachmentsMember.IsNull())
      {
        m_transitGatewayAttachments.push_back(transitGatewayAttachmentsMember);
        transitGatewayAttachmentsMember = transitGatewayAttachmentsMember.NextNode("item");
      }

      m_transitGatewayAttachmentsHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = TransitGatewayRouteTypeMapper::GetTransitGatewayRouteTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayRouteStateMapper::GetTransitGatewayRouteStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentsHasBeenSet)
  {
      unsigned transitGatewayAttachmentsIdx = 1;
      for(auto& item : m_transitGatewayAttachments)
      {
        Aws::StringStream transitGatewayAttachmentsSs;
        transitGatewayAttachmentsSs << location << index << locationValue << ".TransitGatewayAttachments." << transitGatewayAttachmentsIdx++;
        item.OutputToStream(oStream, transitGatewayAttachmentsSs.str().c_str());
      }
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << TransitGatewayRouteTypeMapper::GetNameForTransitGatewayRouteType(m_type) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayRouteStateMapper::GetNameForTransitGatewayRouteState(m_state) << "&";
  }

}

void TransitGatewayRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_transitGatewayAttachmentsHasBeenSet)
  {
      unsigned transitGatewayAttachmentsIdx = 1;
      for(auto& item : m_transitGatewayAttachments)
      {
        Aws::StringStream transitGatewayAttachmentsSs;
        transitGatewayAttachmentsSs << location <<  ".TransitGatewayAttachments." << transitGatewayAttachmentsIdx++;
        item.OutputToStream(oStream, transitGatewayAttachmentsSs.str().c_str());
      }
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << TransitGatewayRouteTypeMapper::GetNameForTransitGatewayRouteType(m_type) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayRouteStateMapper::GetNameForTransitGatewayRouteState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
