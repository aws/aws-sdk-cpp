/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayConnectPeerConfiguration.h>
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

TransitGatewayConnectPeerConfiguration::TransitGatewayConnectPeerConfiguration() : 
    m_transitGatewayAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_protocol(ProtocolValue::NOT_SET),
    m_protocolHasBeenSet(false),
    m_bgpConfigurationsHasBeenSet(false)
{
}

TransitGatewayConnectPeerConfiguration::TransitGatewayConnectPeerConfiguration(const XmlNode& xmlNode) : 
    m_transitGatewayAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_insideCidrBlocksHasBeenSet(false),
    m_protocol(ProtocolValue::NOT_SET),
    m_protocolHasBeenSet(false),
    m_bgpConfigurationsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayConnectPeerConfiguration& TransitGatewayConnectPeerConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayAddressNode = resultNode.FirstChild("transitGatewayAddress");
    if(!transitGatewayAddressNode.IsNull())
    {
      m_transitGatewayAddress = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAddressNode.GetText());
      m_transitGatewayAddressHasBeenSet = true;
    }
    XmlNode peerAddressNode = resultNode.FirstChild("peerAddress");
    if(!peerAddressNode.IsNull())
    {
      m_peerAddress = Aws::Utils::Xml::DecodeEscapedXmlText(peerAddressNode.GetText());
      m_peerAddressHasBeenSet = true;
    }
    XmlNode insideCidrBlocksNode = resultNode.FirstChild("insideCidrBlocks");
    if(!insideCidrBlocksNode.IsNull())
    {
      XmlNode insideCidrBlocksMember = insideCidrBlocksNode.FirstChild("item");
      while(!insideCidrBlocksMember.IsNull())
      {
        m_insideCidrBlocks.push_back(insideCidrBlocksMember.GetText());
        insideCidrBlocksMember = insideCidrBlocksMember.NextNode("item");
      }

      m_insideCidrBlocksHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = ProtocolValueMapper::GetProtocolValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode bgpConfigurationsNode = resultNode.FirstChild("bgpConfigurations");
    if(!bgpConfigurationsNode.IsNull())
    {
      XmlNode bgpConfigurationsMember = bgpConfigurationsNode.FirstChild("item");
      while(!bgpConfigurationsMember.IsNull())
      {
        m_bgpConfigurations.push_back(bgpConfigurationsMember);
        bgpConfigurationsMember = bgpConfigurationsMember.NextNode("item");
      }

      m_bgpConfigurationsHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayConnectPeerConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAddress=" << StringUtils::URLEncode(m_transitGatewayAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_insideCidrBlocksHasBeenSet)
  {
      unsigned insideCidrBlocksIdx = 1;
      for(auto& item : m_insideCidrBlocks)
      {
        oStream << location << index << locationValue << ".InsideCidrBlocks." << insideCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << ProtocolValueMapper::GetNameForProtocolValue(m_protocol) << "&";
  }

  if(m_bgpConfigurationsHasBeenSet)
  {
      unsigned bgpConfigurationsIdx = 1;
      for(auto& item : m_bgpConfigurations)
      {
        Aws::StringStream bgpConfigurationsSs;
        bgpConfigurationsSs << location << index << locationValue << ".BgpConfigurations." << bgpConfigurationsIdx++;
        item.OutputToStream(oStream, bgpConfigurationsSs.str().c_str());
      }
  }

}

void TransitGatewayConnectPeerConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAddressHasBeenSet)
  {
      oStream << location << ".TransitGatewayAddress=" << StringUtils::URLEncode(m_transitGatewayAddress.c_str()) << "&";
  }
  if(m_peerAddressHasBeenSet)
  {
      oStream << location << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }
  if(m_insideCidrBlocksHasBeenSet)
  {
      unsigned insideCidrBlocksIdx = 1;
      for(auto& item : m_insideCidrBlocks)
      {
        oStream << location << ".InsideCidrBlocks." << insideCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << ProtocolValueMapper::GetNameForProtocolValue(m_protocol) << "&";
  }
  if(m_bgpConfigurationsHasBeenSet)
  {
      unsigned bgpConfigurationsIdx = 1;
      for(auto& item : m_bgpConfigurations)
      {
        Aws::StringStream bgpConfigurationsSs;
        bgpConfigurationsSs << location <<  ".BgpConfigurations." << bgpConfigurationsIdx++;
        item.OutputToStream(oStream, bgpConfigurationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
