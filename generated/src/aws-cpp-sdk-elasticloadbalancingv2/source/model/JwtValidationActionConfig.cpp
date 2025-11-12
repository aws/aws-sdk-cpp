/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticloadbalancingv2/model/JwtValidationActionConfig.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {

JwtValidationActionConfig::JwtValidationActionConfig(const XmlNode& xmlNode) { *this = xmlNode; }

JwtValidationActionConfig& JwtValidationActionConfig::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode jwksEndpointNode = resultNode.FirstChild("JwksEndpoint");
    if (!jwksEndpointNode.IsNull()) {
      m_jwksEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(jwksEndpointNode.GetText());
      m_jwksEndpointHasBeenSet = true;
    }
    XmlNode issuerNode = resultNode.FirstChild("Issuer");
    if (!issuerNode.IsNull()) {
      m_issuer = Aws::Utils::Xml::DecodeEscapedXmlText(issuerNode.GetText());
      m_issuerHasBeenSet = true;
    }
    XmlNode additionalClaimsNode = resultNode.FirstChild("AdditionalClaims");
    if (!additionalClaimsNode.IsNull()) {
      XmlNode additionalClaimsMember = additionalClaimsNode.FirstChild("member");
      m_additionalClaimsHasBeenSet = !additionalClaimsMember.IsNull();
      while (!additionalClaimsMember.IsNull()) {
        m_additionalClaims.push_back(additionalClaimsMember);
        additionalClaimsMember = additionalClaimsMember.NextNode("member");
      }

      m_additionalClaimsHasBeenSet = true;
    }
  }

  return *this;
}

void JwtValidationActionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                               const char* locationValue) const {
  if (m_jwksEndpointHasBeenSet) {
    oStream << location << index << locationValue << ".JwksEndpoint=" << StringUtils::URLEncode(m_jwksEndpoint.c_str()) << "&";
  }

  if (m_issuerHasBeenSet) {
    oStream << location << index << locationValue << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }

  if (m_additionalClaimsHasBeenSet) {
    unsigned additionalClaimsIdx = 1;
    for (auto& item : m_additionalClaims) {
      Aws::StringStream additionalClaimsSs;
      additionalClaimsSs << location << index << locationValue << ".AdditionalClaims.member." << additionalClaimsIdx++;
      item.OutputToStream(oStream, additionalClaimsSs.str().c_str());
    }
  }
}

void JwtValidationActionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_jwksEndpointHasBeenSet) {
    oStream << location << ".JwksEndpoint=" << StringUtils::URLEncode(m_jwksEndpoint.c_str()) << "&";
  }
  if (m_issuerHasBeenSet) {
    oStream << location << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }
  if (m_additionalClaimsHasBeenSet) {
    unsigned additionalClaimsIdx = 1;
    for (auto& item : m_additionalClaims) {
      Aws::StringStream additionalClaimsSs;
      additionalClaimsSs << location << ".AdditionalClaims.member." << additionalClaimsIdx++;
      item.OutputToStream(oStream, additionalClaimsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
