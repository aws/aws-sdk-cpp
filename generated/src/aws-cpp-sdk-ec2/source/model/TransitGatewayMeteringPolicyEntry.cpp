/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayMeteringPolicyEntry::TransitGatewayMeteringPolicyEntry(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayMeteringPolicyEntry& TransitGatewayMeteringPolicyEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode policyRuleNumberNode = resultNode.FirstChild("policyRuleNumber");
    if (!policyRuleNumberNode.IsNull()) {
      m_policyRuleNumber = Aws::Utils::Xml::DecodeEscapedXmlText(policyRuleNumberNode.GetText());
      m_policyRuleNumberHasBeenSet = true;
    }
    XmlNode meteredAccountNode = resultNode.FirstChild("meteredAccount");
    if (!meteredAccountNode.IsNull()) {
      m_meteredAccount = TransitGatewayMeteringPayerTypeMapper::GetTransitGatewayMeteringPayerTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(meteredAccountNode.GetText()).c_str()));
      m_meteredAccountHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = TransitGatewayMeteringPolicyEntryStateMapper::GetTransitGatewayMeteringPolicyEntryStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode updatedAtNode = resultNode.FirstChild("updatedAt");
    if (!updatedAtNode.IsNull()) {
      m_updatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_updatedAtHasBeenSet = true;
    }
    XmlNode updateEffectiveAtNode = resultNode.FirstChild("updateEffectiveAt");
    if (!updateEffectiveAtNode.IsNull()) {
      m_updateEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_updateEffectiveAtHasBeenSet = true;
    }
    XmlNode meteringPolicyRuleNode = resultNode.FirstChild("meteringPolicyRule");
    if (!meteringPolicyRuleNode.IsNull()) {
      m_meteringPolicyRule = meteringPolicyRuleNode;
      m_meteringPolicyRuleHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayMeteringPolicyEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_policyRuleNumberHasBeenSet) {
    oStream << location << index << locationValue << ".PolicyRuleNumber=" << StringUtils::URLEncode(m_policyRuleNumber.c_str()) << "&";
  }

  if (m_meteredAccountHasBeenSet) {
    oStream << location << index << locationValue << ".MeteredAccount="
            << StringUtils::URLEncode(TransitGatewayMeteringPayerTypeMapper::GetNameForTransitGatewayMeteringPayerType(m_meteredAccount))
            << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(
                   TransitGatewayMeteringPolicyEntryStateMapper::GetNameForTransitGatewayMeteringPolicyEntryState(m_state))
            << "&";
  }

  if (m_updatedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_updateEffectiveAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdateEffectiveAt=" << StringUtils::URLEncode(m_updateEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_meteringPolicyRuleHasBeenSet) {
    Aws::StringStream meteringPolicyRuleLocationAndMemberSs;
    meteringPolicyRuleLocationAndMemberSs << location << index << locationValue << ".MeteringPolicyRule";
    m_meteringPolicyRule.OutputToStream(oStream, meteringPolicyRuleLocationAndMemberSs.str().c_str());
  }
}

void TransitGatewayMeteringPolicyEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_policyRuleNumberHasBeenSet) {
    oStream << location << ".PolicyRuleNumber=" << StringUtils::URLEncode(m_policyRuleNumber.c_str()) << "&";
  }
  if (m_meteredAccountHasBeenSet) {
    oStream << location << ".MeteredAccount="
            << StringUtils::URLEncode(TransitGatewayMeteringPayerTypeMapper::GetNameForTransitGatewayMeteringPayerType(m_meteredAccount))
            << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(
                   TransitGatewayMeteringPolicyEntryStateMapper::GetNameForTransitGatewayMeteringPolicyEntryState(m_state))
            << "&";
  }
  if (m_updatedAtHasBeenSet) {
    oStream << location << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_updateEffectiveAtHasBeenSet) {
    oStream << location
            << ".UpdateEffectiveAt=" << StringUtils::URLEncode(m_updateEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_meteringPolicyRuleHasBeenSet) {
    Aws::String meteringPolicyRuleLocationAndMember(location);
    meteringPolicyRuleLocationAndMember += ".MeteringPolicyRule";
    m_meteringPolicyRule.OutputToStream(oStream, meteringPolicyRuleLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
