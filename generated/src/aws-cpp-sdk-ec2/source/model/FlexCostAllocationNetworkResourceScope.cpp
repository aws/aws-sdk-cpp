/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceScope.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationNetworkResourceScope::FlexCostAllocationNetworkResourceScope(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationNetworkResourceScope& FlexCostAllocationNetworkResourceScope::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if (!resourceTypeNode.IsNull()) {
      m_resourceType = FlexCostAllocationNetworkResourceScopeTypeMapper::GetFlexCostAllocationNetworkResourceScopeTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()));
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceIdsNode = resultNode.FirstChild("ResourceIds");
    if (!resourceIdsNode.IsNull()) {
      XmlNode resourceIdsMember = resourceIdsNode.FirstChild("item");
      m_resourceIdsHasBeenSet = !resourceIdsMember.IsNull();
      while (!resourceIdsMember.IsNull()) {
        m_resourceIds.push_back(resourceIdsMember.GetText());
        resourceIdsMember = resourceIdsMember.NextNode("item");
      }

      m_resourceIdsHasBeenSet = true;
    }
  }

  return *this;
}

void FlexCostAllocationNetworkResourceScope::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                            const char* locationValue) const {
  if (m_resourceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceType="
            << StringUtils::URLEncode(
                   FlexCostAllocationNetworkResourceScopeTypeMapper::GetNameForFlexCostAllocationNetworkResourceScopeType(m_resourceType))
            << "&";
  }

  if (m_resourceIdsHasBeenSet) {
    unsigned resourceIdsIdx = 1;
    for (auto& item : m_resourceIds) {
      oStream << location << index << locationValue << ".ResourceIds." << resourceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
}

void FlexCostAllocationNetworkResourceScope::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_resourceTypeHasBeenSet) {
    oStream << location << ".ResourceType="
            << StringUtils::URLEncode(
                   FlexCostAllocationNetworkResourceScopeTypeMapper::GetNameForFlexCostAllocationNetworkResourceScopeType(m_resourceType))
            << "&";
  }
  if (m_resourceIdsHasBeenSet) {
    unsigned resourceIdsIdx = 1;
    for (auto& item : m_resourceIds) {
      oStream << location << ".ResourceIds." << resourceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
