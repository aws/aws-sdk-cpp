/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayConnectPeer.h>
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

TransitGatewayConnectPeer::TransitGatewayConnectPeer() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_transitGatewayConnectPeerIdHasBeenSet(false),
    m_state(TransitGatewayConnectPeerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_connectPeerConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayConnectPeer::TransitGatewayConnectPeer(const XmlNode& xmlNode) : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_transitGatewayConnectPeerIdHasBeenSet(false),
    m_state(TransitGatewayConnectPeerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_connectPeerConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayConnectPeer& TransitGatewayConnectPeer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if(!transitGatewayAttachmentIdNode.IsNull())
    {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode transitGatewayConnectPeerIdNode = resultNode.FirstChild("transitGatewayConnectPeerId");
    if(!transitGatewayConnectPeerIdNode.IsNull())
    {
      m_transitGatewayConnectPeerId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayConnectPeerIdNode.GetText());
      m_transitGatewayConnectPeerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayConnectPeerStateMapper::GetTransitGatewayConnectPeerStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode connectPeerConfigurationNode = resultNode.FirstChild("connectPeerConfiguration");
    if(!connectPeerConfigurationNode.IsNull())
    {
      m_connectPeerConfiguration = connectPeerConfigurationNode;
      m_connectPeerConfigurationHasBeenSet = true;
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

void TransitGatewayConnectPeer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_transitGatewayConnectPeerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayConnectPeerId=" << StringUtils::URLEncode(m_transitGatewayConnectPeerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayConnectPeerStateMapper::GetNameForTransitGatewayConnectPeerState(m_state) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_connectPeerConfigurationHasBeenSet)
  {
      Aws::StringStream connectPeerConfigurationLocationAndMemberSs;
      connectPeerConfigurationLocationAndMemberSs << location << index << locationValue << ".ConnectPeerConfiguration";
      m_connectPeerConfiguration.OutputToStream(oStream, connectPeerConfigurationLocationAndMemberSs.str().c_str());
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

void TransitGatewayConnectPeer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_transitGatewayConnectPeerIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayConnectPeerId=" << StringUtils::URLEncode(m_transitGatewayConnectPeerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayConnectPeerStateMapper::GetNameForTransitGatewayConnectPeerState(m_state) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_connectPeerConfigurationHasBeenSet)
  {
      Aws::String connectPeerConfigurationLocationAndMember(location);
      connectPeerConfigurationLocationAndMember += ".ConnectPeerConfiguration";
      m_connectPeerConfiguration.OutputToStream(oStream, connectPeerConfigurationLocationAndMember.c_str());
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
