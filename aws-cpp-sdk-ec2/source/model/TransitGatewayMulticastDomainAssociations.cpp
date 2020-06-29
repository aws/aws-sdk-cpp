/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulticastDomainAssociations.h>
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

TransitGatewayMulticastDomainAssociations::TransitGatewayMulticastDomainAssociations() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
}

TransitGatewayMulticastDomainAssociations::TransitGatewayMulticastDomainAssociations(const XmlNode& xmlNode) : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayMulticastDomainAssociations& TransitGatewayMulticastDomainAssociations::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayMulticastDomainIdNode = resultNode.FirstChild("transitGatewayMulticastDomainId");
    if(!transitGatewayMulticastDomainIdNode.IsNull())
    {
      m_transitGatewayMulticastDomainId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayMulticastDomainIdNode.GetText());
      m_transitGatewayMulticastDomainIdHasBeenSet = true;
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
    XmlNode subnetsNode = resultNode.FirstChild("subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("item");
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember);
        subnetsMember = subnetsMember.NextNode("item");
      }

      m_subnetsHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayMulticastDomainAssociations::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
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

  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << index << locationValue << ".Subnets." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }

}

void TransitGatewayMulticastDomainAssociations::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
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
  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location <<  ".Subnets." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
