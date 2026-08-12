/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/RoleTemplateVersion.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

RoleTemplateVersion::RoleTemplateVersion(const XmlNode& xmlNode) { *this = xmlNode; }

RoleTemplateVersion& RoleTemplateVersion::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode templateArnNode = resultNode.FirstChild("TemplateArn");
    if (!templateArnNode.IsNull()) {
      m_templateArn = Aws::Utils::Xml::DecodeEscapedXmlText(templateArnNode.GetText());
      m_templateArnHasBeenSet = true;
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if (!templateNameNode.IsNull()) {
      m_templateName = Aws::Utils::Xml::DecodeEscapedXmlText(templateNameNode.GetText());
      m_templateNameHasBeenSet = true;
    }
    XmlNode templateVersionIdNode = resultNode.FirstChild("TemplateVersionId");
    if (!templateVersionIdNode.IsNull()) {
      m_templateVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(templateVersionIdNode.GetText());
      m_templateVersionIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode majorVersionNode = resultNode.FirstChild("MajorVersion");
    if (!majorVersionNode.IsNull()) {
      m_majorVersion =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(majorVersionNode.GetText()).c_str()).c_str());
      m_majorVersionHasBeenSet = true;
    }
    XmlNode defaultMinorVersionNode = resultNode.FirstChild("DefaultMinorVersion");
    if (!defaultMinorVersionNode.IsNull()) {
      m_defaultMinorVersion = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultMinorVersionNode.GetText()).c_str()).c_str());
      m_defaultMinorVersionHasBeenSet = true;
    }
    XmlNode managedByTypeNode = resultNode.FirstChild("ManagedByType");
    if (!managedByTypeNode.IsNull()) {
      m_managedByType = ManagedByTypeTypeMapper::GetManagedByTypeTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByTypeNode.GetText()).c_str()));
      m_managedByTypeHasBeenSet = true;
    }
    XmlNode managedByValueNode = resultNode.FirstChild("ManagedByValue");
    if (!managedByValueNode.IsNull()) {
      m_managedByValue = Aws::Utils::Xml::DecodeEscapedXmlText(managedByValueNode.GetText());
      m_managedByValueHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if (!enabledNode.IsNull()) {
      m_enabled =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode minorVersionNode = resultNode.FirstChild("MinorVersion");
    if (!minorVersionNode.IsNull()) {
      m_minorVersion =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minorVersionNode.GetText()).c_str()).c_str());
      m_minorVersionHasBeenSet = true;
    }
    XmlNode roleNamePatternNode = resultNode.FirstChild("RoleNamePattern");
    if (!roleNamePatternNode.IsNull()) {
      m_roleNamePattern = Aws::Utils::Xml::DecodeEscapedXmlText(roleNamePatternNode.GetText());
      m_roleNamePatternHasBeenSet = true;
    }
    XmlNode rolePathPatternNode = resultNode.FirstChild("RolePathPattern");
    if (!rolePathPatternNode.IsNull()) {
      m_rolePathPattern = Aws::Utils::Xml::DecodeEscapedXmlText(rolePathPatternNode.GetText());
      m_rolePathPatternHasBeenSet = true;
    }
    XmlNode roleDescriptionPatternNode = resultNode.FirstChild("RoleDescriptionPattern");
    if (!roleDescriptionPatternNode.IsNull()) {
      m_roleDescriptionPattern = Aws::Utils::Xml::DecodeEscapedXmlText(roleDescriptionPatternNode.GetText());
      m_roleDescriptionPatternHasBeenSet = true;
    }
    XmlNode assumeRolePolicyDocumentTemplateNode = resultNode.FirstChild("AssumeRolePolicyDocumentTemplate");
    if (!assumeRolePolicyDocumentTemplateNode.IsNull()) {
      m_assumeRolePolicyDocumentTemplate = Aws::Utils::Xml::DecodeEscapedXmlText(assumeRolePolicyDocumentTemplateNode.GetText());
      m_assumeRolePolicyDocumentTemplateHasBeenSet = true;
    }
    XmlNode inlinePolicyTemplatesNode = resultNode.FirstChild("InlinePolicyTemplates");
    if (!inlinePolicyTemplatesNode.IsNull()) {
      XmlNode inlinePolicyTemplatesMember = inlinePolicyTemplatesNode.FirstChild("member");
      m_inlinePolicyTemplatesHasBeenSet = !inlinePolicyTemplatesMember.IsNull();
      while (!inlinePolicyTemplatesMember.IsNull()) {
        m_inlinePolicyTemplates.push_back(inlinePolicyTemplatesMember);
        inlinePolicyTemplatesMember = inlinePolicyTemplatesMember.NextNode("member");
      }

      m_inlinePolicyTemplatesHasBeenSet = true;
    }
    XmlNode managedPolicyArnsNode = resultNode.FirstChild("ManagedPolicyArns");
    if (!managedPolicyArnsNode.IsNull()) {
      XmlNode managedPolicyArnsMember = managedPolicyArnsNode.FirstChild("member");
      m_managedPolicyArnsHasBeenSet = !managedPolicyArnsMember.IsNull();
      while (!managedPolicyArnsMember.IsNull()) {
        m_managedPolicyArns.push_back(managedPolicyArnsMember.GetText());
        managedPolicyArnsMember = managedPolicyArnsMember.NextNode("member");
      }

      m_managedPolicyArnsHasBeenSet = true;
    }
    XmlNode permissionBoundaryArnNode = resultNode.FirstChild("PermissionBoundaryArn");
    if (!permissionBoundaryArnNode.IsNull()) {
      m_permissionBoundaryArn = Aws::Utils::Xml::DecodeEscapedXmlText(permissionBoundaryArnNode.GetText());
      m_permissionBoundaryArnHasBeenSet = true;
    }
    XmlNode parametersDefinitionNode = resultNode.FirstChild("ParametersDefinition");
    if (!parametersDefinitionNode.IsNull()) {
      XmlNode parametersDefinitionMember = parametersDefinitionNode.FirstChild("member");
      m_parametersDefinitionHasBeenSet = !parametersDefinitionMember.IsNull();
      while (!parametersDefinitionMember.IsNull()) {
        m_parametersDefinition.push_back(parametersDefinitionMember);
        parametersDefinitionMember = parametersDefinitionMember.NextNode("member");
      }

      m_parametersDefinitionHasBeenSet = true;
    }
    XmlNode roleTagsTemplateNode = resultNode.FirstChild("RoleTagsTemplate");
    if (!roleTagsTemplateNode.IsNull()) {
      XmlNode roleTagsTemplateMember = roleTagsTemplateNode.FirstChild("member");
      m_roleTagsTemplateHasBeenSet = !roleTagsTemplateMember.IsNull();
      while (!roleTagsTemplateMember.IsNull()) {
        m_roleTagsTemplate.push_back(roleTagsTemplateMember);
        roleTagsTemplateMember = roleTagsTemplateMember.NextNode("member");
      }

      m_roleTagsTemplateHasBeenSet = true;
    }
    XmlNode maxSessionDurationNode = resultNode.FirstChild("MaxSessionDuration");
    if (!maxSessionDurationNode.IsNull()) {
      m_maxSessionDuration = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxSessionDurationNode.GetText()).c_str()).c_str());
      m_maxSessionDurationHasBeenSet = true;
    }
    XmlNode versionEnabledNode = resultNode.FirstChild("VersionEnabled");
    if (!versionEnabledNode.IsNull()) {
      m_versionEnabled = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionEnabledNode.GetText()).c_str()).c_str());
      m_versionEnabledHasBeenSet = true;
    }
    XmlNode createTimestampNode = resultNode.FirstChild("CreateTimestamp");
    if (!createTimestampNode.IsNull()) {
      m_createTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimestampNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_createTimestampHasBeenSet = true;
    }
    XmlNode updateTimestampNode = resultNode.FirstChild("UpdateTimestamp");
    if (!updateTimestampNode.IsNull()) {
      m_updateTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateTimestampNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_updateTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void RoleTemplateVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_templateArnHasBeenSet) {
    oStream << location << index << locationValue << ".TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }

  if (m_templateNameHasBeenSet) {
    oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if (m_templateVersionIdHasBeenSet) {
    oStream << location << index << locationValue << ".TemplateVersionId=" << StringUtils::URLEncode(m_templateVersionId.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_majorVersionHasBeenSet) {
    oStream << location << index << locationValue << ".MajorVersion=" << m_majorVersion << "&";
  }

  if (m_defaultMinorVersionHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultMinorVersion=" << m_defaultMinorVersion << "&";
  }

  if (m_managedByTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ManagedByType=" << StringUtils::URLEncode(ManagedByTypeTypeMapper::GetNameForManagedByTypeType(m_managedByType)) << "&";
  }

  if (m_managedByValueHasBeenSet) {
    oStream << location << index << locationValue << ".ManagedByValue=" << StringUtils::URLEncode(m_managedByValue.c_str()) << "&";
  }

  if (m_enabledHasBeenSet) {
    oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if (m_minorVersionHasBeenSet) {
    oStream << location << index << locationValue << ".MinorVersion=" << m_minorVersion << "&";
  }

  if (m_roleNamePatternHasBeenSet) {
    oStream << location << index << locationValue << ".RoleNamePattern=" << StringUtils::URLEncode(m_roleNamePattern.c_str()) << "&";
  }

  if (m_rolePathPatternHasBeenSet) {
    oStream << location << index << locationValue << ".RolePathPattern=" << StringUtils::URLEncode(m_rolePathPattern.c_str()) << "&";
  }

  if (m_roleDescriptionPatternHasBeenSet) {
    oStream << location << index << locationValue << ".RoleDescriptionPattern=" << StringUtils::URLEncode(m_roleDescriptionPattern.c_str())
            << "&";
  }

  if (m_assumeRolePolicyDocumentTemplateHasBeenSet) {
    oStream << location << index << locationValue
            << ".AssumeRolePolicyDocumentTemplate=" << StringUtils::URLEncode(m_assumeRolePolicyDocumentTemplate.c_str()) << "&";
  }

  if (m_inlinePolicyTemplatesHasBeenSet) {
    unsigned inlinePolicyTemplatesIdx = 1;
    for (auto& item : m_inlinePolicyTemplates) {
      Aws::StringStream inlinePolicyTemplatesSs;
      inlinePolicyTemplatesSs << location << index << locationValue << ".InlinePolicyTemplates.member." << inlinePolicyTemplatesIdx++;
      item.OutputToStream(oStream, inlinePolicyTemplatesSs.str().c_str());
    }
  }

  if (m_managedPolicyArnsHasBeenSet) {
    unsigned managedPolicyArnsIdx = 1;
    for (auto& item : m_managedPolicyArns) {
      oStream << location << index << locationValue << ".ManagedPolicyArns.member." << managedPolicyArnsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_permissionBoundaryArnHasBeenSet) {
    oStream << location << index << locationValue << ".PermissionBoundaryArn=" << StringUtils::URLEncode(m_permissionBoundaryArn.c_str())
            << "&";
  }

  if (m_parametersDefinitionHasBeenSet) {
    unsigned parametersDefinitionIdx = 1;
    for (auto& item : m_parametersDefinition) {
      Aws::StringStream parametersDefinitionSs;
      parametersDefinitionSs << location << index << locationValue << ".ParametersDefinition.member." << parametersDefinitionIdx++;
      item.OutputToStream(oStream, parametersDefinitionSs.str().c_str());
    }
  }

  if (m_roleTagsTemplateHasBeenSet) {
    unsigned roleTagsTemplateIdx = 1;
    for (auto& item : m_roleTagsTemplate) {
      Aws::StringStream roleTagsTemplateSs;
      roleTagsTemplateSs << location << index << locationValue << ".RoleTagsTemplate.member." << roleTagsTemplateIdx++;
      item.OutputToStream(oStream, roleTagsTemplateSs.str().c_str());
    }
  }

  if (m_maxSessionDurationHasBeenSet) {
    oStream << location << index << locationValue << ".MaxSessionDuration=" << m_maxSessionDuration << "&";
  }

  if (m_versionEnabledHasBeenSet) {
    oStream << location << index << locationValue << ".VersionEnabled=" << std::boolalpha << m_versionEnabled << "&";
  }

  if (m_createTimestampHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreateTimestamp=" << StringUtils::URLEncode(m_createTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_updateTimestampHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdateTimestamp=" << StringUtils::URLEncode(m_updateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

void RoleTemplateVersion::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_templateArnHasBeenSet) {
    oStream << location << ".TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }
  if (m_templateNameHasBeenSet) {
    oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if (m_templateVersionIdHasBeenSet) {
    oStream << location << ".TemplateVersionId=" << StringUtils::URLEncode(m_templateVersionId.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_majorVersionHasBeenSet) {
    oStream << location << ".MajorVersion=" << m_majorVersion << "&";
  }
  if (m_defaultMinorVersionHasBeenSet) {
    oStream << location << ".DefaultMinorVersion=" << m_defaultMinorVersion << "&";
  }
  if (m_managedByTypeHasBeenSet) {
    oStream << location
            << ".ManagedByType=" << StringUtils::URLEncode(ManagedByTypeTypeMapper::GetNameForManagedByTypeType(m_managedByType)) << "&";
  }
  if (m_managedByValueHasBeenSet) {
    oStream << location << ".ManagedByValue=" << StringUtils::URLEncode(m_managedByValue.c_str()) << "&";
  }
  if (m_enabledHasBeenSet) {
    oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if (m_minorVersionHasBeenSet) {
    oStream << location << ".MinorVersion=" << m_minorVersion << "&";
  }
  if (m_roleNamePatternHasBeenSet) {
    oStream << location << ".RoleNamePattern=" << StringUtils::URLEncode(m_roleNamePattern.c_str()) << "&";
  }
  if (m_rolePathPatternHasBeenSet) {
    oStream << location << ".RolePathPattern=" << StringUtils::URLEncode(m_rolePathPattern.c_str()) << "&";
  }
  if (m_roleDescriptionPatternHasBeenSet) {
    oStream << location << ".RoleDescriptionPattern=" << StringUtils::URLEncode(m_roleDescriptionPattern.c_str()) << "&";
  }
  if (m_assumeRolePolicyDocumentTemplateHasBeenSet) {
    oStream << location << ".AssumeRolePolicyDocumentTemplate=" << StringUtils::URLEncode(m_assumeRolePolicyDocumentTemplate.c_str())
            << "&";
  }
  if (m_inlinePolicyTemplatesHasBeenSet) {
    unsigned inlinePolicyTemplatesIdx = 1;
    for (auto& item : m_inlinePolicyTemplates) {
      Aws::StringStream inlinePolicyTemplatesSs;
      inlinePolicyTemplatesSs << location << ".InlinePolicyTemplates.member." << inlinePolicyTemplatesIdx++;
      item.OutputToStream(oStream, inlinePolicyTemplatesSs.str().c_str());
    }
  }
  if (m_managedPolicyArnsHasBeenSet) {
    unsigned managedPolicyArnsIdx = 1;
    for (auto& item : m_managedPolicyArns) {
      oStream << location << ".ManagedPolicyArns.member." << managedPolicyArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_permissionBoundaryArnHasBeenSet) {
    oStream << location << ".PermissionBoundaryArn=" << StringUtils::URLEncode(m_permissionBoundaryArn.c_str()) << "&";
  }
  if (m_parametersDefinitionHasBeenSet) {
    unsigned parametersDefinitionIdx = 1;
    for (auto& item : m_parametersDefinition) {
      Aws::StringStream parametersDefinitionSs;
      parametersDefinitionSs << location << ".ParametersDefinition.member." << parametersDefinitionIdx++;
      item.OutputToStream(oStream, parametersDefinitionSs.str().c_str());
    }
  }
  if (m_roleTagsTemplateHasBeenSet) {
    unsigned roleTagsTemplateIdx = 1;
    for (auto& item : m_roleTagsTemplate) {
      Aws::StringStream roleTagsTemplateSs;
      roleTagsTemplateSs << location << ".RoleTagsTemplate.member." << roleTagsTemplateIdx++;
      item.OutputToStream(oStream, roleTagsTemplateSs.str().c_str());
    }
  }
  if (m_maxSessionDurationHasBeenSet) {
    oStream << location << ".MaxSessionDuration=" << m_maxSessionDuration << "&";
  }
  if (m_versionEnabledHasBeenSet) {
    oStream << location << ".VersionEnabled=" << std::boolalpha << m_versionEnabled << "&";
  }
  if (m_createTimestampHasBeenSet) {
    oStream << location
            << ".CreateTimestamp=" << StringUtils::URLEncode(m_createTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_updateTimestampHasBeenSet) {
    oStream << location
            << ".UpdateTimestamp=" << StringUtils::URLEncode(m_updateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
