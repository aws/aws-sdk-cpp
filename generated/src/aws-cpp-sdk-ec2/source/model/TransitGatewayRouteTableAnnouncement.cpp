/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRouteTableAnnouncement.h>
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

TransitGatewayRouteTableAnnouncement::TransitGatewayRouteTableAnnouncement() : 
    m_transitGatewayRouteTableAnnouncementIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_peerTransitGatewayIdHasBeenSet(false),
    m_peerCoreNetworkIdHasBeenSet(false),
    m_peeringAttachmentIdHasBeenSet(false),
    m_announcementDirection(TransitGatewayRouteTableAnnouncementDirection::NOT_SET),
    m_announcementDirectionHasBeenSet(false),
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_state(TransitGatewayRouteTableAnnouncementState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayRouteTableAnnouncement::TransitGatewayRouteTableAnnouncement(const XmlNode& xmlNode) : 
    m_transitGatewayRouteTableAnnouncementIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_peerTransitGatewayIdHasBeenSet(false),
    m_peerCoreNetworkIdHasBeenSet(false),
    m_peeringAttachmentIdHasBeenSet(false),
    m_announcementDirection(TransitGatewayRouteTableAnnouncementDirection::NOT_SET),
    m_announcementDirectionHasBeenSet(false),
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_state(TransitGatewayRouteTableAnnouncementState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayRouteTableAnnouncement& TransitGatewayRouteTableAnnouncement::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayRouteTableAnnouncementIdNode = resultNode.FirstChild("transitGatewayRouteTableAnnouncementId");
    if(!transitGatewayRouteTableAnnouncementIdNode.IsNull())
    {
      m_transitGatewayRouteTableAnnouncementId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayRouteTableAnnouncementIdNode.GetText());
      m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode coreNetworkIdNode = resultNode.FirstChild("coreNetworkId");
    if(!coreNetworkIdNode.IsNull())
    {
      m_coreNetworkId = Aws::Utils::Xml::DecodeEscapedXmlText(coreNetworkIdNode.GetText());
      m_coreNetworkIdHasBeenSet = true;
    }
    XmlNode peerTransitGatewayIdNode = resultNode.FirstChild("peerTransitGatewayId");
    if(!peerTransitGatewayIdNode.IsNull())
    {
      m_peerTransitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(peerTransitGatewayIdNode.GetText());
      m_peerTransitGatewayIdHasBeenSet = true;
    }
    XmlNode peerCoreNetworkIdNode = resultNode.FirstChild("peerCoreNetworkId");
    if(!peerCoreNetworkIdNode.IsNull())
    {
      m_peerCoreNetworkId = Aws::Utils::Xml::DecodeEscapedXmlText(peerCoreNetworkIdNode.GetText());
      m_peerCoreNetworkIdHasBeenSet = true;
    }
    XmlNode peeringAttachmentIdNode = resultNode.FirstChild("peeringAttachmentId");
    if(!peeringAttachmentIdNode.IsNull())
    {
      m_peeringAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(peeringAttachmentIdNode.GetText());
      m_peeringAttachmentIdHasBeenSet = true;
    }
    XmlNode announcementDirectionNode = resultNode.FirstChild("announcementDirection");
    if(!announcementDirectionNode.IsNull())
    {
      m_announcementDirection = TransitGatewayRouteTableAnnouncementDirectionMapper::GetTransitGatewayRouteTableAnnouncementDirectionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(announcementDirectionNode.GetText()).c_str()).c_str());
      m_announcementDirectionHasBeenSet = true;
    }
    XmlNode transitGatewayRouteTableIdNode = resultNode.FirstChild("transitGatewayRouteTableId");
    if(!transitGatewayRouteTableIdNode.IsNull())
    {
      m_transitGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayRouteTableIdNode.GetText());
      m_transitGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayRouteTableAnnouncementStateMapper::GetTransitGatewayRouteTableAnnouncementStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayRouteTableAnnouncement::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_coreNetworkIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoreNetworkId=" << StringUtils::URLEncode(m_coreNetworkId.c_str()) << "&";
  }

  if(m_peerTransitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerTransitGatewayId=" << StringUtils::URLEncode(m_peerTransitGatewayId.c_str()) << "&";
  }

  if(m_peerCoreNetworkIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerCoreNetworkId=" << StringUtils::URLEncode(m_peerCoreNetworkId.c_str()) << "&";
  }

  if(m_peeringAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeeringAttachmentId=" << StringUtils::URLEncode(m_peeringAttachmentId.c_str()) << "&";
  }

  if(m_announcementDirectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".AnnouncementDirection=" << TransitGatewayRouteTableAnnouncementDirectionMapper::GetNameForTransitGatewayRouteTableAnnouncementDirection(m_announcementDirection) << "&";
  }

  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayRouteTableAnnouncementStateMapper::GetNameForTransitGatewayRouteTableAnnouncementState(m_state) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void TransitGatewayRouteTableAnnouncement::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_coreNetworkIdHasBeenSet)
  {
      oStream << location << ".CoreNetworkId=" << StringUtils::URLEncode(m_coreNetworkId.c_str()) << "&";
  }
  if(m_peerTransitGatewayIdHasBeenSet)
  {
      oStream << location << ".PeerTransitGatewayId=" << StringUtils::URLEncode(m_peerTransitGatewayId.c_str()) << "&";
  }
  if(m_peerCoreNetworkIdHasBeenSet)
  {
      oStream << location << ".PeerCoreNetworkId=" << StringUtils::URLEncode(m_peerCoreNetworkId.c_str()) << "&";
  }
  if(m_peeringAttachmentIdHasBeenSet)
  {
      oStream << location << ".PeeringAttachmentId=" << StringUtils::URLEncode(m_peeringAttachmentId.c_str()) << "&";
  }
  if(m_announcementDirectionHasBeenSet)
  {
      oStream << location << ".AnnouncementDirection=" << TransitGatewayRouteTableAnnouncementDirectionMapper::GetNameForTransitGatewayRouteTableAnnouncementDirection(m_announcementDirection) << "&";
  }
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayRouteTableAnnouncementStateMapper::GetNameForTransitGatewayRouteTableAnnouncementState(m_state) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
