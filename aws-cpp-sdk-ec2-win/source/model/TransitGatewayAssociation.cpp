/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayAssociation.h>
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

TransitGatewayAssociation::TransitGatewayAssociation() : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(TransitGatewayAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

TransitGatewayAssociation::TransitGatewayAssociation(const XmlNode& xmlNode) : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(TransitGatewayAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayAssociation& TransitGatewayAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayRouteTableIdNode = resultNode.FirstChild("transitGatewayRouteTableId");
    if(!transitGatewayRouteTableIdNode.IsNull())
    {
      m_transitGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayRouteTableIdNode.GetText());
      m_transitGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if(!transitGatewayAttachmentIdNode.IsNull())
    {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = TransitGatewayAttachmentResourceTypeMapper::GetTransitGatewayAttachmentResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayAssociationStateMapper::GetTransitGatewayAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayAssociationStateMapper::GetNameForTransitGatewayAssociationState(m_state) << "&";
  }

}

void TransitGatewayAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayAssociationStateMapper::GetNameForTransitGatewayAssociationState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
