/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationCidrMapping.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationCidrMapping::FlexCostAllocationCidrMapping(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationCidrMapping& FlexCostAllocationCidrMapping::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cidrRangeNode = resultNode.FirstChild("CidrRange");
    if (!cidrRangeNode.IsNull()) {
      m_cidrRange = Aws::Utils::Xml::DecodeEscapedXmlText(cidrRangeNode.GetText());
      m_cidrRangeHasBeenSet = true;
    }
    XmlNode cidrLabelNode = resultNode.FirstChild("CidrLabel");
    if (!cidrLabelNode.IsNull()) {
      m_cidrLabel = Aws::Utils::Xml::DecodeEscapedXmlText(cidrLabelNode.GetText());
      m_cidrLabelHasBeenSet = true;
    }
  }

  return *this;
}

void FlexCostAllocationCidrMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_cidrRangeHasBeenSet) {
    oStream << location << index << locationValue << ".CidrRange=" << StringUtils::URLEncode(m_cidrRange.c_str()) << "&";
  }

  if (m_cidrLabelHasBeenSet) {
    oStream << location << index << locationValue << ".CidrLabel=" << StringUtils::URLEncode(m_cidrLabel.c_str()) << "&";
  }
}

void FlexCostAllocationCidrMapping::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_cidrRangeHasBeenSet) {
    oStream << location << ".CidrRange=" << StringUtils::URLEncode(m_cidrRange.c_str()) << "&";
  }
  if (m_cidrLabelHasBeenSet) {
    oStream << location << ".CidrLabel=" << StringUtils::URLEncode(m_cidrLabel.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
