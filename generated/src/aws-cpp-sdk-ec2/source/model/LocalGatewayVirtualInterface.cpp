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

LocalGatewayVirtualInterface::LocalGatewayVirtualInterface(const XmlNode& xmlNode)
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
    XmlNode localGatewayVirtualInterfaceGroupIdNode = resultNode.FirstChild("localGatewayVirtualInterfaceGroupId");
    if(!localGatewayVirtualInterfaceGroupIdNode.IsNull())
    {
      m_localGatewayVirtualInterfaceGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceGroupIdNode.GetText());
      m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true;
    }
    XmlNode localGatewayVirtualInterfaceArnNode = resultNode.FirstChild("localGatewayVirtualInterfaceArn");
    if(!localGatewayVirtualInterfaceArnNode.IsNull())
    {
      m_localGatewayVirtualInterfaceArn = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayVirtualInterfaceArnNode.GetText());
      m_localGatewayVirtualInterfaceArnHasBeenSet = true;
    }
    XmlNode outpostLagIdNode = resultNode.FirstChild("outpostLagId");
    if(!outpostLagIdNode.IsNull())
    {
      m_outpostLagId = Aws::Utils::Xml::DecodeEscapedXmlText(outpostLagIdNode.GetText());
      m_outpostLagIdHasBeenSet = true;
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
    XmlNode peerBgpAsnExtendedNode = resultNode.FirstChild("peerBgpAsnExtended");
    if(!peerBgpAsnExtendedNode.IsNull())
    {
      m_peerBgpAsnExtended = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peerBgpAsnExtendedNode.GetText()).c_str()).c_str());
      m_peerBgpAsnExtendedHasBeenSet = true;
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
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode configurationStateNode = resultNode.FirstChild("configurationState");
    if(!configurationStateNode.IsNull())
    {
      m_configurationState = LocalGatewayVirtualInterfaceConfigurationStateMapper::GetLocalGatewayVirtualInterfaceConfigurationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configurationStateNode.GetText()).c_str()));
      m_configurationStateHasBeenSet = true;
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

  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }

  if(m_localGatewayVirtualInterfaceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayVirtualInterfaceArn=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceArn.c_str()) << "&";
  }

  if(m_outpostLagIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
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

  if(m_peerBgpAsnExtendedHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerBgpAsnExtended=" << m_peerBgpAsnExtended << "&";
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

  if(m_configurationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConfigurationState=" << StringUtils::URLEncode(LocalGatewayVirtualInterfaceConfigurationStateMapper::GetNameForLocalGatewayVirtualInterfaceConfigurationState(m_configurationState)) << "&";
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
  if(m_localGatewayVirtualInterfaceGroupIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceGroupId=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceGroupId.c_str()) << "&";
  }
  if(m_localGatewayVirtualInterfaceArnHasBeenSet)
  {
      oStream << location << ".LocalGatewayVirtualInterfaceArn=" << StringUtils::URLEncode(m_localGatewayVirtualInterfaceArn.c_str()) << "&";
  }
  if(m_outpostLagIdHasBeenSet)
  {
      oStream << location << ".OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
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
  if(m_peerBgpAsnExtendedHasBeenSet)
  {
      oStream << location << ".PeerBgpAsnExtended=" << m_peerBgpAsnExtended << "&";
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
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_configurationStateHasBeenSet)
  {
      oStream << location << ".ConfigurationState=" << StringUtils::URLEncode(LocalGatewayVirtualInterfaceConfigurationStateMapper::GetNameForLocalGatewayVirtualInterfaceConfigurationState(m_configurationState)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
