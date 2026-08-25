/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ReservedCapacityFallbackOptionsRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ReservedCapacityFallbackOptionsRequest::ReservedCapacityFallbackOptionsRequest(const XmlNode& xmlNode) { *this = xmlNode; }

ReservedCapacityFallbackOptionsRequest& ReservedCapacityFallbackOptionsRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode marketTypesNode = resultNode.FirstChild("MarketType");
    if (!marketTypesNode.IsNull()) {
      XmlNode marketTypesMember = marketTypesNode.FirstChild("item");
      m_marketTypesHasBeenSet = !marketTypesMember.IsNull();
      while (!marketTypesMember.IsNull()) {
        m_marketTypes.push_back(ReservedCapacityFallbackMarketTypeMapper::GetReservedCapacityFallbackMarketTypeForName(
            StringUtils::Trim(marketTypesMember.GetText().c_str())));
        marketTypesMember = marketTypesMember.NextNode("item");
      }

      m_marketTypesHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedCapacityFallbackOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                            const char* locationValue) const {
  if (m_marketTypesHasBeenSet) {
    unsigned marketTypesIdx = 1;
    for (auto& item : m_marketTypes) {
      oStream << location << index << locationValue << ".MarketType." << marketTypesIdx++ << "="
              << StringUtils::URLEncode(ReservedCapacityFallbackMarketTypeMapper::GetNameForReservedCapacityFallbackMarketType(item))
              << "&";
    }
  }
}

void ReservedCapacityFallbackOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_marketTypesHasBeenSet) {
    unsigned marketTypesIdx = 1;
    for (auto& item : m_marketTypes) {
      oStream << location << ".MarketType." << marketTypesIdx++ << "="
              << StringUtils::URLEncode(ReservedCapacityFallbackMarketTypeMapper::GetNameForReservedCapacityFallbackMarketType(item))
              << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
