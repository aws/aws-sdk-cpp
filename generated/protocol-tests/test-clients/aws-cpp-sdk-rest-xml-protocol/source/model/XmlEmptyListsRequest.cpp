/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/XmlEmptyListsRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String XmlEmptyListsRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlEmptyListsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if (m_stringListHasBeenSet) {
    XmlNode stringListParentNode = parentNode.CreateChildElement("stringList");
    for (const auto& item : m_stringList) {
      XmlNode stringListNode = stringListParentNode.CreateChildElement("member");
      stringListNode.SetText(item);
    }
  }

  if (m_stringSetHasBeenSet) {
    XmlNode stringSetParentNode = parentNode.CreateChildElement("stringSet");
    for (const auto& item : m_stringSet) {
      XmlNode stringSetNode = stringSetParentNode.CreateChildElement("member");
      stringSetNode.SetText(item);
    }
  }

  if (m_integerListHasBeenSet) {
    XmlNode integerListParentNode = parentNode.CreateChildElement("integerList");
    for (const auto& item : m_integerList) {
      XmlNode integerListNode = integerListParentNode.CreateChildElement("member");
      ss << item;
      integerListNode.SetText(ss.str());
      ss.str("");
    }
  }

  if (m_booleanListHasBeenSet) {
    XmlNode booleanListParentNode = parentNode.CreateChildElement("booleanList");
    for (const auto& item : m_booleanList) {
      XmlNode booleanListNode = booleanListParentNode.CreateChildElement("member");
      ss << std::boolalpha << item;
      booleanListNode.SetText(ss.str());
      ss.str("");
    }
  }

  if (m_timestampListHasBeenSet) {
    XmlNode timestampListParentNode = parentNode.CreateChildElement("timestampList");
    for (const auto& item : m_timestampList) {
      XmlNode timestampListNode = timestampListParentNode.CreateChildElement("member");
      timestampListNode.SetText(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    }
  }

  if (m_enumListHasBeenSet) {
    XmlNode enumListParentNode = parentNode.CreateChildElement("enumList");
    for (const auto& item : m_enumList) {
      XmlNode enumListNode = enumListParentNode.CreateChildElement("member");
      enumListNode.SetText(FooEnumMapper::GetNameForFooEnum(item));
    }
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

  if (m_nestedStringListHasBeenSet) {
    XmlNode nestedStringListParentNode = parentNode.CreateChildElement("nestedStringList");
    for (const auto& item : m_nestedStringList) {
      XmlNode nestedStringListNode = nestedStringListParentNode.CreateChildElement("member");
      for (const auto& nestedStringListNestedItem : item) {
        XmlNode nestedStringListNestedNode = nestedStringListNode.CreateChildElement("member");
        nestedStringListNestedNode.SetText(nestedStringListNestedItem);
      }
    }
  }

  if (m_renamedListMembersHasBeenSet) {
    XmlNode renamedListMembersParentNode = parentNode.CreateChildElement("renamed");
    for (const auto& item : m_renamedListMembers) {
      XmlNode renamedListMembersNode = renamedListMembersParentNode.CreateChildElement("item");
      renamedListMembersNode.SetText(item);
    }
  }

  if (m_flattenedListHasBeenSet) {
    for (const auto& item : m_flattenedList) {
      XmlNode flattenedListNode = parentNode.CreateChildElement("flattenedList");
      flattenedListNode.SetText(item);
    }
  }

  if (m_flattenedList2HasBeenSet) {
    for (const auto& item : m_flattenedList2) {
      XmlNode flattenedList2Node = parentNode.CreateChildElement("customName");
      flattenedList2Node.SetText(item);
    }
  }

  if (m_flattenedListWithMemberNamespaceHasBeenSet) {
    XmlNode flattenedListWithMemberNamespaceParentNode = parentNode.CreateChildElement("flattenedListWithMemberNamespace");
    for (const auto& item : m_flattenedListWithMemberNamespace) {
      XmlNode flattenedListWithMemberNamespaceNode =
          flattenedListWithMemberNamespaceParentNode.CreateChildElement("flattenedListWithMemberNamespace");
      flattenedListWithMemberNamespaceNode.SetText(item);
    }
  }

  if (m_flattenedListWithNamespaceHasBeenSet) {
    XmlNode flattenedListWithNamespaceParentNode = parentNode.CreateChildElement("flattenedListWithNamespace");
    for (const auto& item : m_flattenedListWithNamespace) {
      XmlNode flattenedListWithNamespaceNode = flattenedListWithNamespaceParentNode.CreateChildElement("flattenedListWithNamespace");
      flattenedListWithNamespaceNode.SetText(item);
    }
  }

  if (m_structureListHasBeenSet) {
    XmlNode structureListParentNode = parentNode.CreateChildElement("myStructureList");
    for (const auto& item : m_structureList) {
      XmlNode structureListNode = structureListParentNode.CreateChildElement("item");
      item.AddToNode(structureListNode);
    }
  }

  if (m_flattenedStructureListHasBeenSet) {
    for (const auto& item : m_flattenedStructureList) {
      XmlNode flattenedStructureListNode = parentNode.CreateChildElement("flattenedStructureList");
      item.AddToNode(flattenedStructureListNode);
    }
  }

  return payloadDoc.ConvertToString();
}
