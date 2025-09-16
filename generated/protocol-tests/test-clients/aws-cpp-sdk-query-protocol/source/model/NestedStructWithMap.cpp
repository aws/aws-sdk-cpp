/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/NestedStructWithMap.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {

NestedStructWithMap::NestedStructWithMap(const XmlNode& xmlNode) { *this = xmlNode; }

NestedStructWithMap& NestedStructWithMap::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode mapArgNode = resultNode.FirstChild("MapArg");

    if (!mapArgNode.IsNull()) {
      XmlNode mapArgEntry = mapArgNode.FirstChild("entry");
      m_mapArgHasBeenSet = !mapArgEntry.IsNull();
      while (!mapArgEntry.IsNull()) {
        XmlNode keyNode = mapArgEntry.FirstChild("key");
        XmlNode valueNode = mapArgEntry.FirstChild("value");
        m_mapArg[keyNode.GetText()] = valueNode.GetText();
        mapArgEntry = mapArgEntry.NextNode("entry");
      }

      m_mapArgHasBeenSet = true;
    }
  }

  return *this;
}

void NestedStructWithMap::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_mapArgHasBeenSet) {
    unsigned mapArgIdx = 1;
    for (auto& item : m_mapArg) {
      oStream << location << index << locationValue << ".MapArg.entry." << mapArgIdx
              << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      oStream << location << index << locationValue << ".MapArg.entry." << mapArgIdx
              << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      mapArgIdx++;
    }
  }
}

void NestedStructWithMap::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_mapArgHasBeenSet) {
    unsigned mapArgIdx = 1;
    for (auto& item : m_mapArg) {
      oStream << location << ".MapArg.entry." << mapArgIdx << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      oStream << location << ".MapArg.entry." << mapArgIdx << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      mapArgIdx++;
    }
  }
}

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
