/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnConnectionOptions.h>
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

VpnConnectionOptions::VpnConnectionOptions() : 
    m_enableAcceleration(false),
    m_enableAccelerationHasBeenSet(false),
    m_staticRoutesOnly(false),
    m_staticRoutesOnlyHasBeenSet(false),
    m_localIpv4NetworkCidrHasBeenSet(false),
    m_remoteIpv4NetworkCidrHasBeenSet(false),
    m_localIpv6NetworkCidrHasBeenSet(false),
    m_remoteIpv6NetworkCidrHasBeenSet(false),
    m_tunnelInsideIpVersion(TunnelInsideIpVersion::NOT_SET),
    m_tunnelInsideIpVersionHasBeenSet(false),
    m_tunnelOptionsHasBeenSet(false)
{
}

VpnConnectionOptions::VpnConnectionOptions(const XmlNode& xmlNode) : 
    m_enableAcceleration(false),
    m_enableAccelerationHasBeenSet(false),
    m_staticRoutesOnly(false),
    m_staticRoutesOnlyHasBeenSet(false),
    m_localIpv4NetworkCidrHasBeenSet(false),
    m_remoteIpv4NetworkCidrHasBeenSet(false),
    m_localIpv6NetworkCidrHasBeenSet(false),
    m_remoteIpv6NetworkCidrHasBeenSet(false),
    m_tunnelInsideIpVersion(TunnelInsideIpVersion::NOT_SET),
    m_tunnelInsideIpVersionHasBeenSet(false),
    m_tunnelOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

VpnConnectionOptions& VpnConnectionOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enableAccelerationNode = resultNode.FirstChild("enableAcceleration");
    if(!enableAccelerationNode.IsNull())
    {
      m_enableAcceleration = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableAccelerationNode.GetText()).c_str()).c_str());
      m_enableAccelerationHasBeenSet = true;
    }
    XmlNode staticRoutesOnlyNode = resultNode.FirstChild("staticRoutesOnly");
    if(!staticRoutesOnlyNode.IsNull())
    {
      m_staticRoutesOnly = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(staticRoutesOnlyNode.GetText()).c_str()).c_str());
      m_staticRoutesOnlyHasBeenSet = true;
    }
    XmlNode localIpv4NetworkCidrNode = resultNode.FirstChild("localIpv4NetworkCidr");
    if(!localIpv4NetworkCidrNode.IsNull())
    {
      m_localIpv4NetworkCidr = Aws::Utils::Xml::DecodeEscapedXmlText(localIpv4NetworkCidrNode.GetText());
      m_localIpv4NetworkCidrHasBeenSet = true;
    }
    XmlNode remoteIpv4NetworkCidrNode = resultNode.FirstChild("remoteIpv4NetworkCidr");
    if(!remoteIpv4NetworkCidrNode.IsNull())
    {
      m_remoteIpv4NetworkCidr = Aws::Utils::Xml::DecodeEscapedXmlText(remoteIpv4NetworkCidrNode.GetText());
      m_remoteIpv4NetworkCidrHasBeenSet = true;
    }
    XmlNode localIpv6NetworkCidrNode = resultNode.FirstChild("localIpv6NetworkCidr");
    if(!localIpv6NetworkCidrNode.IsNull())
    {
      m_localIpv6NetworkCidr = Aws::Utils::Xml::DecodeEscapedXmlText(localIpv6NetworkCidrNode.GetText());
      m_localIpv6NetworkCidrHasBeenSet = true;
    }
    XmlNode remoteIpv6NetworkCidrNode = resultNode.FirstChild("remoteIpv6NetworkCidr");
    if(!remoteIpv6NetworkCidrNode.IsNull())
    {
      m_remoteIpv6NetworkCidr = Aws::Utils::Xml::DecodeEscapedXmlText(remoteIpv6NetworkCidrNode.GetText());
      m_remoteIpv6NetworkCidrHasBeenSet = true;
    }
    XmlNode tunnelInsideIpVersionNode = resultNode.FirstChild("tunnelInsideIpVersion");
    if(!tunnelInsideIpVersionNode.IsNull())
    {
      m_tunnelInsideIpVersion = TunnelInsideIpVersionMapper::GetTunnelInsideIpVersionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tunnelInsideIpVersionNode.GetText()).c_str()).c_str());
      m_tunnelInsideIpVersionHasBeenSet = true;
    }
    XmlNode tunnelOptionsNode = resultNode.FirstChild("tunnelOptionSet");
    if(!tunnelOptionsNode.IsNull())
    {
      XmlNode tunnelOptionsMember = tunnelOptionsNode.FirstChild("item");
      while(!tunnelOptionsMember.IsNull())
      {
        m_tunnelOptions.push_back(tunnelOptionsMember);
        tunnelOptionsMember = tunnelOptionsMember.NextNode("item");
      }

      m_tunnelOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void VpnConnectionOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enableAccelerationHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnableAcceleration=" << std::boolalpha << m_enableAcceleration << "&";
  }

  if(m_staticRoutesOnlyHasBeenSet)
  {
      oStream << location << index << locationValue << ".StaticRoutesOnly=" << std::boolalpha << m_staticRoutesOnly << "&";
  }

  if(m_localIpv4NetworkCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalIpv4NetworkCidr=" << StringUtils::URLEncode(m_localIpv4NetworkCidr.c_str()) << "&";
  }

  if(m_remoteIpv4NetworkCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemoteIpv4NetworkCidr=" << StringUtils::URLEncode(m_remoteIpv4NetworkCidr.c_str()) << "&";
  }

  if(m_localIpv6NetworkCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalIpv6NetworkCidr=" << StringUtils::URLEncode(m_localIpv6NetworkCidr.c_str()) << "&";
  }

  if(m_remoteIpv6NetworkCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemoteIpv6NetworkCidr=" << StringUtils::URLEncode(m_remoteIpv6NetworkCidr.c_str()) << "&";
  }

  if(m_tunnelInsideIpVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".TunnelInsideIpVersion=" << TunnelInsideIpVersionMapper::GetNameForTunnelInsideIpVersion(m_tunnelInsideIpVersion) << "&";
  }

  if(m_tunnelOptionsHasBeenSet)
  {
      unsigned tunnelOptionsIdx = 1;
      for(auto& item : m_tunnelOptions)
      {
        Aws::StringStream tunnelOptionsSs;
        tunnelOptionsSs << location << index << locationValue << ".TunnelOptionSet." << tunnelOptionsIdx++;
        item.OutputToStream(oStream, tunnelOptionsSs.str().c_str());
      }
  }

}

void VpnConnectionOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enableAccelerationHasBeenSet)
  {
      oStream << location << ".EnableAcceleration=" << std::boolalpha << m_enableAcceleration << "&";
  }
  if(m_staticRoutesOnlyHasBeenSet)
  {
      oStream << location << ".StaticRoutesOnly=" << std::boolalpha << m_staticRoutesOnly << "&";
  }
  if(m_localIpv4NetworkCidrHasBeenSet)
  {
      oStream << location << ".LocalIpv4NetworkCidr=" << StringUtils::URLEncode(m_localIpv4NetworkCidr.c_str()) << "&";
  }
  if(m_remoteIpv4NetworkCidrHasBeenSet)
  {
      oStream << location << ".RemoteIpv4NetworkCidr=" << StringUtils::URLEncode(m_remoteIpv4NetworkCidr.c_str()) << "&";
  }
  if(m_localIpv6NetworkCidrHasBeenSet)
  {
      oStream << location << ".LocalIpv6NetworkCidr=" << StringUtils::URLEncode(m_localIpv6NetworkCidr.c_str()) << "&";
  }
  if(m_remoteIpv6NetworkCidrHasBeenSet)
  {
      oStream << location << ".RemoteIpv6NetworkCidr=" << StringUtils::URLEncode(m_remoteIpv6NetworkCidr.c_str()) << "&";
  }
  if(m_tunnelInsideIpVersionHasBeenSet)
  {
      oStream << location << ".TunnelInsideIpVersion=" << TunnelInsideIpVersionMapper::GetNameForTunnelInsideIpVersion(m_tunnelInsideIpVersion) << "&";
  }
  if(m_tunnelOptionsHasBeenSet)
  {
      unsigned tunnelOptionsIdx = 1;
      for(auto& item : m_tunnelOptions)
      {
        Aws::StringStream tunnelOptionsSs;
        tunnelOptionsSs << location <<  ".TunnelOptionSet." << tunnelOptionsIdx++;
        item.OutputToStream(oStream, tunnelOptionsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
