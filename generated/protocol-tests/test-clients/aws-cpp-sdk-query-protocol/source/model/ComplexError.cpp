/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/ComplexError.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {

ComplexError::ComplexError(const XmlNode& xmlNode) { *this = xmlNode; }

ComplexError& ComplexError::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode topLevelNode = resultNode.FirstChild("TopLevel");
    if (!topLevelNode.IsNull()) {
      m_topLevel = Aws::Utils::Xml::DecodeEscapedXmlText(topLevelNode.GetText());
      m_topLevelHasBeenSet = true;
    }
    XmlNode nestedNode = resultNode.FirstChild("Nested");
    if (!nestedNode.IsNull()) {
      m_nested = nestedNode;
      m_nestedHasBeenSet = true;
    }
  }

  return *this;
}

void ComplexError::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_topLevelHasBeenSet) {
    oStream << location << index << locationValue << ".TopLevel=" << StringUtils::URLEncode(m_topLevel.c_str()) << "&";
  }

  if (m_nestedHasBeenSet) {
    Aws::StringStream nestedLocationAndMemberSs;
    nestedLocationAndMemberSs << location << index << locationValue << ".Nested";
    m_nested.OutputToStream(oStream, nestedLocationAndMemberSs.str().c_str());
  }
}

void ComplexError::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_topLevelHasBeenSet) {
    oStream << location << ".TopLevel=" << StringUtils::URLEncode(m_topLevel.c_str()) << "&";
  }
  if (m_nestedHasBeenSet) {
    Aws::String nestedLocationAndMember(location);
    nestedLocationAndMember += ".Nested";
    m_nested.OutputToStream(oStream, nestedLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
