/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlMapWithXmlNamespaceRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String XmlMapWithXmlNamespaceRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlMapWithXmlNamespaceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_myMapHasBeenSet) {
    XmlNode myMapParentNode = parentNode.CreateChildElement("KVP");
    for (const auto& mapItem : m_myMap) {
      XmlNode myMapMapEntryNode = myMapParentNode.CreateChildElement("KVP");
      XmlNode myMapKeyNode = myMapMapEntryNode.CreateChildElement("K");
      myMapKeyNode.SetText(mapItem.first);
      XmlNode myMapValueNode = myMapMapEntryNode.CreateChildElement("V");
      myMapValueNode.SetText(mapItem.second);
    }
  }

  return payloadDoc.ConvertToString();
}
