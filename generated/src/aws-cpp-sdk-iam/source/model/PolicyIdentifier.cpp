/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/PolicyIdentifier.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

PolicyIdentifier::PolicyIdentifier(const XmlNode& xmlNode) { *this = xmlNode; }

PolicyIdentifier& PolicyIdentifier::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode policyTypeNode = resultNode.FirstChild("PolicyType");
    if (!policyTypeNode.IsNull()) {
      m_policyType = PolicyIdentifierPolicyTypeMapper::GetPolicyIdentifierPolicyTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(policyTypeNode.GetText()).c_str()));
      m_policyTypeHasBeenSet = true;
    }
    XmlNode policyArnNode = resultNode.FirstChild("PolicyArn");
    if (!policyArnNode.IsNull()) {
      m_policyArn = Aws::Utils::Xml::DecodeEscapedXmlText(policyArnNode.GetText());
      m_policyArnHasBeenSet = true;
    }
    XmlNode inlinePolicyIdentifierNode = resultNode.FirstChild("InlinePolicyIdentifier");
    if (!inlinePolicyIdentifierNode.IsNull()) {
      m_inlinePolicyIdentifier = inlinePolicyIdentifierNode;
      m_inlinePolicyIdentifierHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyIdentifier::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_policyTypeHasBeenSet) {
    oStream << location << index << locationValue << ".PolicyType="
            << StringUtils::URLEncode(PolicyIdentifierPolicyTypeMapper::GetNameForPolicyIdentifierPolicyType(m_policyType)) << "&";
  }

  if (m_policyArnHasBeenSet) {
    oStream << location << index << locationValue << ".PolicyArn=" << StringUtils::URLEncode(m_policyArn.c_str()) << "&";
  }

  if (m_inlinePolicyIdentifierHasBeenSet) {
    Aws::StringStream inlinePolicyIdentifierLocationAndMemberSs;
    inlinePolicyIdentifierLocationAndMemberSs << location << index << locationValue << ".InlinePolicyIdentifier";
    m_inlinePolicyIdentifier.OutputToStream(oStream, inlinePolicyIdentifierLocationAndMemberSs.str().c_str());
  }
}

void PolicyIdentifier::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_policyTypeHasBeenSet) {
    oStream << location << ".PolicyType="
            << StringUtils::URLEncode(PolicyIdentifierPolicyTypeMapper::GetNameForPolicyIdentifierPolicyType(m_policyType)) << "&";
  }
  if (m_policyArnHasBeenSet) {
    oStream << location << ".PolicyArn=" << StringUtils::URLEncode(m_policyArn.c_str()) << "&";
  }
  if (m_inlinePolicyIdentifierHasBeenSet) {
    Aws::String inlinePolicyIdentifierLocationAndMember(location);
    inlinePolicyIdentifierLocationAndMember += ".InlinePolicyIdentifier";
    m_inlinePolicyIdentifier.OutputToStream(oStream, inlinePolicyIdentifierLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
