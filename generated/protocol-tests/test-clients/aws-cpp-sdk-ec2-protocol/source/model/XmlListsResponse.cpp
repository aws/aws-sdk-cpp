/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/XmlListsResponse.h>

#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlListsResponse::XmlListsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlListsResponse& XmlListsResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "XmlListsResponse")) {
    resultNode = rootNode.FirstChild("XmlListsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode stringListNode = resultNode.FirstChild("stringList");
    if (!stringListNode.IsNull()) {
      XmlNode stringListMember = stringListNode.FirstChild("member");
      m_stringListHasBeenSet = !stringListMember.IsNull();
      while (!stringListMember.IsNull()) {
        m_stringList.push_back(stringListMember.GetText());
        stringListMember = stringListMember.NextNode("member");
      }

      m_stringListHasBeenSet = true;
    }
    XmlNode stringSetNode = resultNode.FirstChild("stringSet");
    if (!stringSetNode.IsNull()) {
      XmlNode stringSetMember = stringSetNode.FirstChild("member");
      m_stringSetHasBeenSet = !stringSetMember.IsNull();
      while (!stringSetMember.IsNull()) {
        m_stringSet.push_back(stringSetMember.GetText());
        stringSetMember = stringSetMember.NextNode("member");
      }

      m_stringSetHasBeenSet = true;
    }
    XmlNode integerListNode = resultNode.FirstChild("integerList");
    if (!integerListNode.IsNull()) {
      XmlNode integerListMember = integerListNode.FirstChild("member");
      m_integerListHasBeenSet = !integerListMember.IsNull();
      while (!integerListMember.IsNull()) {
        m_integerList.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(integerListMember.GetText().c_str()).c_str()));
        integerListMember = integerListMember.NextNode("member");
      }

      m_integerListHasBeenSet = true;
    }
    XmlNode booleanListNode = resultNode.FirstChild("booleanList");
    if (!booleanListNode.IsNull()) {
      XmlNode booleanListMember = booleanListNode.FirstChild("member");
      m_booleanListHasBeenSet = !booleanListMember.IsNull();
      while (!booleanListMember.IsNull()) {
        m_booleanList.push_back(StringUtils::ConvertToBool(StringUtils::Trim(booleanListMember.GetText().c_str()).c_str()));
        booleanListMember = booleanListMember.NextNode("member");
      }

      m_booleanListHasBeenSet = true;
    }
    XmlNode timestampListNode = resultNode.FirstChild("timestampList");
    if (!timestampListNode.IsNull()) {
      XmlNode timestampListMember = timestampListNode.FirstChild("member");
      m_timestampListHasBeenSet = !timestampListMember.IsNull();
      while (!timestampListMember.IsNull()) {
        m_timestampList.push_back(
            DateTime(StringUtils::Trim(timestampListMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        timestampListMember = timestampListMember.NextNode("member");
      }

      m_timestampListHasBeenSet = true;
    }
    XmlNode enumListNode = resultNode.FirstChild("enumList");
    if (!enumListNode.IsNull()) {
      XmlNode enumListMember = enumListNode.FirstChild("member");
      m_enumListHasBeenSet = !enumListMember.IsNull();
      while (!enumListMember.IsNull()) {
        m_enumList.push_back(FooEnumMapper::GetFooEnumForName(StringUtils::Trim(enumListMember.GetText().c_str())));
        enumListMember = enumListMember.NextNode("member");
      }

      m_enumListHasBeenSet = true;
    }
    XmlNode intEnumListNode = resultNode.FirstChild("intEnumList");
    if (!intEnumListNode.IsNull()) {
      XmlNode intEnumListMember = intEnumListNode.FirstChild("member");
      m_intEnumListHasBeenSet = !intEnumListMember.IsNull();
      while (!intEnumListMember.IsNull()) {
        m_intEnumList.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(intEnumListMember.GetText().c_str()).c_str()));
        intEnumListMember = intEnumListMember.NextNode("member");
      }

      m_intEnumListHasBeenSet = true;
    }
    XmlNode nestedStringListNode = resultNode.FirstChild("nestedStringList");
    if (!nestedStringListNode.IsNull()) {
      XmlNode nestedStringListMember = nestedStringListNode.FirstChild("member");
      m_nestedStringListHasBeenSet = !nestedStringListMember.IsNull();
      while (!nestedStringListMember.IsNull()) {
        m_nestedStringList.push_back([&nestedStringListMember]() -> Aws::Vector<Aws::String> {
          Aws::Vector<Aws::String> nestedListNestedStringList;
          if (nestedStringListMember.IsNull()) {
            return nestedListNestedStringList;
          }
          XmlNode nestedListNestedStringListMemberNode = nestedStringListMember.FirstChild("member");
          while (!nestedListNestedStringListMemberNode.IsNull()) {
            nestedListNestedStringList.push_back(nestedListNestedStringListMemberNode.GetText());
            nestedListNestedStringListMemberNode = nestedListNestedStringListMemberNode.NextNode("member");
          }
          return nestedListNestedStringList;
        }(/*IIFE*/));
        nestedStringListMember = nestedStringListMember.NextNode("member");
      }

      m_nestedStringListHasBeenSet = true;
    }
    XmlNode renamedListMembersNode = resultNode.FirstChild("renamed");
    if (!renamedListMembersNode.IsNull()) {
      XmlNode renamedListMembersMember = renamedListMembersNode.FirstChild("item");
      m_renamedListMembersHasBeenSet = !renamedListMembersMember.IsNull();
      while (!renamedListMembersMember.IsNull()) {
        m_renamedListMembers.push_back(renamedListMembersMember.GetText());
        renamedListMembersMember = renamedListMembersMember.NextNode("item");
      }

      m_renamedListMembersHasBeenSet = true;
    }
    XmlNode flattenedListNode = resultNode.FirstChild("item");
    if (!flattenedListNode.IsNull()) {
      XmlNode itemMember = flattenedListNode;
      m_flattenedListHasBeenSet = !itemMember.IsNull();
      while (!itemMember.IsNull()) {
        m_flattenedList.push_back(itemMember.GetText());
        itemMember = itemMember.NextNode("item");
      }

      m_flattenedListHasBeenSet = true;
    }
    XmlNode flattenedList2Node = resultNode.FirstChild("customName");
    if (!flattenedList2Node.IsNull()) {
      XmlNode customNameMember = flattenedList2Node;
      m_flattenedList2HasBeenSet = !customNameMember.IsNull();
      while (!customNameMember.IsNull()) {
        m_flattenedList2.push_back(customNameMember.GetText());
        customNameMember = customNameMember.NextNode("item");
      }

      m_flattenedList2HasBeenSet = true;
    }
    XmlNode flattenedListWithMemberNamespaceNode = resultNode.FirstChild("flattenedListWithMemberNamespace");
    if (!flattenedListWithMemberNamespaceNode.IsNull()) {
      XmlNode flattenedListWithMemberNamespaceMember = flattenedListWithMemberNamespaceNode;
      m_flattenedListWithMemberNamespaceHasBeenSet = !flattenedListWithMemberNamespaceMember.IsNull();
      while (!flattenedListWithMemberNamespaceMember.IsNull()) {
        m_flattenedListWithMemberNamespace.push_back(flattenedListWithMemberNamespaceMember.GetText());
        flattenedListWithMemberNamespaceMember = flattenedListWithMemberNamespaceMember.NextNode("flattenedListWithMemberNamespace");
      }

      m_flattenedListWithMemberNamespaceHasBeenSet = true;
    }
    XmlNode flattenedListWithNamespaceNode = resultNode.FirstChild("flattenedListWithNamespace");
    if (!flattenedListWithNamespaceNode.IsNull()) {
      XmlNode flattenedListWithNamespaceMember = flattenedListWithNamespaceNode;
      m_flattenedListWithNamespaceHasBeenSet = !flattenedListWithNamespaceMember.IsNull();
      while (!flattenedListWithNamespaceMember.IsNull()) {
        m_flattenedListWithNamespace.push_back(flattenedListWithNamespaceMember.GetText());
        flattenedListWithNamespaceMember = flattenedListWithNamespaceMember.NextNode("flattenedListWithNamespace");
      }

      m_flattenedListWithNamespaceHasBeenSet = true;
    }
    XmlNode structureListNode = resultNode.FirstChild("myStructureList");
    if (!structureListNode.IsNull()) {
      XmlNode structureListMember = structureListNode.FirstChild("item");
      m_structureListHasBeenSet = !structureListMember.IsNull();
      while (!structureListMember.IsNull()) {
        m_structureList.push_back(structureListMember);
        structureListMember = structureListMember.NextNode("item");
      }

      m_structureListHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2Protocol::Model::XmlListsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
