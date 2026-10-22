/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AccountSetting.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {

AccountSetting::AccountSetting(const XmlNode& xmlNode) { *this = xmlNode; }

AccountSetting& AccountSetting::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if (!valueNode.IsNull()) {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
    XmlNode enforcementTypeNode = resultNode.FirstChild("EnforcementType");
    if (!enforcementTypeNode.IsNull()) {
      m_enforcementType = Aws::Utils::Xml::DecodeEscapedXmlText(enforcementTypeNode.GetText());
      m_enforcementTypeHasBeenSet = true;
    }
    XmlNode enforcementDateNode = resultNode.FirstChild("EnforcementDate");
    if (!enforcementDateNode.IsNull()) {
      m_enforcementDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enforcementDateNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_enforcementDateHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if (!defaultValueNode.IsNull()) {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode enforcedValueNode = resultNode.FirstChild("EnforcedValue");
    if (!enforcedValueNode.IsNull()) {
      m_enforcedValue = Aws::Utils::Xml::DecodeEscapedXmlText(enforcedValueNode.GetText());
      m_enforcedValueHasBeenSet = true;
    }
  }

  return *this;
}

void AccountSetting::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_nameHasBeenSet) {
    oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if (m_valueHasBeenSet) {
    oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if (m_enforcementTypeHasBeenSet) {
    oStream << location << index << locationValue << ".EnforcementType=" << StringUtils::URLEncode(m_enforcementType.c_str()) << "&";
  }

  if (m_enforcementDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".EnforcementDate=" << StringUtils::URLEncode(m_enforcementDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_defaultValueHasBeenSet) {
    oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if (m_enforcedValueHasBeenSet) {
    oStream << location << index << locationValue << ".EnforcedValue=" << StringUtils::URLEncode(m_enforcedValue.c_str()) << "&";
  }
}

void AccountSetting::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_nameHasBeenSet) {
    oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if (m_valueHasBeenSet) {
    oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
  if (m_enforcementTypeHasBeenSet) {
    oStream << location << ".EnforcementType=" << StringUtils::URLEncode(m_enforcementType.c_str()) << "&";
  }
  if (m_enforcementDateHasBeenSet) {
    oStream << location
            << ".EnforcementDate=" << StringUtils::URLEncode(m_enforcementDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_defaultValueHasBeenSet) {
    oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if (m_enforcedValueHasBeenSet) {
    oStream << location << ".EnforcedValue=" << StringUtils::URLEncode(m_enforcedValue.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
