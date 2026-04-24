/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String XmlIntEnumsRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlIntEnumsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_intEnum1HasBeenSet) {
    XmlNode intEnum1Node = parentNode.CreateChildElement("intEnum1");
    ss << m_intEnum1;
    intEnum1Node.SetText(ss.str());
    ss.str("");
  }

  if (m_intEnum2HasBeenSet) {
    XmlNode intEnum2Node = parentNode.CreateChildElement("intEnum2");
    ss << m_intEnum2;
    intEnum2Node.SetText(ss.str());
    ss.str("");
  }

  if (m_intEnum3HasBeenSet) {
    XmlNode intEnum3Node = parentNode.CreateChildElement("intEnum3");
    ss << m_intEnum3;
    intEnum3Node.SetText(ss.str());
    ss.str("");
  }

  if (m_intEnumListHasBeenSet) {
    XmlNode intEnumListParentNode = parentNode.CreateChildElement("intEnumList");
    for (const auto& item : m_intEnumList) {
      XmlNode intEnumListNode = intEnumListParentNode.CreateChildElement("member");
      ss << item;
      intEnumListNode.SetText(ss.str());
      ss.str("");
    }
  }

  if (m_intEnumSetHasBeenSet) {
    XmlNode intEnumSetParentNode = parentNode.CreateChildElement("intEnumSet");
    for (const auto& item : m_intEnumSet) {
      XmlNode intEnumSetNode = intEnumSetParentNode.CreateChildElement("member");
      ss << item;
      intEnumSetNode.SetText(ss.str());
      ss.str("");
    }
  }

  if (m_intEnumMapHasBeenSet) {
    XmlNode intEnumMapParentNode = parentNode.CreateChildElement("intEnumMap");
    for (const auto& mapItem : m_intEnumMap) {
      XmlNode intEnumMapMapEntryNode = intEnumMapParentNode.CreateChildElement("entry");
      XmlNode intEnumMapKeyNode = intEnumMapMapEntryNode.CreateChildElement("key");
      intEnumMapKeyNode.SetText(mapItem.first);
      XmlNode intEnumMapValueNode = intEnumMapMapEntryNode.CreateChildElement("value");
      ss << mapItem.second;
      intEnumMapValueNode.SetText(ss.str());
      ss.str("");
    }
  }

  return payloadDoc.ConvertToString();
}
