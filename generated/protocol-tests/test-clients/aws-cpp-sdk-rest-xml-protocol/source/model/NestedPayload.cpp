/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/NestedPayload.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

NestedPayload::NestedPayload(const XmlNode& xmlNode) { *this = xmlNode; }

NestedPayload& NestedPayload::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode greetingNode = resultNode.FirstChild("greeting");
    if (!greetingNode.IsNull()) {
      m_greeting = Aws::Utils::Xml::DecodeEscapedXmlText(greetingNode.GetText());
      m_greetingHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void NestedPayload::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_greetingHasBeenSet) {
    XmlNode greetingNode = parentNode.CreateChildElement("greeting");
    greetingNode.SetText(m_greeting);
  }

  if (m_nameHasBeenSet) {
    XmlNode nameNode = parentNode.CreateChildElement("name");
    nameNode.SetText(m_name);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
