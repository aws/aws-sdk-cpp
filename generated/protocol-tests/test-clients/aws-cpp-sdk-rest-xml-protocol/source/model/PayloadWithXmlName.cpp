/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/PayloadWithXmlName.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

PayloadWithXmlName::PayloadWithXmlName(const XmlNode& xmlNode) { *this = xmlNode; }

PayloadWithXmlName& PayloadWithXmlName::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode nameNode = resultNode.FirstChild("name");
    if (!nameNode.IsNull()) {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
  }

  return *this;
}

void PayloadWithXmlName::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_nameHasBeenSet) {
    XmlNode nameNode = parentNode.CreateChildElement("name");
    nameNode.SetText(m_name);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
