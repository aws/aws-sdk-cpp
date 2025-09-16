/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/ComplexNestedErrorData.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

ComplexNestedErrorData::ComplexNestedErrorData(const XmlNode& xmlNode) { *this = xmlNode; }

ComplexNestedErrorData& ComplexNestedErrorData::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("Foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
  }

  return *this;
}

void ComplexNestedErrorData::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_fooHasBeenSet) {
    XmlNode fooNode = parentNode.CreateChildElement("Foo");
    fooNode.SetText(m_foo);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
