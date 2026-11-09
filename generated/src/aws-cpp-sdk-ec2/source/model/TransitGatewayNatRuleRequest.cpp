/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayNatRuleRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayNatRuleRequest::TransitGatewayNatRuleRequest(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayNatRuleRequest& TransitGatewayNatRuleRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ruleNumberNode = resultNode.FirstChild("RuleNumber");
    if (!ruleNumberNode.IsNull()) {
      m_ruleNumber =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleNumberNode.GetText()).c_str()).c_str());
      m_ruleNumberHasBeenSet = true;
    }
    XmlNode matchSourceCidrNode = resultNode.FirstChild("MatchSourceCidr");
    if (!matchSourceCidrNode.IsNull()) {
      m_matchSourceCidr = Aws::Utils::Xml::DecodeEscapedXmlText(matchSourceCidrNode.GetText());
      m_matchSourceCidrHasBeenSet = true;
    }
    XmlNode natCidrNode = resultNode.FirstChild("NatCidr");
    if (!natCidrNode.IsNull()) {
      m_natCidr = Aws::Utils::Xml::DecodeEscapedXmlText(natCidrNode.GetText());
      m_natCidrHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayNatRuleRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_ruleNumberHasBeenSet) {
    oStream << location << index << locationValue << ".RuleNumber=" << m_ruleNumber << "&";
  }

  if (m_matchSourceCidrHasBeenSet) {
    oStream << location << index << locationValue << ".MatchSourceCidr=" << StringUtils::URLEncode(m_matchSourceCidr.c_str()) << "&";
  }

  if (m_natCidrHasBeenSet) {
    oStream << location << index << locationValue << ".NatCidr=" << StringUtils::URLEncode(m_natCidr.c_str()) << "&";
  }
}

void TransitGatewayNatRuleRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ruleNumberHasBeenSet) {
    oStream << location << ".RuleNumber=" << m_ruleNumber << "&";
  }
  if (m_matchSourceCidrHasBeenSet) {
    oStream << location << ".MatchSourceCidr=" << StringUtils::URLEncode(m_matchSourceCidr.c_str()) << "&";
  }
  if (m_natCidrHasBeenSet) {
    oStream << location << ".NatCidr=" << StringUtils::URLEncode(m_natCidr.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
