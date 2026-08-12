/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/ParameterDefinition.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

ParameterDefinition::ParameterDefinition(const XmlNode& xmlNode) { *this = xmlNode; }

ParameterDefinition& ParameterDefinition::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if (!typeNode.IsNull()) {
      m_type = ParameterTypeTypeMapper::GetParameterTypeTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode subTypeNode = resultNode.FirstChild("SubType");
    if (!subTypeNode.IsNull()) {
      m_subType = Aws::Utils::Xml::DecodeEscapedXmlText(subTypeNode.GetText());
      m_subTypeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode isRequiredNode = resultNode.FirstChild("IsRequired");
    if (!isRequiredNode.IsNull()) {
      m_isRequired =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isRequiredNode.GetText()).c_str()).c_str());
      m_isRequiredHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if (!defaultValueNode.IsNull()) {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode immutableNode = resultNode.FirstChild("Immutable");
    if (!immutableNode.IsNull()) {
      m_immutable =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(immutableNode.GetText()).c_str()).c_str());
      m_immutableHasBeenSet = true;
    }
  }

  return *this;
}

void ParameterDefinition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_nameHasBeenSet) {
    oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if (m_typeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Type=" << StringUtils::URLEncode(ParameterTypeTypeMapper::GetNameForParameterTypeType(m_type)) << "&";
  }

  if (m_subTypeHasBeenSet) {
    oStream << location << index << locationValue << ".SubType=" << StringUtils::URLEncode(m_subType.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_isRequiredHasBeenSet) {
    oStream << location << index << locationValue << ".IsRequired=" << std::boolalpha << m_isRequired << "&";
  }

  if (m_defaultValueHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if (m_immutableHasBeenSet) {
    oStream << location << index << locationValue << ".Immutable=" << std::boolalpha << m_immutable << "&";
  }
}

void ParameterDefinition::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_nameHasBeenSet) {
    oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if (m_typeHasBeenSet) {
    oStream << location << ".Type=" << StringUtils::URLEncode(ParameterTypeTypeMapper::GetNameForParameterTypeType(m_type)) << "&";
  }
  if (m_subTypeHasBeenSet) {
    oStream << location << ".SubType=" << StringUtils::URLEncode(m_subType.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_isRequiredHasBeenSet) {
    oStream << location << ".IsRequired=" << std::boolalpha << m_isRequired << "&";
  }
  if (m_defaultValueHasBeenSet) {
    oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if (m_immutableHasBeenSet) {
    oStream << location << ".Immutable=" << std::boolalpha << m_immutable << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
