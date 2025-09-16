/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/QueryListsRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String QueryListsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=QueryLists&";
  if (m_listArgHasBeenSet) {
    if (m_listArg.empty()) {
      ss << "ListArg=&";
    } else {
      unsigned listArgCount = 1;
      for (auto& item : m_listArg) {
        ss << "ListArg.member." << listArgCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        listArgCount++;
      }
    }
  }

  if (m_complexListArgHasBeenSet) {
    if (m_complexListArg.empty()) {
      ss << "ComplexListArg=&";
    } else {
      unsigned complexListArgCount = 1;
      for (auto& item : m_complexListArg) {
        item.OutputToStream(ss, "ComplexListArg.member.", complexListArgCount, "");
        complexListArgCount++;
      }
    }
  }

  if (m_flattenedListArgHasBeenSet) {
    if (m_flattenedListArg.empty()) {
      ss << "FlattenedListArg=&";
    } else {
      unsigned flattenedListArgCount = 1;
      for (auto& item : m_flattenedListArg) {
        ss << "FlattenedListArg.member." << flattenedListArgCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        flattenedListArgCount++;
      }
    }
  }

  if (m_listArgWithXmlNameMemberHasBeenSet) {
    if (m_listArgWithXmlNameMember.empty()) {
      ss << "ListArgWithXmlNameMember=&";
    } else {
      unsigned listArgWithXmlNameMemberCount = 1;
      for (auto& item : m_listArgWithXmlNameMember) {
        ss << "ListArgWithXmlNameMember.item." << listArgWithXmlNameMemberCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        listArgWithXmlNameMemberCount++;
      }
    }
  }

  if (m_flattenedListArgWithXmlNameHasBeenSet) {
    if (m_flattenedListArgWithXmlName.empty()) {
      ss << "FlattenedListArgWithXmlName=&";
    } else {
      unsigned flattenedListArgWithXmlNameCount = 1;
      for (auto& item : m_flattenedListArgWithXmlName) {
        ss << "Hi." << flattenedListArgWithXmlNameCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        flattenedListArgWithXmlNameCount++;
      }
    }
  }

  if (m_nestedWithListHasBeenSet) {
    m_nestedWithList.OutputToStream(ss, "NestedWithList");
  }

  ss << "Version=2020-01-08";
  return ss.str();
}

void QueryListsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
