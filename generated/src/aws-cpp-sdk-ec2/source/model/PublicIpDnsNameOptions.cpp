/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PublicIpDnsNameOptions.h>
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

PublicIpDnsNameOptions::PublicIpDnsNameOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

PublicIpDnsNameOptions& PublicIpDnsNameOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsHostnameTypeNode = resultNode.FirstChild("dnsHostnameType");
    if(!dnsHostnameTypeNode.IsNull())
    {
      m_dnsHostnameType = Aws::Utils::Xml::DecodeEscapedXmlText(dnsHostnameTypeNode.GetText());
      m_dnsHostnameTypeHasBeenSet = true;
    }
    XmlNode publicIpv4DnsNameNode = resultNode.FirstChild("publicIpv4DnsName");
    if(!publicIpv4DnsNameNode.IsNull())
    {
      m_publicIpv4DnsName = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpv4DnsNameNode.GetText());
      m_publicIpv4DnsNameHasBeenSet = true;
    }
    XmlNode publicIpv6DnsNameNode = resultNode.FirstChild("publicIpv6DnsName");
    if(!publicIpv6DnsNameNode.IsNull())
    {
      m_publicIpv6DnsName = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpv6DnsNameNode.GetText());
      m_publicIpv6DnsNameHasBeenSet = true;
    }
    XmlNode publicDualStackDnsNameNode = resultNode.FirstChild("publicDualStackDnsName");
    if(!publicDualStackDnsNameNode.IsNull())
    {
      m_publicDualStackDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(publicDualStackDnsNameNode.GetText());
      m_publicDualStackDnsNameHasBeenSet = true;
    }
  }

  return *this;
}

void PublicIpDnsNameOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsHostnameTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsHostnameType=" << StringUtils::URLEncode(m_dnsHostnameType.c_str()) << "&";
  }

  if(m_publicIpv4DnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIpv4DnsName=" << StringUtils::URLEncode(m_publicIpv4DnsName.c_str()) << "&";
  }

  if(m_publicIpv6DnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIpv6DnsName=" << StringUtils::URLEncode(m_publicIpv6DnsName.c_str()) << "&";
  }

  if(m_publicDualStackDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicDualStackDnsName=" << StringUtils::URLEncode(m_publicDualStackDnsName.c_str()) << "&";
  }

}

void PublicIpDnsNameOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsHostnameTypeHasBeenSet)
  {
      oStream << location << ".DnsHostnameType=" << StringUtils::URLEncode(m_dnsHostnameType.c_str()) << "&";
  }
  if(m_publicIpv4DnsNameHasBeenSet)
  {
      oStream << location << ".PublicIpv4DnsName=" << StringUtils::URLEncode(m_publicIpv4DnsName.c_str()) << "&";
  }
  if(m_publicIpv6DnsNameHasBeenSet)
  {
      oStream << location << ".PublicIpv6DnsName=" << StringUtils::URLEncode(m_publicIpv6DnsName.c_str()) << "&";
  }
  if(m_publicDualStackDnsNameHasBeenSet)
  {
      oStream << location << ".PublicDualStackDnsName=" << StringUtils::URLEncode(m_publicDualStackDnsName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
