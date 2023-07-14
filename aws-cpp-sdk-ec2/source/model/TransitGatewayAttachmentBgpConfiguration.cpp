/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayAttachmentBgpConfiguration.h>
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

TransitGatewayAttachmentBgpConfiguration::TransitGatewayAttachmentBgpConfiguration() : 
    m_transitGatewayAsn(0),
    m_transitGatewayAsnHasBeenSet(false),
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false),
    m_transitGatewayAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_bgpStatus(BgpStatus::NOT_SET),
    m_bgpStatusHasBeenSet(false)
{
}

TransitGatewayAttachmentBgpConfiguration::TransitGatewayAttachmentBgpConfiguration(const XmlNode& xmlNode) : 
    m_transitGatewayAsn(0),
    m_transitGatewayAsnHasBeenSet(false),
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false),
    m_transitGatewayAddressHasBeenSet(false),
    m_peerAddressHasBeenSet(false),
    m_bgpStatus(BgpStatus::NOT_SET),
    m_bgpStatusHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayAttachmentBgpConfiguration& TransitGatewayAttachmentBgpConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayAsnNode = resultNode.FirstChild("transitGatewayAsn");
    if(!transitGatewayAsnNode.IsNull())
    {
      m_transitGatewayAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAsnNode.GetText()).c_str()).c_str());
      m_transitGatewayAsnHasBeenSet = true;
    }
    XmlNode peerAsnNode = resultNode.FirstChild("peerAsn");
    if(!peerAsnNode.IsNull())
    {
      m_peerAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peerAsnNode.GetText()).c_str()).c_str());
      m_peerAsnHasBeenSet = true;
    }
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
    XmlNode bgpStatusNode = resultNode.FirstChild("bgpStatus");
    if(!bgpStatusNode.IsNull())
    {
      m_bgpStatus = BgpStatusMapper::GetBgpStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bgpStatusNode.GetText()).c_str()).c_str());
      m_bgpStatusHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayAttachmentBgpConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAsn=" << m_transitGatewayAsn << "&";
  }

  if(m_peerAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAsn=" << m_peerAsn << "&";
  }

  if(m_transitGatewayAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAddress=" << StringUtils::URLEncode(m_transitGatewayAddress.c_str()) << "&";
  }

  if(m_peerAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }

  if(m_bgpStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".BgpStatus=" << BgpStatusMapper::GetNameForBgpStatus(m_bgpStatus) << "&";
  }

}

void TransitGatewayAttachmentBgpConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAsnHasBeenSet)
  {
      oStream << location << ".TransitGatewayAsn=" << m_transitGatewayAsn << "&";
  }
  if(m_peerAsnHasBeenSet)
  {
      oStream << location << ".PeerAsn=" << m_peerAsn << "&";
  }
  if(m_transitGatewayAddressHasBeenSet)
  {
      oStream << location << ".TransitGatewayAddress=" << StringUtils::URLEncode(m_transitGatewayAddress.c_str()) << "&";
  }
  if(m_peerAddressHasBeenSet)
  {
      oStream << location << ".PeerAddress=" << StringUtils::URLEncode(m_peerAddress.c_str()) << "&";
  }
  if(m_bgpStatusHasBeenSet)
  {
      oStream << location << ".BgpStatus=" << BgpStatusMapper::GetNameForBgpStatus(m_bgpStatus) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
