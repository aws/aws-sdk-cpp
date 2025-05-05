/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceLinkVirtualInterface.h>
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

ServiceLinkVirtualInterface::ServiceLinkVirtualInterface(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ServiceLinkVirtualInterface& ServiceLinkVirtualInterface::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceLinkVirtualInterfaceIdNode = resultNode.FirstChild("serviceLinkVirtualInterfaceId");
    if(!serviceLinkVirtualInterfaceIdNode.IsNull())
    {
      m_serviceLinkVirtualInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(serviceLinkVirtualInterfaceIdNode.GetText());
      m_serviceLinkVirtualInterfaceIdHasBeenSet = true;
    }
    XmlNode serviceLinkVirtualInterfaceArnNode = resultNode.FirstChild("serviceLinkVirtualInterfaceArn");
    if(!serviceLinkVirtualInterfaceArnNode.IsNull())
    {
      m_serviceLinkVirtualInterfaceArn = Aws::Utils::Xml::DecodeEscapedXmlText(serviceLinkVirtualInterfaceArnNode.GetText());
      m_serviceLinkVirtualInterfaceArnHasBeenSet = true;
    }
    XmlNode outpostIdNode = resultNode.FirstChild("outpostId");
    if(!outpostIdNode.IsNull())
    {
      m_outpostId = Aws::Utils::Xml::DecodeEscapedXmlText(outpostIdNode.GetText());
      m_outpostIdHasBeenSet = true;
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
    XmlNode peerBgpAsnNode = resultNode.FirstChild("peerBgpAsn");
    if(!peerBgpAsnNode.IsNull())
    {
      m_peerBgpAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peerBgpAsnNode.GetText()).c_str()).c_str());
      m_peerBgpAsnHasBeenSet = true;
    }
    XmlNode vlanNode = resultNode.FirstChild("vlan");
    if(!vlanNode.IsNull())
    {
      m_vlan = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vlanNode.GetText()).c_str()).c_str());
      m_vlanHasBeenSet = true;
    }
    XmlNode outpostLagIdNode = resultNode.FirstChild("outpostLagId");
    if(!outpostLagIdNode.IsNull())
    {
      m_outpostLagId = Aws::Utils::Xml::DecodeEscapedXmlText(outpostLagIdNode.GetText());
      m_outpostLagIdHasBeenSet = true;
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
      m_configurationState = ServiceLinkVirtualInterfaceConfigurationStateMapper::GetServiceLinkVirtualInterfaceConfigurationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configurationStateNode.GetText()).c_str()));
      m_configurationStateHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceLinkVirtualInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceLinkVirtualInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceLinkVirtualInterfaceId=" << StringUtils::URLEncode(m_serviceLinkVirtualInterfaceId.c_str()) << "&";
  }

  if(m_serviceLinkVirtualInterfaceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceLinkVirtualInterfaceArn=" << StringUtils::URLEncode(m_serviceLinkVirtualInterfaceArn.c_str()) << "&";
  }

  if(m_outpostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostId=" << StringUtils::URLEncode(m_outpostId.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_localAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalAddress=" << StringUtils::URLEncode(m_localAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_peerBgpAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerBgpAsn=" << m_peerBgpAsn << "&";
  }

  if(m_vlanHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vlan=" << m_vlan << "&";
  }

  if(m_outpostLagIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
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
      oStream << location << index << locationValue << ".ConfigurationState=" << StringUtils::URLEncode(ServiceLinkVirtualInterfaceConfigurationStateMapper::GetNameForServiceLinkVirtualInterfaceConfigurationState(m_configurationState)) << "&";
  }

}

void ServiceLinkVirtualInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceLinkVirtualInterfaceIdHasBeenSet)
  {
      oStream << location << ".ServiceLinkVirtualInterfaceId=" << StringUtils::URLEncode(m_serviceLinkVirtualInterfaceId.c_str()) << "&";
  }
  if(m_serviceLinkVirtualInterfaceArnHasBeenSet)
  {
      oStream << location << ".ServiceLinkVirtualInterfaceArn=" << StringUtils::URLEncode(m_serviceLinkVirtualInterfaceArn.c_str()) << "&";
  }
  if(m_outpostIdHasBeenSet)
  {
      oStream << location << ".OutpostId=" << StringUtils::URLEncode(m_outpostId.c_str()) << "&";
  }
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_localAddressHasBeenSet)
  {
      oStream << location << ".LocalAddress=" << StringUtils::URLEncode(m_localAddress.c_str()) << "&";
  }
  if(m_peerAddressHasBeenSet)
  {
      oStream << location << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }
  if(m_peerBgpAsnHasBeenSet)
  {
      oStream << location << ".PeerBgpAsn=" << m_peerBgpAsn << "&";
  }
  if(m_vlanHasBeenSet)
  {
      oStream << location << ".Vlan=" << m_vlan << "&";
  }
  if(m_outpostLagIdHasBeenSet)
  {
      oStream << location << ".OutpostLagId=" << StringUtils::URLEncode(m_outpostLagId.c_str()) << "&";
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
      oStream << location << ".ConfigurationState=" << StringUtils::URLEncode(ServiceLinkVirtualInterfaceConfigurationStateMapper::GetNameForServiceLinkVirtualInterfaceConfigurationState(m_configurationState)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
