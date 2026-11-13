/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationCidrRangeSpecifications.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationCidrRangeSpecifications::FlexCostAllocationCidrRangeSpecifications(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationCidrRangeSpecifications& FlexCostAllocationCidrRangeSpecifications::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode prefixesTypeNode = resultNode.FirstChild("PrefixesType");
    if (!prefixesTypeNode.IsNull()) {
      m_prefixesType = Aws::Utils::Xml::DecodeEscapedXmlText(prefixesTypeNode.GetText());
      m_prefixesTypeHasBeenSet = true;
    }
    XmlNode prefixesNode = resultNode.FirstChild("Prefixes");
    if (!prefixesNode.IsNull()) {
      XmlNode prefixesMember = prefixesNode.FirstChild("item");
      m_prefixesHasBeenSet = !prefixesMember.IsNull();
      while (!prefixesMember.IsNull()) {
        m_prefixes.push_back(prefixesMember);
        prefixesMember = prefixesMember.NextNode("item");
      }

      m_prefixesHasBeenSet = true;
    }
  }

  return *this;
}

void FlexCostAllocationCidrRangeSpecifications::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                               const char* locationValue) const {
  if (m_prefixesTypeHasBeenSet) {
    oStream << location << index << locationValue << ".PrefixesType=" << StringUtils::URLEncode(m_prefixesType.c_str()) << "&";
  }

  if (m_prefixesHasBeenSet) {
    unsigned prefixesIdx = 1;
    for (auto& item : m_prefixes) {
      Aws::StringStream prefixesSs;
      prefixesSs << location << index << locationValue << ".Prefixes." << prefixesIdx++;
      item.OutputToStream(oStream, prefixesSs.str().c_str());
    }
  }
}

void FlexCostAllocationCidrRangeSpecifications::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_prefixesTypeHasBeenSet) {
    oStream << location << ".PrefixesType=" << StringUtils::URLEncode(m_prefixesType.c_str()) << "&";
  }
  if (m_prefixesHasBeenSet) {
    unsigned prefixesIdx = 1;
    for (auto& item : m_prefixes) {
      Aws::StringStream prefixesSs;
      prefixesSs << location << ".Prefixes." << prefixesIdx++;
      item.OutputToStream(oStream, prefixesSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
