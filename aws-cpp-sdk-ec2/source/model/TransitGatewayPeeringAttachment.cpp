/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPeeringAttachment.h>
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

TransitGatewayPeeringAttachment::TransitGatewayPeeringAttachment() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_accepterTransitGatewayAttachmentIdHasBeenSet(false),
    m_requesterTgwInfoHasBeenSet(false),
    m_accepterTgwInfoHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_state(TransitGatewayAttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayPeeringAttachment::TransitGatewayPeeringAttachment(const XmlNode& xmlNode) : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_accepterTransitGatewayAttachmentIdHasBeenSet(false),
    m_requesterTgwInfoHasBeenSet(false),
    m_accepterTgwInfoHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_state(TransitGatewayAttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayPeeringAttachment& TransitGatewayPeeringAttachment::operator =(const XmlNode& xmlNode)
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
    XmlNode accepterTransitGatewayAttachmentIdNode = resultNode.FirstChild("accepterTransitGatewayAttachmentId");
    if(!accepterTransitGatewayAttachmentIdNode.IsNull())
    {
      m_accepterTransitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(accepterTransitGatewayAttachmentIdNode.GetText());
      m_accepterTransitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode requesterTgwInfoNode = resultNode.FirstChild("requesterTgwInfo");
    if(!requesterTgwInfoNode.IsNull())
    {
      m_requesterTgwInfo = requesterTgwInfoNode;
      m_requesterTgwInfoHasBeenSet = true;
    }
    XmlNode accepterTgwInfoNode = resultNode.FirstChild("accepterTgwInfo");
    if(!accepterTgwInfoNode.IsNull())
    {
      m_accepterTgwInfo = accepterTgwInfoNode;
      m_accepterTgwInfoHasBeenSet = true;
    }
    XmlNode optionsNode = resultNode.FirstChild("options");
    if(!optionsNode.IsNull())
    {
      m_options = optionsNode;
      m_optionsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayAttachmentStateMapper::GetTransitGatewayAttachmentStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
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

void TransitGatewayPeeringAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_accepterTransitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccepterTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_accepterTransitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_requesterTgwInfoHasBeenSet)
  {
      Aws::StringStream requesterTgwInfoLocationAndMemberSs;
      requesterTgwInfoLocationAndMemberSs << location << index << locationValue << ".RequesterTgwInfo";
      m_requesterTgwInfo.OutputToStream(oStream, requesterTgwInfoLocationAndMemberSs.str().c_str());
  }

  if(m_accepterTgwInfoHasBeenSet)
  {
      Aws::StringStream accepterTgwInfoLocationAndMemberSs;
      accepterTgwInfoLocationAndMemberSs << location << index << locationValue << ".AccepterTgwInfo";
      m_accepterTgwInfo.OutputToStream(oStream, accepterTgwInfoLocationAndMemberSs.str().c_str());
  }

  if(m_optionsHasBeenSet)
  {
      Aws::StringStream optionsLocationAndMemberSs;
      optionsLocationAndMemberSs << location << index << locationValue << ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMemberSs.str().c_str());
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state) << "&";
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

void TransitGatewayPeeringAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_accepterTransitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".AccepterTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_accepterTransitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_requesterTgwInfoHasBeenSet)
  {
      Aws::String requesterTgwInfoLocationAndMember(location);
      requesterTgwInfoLocationAndMember += ".RequesterTgwInfo";
      m_requesterTgwInfo.OutputToStream(oStream, requesterTgwInfoLocationAndMember.c_str());
  }
  if(m_accepterTgwInfoHasBeenSet)
  {
      Aws::String accepterTgwInfoLocationAndMember(location);
      accepterTgwInfoLocationAndMember += ".AccepterTgwInfo";
      m_accepterTgwInfo.OutputToStream(oStream, accepterTgwInfoLocationAndMember.c_str());
  }
  if(m_optionsHasBeenSet)
  {
      Aws::String optionsLocationAndMember(location);
      optionsLocationAndMember += ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMember.c_str());
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state) << "&";
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
