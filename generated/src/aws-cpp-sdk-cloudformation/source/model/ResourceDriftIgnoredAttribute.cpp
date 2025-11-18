/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceDriftIgnoredAttribute.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

ResourceDriftIgnoredAttribute::ResourceDriftIgnoredAttribute(const XmlNode& xmlNode) { *this = xmlNode; }

ResourceDriftIgnoredAttribute& ResourceDriftIgnoredAttribute::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode pathNode = resultNode.FirstChild("Path");
    if (!pathNode.IsNull()) {
      m_path = Aws::Utils::Xml::DecodeEscapedXmlText(pathNode.GetText());
      m_pathHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if (!reasonNode.IsNull()) {
      m_reason = DriftIgnoredReasonMapper::GetDriftIgnoredReasonForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText()).c_str()));
      m_reasonHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceDriftIgnoredAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_pathHasBeenSet) {
    oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }

  if (m_reasonHasBeenSet) {
    oStream << location << index << locationValue
            << ".Reason=" << StringUtils::URLEncode(DriftIgnoredReasonMapper::GetNameForDriftIgnoredReason(m_reason)) << "&";
  }
}

void ResourceDriftIgnoredAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_pathHasBeenSet) {
    oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  }
  if (m_reasonHasBeenSet) {
    oStream << location << ".Reason=" << StringUtils::URLEncode(DriftIgnoredReasonMapper::GetNameForDriftIgnoredReason(m_reason)) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
