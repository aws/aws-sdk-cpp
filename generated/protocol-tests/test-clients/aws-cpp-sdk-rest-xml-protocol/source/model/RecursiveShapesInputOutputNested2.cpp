/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesInputOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

RecursiveShapesInputOutputNested2::RecursiveShapesInputOutputNested2(const XmlNode& xmlNode) { *this = xmlNode; }

RecursiveShapesInputOutputNested2& RecursiveShapesInputOutputNested2::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode barNode = resultNode.FirstChild("bar");
    if (!barNode.IsNull()) {
      m_bar = Aws::Utils::Xml::DecodeEscapedXmlText(barNode.GetText());
      m_barHasBeenSet = true;
    }
    XmlNode recursiveMemberNode = resultNode.FirstChild("recursiveMember");
    if (!recursiveMemberNode.IsNull()) {
      m_recursiveMember = Aws::MakeShared<RecursiveShapesInputOutputNested1>("RecursiveShapesInputOutputNested2", recursiveMemberNode);
      m_recursiveMemberHasBeenSet = true;
    }
  }

  return *this;
}

void RecursiveShapesInputOutputNested2::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_barHasBeenSet) {
    XmlNode barNode = parentNode.CreateChildElement("bar");
    barNode.SetText(m_bar);
  }

  if (m_recursiveMemberHasBeenSet) {
    XmlNode recursiveMemberNode = parentNode.CreateChildElement("recursiveMember");
    m_recursiveMember->AddToNode(recursiveMemberNode);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
