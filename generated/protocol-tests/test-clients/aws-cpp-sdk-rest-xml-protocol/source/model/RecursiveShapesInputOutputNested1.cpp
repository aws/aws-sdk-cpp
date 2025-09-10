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

RecursiveShapesInputOutputNested1::RecursiveShapesInputOutputNested1(const XmlNode& xmlNode) { *this = xmlNode; }

RecursiveShapesInputOutputNested1& RecursiveShapesInputOutputNested1::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
    XmlNode nestedNode = resultNode.FirstChild("nested");
    if (!nestedNode.IsNull()) {
      m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", nestedNode);
      m_nestedHasBeenSet = true;
    }
  }

  return *this;
}

void RecursiveShapesInputOutputNested1::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_fooHasBeenSet) {
    XmlNode fooNode = parentNode.CreateChildElement("foo");
    fooNode.SetText(m_foo);
  }

  if (m_nestedHasBeenSet) {
    XmlNode nestedNode = parentNode.CreateChildElement("nested");
    m_nested->AddToNode(nestedNode);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
