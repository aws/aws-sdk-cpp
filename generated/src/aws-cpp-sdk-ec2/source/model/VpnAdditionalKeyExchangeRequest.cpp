/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/VpnAdditionalKeyExchangeRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

VpnAdditionalKeyExchangeRequest::VpnAdditionalKeyExchangeRequest(const XmlNode& xmlNode) { *this = xmlNode; }

VpnAdditionalKeyExchangeRequest& VpnAdditionalKeyExchangeRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode additionalKeyExchangeRoundNode = resultNode.FirstChild("AdditionalKeyExchangeRound");
    if (!additionalKeyExchangeRoundNode.IsNull()) {
      m_additionalKeyExchangeRound = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(additionalKeyExchangeRoundNode.GetText()).c_str()).c_str());
      m_additionalKeyExchangeRoundHasBeenSet = true;
    }
    XmlNode keyExchangeMethodsNode = resultNode.FirstChild("KeyExchangeMethod");
    if (!keyExchangeMethodsNode.IsNull()) {
      XmlNode keyExchangeMethodsMember = keyExchangeMethodsNode.FirstChild("item");
      m_keyExchangeMethodsHasBeenSet = !keyExchangeMethodsMember.IsNull();
      while (!keyExchangeMethodsMember.IsNull()) {
        m_keyExchangeMethods.push_back(keyExchangeMethodsMember);
        keyExchangeMethodsMember = keyExchangeMethodsMember.NextNode("item");
      }

      m_keyExchangeMethodsHasBeenSet = true;
    }
    XmlNode requirementNode = resultNode.FirstChild("Requirement");
    if (!requirementNode.IsNull()) {
      m_requirement = AdditionalKeyExchangeRequirementMapper::GetAdditionalKeyExchangeRequirementForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requirementNode.GetText()).c_str()));
      m_requirementHasBeenSet = true;
    }
  }

  return *this;
}

void VpnAdditionalKeyExchangeRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_additionalKeyExchangeRoundHasBeenSet) {
    oStream << location << index << locationValue << ".AdditionalKeyExchangeRound=" << m_additionalKeyExchangeRound << "&";
  }

  if (m_keyExchangeMethodsHasBeenSet) {
    unsigned keyExchangeMethodsIdx = 1;
    for (auto& item : m_keyExchangeMethods) {
      Aws::StringStream keyExchangeMethodsSs;
      keyExchangeMethodsSs << location << index << locationValue << ".KeyExchangeMethod." << keyExchangeMethodsIdx++;
      item.OutputToStream(oStream, keyExchangeMethodsSs.str().c_str());
    }
  }

  if (m_requirementHasBeenSet) {
    oStream << location << index << locationValue << ".Requirement="
            << StringUtils::URLEncode(AdditionalKeyExchangeRequirementMapper::GetNameForAdditionalKeyExchangeRequirement(m_requirement))
            << "&";
  }
}

void VpnAdditionalKeyExchangeRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_additionalKeyExchangeRoundHasBeenSet) {
    oStream << location << ".AdditionalKeyExchangeRound=" << m_additionalKeyExchangeRound << "&";
  }
  if (m_keyExchangeMethodsHasBeenSet) {
    unsigned keyExchangeMethodsIdx = 1;
    for (auto& item : m_keyExchangeMethods) {
      Aws::StringStream keyExchangeMethodsSs;
      keyExchangeMethodsSs << location << ".KeyExchangeMethod." << keyExchangeMethodsIdx++;
      item.OutputToStream(oStream, keyExchangeMethodsSs.str().c_str());
    }
  }
  if (m_requirementHasBeenSet) {
    oStream << location << ".Requirement="
            << StringUtils::URLEncode(AdditionalKeyExchangeRequirementMapper::GetNameForAdditionalKeyExchangeRequirement(m_requirement))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
