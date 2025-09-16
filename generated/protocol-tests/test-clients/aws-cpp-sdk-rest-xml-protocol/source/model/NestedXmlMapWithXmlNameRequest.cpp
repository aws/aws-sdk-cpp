/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String NestedXmlMapWithXmlNameRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("NestedXmlMapWithXmlNameRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_nestedXmlMapWithXmlNameMapHasBeenSet) {
    XmlNode nestedXmlMapWithXmlNameMapParentNode = parentNode.CreateChildElement("nestedXmlMapWithXmlNameMap");
    for (const auto& mapItem : m_nestedXmlMapWithXmlNameMap) {
      XmlNode nestedXmlMapWithXmlNameMapMapEntryNode = nestedXmlMapWithXmlNameMapParentNode.CreateChildElement("entry");
      XmlNode nestedXmlMapWithXmlNameMapKeyNode = nestedXmlMapWithXmlNameMapMapEntryNode.CreateChildElement("OuterKey");
      nestedXmlMapWithXmlNameMapKeyNode.SetText(mapItem.first);
      XmlNode nestedXmlMapWithXmlNameMapValueNode = nestedXmlMapWithXmlNameMapMapEntryNode.CreateChildElement("value");
      for (const auto& nestedXmlMapWithXmlNameMapValueNestedItem : mapItem.second) {
        XmlNode nestedXmlMapWithXmlNameMapValueMapEntryNode = nestedXmlMapWithXmlNameMapValueNode.CreateChildElement("entry");
        XmlNode nestedXmlMapWithXmlNameMapValueKeyNode = nestedXmlMapWithXmlNameMapValueMapEntryNode.CreateChildElement("InnerKey");
        nestedXmlMapWithXmlNameMapValueKeyNode.SetText(nestedXmlMapWithXmlNameMapValueNestedItem.first);
        XmlNode nestedXmlMapWithXmlNameMapValueValueNode = nestedXmlMapWithXmlNameMapValueMapEntryNode.CreateChildElement("InnerValue");
        nestedXmlMapWithXmlNameMapValueValueNode.SetText(nestedXmlMapWithXmlNameMapValueNestedItem.second);
      }
    }
  }

  return payloadDoc.ConvertToString();
}

Aws::Http::HeaderValueCollection NestedXmlMapWithXmlNameRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
