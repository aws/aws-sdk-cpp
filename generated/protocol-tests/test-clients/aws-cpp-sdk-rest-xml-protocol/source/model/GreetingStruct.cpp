/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/GreetingStruct.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RestXmlProtocol {
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

void GreetingStruct::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_hiHasBeenSet) {
    XmlNode hiNode = parentNode.CreateChildElement("hi");
    hiNode.SetText(m_hi);
  }
}

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
