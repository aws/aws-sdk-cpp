﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/NetworkInterfaceIpv6Address.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

NetworkInterfaceIpv6Address::NetworkInterfaceIpv6Address(const XmlNode& xmlNode) { *this = xmlNode; }

NetworkInterfaceIpv6Address& NetworkInterfaceIpv6Address::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ipv6AddressNode = resultNode.FirstChild("ipv6Address");
    if (!ipv6AddressNode.IsNull()) {
      m_ipv6Address = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressNode.GetText());
      m_ipv6AddressHasBeenSet = true;
    }
    XmlNode publicIpv6DnsNameNode = resultNode.FirstChild("publicIpv6DnsName");
    if (!publicIpv6DnsNameNode.IsNull()) {
      m_publicIpv6DnsName = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpv6DnsNameNode.GetText());
      m_publicIpv6DnsNameHasBeenSet = true;
    }
    XmlNode isPrimaryIpv6Node = resultNode.FirstChild("isPrimaryIpv6");
    if (!isPrimaryIpv6Node.IsNull()) {
      m_isPrimaryIpv6 =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isPrimaryIpv6Node.GetText()).c_str()).c_str());
      m_isPrimaryIpv6HasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfaceIpv6Address::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                 const char* locationValue) const {
  if (m_ipv6AddressHasBeenSet) {
    oStream << location << index << locationValue << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }

  if (m_publicIpv6DnsNameHasBeenSet) {
    oStream << location << index << locationValue << ".PublicIpv6DnsName=" << StringUtils::URLEncode(m_publicIpv6DnsName.c_str()) << "&";
  }

  if (m_isPrimaryIpv6HasBeenSet) {
    oStream << location << index << locationValue << ".IsPrimaryIpv6=" << std::boolalpha << m_isPrimaryIpv6 << "&";
  }
}

void NetworkInterfaceIpv6Address::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ipv6AddressHasBeenSet) {
    oStream << location << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }
  if (m_publicIpv6DnsNameHasBeenSet) {
    oStream << location << ".PublicIpv6DnsName=" << StringUtils::URLEncode(m_publicIpv6DnsName.c_str()) << "&";
  }
  if (m_isPrimaryIpv6HasBeenSet) {
    oStream << location << ".IsPrimaryIpv6=" << std::boolalpha << m_isPrimaryIpv6 << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
