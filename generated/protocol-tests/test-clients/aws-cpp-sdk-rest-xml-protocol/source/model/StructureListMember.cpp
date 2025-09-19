/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/StructureListMember.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
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

void StructureListMember::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_aHasBeenSet) {
    XmlNode aNode = parentNode.CreateChildElement("value");
    aNode.SetText(m_a);
  }

  if (m_bHasBeenSet) {
    XmlNode bNode = parentNode.CreateChildElement("other");
    bNode.SetText(m_b);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
