/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/ContextProviderKeyDefinition.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

ContextProviderKeyDefinition::ContextProviderKeyDefinition(const XmlNode& xmlNode) { *this = xmlNode; }

ContextProviderKeyDefinition& ContextProviderKeyDefinition::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceKeyNode = resultNode.FirstChild("SourceKey");
    if (!sourceKeyNode.IsNull()) {
      m_sourceKey = Aws::Utils::Xml::DecodeEscapedXmlText(sourceKeyNode.GetText());
      m_sourceKeyHasBeenSet = true;
    }
    XmlNode targetKeyNode = resultNode.FirstChild("TargetKey");
    if (!targetKeyNode.IsNull()) {
      m_targetKey = Aws::Utils::Xml::DecodeEscapedXmlText(targetKeyNode.GetText());
      m_targetKeyHasBeenSet = true;
    }
  }

  return *this;
}

void ContextProviderKeyDefinition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_sourceKeyHasBeenSet) {
    oStream << location << index << locationValue << ".SourceKey=" << StringUtils::URLEncode(m_sourceKey.c_str()) << "&";
  }

  if (m_targetKeyHasBeenSet) {
    oStream << location << index << locationValue << ".TargetKey=" << StringUtils::URLEncode(m_targetKey.c_str()) << "&";
  }
}

void ContextProviderKeyDefinition::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceKeyHasBeenSet) {
    oStream << location << ".SourceKey=" << StringUtils::URLEncode(m_sourceKey.c_str()) << "&";
  }
  if (m_targetKeyHasBeenSet) {
    oStream << location << ".TargetKey=" << StringUtils::URLEncode(m_targetKey.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
