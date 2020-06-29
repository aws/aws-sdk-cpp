/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulticastDomain.h>
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

TransitGatewayMulticastDomain::TransitGatewayMulticastDomain() : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_state(TransitGatewayMulticastDomainState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayMulticastDomain::TransitGatewayMulticastDomain(const XmlNode& xmlNode) : 
    m_transitGatewayMulticastDomainIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_state(TransitGatewayMulticastDomainState::NOT_SET),
    m_stateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayMulticastDomain& TransitGatewayMulticastDomain::operator =(const XmlNode& xmlNode)
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
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayMulticastDomainStateMapper::GetTransitGatewayMulticastDomainStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
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

void TransitGatewayMulticastDomain::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayMulticastDomainStateMapper::GetNameForTransitGatewayMulticastDomainState(m_state) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

void TransitGatewayMulticastDomain::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayMulticastDomainIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayMulticastDomainId=" << StringUtils::URLEncode(m_transitGatewayMulticastDomainId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayMulticastDomainStateMapper::GetNameForTransitGatewayMulticastDomainState(m_state) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
