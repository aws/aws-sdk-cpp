/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/ComplexError.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
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

void ComplexError::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_topLevelHasBeenSet) {
    XmlNode topLevelNode = parentNode.CreateChildElement("TopLevel");
    topLevelNode.SetText(m_topLevel);
  }

  if (m_nestedHasBeenSet) {
    XmlNode nestedNode = parentNode.CreateChildElement("Nested");
    m_nested.AddToNode(nestedNode);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
