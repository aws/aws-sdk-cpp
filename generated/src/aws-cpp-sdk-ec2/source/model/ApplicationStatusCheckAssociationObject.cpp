/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ApplicationStatusCheckAssociationObject.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ApplicationStatusCheckAssociationObject::ApplicationStatusCheckAssociationObject(const XmlNode& xmlNode) { *this = xmlNode; }

ApplicationStatusCheckAssociationObject& ApplicationStatusCheckAssociationObject::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode applicationStatusCheckIdNode = resultNode.FirstChild("applicationStatusCheckId");
    if (!applicationStatusCheckIdNode.IsNull()) {
      m_applicationStatusCheckId = Aws::Utils::Xml::DecodeEscapedXmlText(applicationStatusCheckIdNode.GetText());
      m_applicationStatusCheckIdHasBeenSet = true;
    }
    XmlNode associationTypeNode = resultNode.FirstChild("associationType");
    if (!associationTypeNode.IsNull()) {
      m_associationType = AssociationTypeEnumMapper::GetAssociationTypeEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associationTypeNode.GetText()).c_str()));
      m_associationTypeHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("key");
    if (!keyNode.IsNull()) {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("value");
    if (!valueNode.IsNull()) {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationStatusCheckAssociationObject::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                             const char* locationValue) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }

  if (m_associationTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".AssociationType=" << StringUtils::URLEncode(AssociationTypeEnumMapper::GetNameForAssociationTypeEnum(m_associationType))
            << "&";
  }

  if (m_keyHasBeenSet) {
    oStream << location << index << locationValue << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }

  if (m_valueHasBeenSet) {
    oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

void ApplicationStatusCheckAssociationObject::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }
  if (m_associationTypeHasBeenSet) {
    oStream << location
            << ".AssociationType=" << StringUtils::URLEncode(AssociationTypeEnumMapper::GetNameForAssociationTypeEnum(m_associationType))
            << "&";
  }
  if (m_keyHasBeenSet) {
    oStream << location << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }
  if (m_valueHasBeenSet) {
    oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
