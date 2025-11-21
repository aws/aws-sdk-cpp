/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OperationEntry.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

OperationEntry::OperationEntry(const XmlNode& xmlNode) { *this = xmlNode; }

OperationEntry& OperationEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode operationTypeNode = resultNode.FirstChild("OperationType");
    if (!operationTypeNode.IsNull()) {
      m_operationType = OperationTypeMapper::GetOperationTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operationTypeNode.GetText()).c_str()));
      m_operationTypeHasBeenSet = true;
    }
    XmlNode operationIdNode = resultNode.FirstChild("OperationId");
    if (!operationIdNode.IsNull()) {
      m_operationId = Aws::Utils::Xml::DecodeEscapedXmlText(operationIdNode.GetText());
      m_operationIdHasBeenSet = true;
    }
  }

  return *this;
}

void OperationEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_operationTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".OperationType=" << StringUtils::URLEncode(OperationTypeMapper::GetNameForOperationType(m_operationType)) << "&";
  }

  if (m_operationIdHasBeenSet) {
    oStream << location << index << locationValue << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }
}

void OperationEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_operationTypeHasBeenSet) {
    oStream << location << ".OperationType=" << StringUtils::URLEncode(OperationTypeMapper::GetNameForOperationType(m_operationType))
            << "&";
  }
  if (m_operationIdHasBeenSet) {
    oStream << location << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
