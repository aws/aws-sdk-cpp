/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayVirtualInterfaceGroup.h>
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

LocalGatewayVirtualInterfaceGroup::LocalGatewayVirtualInterfaceGroup() : 
    m_localGatewayVirtualInterfaceGroupIdHasBeenSet(false),
    m_localGatewayVirtualInterfaceIdsHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LocalGatewayVirtualInterfaceGroup::LocalGatewayVirtualInterfaceGroup(const XmlNode& xmlNode) : 
    m_localGatewayVirtualInterfaceGroupIdHasBeenSet(false),
    m_localGatewayVirtualInterfaceIdsHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

LocalGatewayVirtualInterfaceGroup& LocalGatewayVirtualInterfaceGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayVirtualInterfaceGroupIdNode = resultNode.FirstChild("localGatewayVirtualInterfaceGroupId");
    if(!localGatewayVirtualInterfaceGroupIdNode.IsNull())
    {
      m_localGatewayVirtualInterfaceGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceGroupIdNode.GetText());
      m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true;
    }
    XmlNode localGatewayVirtualInterfaceIdsNode = resultNode.FirstChild("localGatewayVirtualInterfaceIdSet");
    if(!localGatewayVirtualInterfaceIdsNode.IsNull())
    {
      XmlNode localGatewayVirtualInterfaceIdsMember = localGatewayVirtualInterfaceIdsNode.FirstChild("item");
      while(!localGatewayVirtualInterfaceIdsMember.IsNull())
      {
        m_localGatewayVirtualInterfaceIds.push_back(localGatewayVirtualInterfaceIdsMember.GetText());
        localGatewayVirtualInterfaceIdsMember = localGatewayVirtualInterfaceIdsMember.NextNode("item");
      }

      m_localGatewayVirtualInterfaceIdsHasBeenSet = true;
    }
    XmlNode localGatewayIdNode = resultNode.FirstChild("localGatewayId");
    if(!localGatewayIdNode.IsNull())
    {
      m_localGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayIdNode.GetText());
      m_localGatewayIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
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

void LocalGatewayVirtualInterfaceGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }

  if(m_localGatewayVirtualInterfaceIdsHasBeenSet)
  {
      unsigned localGatewayVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_localGatewayVirtualInterfaceIds)
      {
        oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceIdSet." << localGatewayVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
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

void LocalGatewayVirtualInterfaceGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }
  if(m_localGatewayVirtualInterfaceIdsHasBeenSet)
  {
      unsigned localGatewayVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_localGatewayVirtualInterfaceIds)
      {
        oStream << location << ".LocalGatewayVirtualInterfaceIdSet." << localGatewayVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
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
