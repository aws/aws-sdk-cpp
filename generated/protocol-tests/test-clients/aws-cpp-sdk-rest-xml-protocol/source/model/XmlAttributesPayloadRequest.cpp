/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlAttributesPayloadRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

XmlAttributesPayloadRequest::XmlAttributesPayloadRequest(const XmlNode& xmlNode) { *this = xmlNode; }

XmlAttributesPayloadRequest& XmlAttributesPayloadRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fooNode = resultNode.FirstChild("foo");
    if (!fooNode.IsNull()) {
      m_foo = Aws::Utils::Xml::DecodeEscapedXmlText(fooNode.GetText());
      m_fooHasBeenSet = true;
    }
    auto attr = resultNode.GetAttributeValue("test");
    if (!attr.empty()) {
      m_attr = Aws::Utils::Xml::DecodeEscapedXmlText(attr);
      m_attrHasBeenSet = true;
    }
  }

  return *this;
}

void XmlAttributesPayloadRequest::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_fooHasBeenSet) {
    XmlNode fooNode = parentNode.CreateChildElement("foo");
    fooNode.SetText(m_foo);
  }

  if (m_attrHasBeenSet) {
    parentNode.SetAttributeValue("test", m_attr);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
