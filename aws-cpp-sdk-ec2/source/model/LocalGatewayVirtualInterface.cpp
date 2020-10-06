/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayVirtualInterface.h>
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

LocalGatewayVirtualInterface::LocalGatewayVirtualInterface() : 
    m_localGatewayVirtualInterfaceIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_localAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_localBgpAsn(0),
    m_localBgpAsnHasBeenSet(false),
    m_peerBgpAsn(0),
    m_peerBgpAsnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LocalGatewayVirtualInterface::LocalGatewayVirtualInterface(const XmlNode& xmlNode) : 
    m_localGatewayVirtualInterfaceIdHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_vlan(0),
    m_vlanHasBeenSet(false),
    m_localAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_localBgpAsn(0),
    m_localBgpAsnHasBeenSet(false),
    m_peerBgpAsn(0),
    m_peerBgpAsnHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

LocalGatewayVirtualInterface& LocalGatewayVirtualInterface::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayVirtualInterfaceIdNode = resultNode.FirstChild("localGatewayVirtualInterfaceId");
    if(!localGatewayVirtualInterfaceIdNode.IsNull())
    {
      m_localGatewayVirtualInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceIdNode.GetText());
      m_localGatewayVirtualInterfaceIdHasBeenSet = true;
    }
    XmlNode localGatewayIdNode = resultNode.FirstChild("localGatewayId");
    if(!localGatewayIdNode.IsNull())
    {
      m_localGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayIdNode.GetText());
      m_localGatewayIdHasBeenSet = true;
    }
    XmlNode vlanNode = resultNode.FirstChild("vlan");
    if(!vlanNode.IsNull())
    {
      m_vlan = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vlanNode.GetText()).c_str()).c_str());
      m_vlanHasBeenSet = true;
    }
    XmlNode localAddressNode = resultNode.FirstChild("localAddress");
    if(!localAddressNode.IsNull())
    {
      m_localAddress = Aws::Utils::Xml::DecodeEscapedXmlText(localAddressNode.GetText());
      m_localAddressHasBeenSet = true;
    }
    XmlNode peerAddressNode = resultNode.FirstChild("peerAddress");
    if(!peerAddressNode.IsNull())
    {
      m_peerAddress = Aws::Utils::Xml::DecodeEscapedXmlText(peerAddressNode.GetText());
      m_peerAddressHasBeenSet = true;
    }
    XmlNode localBgpAsnNode = resultNode.FirstChild("localBgpAsn");
    if(!localBgpAsnNode.IsNull())
    {
      m_localBgpAsn = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(localBgpAsnNode.GetText()).c_str()).c_str());
      m_localBgpAsnHasBeenSet = true;
    }
    XmlNode peerBgpAsnNode = resultNode.FirstChild("peerBgpAsn");
    if(!peerBgpAsnNode.IsNull())
    {
      m_peerBgpAsn = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peerBgpAsnNode.GetText()).c_str()).c_str());
      m_peerBgpAsnHasBeenSet = true;
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

void LocalGatewayVirtualInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_localGatewayVirtualInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceId.c_str()) << "&";
  }

  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_vlanHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vlan=" << m_vlan << "&";
  }

  if(m_localAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalAddress=" << StringUtils::URLEncode(m_localAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_localBgpAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalBgpAsn=" << m_localBgpAsn << "&";
  }

  if(m_peerBgpAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerBgpAsn=" << m_peerBgpAsn << "&";
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

void LocalGatewayVirtualInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_localGatewayVirtualInterfaceIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceId.c_str()) << "&";
  }
  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }
  if(m_vlanHasBeenSet)
  {
      oStream << location << ".Vlan=" << m_vlan << "&";
  }
  if(m_localAddressHasBeenSet)
  {
      oStream << location << ".LocalAddress=" << StringUtils::URLEncode(m_localAddress.c_str()) << "&";
  }
  if(m_peerAddressHasBeenSet)
  {
      oStream << location << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }
  if(m_localBgpAsnHasBeenSet)
  {
      oStream << location << ".LocalBgpAsn=" << m_localBgpAsn << "&";
  }
  if(m_peerBgpAsnHasBeenSet)
  {
      oStream << location << ".PeerBgpAsn=" << m_peerBgpAsn << "&";
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
