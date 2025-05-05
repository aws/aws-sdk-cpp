/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OutpostLag.h>
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

OutpostLag::OutpostLag(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

OutpostLag& OutpostLag::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode outpostLagIdNode = resultNode.FirstChild("outpostLagId");
    if(!outpostLagIdNode.IsNull())
    {
      m_outpostLagId = Aws::Utils::Xml::DecodeEscapedXmlText(outpostLagIdNode.GetText());
      m_outpostLagIdHasBeenSet = true;
    }
    XmlNode localGatewayVirtualInterfaceIdsNode = resultNode.FirstChild("localGatewayVirtualInterfaceIdSet");
    if(!localGatewayVirtualInterfaceIdsNode.IsNull())
    {
      XmlNode localGatewayVirtualInterfaceIdsMember = localGatewayVirtualInterfaceIdsNode.FirstChild("item");
      m_localGatewayVirtualInterfaceIdsHasBeenSet = !localGatewayVirtualInterfaceIdsMember.IsNull();
      while(!localGatewayVirtualInterfaceIdsMember.IsNull())
      {
        m_localGatewayVirtualInterfaceIds.push_back(localGatewayVirtualInterfaceIdsMember.GetText());
        localGatewayVirtualInterfaceIdsMember = localGatewayVirtualInterfaceIdsMember.NextNode("item");
      }

      m_localGatewayVirtualInterfaceIdsHasBeenSet = true;
    }
    XmlNode serviceLinkVirtualInterfaceIdsNode = resultNode.FirstChild("serviceLinkVirtualInterfaceIdSet");
    if(!serviceLinkVirtualInterfaceIdsNode.IsNull())
    {
      XmlNode serviceLinkVirtualInterfaceIdsMember = serviceLinkVirtualInterfaceIdsNode.FirstChild("item");
      m_serviceLinkVirtualInterfaceIdsHasBeenSet = !serviceLinkVirtualInterfaceIdsMember.IsNull();
      while(!serviceLinkVirtualInterfaceIdsMember.IsNull())
      {
        m_serviceLinkVirtualInterfaceIds.push_back(serviceLinkVirtualInterfaceIdsMember.GetText());
        serviceLinkVirtualInterfaceIdsMember = serviceLinkVirtualInterfaceIdsMember.NextNode("item");
      }

      m_serviceLinkVirtualInterfaceIdsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
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

void OutpostLag::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
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

  if(m_outpostLagIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
  }

  if(m_localGatewayVirtualInterfaceIdsHasBeenSet)
  {
      unsigned localGatewayVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_localGatewayVirtualInterfaceIds)
      {
        oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceIdSet." << localGatewayVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_serviceLinkVirtualInterfaceIdsHasBeenSet)
  {
      unsigned serviceLinkVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_serviceLinkVirtualInterfaceIds)
      {
        oStream << location << index << locationValue << ".ServiceLinkVirtualInterfaceIdSet." << serviceLinkVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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

void OutpostLag::OutputToStream(Aws::OStream& oStream, const char* location) const
{
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
  if(m_outpostLagIdHasBeenSet)
  {
      oStream << location << ".OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
  }
  if(m_localGatewayVirtualInterfaceIdsHasBeenSet)
  {
      unsigned localGatewayVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_localGatewayVirtualInterfaceIds)
      {
        oStream << location << ".LocalGatewayVirtualInterfaceIdSet." << localGatewayVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_serviceLinkVirtualInterfaceIdsHasBeenSet)
  {
      unsigned serviceLinkVirtualInterfaceIdsIdx = 1;
      for(auto& item : m_serviceLinkVirtualInterfaceIds)
      {
        oStream << location << ".ServiceLinkVirtualInterfaceIdSet." << serviceLinkVirtualInterfaceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
