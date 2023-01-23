/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPrefixListReference.h>
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

TransitGatewayPrefixListReference::TransitGatewayPrefixListReference() : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_prefixListOwnerIdHasBeenSet(false),
    m_state(TransitGatewayPrefixListReferenceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_blackhole(false),
    m_blackholeHasBeenSet(false),
    m_transitGatewayAttachmentHasBeenSet(false)
{
}

TransitGatewayPrefixListReference::TransitGatewayPrefixListReference(const XmlNode& xmlNode) : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_prefixListOwnerIdHasBeenSet(false),
    m_state(TransitGatewayPrefixListReferenceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_blackhole(false),
    m_blackholeHasBeenSet(false),
    m_transitGatewayAttachmentHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayPrefixListReference& TransitGatewayPrefixListReference::operator =(const XmlNode& xmlNode)
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
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode prefixListOwnerIdNode = resultNode.FirstChild("prefixListOwnerId");
    if(!prefixListOwnerIdNode.IsNull())
    {
      m_prefixListOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListOwnerIdNode.GetText());
      m_prefixListOwnerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayPrefixListReferenceStateMapper::GetTransitGatewayPrefixListReferenceStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode blackholeNode = resultNode.FirstChild("blackhole");
    if(!blackholeNode.IsNull())
    {
      m_blackhole = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(blackholeNode.GetText()).c_str()).c_str());
      m_blackholeHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentNode = resultNode.FirstChild("transitGatewayAttachment");
    if(!transitGatewayAttachmentNode.IsNull())
    {
      m_transitGatewayAttachment = transitGatewayAttachmentNode;
      m_transitGatewayAttachmentHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayPrefixListReference::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_prefixListOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListOwnerId=" << StringUtils::URLEncode(m_prefixListOwnerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayPrefixListReferenceStateMapper::GetNameForTransitGatewayPrefixListReferenceState(m_state) << "&";
  }

  if(m_blackholeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Blackhole=" << std::boolalpha << m_blackhole << "&";
  }

  if(m_transitGatewayAttachmentHasBeenSet)
  {
      Aws::StringStream transitGatewayAttachmentLocationAndMemberSs;
      transitGatewayAttachmentLocationAndMemberSs << location << index << locationValue << ".TransitGatewayAttachment";
      m_transitGatewayAttachment.OutputToStream(oStream, transitGatewayAttachmentLocationAndMemberSs.str().c_str());
  }

}

void TransitGatewayPrefixListReference::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_prefixListOwnerIdHasBeenSet)
  {
      oStream << location << ".PrefixListOwnerId=" << StringUtils::URLEncode(m_prefixListOwnerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayPrefixListReferenceStateMapper::GetNameForTransitGatewayPrefixListReferenceState(m_state) << "&";
  }
  if(m_blackholeHasBeenSet)
  {
      oStream << location << ".Blackhole=" << std::boolalpha << m_blackhole << "&";
  }
  if(m_transitGatewayAttachmentHasBeenSet)
  {
      Aws::String transitGatewayAttachmentLocationAndMember(location);
      transitGatewayAttachmentLocationAndMember += ".TransitGatewayAttachment";
      m_transitGatewayAttachment.OutputToStream(oStream, transitGatewayAttachmentLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
