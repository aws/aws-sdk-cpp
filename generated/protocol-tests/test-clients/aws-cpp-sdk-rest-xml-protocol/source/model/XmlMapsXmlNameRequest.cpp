/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlMapsXmlNameRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String XmlMapsXmlNameRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlMapsXmlNameRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_myMapHasBeenSet) {
    XmlNode myMapParentNode = parentNode.CreateChildElement("myMap");
    for (const auto& mapItem : m_myMap) {
      XmlNode myMapMapEntryNode = myMapParentNode.CreateChildElement("entry");
      XmlNode myMapKeyNode = myMapMapEntryNode.CreateChildElement("Attribute");
      myMapKeyNode.SetText(mapItem.first);
      XmlNode myMapValueNode = myMapMapEntryNode.CreateChildElement("Setting");
      mapItem.second.AddToNode(myMapValueNode);
    }
  }

  return payloadDoc.ConvertToString();
}
