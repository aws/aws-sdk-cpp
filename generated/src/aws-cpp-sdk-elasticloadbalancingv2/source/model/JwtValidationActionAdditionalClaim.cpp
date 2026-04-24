/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/model/JwtValidationActionAdditionalClaim.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {

JwtValidationActionAdditionalClaim::JwtValidationActionAdditionalClaim(const XmlNode& xmlNode) { *this = xmlNode; }

JwtValidationActionAdditionalClaim& JwtValidationActionAdditionalClaim::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode formatNode = resultNode.FirstChild("Format");
    if (!formatNode.IsNull()) {
      m_format = JwtValidationActionAdditionalClaimFormatEnumMapper::GetJwtValidationActionAdditionalClaimFormatEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(formatNode.GetText()).c_str()));
      m_formatHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
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
  }

  return *this;
}

void JwtValidationActionAdditionalClaim::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                        const char* locationValue) const {
  if (m_formatHasBeenSet) {
    oStream << location << index << locationValue << ".Format="
            << StringUtils::URLEncode(
                   JwtValidationActionAdditionalClaimFormatEnumMapper::GetNameForJwtValidationActionAdditionalClaimFormatEnum(m_format))
            << "&";
  }

  if (m_nameHasBeenSet) {
    oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

void JwtValidationActionAdditionalClaim::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_formatHasBeenSet) {
    oStream << location << ".Format="
            << StringUtils::URLEncode(
                   JwtValidationActionAdditionalClaimFormatEnumMapper::GetNameForJwtValidationActionAdditionalClaimFormatEnum(m_format))
            << "&";
  }
  if (m_nameHasBeenSet) {
    oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
