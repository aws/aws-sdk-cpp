/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlEnumsRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String XmlEnumsRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlEnumsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_fooEnum1HasBeenSet) {
    XmlNode fooEnum1Node = parentNode.CreateChildElement("fooEnum1");
    fooEnum1Node.SetText(FooEnumMapper::GetNameForFooEnum(m_fooEnum1));
  }

  if (m_fooEnum2HasBeenSet) {
    XmlNode fooEnum2Node = parentNode.CreateChildElement("fooEnum2");
    fooEnum2Node.SetText(FooEnumMapper::GetNameForFooEnum(m_fooEnum2));
  }

  if (m_fooEnum3HasBeenSet) {
    XmlNode fooEnum3Node = parentNode.CreateChildElement("fooEnum3");
    fooEnum3Node.SetText(FooEnumMapper::GetNameForFooEnum(m_fooEnum3));
  }

  if (m_fooEnumListHasBeenSet) {
    XmlNode fooEnumListParentNode = parentNode.CreateChildElement("fooEnumList");
    for (const auto& item : m_fooEnumList) {
      XmlNode fooEnumListNode = fooEnumListParentNode.CreateChildElement("member");
      fooEnumListNode.SetText(FooEnumMapper::GetNameForFooEnum(item));
    }
  }

  if (m_fooEnumSetHasBeenSet) {
    XmlNode fooEnumSetParentNode = parentNode.CreateChildElement("fooEnumSet");
    for (const auto& item : m_fooEnumSet) {
      XmlNode fooEnumSetNode = fooEnumSetParentNode.CreateChildElement("member");
      fooEnumSetNode.SetText(FooEnumMapper::GetNameForFooEnum(item));
    }
  }

  if (m_fooEnumMapHasBeenSet) {
    XmlNode fooEnumMapParentNode = parentNode.CreateChildElement("fooEnumMap");
    for (const auto& mapItem : m_fooEnumMap) {
      XmlNode fooEnumMapMapEntryNode = fooEnumMapParentNode.CreateChildElement("entry");
      XmlNode fooEnumMapKeyNode = fooEnumMapMapEntryNode.CreateChildElement("key");
      fooEnumMapKeyNode.SetText(mapItem.first);
      XmlNode fooEnumMapValueNode = fooEnumMapMapEntryNode.CreateChildElement("value");
      fooEnumMapValueNode.SetText(FooEnumMapper::GetNameForFooEnum(mapItem.second));
    }
  }

  return payloadDoc.ConvertToString();
}
