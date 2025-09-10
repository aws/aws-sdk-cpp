/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/QueryMapsRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String QueryMapsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=QueryMaps&";
  if (m_mapArgHasBeenSet) {
    unsigned mapArgCount = 1;
    for (auto& item : m_mapArg) {
      ss << "MapArg.entry." << mapArgCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "MapArg.entry." << mapArgCount << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      mapArgCount++;
    }
  }

  if (m_renamedMapArgHasBeenSet) {
    unsigned renamedMapArgCount = 1;
    for (auto& item : m_renamedMapArg) {
      ss << "Foo." << renamedMapArgCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "Foo." << renamedMapArgCount << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      renamedMapArgCount++;
    }
  }

  if (m_complexMapArgHasBeenSet) {
    unsigned complexMapArgCount = 1;
    for (auto& item : m_complexMapArg) {
      ss << "ComplexMapArg.entry." << complexMapArgCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      item.second.OutputToStream(ss, "ComplexMapArg.entry.", complexMapArgCount, ".value");
      complexMapArgCount++;
    }
  }

  if (m_mapWithXmlMemberNameHasBeenSet) {
    unsigned mapWithXmlMemberNameCount = 1;
    for (auto& item : m_mapWithXmlMemberName) {
      ss << "MapWithXmlMemberName.entry." << mapWithXmlMemberNameCount << ".K=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "MapWithXmlMemberName.entry." << mapWithXmlMemberNameCount << ".V=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      mapWithXmlMemberNameCount++;
    }
  }

  if (m_flattenedMapHasBeenSet) {
    unsigned flattenedMapCount = 1;
    for (auto& item : m_flattenedMap) {
      ss << "FlattenedMap.entry." << flattenedMapCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "FlattenedMap.entry." << flattenedMapCount << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      flattenedMapCount++;
    }
  }

  if (m_flattenedMapWithXmlNameHasBeenSet) {
    unsigned flattenedMapWithXmlNameCount = 1;
    for (auto& item : m_flattenedMapWithXmlName) {
      ss << "Hi." << flattenedMapWithXmlNameCount << ".K=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "Hi." << flattenedMapWithXmlNameCount << ".V=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      flattenedMapWithXmlNameCount++;
    }
  }

  if (m_mapOfListsHasBeenSet) {
    unsigned mapOfListsCount = 1;
    for (auto& item : m_mapOfLists) {
      ss << "MapOfLists.entry." << mapOfListsCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "MapOfLists.entry." << mapOfListsCount << ".value" << [&item]() {
        Aws::StringStream oStream;
        Aws::String location;  // dummy for nested codegen template
        unsigned memberIdx = 1;
        for (auto& stringListNestedItem : item.second) {
          oStream << location << ".member." << memberIdx++ << "=" << StringUtils::URLEncode(stringListNestedItem.c_str()) << "&";
        }
        return oStream.str();
      }() << "&";
      mapOfListsCount++;
    }
  }

  if (m_nestedStructWithMapHasBeenSet) {
    m_nestedStructWithMap.OutputToStream(ss, "NestedStructWithMap");
  }

  ss << "Version=2020-01-08";
  return ss.str();
}

void QueryMapsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
