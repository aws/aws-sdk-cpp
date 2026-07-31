/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/InlinePolicyIdentifierType.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

InlinePolicyIdentifierType::InlinePolicyIdentifierType(const XmlNode& xmlNode) { *this = xmlNode; }

InlinePolicyIdentifierType& InlinePolicyIdentifierType::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if (!policyNameNode.IsNull()) {
      m_policyName = Aws::Utils::Xml::DecodeEscapedXmlText(policyNameNode.GetText());
      m_policyNameHasBeenSet = true;
    }
    XmlNode attachmentTypeNode = resultNode.FirstChild("AttachmentType");
    if (!attachmentTypeNode.IsNull()) {
      m_attachmentType = AttachmentTypeMapper::GetAttachmentTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attachmentTypeNode.GetText()).c_str()));
      m_attachmentTypeHasBeenSet = true;
    }
    XmlNode attachmentNameNode = resultNode.FirstChild("AttachmentName");
    if (!attachmentNameNode.IsNull()) {
      m_attachmentName = Aws::Utils::Xml::DecodeEscapedXmlText(attachmentNameNode.GetText());
      m_attachmentNameHasBeenSet = true;
    }
  }

  return *this;
}

void InlinePolicyIdentifierType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                const char* locationValue) const {
  if (m_policyNameHasBeenSet) {
    oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if (m_attachmentTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".AttachmentType=" << StringUtils::URLEncode(AttachmentTypeMapper::GetNameForAttachmentType(m_attachmentType)) << "&";
  }

  if (m_attachmentNameHasBeenSet) {
    oStream << location << index << locationValue << ".AttachmentName=" << StringUtils::URLEncode(m_attachmentName.c_str()) << "&";
  }
}

void InlinePolicyIdentifierType::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_policyNameHasBeenSet) {
    oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if (m_attachmentTypeHasBeenSet) {
    oStream << location << ".AttachmentType=" << StringUtils::URLEncode(AttachmentTypeMapper::GetNameForAttachmentType(m_attachmentType))
            << "&";
  }
  if (m_attachmentNameHasBeenSet) {
    oStream << location << ".AttachmentName=" << StringUtils::URLEncode(m_attachmentName.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
