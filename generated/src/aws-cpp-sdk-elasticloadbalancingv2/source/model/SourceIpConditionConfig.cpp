/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/model/SourceIpConditionConfig.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {

SourceIpConditionConfig::SourceIpConditionConfig(const XmlNode& xmlNode) { *this = xmlNode; }

SourceIpConditionConfig& SourceIpConditionConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if (!valuesNode.IsNull()) {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      m_valuesHasBeenSet = !valuesMember.IsNull();
      while (!valuesMember.IsNull()) {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
    XmlNode ipAddressTypeNode = resultNode.FirstChild("IpAddressType");
    if (!ipAddressTypeNode.IsNull()) {
      m_ipAddressType = SourceIpAddressTypeEnumMapper::GetSourceIpAddressTypeEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressTypeNode.GetText()).c_str()));
      m_ipAddressTypeHasBeenSet = true;
    }
  }

  return *this;
}

void SourceIpConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }

  if (m_ipAddressTypeHasBeenSet) {
    oStream << location << index << locationValue << ".IpAddressType="
            << StringUtils::URLEncode(SourceIpAddressTypeEnumMapper::GetNameForSourceIpAddressTypeEnum(m_ipAddressType)) << "&";
  }
}

void SourceIpConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_ipAddressTypeHasBeenSet) {
    oStream << location << ".IpAddressType="
            << StringUtils::URLEncode(SourceIpAddressTypeEnumMapper::GetNameForSourceIpAddressTypeEnum(m_ipAddressType)) << "&";
  }
}

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
