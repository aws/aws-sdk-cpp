/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulticastGroup.h>
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

TransitGatewayMulticastGroup::TransitGatewayMulticastGroup() : 
    m_groupIpAddressHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_groupMember(false),
    m_groupMemberHasBeenSet(false),
    m_groupSource(false),
    m_groupSourceHasBeenSet(false),
    m_memberType(MembershipType::NOT_SET),
    m_memberTypeHasBeenSet(false),
    m_sourceType(MembershipType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

TransitGatewayMulticastGroup::TransitGatewayMulticastGroup(const XmlNode& xmlNode) : 
    m_groupIpAddressHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_groupMember(false),
    m_groupMemberHasBeenSet(false),
    m_groupSource(false),
    m_groupSourceHasBeenSet(false),
    m_memberType(MembershipType::NOT_SET),
    m_memberTypeHasBeenSet(false),
    m_sourceType(MembershipType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayMulticastGroup& TransitGatewayMulticastGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupIpAddressNode = resultNode.FirstChild("groupIpAddress");
    if(!groupIpAddressNode.IsNull())
    {
      m_groupIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(groupIpAddressNode.GetText());
      m_groupIpAddressHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if(!transitGatewayAttachmentIdNode.IsNull())
    {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
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
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode groupMemberNode = resultNode.FirstChild("groupMember");
    if(!groupMemberNode.IsNull())
    {
      m_groupMember = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(groupMemberNode.GetText()).c_str()).c_str());
      m_groupMemberHasBeenSet = true;
    }
    XmlNode groupSourceNode = resultNode.FirstChild("groupSource");
    if(!groupSourceNode.IsNull())
    {
      m_groupSource = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(groupSourceNode.GetText()).c_str()).c_str());
      m_groupSourceHasBeenSet = true;
    }
    XmlNode memberTypeNode = resultNode.FirstChild("memberType");
    if(!memberTypeNode.IsNull())
    {
      m_memberType = MembershipTypeMapper::GetMembershipTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(memberTypeNode.GetText()).c_str()).c_str());
      m_memberTypeHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("sourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = MembershipTypeMapper::GetMembershipTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()).c_str());
      m_sourceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayMulticastGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_groupMemberHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupMember=" << std::boolalpha << m_groupMember << "&";
  }

  if(m_groupSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupSource=" << std::boolalpha << m_groupSource << "&";
  }

  if(m_memberTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MemberType=" << MembershipTypeMapper::GetNameForMembershipType(m_memberType) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << MembershipTypeMapper::GetNameForMembershipType(m_sourceType) << "&";
  }

}

void TransitGatewayMulticastGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupIpAddressHasBeenSet)
  {
      oStream << location << ".GroupIpAddress=" << StringUtils::URLEncode(m_groupIpAddress.c_str()) << "&";
  }
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_groupMemberHasBeenSet)
  {
      oStream << location << ".GroupMember=" << std::boolalpha << m_groupMember << "&";
  }
  if(m_groupSourceHasBeenSet)
  {
      oStream << location << ".GroupSource=" << std::boolalpha << m_groupSource << "&";
  }
  if(m_memberTypeHasBeenSet)
  {
      oStream << location << ".MemberType=" << MembershipTypeMapper::GetNameForMembershipType(m_memberType) << "&";
  }
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << MembershipTypeMapper::GetNameForMembershipType(m_sourceType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
