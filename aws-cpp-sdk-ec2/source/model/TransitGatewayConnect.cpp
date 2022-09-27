/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayConnect.h>
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

TransitGatewayConnect::TransitGatewayConnect() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_transportTransitGatewayAttachmentIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_state(TransitGatewayAttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayConnect::TransitGatewayConnect(const XmlNode& xmlNode) : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_transportTransitGatewayAttachmentIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_state(TransitGatewayAttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayConnect& TransitGatewayConnect::operator =(const XmlNode& xmlNode)
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
    XmlNode transportTransitGatewayAttachmentIdNode = resultNode.FirstChild("transportTransitGatewayAttachmentId");
    if(!transportTransitGatewayAttachmentIdNode.IsNull())
    {
      m_transportTransitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transportTransitGatewayAttachmentIdNode.GetText());
      m_transportTransitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
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
    XmlNode optionsNode = resultNode.FirstChild("options");
    if(!optionsNode.IsNull())
    {
      m_options = optionsNode;
      m_optionsHasBeenSet = true;
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

void TransitGatewayConnect::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_transportTransitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransportTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transportTransitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
      Aws::StringStream optionsLocationAndMemberSs;
      optionsLocationAndMemberSs << location << index << locationValue << ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMemberSs.str().c_str());
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

void TransitGatewayConnect::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_transportTransitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransportTransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transportTransitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_optionsHasBeenSet)
  {
      Aws::String optionsLocationAndMember(location);
      optionsLocationAndMember += ".Options";
      m_options.OutputToStream(oStream, optionsLocationAndMember.c_str());
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
