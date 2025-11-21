/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPolicyDocument.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPolicyDocument::IpamPolicyDocument(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPolicyDocument& IpamPolicyDocument::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ipamPolicyIdNode = resultNode.FirstChild("ipamPolicyId");
    if (!ipamPolicyIdNode.IsNull()) {
      m_ipamPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPolicyIdNode.GetText());
      m_ipamPolicyIdHasBeenSet = true;
    }
    XmlNode localeNode = resultNode.FirstChild("locale");
    if (!localeNode.IsNull()) {
      m_locale = Aws::Utils::Xml::DecodeEscapedXmlText(localeNode.GetText());
      m_localeHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if (!resourceTypeNode.IsNull()) {
      m_resourceType = IpamPolicyResourceTypeMapper::GetIpamPolicyResourceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode allocationRulesNode = resultNode.FirstChild("allocationRuleSet");
    if (!allocationRulesNode.IsNull()) {
      XmlNode allocationRulesMember = allocationRulesNode.FirstChild("item");
      m_allocationRulesHasBeenSet = !allocationRulesMember.IsNull();
      while (!allocationRulesMember.IsNull()) {
        m_allocationRules.push_back(allocationRulesMember);
        allocationRulesMember = allocationRulesMember.NextNode("item");
      }

      m_allocationRulesHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPolicyDocument::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_ipamPolicyIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }

  if (m_localeHasBeenSet) {
    oStream << location << index << locationValue << ".Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }

  if (m_resourceTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ResourceType=" << StringUtils::URLEncode(IpamPolicyResourceTypeMapper::GetNameForIpamPolicyResourceType(m_resourceType))
            << "&";
  }

  if (m_allocationRulesHasBeenSet) {
    unsigned allocationRulesIdx = 1;
    for (auto& item : m_allocationRules) {
      Aws::StringStream allocationRulesSs;
      allocationRulesSs << location << index << locationValue << ".AllocationRuleSet." << allocationRulesIdx++;
      item.OutputToStream(oStream, allocationRulesSs.str().c_str());
    }
  }
}

void IpamPolicyDocument::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ipamPolicyIdHasBeenSet) {
    oStream << location << ".IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }
  if (m_localeHasBeenSet) {
    oStream << location << ".Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }
  if (m_resourceTypeHasBeenSet) {
    oStream << location
            << ".ResourceType=" << StringUtils::URLEncode(IpamPolicyResourceTypeMapper::GetNameForIpamPolicyResourceType(m_resourceType))
            << "&";
  }
  if (m_allocationRulesHasBeenSet) {
    unsigned allocationRulesIdx = 1;
    for (auto& item : m_allocationRules) {
      Aws::StringStream allocationRulesSs;
      allocationRulesSs << location << ".AllocationRuleSet." << allocationRulesIdx++;
      item.OutputToStream(oStream, allocationRulesSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
