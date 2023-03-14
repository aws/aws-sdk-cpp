/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DnsOptionsSpecification.h>
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

DnsOptionsSpecification::DnsOptionsSpecification() : 
    m_dnsRecordIpType(DnsRecordIpType::NOT_SET),
    m_dnsRecordIpTypeHasBeenSet(false),
    m_privateDnsOnlyForInboundResolverEndpoint(false),
    m_privateDnsOnlyForInboundResolverEndpointHasBeenSet(false)
{
}

DnsOptionsSpecification::DnsOptionsSpecification(const XmlNode& xmlNode) : 
    m_dnsRecordIpType(DnsRecordIpType::NOT_SET),
    m_dnsRecordIpTypeHasBeenSet(false),
    m_privateDnsOnlyForInboundResolverEndpoint(false),
    m_privateDnsOnlyForInboundResolverEndpointHasBeenSet(false)
{
  *this = xmlNode;
}

DnsOptionsSpecification& DnsOptionsSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsRecordIpTypeNode = resultNode.FirstChild("DnsRecordIpType");
    if(!dnsRecordIpTypeNode.IsNull())
    {
      m_dnsRecordIpType = DnsRecordIpTypeMapper::GetDnsRecordIpTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsRecordIpTypeNode.GetText()).c_str()).c_str());
      m_dnsRecordIpTypeHasBeenSet = true;
    }
    XmlNode privateDnsOnlyForInboundResolverEndpointNode = resultNode.FirstChild("PrivateDnsOnlyForInboundResolverEndpoint");
    if(!privateDnsOnlyForInboundResolverEndpointNode.IsNull())
    {
      m_privateDnsOnlyForInboundResolverEndpoint = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsOnlyForInboundResolverEndpointNode.GetText()).c_str()).c_str());
      m_privateDnsOnlyForInboundResolverEndpointHasBeenSet = true;
    }
  }

  return *this;
}

void DnsOptionsSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsRecordIpTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsRecordIpType=" << DnsRecordIpTypeMapper::GetNameForDnsRecordIpType(m_dnsRecordIpType) << "&";
  }

  if(m_privateDnsOnlyForInboundResolverEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsOnlyForInboundResolverEndpoint=" << std::boolalpha << m_privateDnsOnlyForInboundResolverEndpoint << "&";
  }

}

void DnsOptionsSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsRecordIpTypeHasBeenSet)
  {
      oStream << location << ".DnsRecordIpType=" << DnsRecordIpTypeMapper::GetNameForDnsRecordIpType(m_dnsRecordIpType) << "&";
  }
  if(m_privateDnsOnlyForInboundResolverEndpointHasBeenSet)
  {
      oStream << location << ".PrivateDnsOnlyForInboundResolverEndpoint=" << std::boolalpha << m_privateDnsOnlyForInboundResolverEndpoint << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
