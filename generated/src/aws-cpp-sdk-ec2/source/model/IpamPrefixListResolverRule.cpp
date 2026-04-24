/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPrefixListResolverRule.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPrefixListResolverRule::IpamPrefixListResolverRule(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPrefixListResolverRule& IpamPrefixListResolverRule::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ruleTypeNode = resultNode.FirstChild("ruleType");
    if (!ruleTypeNode.IsNull()) {
      m_ruleType = IpamPrefixListResolverRuleTypeMapper::GetIpamPrefixListResolverRuleTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleTypeNode.GetText()).c_str()));
      m_ruleTypeHasBeenSet = true;
    }
    XmlNode staticCidrNode = resultNode.FirstChild("staticCidr");
    if (!staticCidrNode.IsNull()) {
      m_staticCidr = Aws::Utils::Xml::DecodeEscapedXmlText(staticCidrNode.GetText());
      m_staticCidrHasBeenSet = true;
    }
    XmlNode ipamScopeIdNode = resultNode.FirstChild("ipamScopeId");
    if (!ipamScopeIdNode.IsNull()) {
      m_ipamScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeIdNode.GetText());
      m_ipamScopeIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if (!resourceTypeNode.IsNull()) {
      m_resourceType = IpamResourceTypeMapper::GetIpamResourceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode conditionsNode = resultNode.FirstChild("conditionSet");
    if (!conditionsNode.IsNull()) {
      XmlNode conditionsMember = conditionsNode.FirstChild("item");
      m_conditionsHasBeenSet = !conditionsMember.IsNull();
      while (!conditionsMember.IsNull()) {
        m_conditions.push_back(conditionsMember);
        conditionsMember = conditionsMember.NextNode("item");
      }

      m_conditionsHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPrefixListResolverRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                const char* locationValue) const {
  if (m_ruleTypeHasBeenSet) {
    oStream << location << index << locationValue << ".RuleType="
            << StringUtils::URLEncode(IpamPrefixListResolverRuleTypeMapper::GetNameForIpamPrefixListResolverRuleType(m_ruleType)) << "&";
  }

  if (m_staticCidrHasBeenSet) {
    oStream << location << index << locationValue << ".StaticCidr=" << StringUtils::URLEncode(m_staticCidr.c_str()) << "&";
  }

  if (m_ipamScopeIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  if (m_resourceTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ResourceType=" << StringUtils::URLEncode(IpamResourceTypeMapper::GetNameForIpamResourceType(m_resourceType)) << "&";
  }

  if (m_conditionsHasBeenSet) {
    unsigned conditionsIdx = 1;
    for (auto& item : m_conditions) {
      Aws::StringStream conditionsSs;
      conditionsSs << location << index << locationValue << ".ConditionSet." << conditionsIdx++;
      item.OutputToStream(oStream, conditionsSs.str().c_str());
    }
  }
}

void IpamPrefixListResolverRule::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ruleTypeHasBeenSet) {
    oStream << location << ".RuleType="
            << StringUtils::URLEncode(IpamPrefixListResolverRuleTypeMapper::GetNameForIpamPrefixListResolverRuleType(m_ruleType)) << "&";
  }
  if (m_staticCidrHasBeenSet) {
    oStream << location << ".StaticCidr=" << StringUtils::URLEncode(m_staticCidr.c_str()) << "&";
  }
  if (m_ipamScopeIdHasBeenSet) {
    oStream << location << ".IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }
  if (m_resourceTypeHasBeenSet) {
    oStream << location << ".ResourceType=" << StringUtils::URLEncode(IpamResourceTypeMapper::GetNameForIpamResourceType(m_resourceType))
            << "&";
  }
  if (m_conditionsHasBeenSet) {
    unsigned conditionsIdx = 1;
    for (auto& item : m_conditions) {
      Aws::StringStream conditionsSs;
      conditionsSs << location << ".ConditionSet." << conditionsIdx++;
      item.OutputToStream(oStream, conditionsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
