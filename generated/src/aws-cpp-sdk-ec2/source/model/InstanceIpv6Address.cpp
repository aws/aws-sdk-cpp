/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceIpv6Address.h>
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

InstanceIpv6Address::InstanceIpv6Address() : 
    m_ipv6AddressHasBeenSet(false),
    m_isPrimaryIpv6(false),
    m_isPrimaryIpv6HasBeenSet(false)
{
}

InstanceIpv6Address::InstanceIpv6Address(const XmlNode& xmlNode) : 
    m_ipv6AddressHasBeenSet(false),
    m_isPrimaryIpv6(false),
    m_isPrimaryIpv6HasBeenSet(false)
{
  *this = xmlNode;
}

InstanceIpv6Address& InstanceIpv6Address::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv6AddressNode = resultNode.FirstChild("ipv6Address");
    if(!ipv6AddressNode.IsNull())
    {
      m_ipv6Address = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressNode.GetText());
      m_ipv6AddressHasBeenSet = true;
    }
    XmlNode isPrimaryIpv6Node = resultNode.FirstChild("isPrimaryIpv6");
    if(!isPrimaryIpv6Node.IsNull())
    {
      m_isPrimaryIpv6 = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isPrimaryIpv6Node.GetText()).c_str()).c_str());
      m_isPrimaryIpv6HasBeenSet = true;
    }
  }

  return *this;
}

void InstanceIpv6Address::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }

  if(m_isPrimaryIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".IsPrimaryIpv6=" << std::boolalpha << m_isPrimaryIpv6 << "&";
  }

}

void InstanceIpv6Address::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }
  if(m_isPrimaryIpv6HasBeenSet)
  {
      oStream << location << ".IsPrimaryIpv6=" << std::boolalpha << m_isPrimaryIpv6 << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
