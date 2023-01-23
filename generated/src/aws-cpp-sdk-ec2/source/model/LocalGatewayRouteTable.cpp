/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayRouteTable.h>
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

LocalGatewayRouteTable::LocalGatewayRouteTable() : 
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayRouteTableArnHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_mode(LocalGatewayRouteTableMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_stateReasonHasBeenSet(false)
{
}

LocalGatewayRouteTable::LocalGatewayRouteTable(const XmlNode& xmlNode) : 
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayRouteTableArnHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_mode(LocalGatewayRouteTableMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_stateReasonHasBeenSet(false)
{
  *this = xmlNode;
}

LocalGatewayRouteTable& LocalGatewayRouteTable::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayRouteTableIdNode = resultNode.FirstChild("localGatewayRouteTableId");
    if(!localGatewayRouteTableIdNode.IsNull())
    {
      m_localGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableIdNode.GetText());
      m_localGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableArnNode = resultNode.FirstChild("localGatewayRouteTableArn");
    if(!localGatewayRouteTableArnNode.IsNull())
    {
      m_localGatewayRouteTableArn = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableArnNode.GetText());
      m_localGatewayRouteTableArnHasBeenSet = true;
    }
    XmlNode localGatewayIdNode = resultNode.FirstChild("localGatewayId");
    if(!localGatewayIdNode.IsNull())
    {
      m_localGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayIdNode.GetText());
      m_localGatewayIdHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
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
    XmlNode modeNode = resultNode.FirstChild("mode");
    if(!modeNode.IsNull())
    {
      m_mode = LocalGatewayRouteTableModeMapper::GetLocalGatewayRouteTableModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()).c_str());
      m_modeHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = stateReasonNode;
      m_stateReasonHasBeenSet = true;
    }
  }

  return *this;
}

void LocalGatewayRouteTable::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }

  if(m_localGatewayRouteTableArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableArn=" << StringUtils::URLEncode(m_localGatewayRouteTableArn.c_str()) << "&";
  }

  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
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

  if(m_modeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Mode=" << LocalGatewayRouteTableModeMapper::GetNameForLocalGatewayRouteTableMode(m_mode) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
      Aws::StringStream stateReasonLocationAndMemberSs;
      stateReasonLocationAndMemberSs << location << index << locationValue << ".StateReason";
      m_stateReason.OutputToStream(oStream, stateReasonLocationAndMemberSs.str().c_str());
  }

}

void LocalGatewayRouteTable::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }
  if(m_localGatewayRouteTableArnHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableArn=" << StringUtils::URLEncode(m_localGatewayRouteTableArn.c_str()) << "&";
  }
  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
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
  if(m_modeHasBeenSet)
  {
      oStream << location << ".Mode=" << LocalGatewayRouteTableModeMapper::GetNameForLocalGatewayRouteTableMode(m_mode) << "&";
  }
  if(m_stateReasonHasBeenSet)
  {
      Aws::String stateReasonLocationAndMember(location);
      stateReasonLocationAndMember += ".StateReason";
      m_stateReason.OutputToStream(oStream, stateReasonLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
