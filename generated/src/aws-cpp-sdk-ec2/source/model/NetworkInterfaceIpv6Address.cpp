/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceIpv6Address.h>
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

NetworkInterfaceIpv6Address::NetworkInterfaceIpv6Address() : 
    m_ipv6AddressHasBeenSet(false)
{
}

NetworkInterfaceIpv6Address::NetworkInterfaceIpv6Address(const XmlNode& xmlNode) : 
    m_ipv6AddressHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterfaceIpv6Address& NetworkInterfaceIpv6Address::operator =(const XmlNode& xmlNode)
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
  }

  return *this;
}

void NetworkInterfaceIpv6Address::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }

}

void NetworkInterfaceIpv6Address::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
