/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/XmlListsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

XmlListsRequest::XmlListsRequest() : 
    m_stringListHasBeenSet(false),
    m_stringSetHasBeenSet(false),
    m_integerListHasBeenSet(false),
    m_booleanListHasBeenSet(false),
    m_timestampListHasBeenSet(false),
    m_enumListHasBeenSet(false),
    m_intEnumListHasBeenSet(false),
    m_nestedStringListHasBeenSet(false),
    m_renamedListMembersHasBeenSet(false),
    m_flattenedListHasBeenSet(false),
    m_flattenedList2HasBeenSet(false),
    m_flattenedListWithMemberNamespaceHasBeenSet(false),
    m_flattenedListWithNamespaceHasBeenSet(false),
    m_structureListHasBeenSet(false),
    m_flattenedStructureListHasBeenSet(false)
{
}

Aws::String XmlListsRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlListsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_stringListHasBeenSet)
  {
   XmlNode stringListParentNode = parentNode.CreateChildElement("stringList");
   for(const auto& item : m_stringList)
   {
     XmlNode stringListNode = stringListParentNode.CreateChildElement("String");
     stringListNode.SetText(item);
   }
  }

  if(m_stringSetHasBeenSet)
  {
   XmlNode stringSetParentNode = parentNode.CreateChildElement("stringSet");
   for(const auto& item : m_stringSet)
   {
     XmlNode stringSetNode = stringSetParentNode.CreateChildElement("String");
     stringSetNode.SetText(item);
   }
  }

  if(m_integerListHasBeenSet)
  {
   XmlNode integerListParentNode = parentNode.CreateChildElement("integerList");
   for(const auto& item : m_integerList)
   {
     XmlNode integerListNode = integerListParentNode.CreateChildElement("Integer");
     ss << item;
     integerListNode.SetText(ss.str());
     ss.str("");
   }
  }

  if(m_booleanListHasBeenSet)
  {
   XmlNode booleanListParentNode = parentNode.CreateChildElement("booleanList");
   for(const auto& item : m_booleanList)
   {
     XmlNode booleanListNode = booleanListParentNode.CreateChildElement("Boolean");
     ss << std::boolalpha << item;
     booleanListNode.SetText(ss.str());
     ss.str("");
   }
  }

  if(m_timestampListHasBeenSet)
  {
   XmlNode timestampListParentNode = parentNode.CreateChildElement("timestampList");
   for(const auto& item : m_timestampList)
   {
     XmlNode timestampListNode = timestampListParentNode.CreateChildElement("Timestamp");
     timestampListNode.SetText(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
   }
  }

  if(m_enumListHasBeenSet)
  {
   XmlNode enumListParentNode = parentNode.CreateChildElement("enumList");
   for(const auto& item : m_enumList)
   {
     XmlNode enumListNode = enumListParentNode.CreateChildElement("FooEnum");
     enumListNode.SetText(FooEnumMapper::GetNameForFooEnum(item));
   }
  }

  if(m_intEnumListHasBeenSet)
  {
   XmlNode intEnumListParentNode = parentNode.CreateChildElement("intEnumList");
   for(const auto& item : m_intEnumList)
   {
     XmlNode intEnumListNode = intEnumListParentNode.CreateChildElement("IntegerEnum");
     ss << item;
     intEnumListNode.SetText(ss.str());
     ss.str("");
   }
  }

  if(m_nestedStringListHasBeenSet)
  {
   XmlNode nestedStringListParentNode = parentNode.CreateChildElement("nestedStringList");
   for(const auto& item : m_nestedStringList)
   {
     XmlNode nestedStringListNode = nestedStringListParentNode.CreateChildElement("StringList");
   }
  }

  if(m_renamedListMembersHasBeenSet)
  {
   XmlNode renamedListMembersParentNode = parentNode.CreateChildElement("renamed");
   for(const auto& item : m_renamedListMembers)
   {
     XmlNode renamedListMembersNode = renamedListMembersParentNode.CreateChildElement("item");
     renamedListMembersNode.SetText(item);
   }
  }

  if(m_flattenedListHasBeenSet)
  {
   for(const auto& item : m_flattenedList)
   {
     XmlNode flattenedListNode = parentNode.CreateChildElement("item");
     flattenedListNode.SetText(item);
   }
  }

  if(m_flattenedList2HasBeenSet)
  {
   for(const auto& item : m_flattenedList2)
   {
     XmlNode flattenedList2Node = parentNode.CreateChildElement("item");
     flattenedList2Node.SetText(item);
   }
  }

  if(m_flattenedListWithMemberNamespaceHasBeenSet)
  {
   XmlNode flattenedListWithMemberNamespaceParentNode = parentNode.CreateChildElement("flattenedListWithMemberNamespace");
   for(const auto& item : m_flattenedListWithMemberNamespace)
   {
     XmlNode flattenedListWithMemberNamespaceNode = flattenedListWithMemberNamespaceParentNode.CreateChildElement("String");
     flattenedListWithMemberNamespaceNode.SetText(item);
   }
  }

  if(m_flattenedListWithNamespaceHasBeenSet)
  {
   XmlNode flattenedListWithNamespaceParentNode = parentNode.CreateChildElement("flattenedListWithNamespace");
   for(const auto& item : m_flattenedListWithNamespace)
   {
     XmlNode flattenedListWithNamespaceNode = flattenedListWithNamespaceParentNode.CreateChildElement("String");
     flattenedListWithNamespaceNode.SetText(item);
   }
  }

  if(m_structureListHasBeenSet)
  {
   XmlNode structureListParentNode = parentNode.CreateChildElement("myStructureList");
   for(const auto& item : m_structureList)
   {
     XmlNode structureListNode = structureListParentNode.CreateChildElement("item");
     item.AddToNode(structureListNode);
   }
  }

  if(m_flattenedStructureListHasBeenSet)
  {
   for(const auto& item : m_flattenedStructureList)
   {
     XmlNode flattenedStructureListNode = parentNode.CreateChildElement("item");
     item.AddToNode(flattenedStructureListNode);
   }
  }

  return payloadDoc.ConvertToString();
}


