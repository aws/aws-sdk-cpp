/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceTargetDefinition.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

ResourceTargetDefinition::ResourceTargetDefinition(const XmlNode& xmlNode) { *this = xmlNode; }

ResourceTargetDefinition& ResourceTargetDefinition::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode attributeNode = resultNode.FirstChild("Attribute");
    if (!attributeNode.IsNull()) {
      m_attribute = ResourceAttributeMapper::GetResourceAttributeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeNode.GetText()).c_str()));
      m_attributeHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode requiresRecreationNode = resultNode.FirstChild("RequiresRecreation");
    if (!requiresRecreationNode.IsNull()) {
      m_requiresRecreation = RequiresRecreationMapper::GetRequiresRecreationForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requiresRecreationNode.GetText()).c_str()));
      m_requiresRecreationHasBeenSet = true;
    }
    XmlNode pathNode = resultNode.FirstChild("Path");
    if (!pathNode.IsNull()) {
      m_path = Aws::Utils::Xml::DecodeEscapedXmlText(pathNode.GetText());
      m_pathHasBeenSet = true;
    }
    XmlNode beforeValueNode = resultNode.FirstChild("BeforeValue");
    if (!beforeValueNode.IsNull()) {
      m_beforeValue = Aws::Utils::Xml::DecodeEscapedXmlText(beforeValueNode.GetText());
      m_beforeValueHasBeenSet = true;
    }
    XmlNode afterValueNode = resultNode.FirstChild("AfterValue");
    if (!afterValueNode.IsNull()) {
      m_afterValue = Aws::Utils::Xml::DecodeEscapedXmlText(afterValueNode.GetText());
      m_afterValueHasBeenSet = true;
    }
    XmlNode beforeValueFromNode = resultNode.FirstChild("BeforeValueFrom");
    if (!beforeValueFromNode.IsNull()) {
      m_beforeValueFrom = BeforeValueFromMapper::GetBeforeValueFromForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(beforeValueFromNode.GetText()).c_str()));
      m_beforeValueFromHasBeenSet = true;
    }
    XmlNode afterValueFromNode = resultNode.FirstChild("AfterValueFrom");
    if (!afterValueFromNode.IsNull()) {
      m_afterValueFrom = AfterValueFromMapper::GetAfterValueFromForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(afterValueFromNode.GetText()).c_str()));
      m_afterValueFromHasBeenSet = true;
    }
    XmlNode driftNode = resultNode.FirstChild("Drift");
    if (!driftNode.IsNull()) {
      m_drift = driftNode;
      m_driftHasBeenSet = true;
    }
    XmlNode attributeChangeTypeNode = resultNode.FirstChild("AttributeChangeType");
    if (!attributeChangeTypeNode.IsNull()) {
      m_attributeChangeType = AttributeChangeTypeMapper::GetAttributeChangeTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeChangeTypeNode.GetText()).c_str()));
      m_attributeChangeTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceTargetDefinition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_attributeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Attribute=" << StringUtils::URLEncode(ResourceAttributeMapper::GetNameForResourceAttribute(m_attribute)) << "&";
  }

  if (m_nameHasBeenSet) {
    oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if (m_requiresRecreationHasBeenSet) {
    oStream << location << index << locationValue << ".RequiresRecreation="
            << StringUtils::URLEncode(RequiresRecreationMapper::GetNameForRequiresRecreation(m_requiresRecreation)) << "&";
  }

  if (m_pathHasBeenSet) {
    oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }

  if (m_beforeValueHasBeenSet) {
    oStream << location << index << locationValue << ".BeforeValue=" << StringUtils::URLEncode(m_beforeValue.c_str()) << "&";
  }

  if (m_afterValueHasBeenSet) {
    oStream << location << index << locationValue << ".AfterValue=" << StringUtils::URLEncode(m_afterValue.c_str()) << "&";
  }

  if (m_beforeValueFromHasBeenSet) {
    oStream << location << index << locationValue
            << ".BeforeValueFrom=" << StringUtils::URLEncode(BeforeValueFromMapper::GetNameForBeforeValueFrom(m_beforeValueFrom)) << "&";
  }

  if (m_afterValueFromHasBeenSet) {
    oStream << location << index << locationValue
            << ".AfterValueFrom=" << StringUtils::URLEncode(AfterValueFromMapper::GetNameForAfterValueFrom(m_afterValueFrom)) << "&";
  }

  if (m_driftHasBeenSet) {
    Aws::StringStream driftLocationAndMemberSs;
    driftLocationAndMemberSs << location << index << locationValue << ".Drift";
    m_drift.OutputToStream(oStream, driftLocationAndMemberSs.str().c_str());
  }

  if (m_attributeChangeTypeHasBeenSet) {
    oStream << location << index << locationValue << ".AttributeChangeType="
            << StringUtils::URLEncode(AttributeChangeTypeMapper::GetNameForAttributeChangeType(m_attributeChangeType)) << "&";
  }
}

void ResourceTargetDefinition::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_attributeHasBeenSet) {
    oStream << location << ".Attribute=" << StringUtils::URLEncode(ResourceAttributeMapper::GetNameForResourceAttribute(m_attribute))
            << "&";
  }
  if (m_nameHasBeenSet) {
    oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if (m_requiresRecreationHasBeenSet) {
    oStream << location << ".RequiresRecreation="
            << StringUtils::URLEncode(RequiresRecreationMapper::GetNameForRequiresRecreation(m_requiresRecreation)) << "&";
  }
  if (m_pathHasBeenSet) {
    oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if (m_beforeValueHasBeenSet) {
    oStream << location << ".BeforeValue=" << StringUtils::URLEncode(m_beforeValue.c_str()) << "&";
  }
  if (m_afterValueHasBeenSet) {
    oStream << location << ".AfterValue=" << StringUtils::URLEncode(m_afterValue.c_str()) << "&";
  }
  if (m_beforeValueFromHasBeenSet) {
    oStream << location
            << ".BeforeValueFrom=" << StringUtils::URLEncode(BeforeValueFromMapper::GetNameForBeforeValueFrom(m_beforeValueFrom)) << "&";
  }
  if (m_afterValueFromHasBeenSet) {
    oStream << location << ".AfterValueFrom=" << StringUtils::URLEncode(AfterValueFromMapper::GetNameForAfterValueFrom(m_afterValueFrom))
            << "&";
  }
  if (m_driftHasBeenSet) {
    Aws::String driftLocationAndMember(location);
    driftLocationAndMember += ".Drift";
    m_drift.OutputToStream(oStream, driftLocationAndMember.c_str());
  }
  if (m_attributeChangeTypeHasBeenSet) {
    oStream << location << ".AttributeChangeType="
            << StringUtils::URLEncode(AttributeChangeTypeMapper::GetNameForAttributeChangeType(m_attributeChangeType)) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
