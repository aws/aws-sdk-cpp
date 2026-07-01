/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/PayerResponsibilityEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

PayerResponsibilityEntry::PayerResponsibilityEntry(const XmlNode& xmlNode) { *this = xmlNode; }

PayerResponsibilityEntry& PayerResponsibilityEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode scopeNode = resultNode.FirstChild("scope");
    if (!scopeNode.IsNull()) {
      m_scope = PayerResponsibilityScopeMapper::GetPayerResponsibilityScopeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scopeNode.GetText()).c_str()));
      m_scopeHasBeenSet = true;
    }
    XmlNode payerResponsibilityTypeNode = resultNode.FirstChild("payerResponsibilityType");
    if (!payerResponsibilityTypeNode.IsNull()) {
      m_payerResponsibilityType = PayerResponsibilityTypeMapper::GetPayerResponsibilityTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(payerResponsibilityTypeNode.GetText()).c_str()));
      m_payerResponsibilityTypeHasBeenSet = true;
    }
  }

  return *this;
}

void PayerResponsibilityEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_scopeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Scope=" << StringUtils::URLEncode(PayerResponsibilityScopeMapper::GetNameForPayerResponsibilityScope(m_scope)) << "&";
  }

  if (m_payerResponsibilityTypeHasBeenSet) {
    oStream << location << index << locationValue << ".PayerResponsibilityType="
            << StringUtils::URLEncode(PayerResponsibilityTypeMapper::GetNameForPayerResponsibilityType(m_payerResponsibilityType)) << "&";
  }
}

void PayerResponsibilityEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_scopeHasBeenSet) {
    oStream << location << ".Scope=" << StringUtils::URLEncode(PayerResponsibilityScopeMapper::GetNameForPayerResponsibilityScope(m_scope))
            << "&";
  }
  if (m_payerResponsibilityTypeHasBeenSet) {
    oStream << location << ".PayerResponsibilityType="
            << StringUtils::URLEncode(PayerResponsibilityTypeMapper::GetNameForPayerResponsibilityType(m_payerResponsibilityType)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
