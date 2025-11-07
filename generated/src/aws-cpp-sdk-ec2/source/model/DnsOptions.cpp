/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DnsOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

DnsOptions::DnsOptions(const XmlNode& xmlNode) { *this = xmlNode; }

DnsOptions& DnsOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode dnsRecordIpTypeNode = resultNode.FirstChild("dnsRecordIpType");
    if (!dnsRecordIpTypeNode.IsNull()) {
      m_dnsRecordIpType = DnsRecordIpTypeMapper::GetDnsRecordIpTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsRecordIpTypeNode.GetText()).c_str()));
      m_dnsRecordIpTypeHasBeenSet = true;
    }
    XmlNode privateDnsOnlyForInboundResolverEndpointNode = resultNode.FirstChild("privateDnsOnlyForInboundResolverEndpoint");
    if (!privateDnsOnlyForInboundResolverEndpointNode.IsNull()) {
      m_privateDnsOnlyForInboundResolverEndpoint = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsOnlyForInboundResolverEndpointNode.GetText()).c_str()).c_str());
      m_privateDnsOnlyForInboundResolverEndpointHasBeenSet = true;
    }
    XmlNode privateDnsPreferenceNode = resultNode.FirstChild("privateDnsPreference");
    if (!privateDnsPreferenceNode.IsNull()) {
      m_privateDnsPreference = Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsPreferenceNode.GetText());
      m_privateDnsPreferenceHasBeenSet = true;
    }
    XmlNode privateDnsSpecifiedDomainsNode = resultNode.FirstChild("privateDnsSpecifiedDomainSet");
    if (!privateDnsSpecifiedDomainsNode.IsNull()) {
      XmlNode privateDnsSpecifiedDomainsMember = privateDnsSpecifiedDomainsNode.FirstChild("item");
      m_privateDnsSpecifiedDomainsHasBeenSet = !privateDnsSpecifiedDomainsMember.IsNull();
      while (!privateDnsSpecifiedDomainsMember.IsNull()) {
        m_privateDnsSpecifiedDomains.push_back(privateDnsSpecifiedDomainsMember.GetText());
        privateDnsSpecifiedDomainsMember = privateDnsSpecifiedDomainsMember.NextNode("item");
      }

      m_privateDnsSpecifiedDomainsHasBeenSet = true;
    }
  }

  return *this;
}

void DnsOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_dnsRecordIpTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".DnsRecordIpType=" << StringUtils::URLEncode(DnsRecordIpTypeMapper::GetNameForDnsRecordIpType(m_dnsRecordIpType)) << "&";
  }

  if (m_privateDnsOnlyForInboundResolverEndpointHasBeenSet) {
    oStream << location << index << locationValue << ".PrivateDnsOnlyForInboundResolverEndpoint=" << std::boolalpha
            << m_privateDnsOnlyForInboundResolverEndpoint << "&";
  }

  if (m_privateDnsPreferenceHasBeenSet) {
    oStream << location << index << locationValue << ".PrivateDnsPreference=" << StringUtils::URLEncode(m_privateDnsPreference.c_str())
            << "&";
  }

  if (m_privateDnsSpecifiedDomainsHasBeenSet) {
    unsigned privateDnsSpecifiedDomainsIdx = 1;
    for (auto& item : m_privateDnsSpecifiedDomains) {
      oStream << location << index << locationValue << ".PrivateDnsSpecifiedDomainSet." << privateDnsSpecifiedDomainsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void DnsOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_dnsRecordIpTypeHasBeenSet) {
    oStream << location
            << ".DnsRecordIpType=" << StringUtils::URLEncode(DnsRecordIpTypeMapper::GetNameForDnsRecordIpType(m_dnsRecordIpType)) << "&";
  }
  if (m_privateDnsOnlyForInboundResolverEndpointHasBeenSet) {
    oStream << location << ".PrivateDnsOnlyForInboundResolverEndpoint=" << std::boolalpha << m_privateDnsOnlyForInboundResolverEndpoint
            << "&";
  }
  if (m_privateDnsPreferenceHasBeenSet) {
    oStream << location << ".PrivateDnsPreference=" << StringUtils::URLEncode(m_privateDnsPreference.c_str()) << "&";
  }
  if (m_privateDnsSpecifiedDomainsHasBeenSet) {
    unsigned privateDnsSpecifiedDomainsIdx = 1;
    for (auto& item : m_privateDnsSpecifiedDomains) {
      oStream << location << ".PrivateDnsSpecifiedDomainSet." << privateDnsSpecifiedDomainsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
