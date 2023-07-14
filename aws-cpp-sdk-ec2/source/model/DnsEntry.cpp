/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DnsEntry.h>
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

DnsEntry::DnsEntry() : 
    m_dnsNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

DnsEntry::DnsEntry(const XmlNode& xmlNode) : 
    m_dnsNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = xmlNode;
}

DnsEntry& DnsEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsNameNode = resultNode.FirstChild("dnsName");
    if(!dnsNameNode.IsNull())
    {
      m_dnsName = Aws::Utils::Xml::DecodeEscapedXmlText(dnsNameNode.GetText());
      m_dnsNameHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("hostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void DnsEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }

  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }

}

void DnsEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
