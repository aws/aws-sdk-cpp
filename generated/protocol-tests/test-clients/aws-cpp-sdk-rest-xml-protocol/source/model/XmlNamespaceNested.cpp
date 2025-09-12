/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlNamespaceNested.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

XmlNamespaceNested::XmlNamespaceNested(const XmlNode& xmlNode) { *this = xmlNode; }

XmlNamespaceNested& XmlNamespaceNested::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("values");
    if (!valuesNode.IsNull()) {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      m_valuesHasBeenSet = !valuesMember.IsNull();
      while (!valuesMember.IsNull()) {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void XmlNamespaceNested::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  parentNode.SetAttributeValue("xmlns", "http://foo.com");
  if (m_fooHasBeenSet) {
    XmlNode fooNode = parentNode.CreateChildElement("foo");
    fooNode.SetText(m_foo);
  }

  if (m_valuesHasBeenSet) {
    XmlNode valuesParentNode = parentNode.CreateChildElement("values");
    for (const auto& item : m_values) {
      XmlNode valuesNode = valuesParentNode.CreateChildElement("member");
      valuesNode.SetText(item);
    }
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
