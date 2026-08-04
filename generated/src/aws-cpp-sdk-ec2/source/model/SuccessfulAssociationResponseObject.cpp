/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/SuccessfulAssociationResponseObject.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

SuccessfulAssociationResponseObject::SuccessfulAssociationResponseObject(const XmlNode& xmlNode) { *this = xmlNode; }

SuccessfulAssociationResponseObject& SuccessfulAssociationResponseObject::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode applicationStatusCheckIdNode = resultNode.FirstChild("applicationStatusCheckId");
    if (!applicationStatusCheckIdNode.IsNull()) {
      m_applicationStatusCheckId = Aws::Utils::Xml::DecodeEscapedXmlText(applicationStatusCheckIdNode.GetText());
      m_applicationStatusCheckIdHasBeenSet = true;
    }
    XmlNode associationTypeNode = resultNode.FirstChild("associationType");
    if (!associationTypeNode.IsNull()) {
      m_associationType = Aws::Utils::Xml::DecodeEscapedXmlText(associationTypeNode.GetText());
      m_associationTypeHasBeenSet = true;
    }
    XmlNode associationValueNode = resultNode.FirstChild("associationValue");
    if (!associationValueNode.IsNull()) {
      m_associationValue = Aws::Utils::Xml::DecodeEscapedXmlText(associationValueNode.GetText());
      m_associationValueHasBeenSet = true;
    }
  }

  return *this;
}

void SuccessfulAssociationResponseObject::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                         const char* locationValue) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }

  if (m_associationTypeHasBeenSet) {
    oStream << location << index << locationValue << ".AssociationType=" << StringUtils::URLEncode(m_associationType.c_str()) << "&";
  }

  if (m_associationValueHasBeenSet) {
    oStream << location << index << locationValue << ".AssociationValue=" << StringUtils::URLEncode(m_associationValue.c_str()) << "&";
  }
}

void SuccessfulAssociationResponseObject::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_applicationStatusCheckIdHasBeenSet) {
    oStream << location << ".ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }
  if (m_associationTypeHasBeenSet) {
    oStream << location << ".AssociationType=" << StringUtils::URLEncode(m_associationType.c_str()) << "&";
  }
  if (m_associationValueHasBeenSet) {
    oStream << location << ".AssociationValue=" << StringUtils::URLEncode(m_associationValue.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
