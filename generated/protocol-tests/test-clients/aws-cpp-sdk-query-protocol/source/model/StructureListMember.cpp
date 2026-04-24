/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/StructureListMember.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {

StructureListMember::StructureListMember(const XmlNode& xmlNode) { *this = xmlNode; }

StructureListMember& StructureListMember::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode aNode = resultNode.FirstChild("value");
    if (!aNode.IsNull()) {
      m_a = Aws::Utils::Xml::DecodeEscapedXmlText(aNode.GetText());
      m_aHasBeenSet = true;
    }
    XmlNode bNode = resultNode.FirstChild("other");
    if (!bNode.IsNull()) {
      m_b = Aws::Utils::Xml::DecodeEscapedXmlText(bNode.GetText());
      m_bHasBeenSet = true;
    }
  }

  return *this;
}

void StructureListMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_aHasBeenSet) {
    oStream << location << index << locationValue << ".a=" << StringUtils::URLEncode(m_a.c_str()) << "&";
  }

  if (m_bHasBeenSet) {
    oStream << location << index << locationValue << ".b=" << StringUtils::URLEncode(m_b.c_str()) << "&";
  }
}

void StructureListMember::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_aHasBeenSet) {
    oStream << location << ".a=" << StringUtils::URLEncode(m_a.c_str()) << "&";
  }
  if (m_bHasBeenSet) {
    oStream << location << ".b=" << StringUtils::URLEncode(m_b.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
