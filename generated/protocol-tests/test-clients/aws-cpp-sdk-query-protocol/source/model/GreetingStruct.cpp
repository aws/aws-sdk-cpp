/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/GreetingStruct.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {

GreetingStruct::GreetingStruct(const XmlNode& xmlNode) { *this = xmlNode; }

GreetingStruct& GreetingStruct::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode hiNode = resultNode.FirstChild("hi");
    if (!hiNode.IsNull()) {
      m_hi = Aws::Utils::Xml::DecodeEscapedXmlText(hiNode.GetText());
      m_hiHasBeenSet = true;
    }
  }

  return *this;
}

void GreetingStruct::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_hiHasBeenSet) {
    oStream << location << index << locationValue << ".hi=" << StringUtils::URLEncode(m_hi.c_str()) << "&";
  }
}

void GreetingStruct::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_hiHasBeenSet) {
    oStream << location << ".hi=" << StringUtils::URLEncode(m_hi.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
