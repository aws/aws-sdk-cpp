/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String FlattenedXmlMapRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("FlattenedXmlMapRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_myMapHasBeenSet) {
    XmlNode myMapParentNode = parentNode.CreateChildElement("myMap");
    for (const auto& mapItem : m_myMap) {
      XmlNode myMapMapEntryNode = myMapParentNode.CreateChildElement("entry");
      XmlNode myMapKeyNode = myMapMapEntryNode.CreateChildElement("key");
      myMapKeyNode.SetText(mapItem.first);
      XmlNode myMapValueNode = myMapMapEntryNode.CreateChildElement("value");
      myMapValueNode.SetText(FooEnumMapper::GetNameForFooEnum(mapItem.second));
    }
  }

  return payloadDoc.ConvertToString();
}
