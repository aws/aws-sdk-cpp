/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceConnectEndpointDnsNames.h>
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

InstanceConnectEndpointDnsNames::InstanceConnectEndpointDnsNames(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceConnectEndpointDnsNames& InstanceConnectEndpointDnsNames::operator =(const XmlNode& xmlNode)
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
    XmlNode fipsDnsNameNode = resultNode.FirstChild("fipsDnsName");
    if(!fipsDnsNameNode.IsNull())
    {
      m_fipsDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(fipsDnsNameNode.GetText());
      m_fipsDnsNameHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceConnectEndpointDnsNames::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }

  if(m_fipsDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".FipsDnsName=" << StringUtils::URLEncode(m_fipsDnsName.c_str()) << "&";
  }

}

void InstanceConnectEndpointDnsNames::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }
  if(m_fipsDnsNameHasBeenSet)
  {
      oStream << location << ".FipsDnsName=" << StringUtils::URLEncode(m_fipsDnsName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
