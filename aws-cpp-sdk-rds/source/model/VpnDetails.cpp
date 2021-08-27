/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/VpnDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

VpnDetails::VpnDetails() : 
    m_vpnIdHasBeenSet(false),
    m_vpnTunnelOriginatorIPHasBeenSet(false),
    m_vpnGatewayIpHasBeenSet(false),
    m_vpnPSKHasBeenSet(false),
    m_vpnNameHasBeenSet(false),
    m_vpnStateHasBeenSet(false)
{
}

VpnDetails::VpnDetails(const XmlNode& xmlNode) : 
    m_vpnIdHasBeenSet(false),
    m_vpnTunnelOriginatorIPHasBeenSet(false),
    m_vpnGatewayIpHasBeenSet(false),
    m_vpnPSKHasBeenSet(false),
    m_vpnNameHasBeenSet(false),
    m_vpnStateHasBeenSet(false)
{
  *this = xmlNode;
}

VpnDetails& VpnDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpnIdNode = resultNode.FirstChild("VpnId");
    if(!vpnIdNode.IsNull())
    {
      m_vpnId = Aws::Utils::Xml::DecodeEscapedXmlText(vpnIdNode.GetText());
      m_vpnIdHasBeenSet = true;
    }
    XmlNode vpnTunnelOriginatorIPNode = resultNode.FirstChild("VpnTunnelOriginatorIP");
    if(!vpnTunnelOriginatorIPNode.IsNull())
    {
      m_vpnTunnelOriginatorIP = Aws::Utils::Xml::DecodeEscapedXmlText(vpnTunnelOriginatorIPNode.GetText());
      m_vpnTunnelOriginatorIPHasBeenSet = true;
    }
    XmlNode vpnGatewayIpNode = resultNode.FirstChild("VpnGatewayIp");
    if(!vpnGatewayIpNode.IsNull())
    {
      m_vpnGatewayIp = Aws::Utils::Xml::DecodeEscapedXmlText(vpnGatewayIpNode.GetText());
      m_vpnGatewayIpHasBeenSet = true;
    }
    XmlNode vpnPSKNode = resultNode.FirstChild("VpnPSK");
    if(!vpnPSKNode.IsNull())
    {
      m_vpnPSK = Aws::Utils::Xml::DecodeEscapedXmlText(vpnPSKNode.GetText());
      m_vpnPSKHasBeenSet = true;
    }
    XmlNode vpnNameNode = resultNode.FirstChild("VpnName");
    if(!vpnNameNode.IsNull())
    {
      m_vpnName = Aws::Utils::Xml::DecodeEscapedXmlText(vpnNameNode.GetText());
      m_vpnNameHasBeenSet = true;
    }
    XmlNode vpnStateNode = resultNode.FirstChild("VpnState");
    if(!vpnStateNode.IsNull())
    {
      m_vpnState = Aws::Utils::Xml::DecodeEscapedXmlText(vpnStateNode.GetText());
      m_vpnStateHasBeenSet = true;
    }
  }

  return *this;
}

void VpnDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpnIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnId=" << StringUtils::URLEncode(m_vpnId.c_str()) << "&";
  }

  if(m_vpnTunnelOriginatorIPHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnTunnelOriginatorIP=" << StringUtils::URLEncode(m_vpnTunnelOriginatorIP.c_str()) << "&";
  }

  if(m_vpnGatewayIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnGatewayIp=" << StringUtils::URLEncode(m_vpnGatewayIp.c_str()) << "&";
  }

  if(m_vpnPSKHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnPSK=" << StringUtils::URLEncode(m_vpnPSK.c_str()) << "&";
  }

  if(m_vpnNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnName=" << StringUtils::URLEncode(m_vpnName.c_str()) << "&";
  }

  if(m_vpnStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnState=" << StringUtils::URLEncode(m_vpnState.c_str()) << "&";
  }

}

void VpnDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpnIdHasBeenSet)
  {
      oStream << location << ".VpnId=" << StringUtils::URLEncode(m_vpnId.c_str()) << "&";
  }
  if(m_vpnTunnelOriginatorIPHasBeenSet)
  {
      oStream << location << ".VpnTunnelOriginatorIP=" << StringUtils::URLEncode(m_vpnTunnelOriginatorIP.c_str()) << "&";
  }
  if(m_vpnGatewayIpHasBeenSet)
  {
      oStream << location << ".VpnGatewayIp=" << StringUtils::URLEncode(m_vpnGatewayIp.c_str()) << "&";
  }
  if(m_vpnPSKHasBeenSet)
  {
      oStream << location << ".VpnPSK=" << StringUtils::URLEncode(m_vpnPSK.c_str()) << "&";
  }
  if(m_vpnNameHasBeenSet)
  {
      oStream << location << ".VpnName=" << StringUtils::URLEncode(m_vpnName.c_str()) << "&";
  }
  if(m_vpnStateHasBeenSet)
  {
      oStream << location << ".VpnState=" << StringUtils::URLEncode(m_vpnState.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
