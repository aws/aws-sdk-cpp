/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DistributionSegment.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace AutoScaling {
namespace Model {

DistributionSegment::DistributionSegment(const XmlNode& xmlNode) { *this = xmlNode; }

DistributionSegment& DistributionSegment::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode targetCapacityTypesNode = resultNode.FirstChild("TargetCapacityTypes");
    if (!targetCapacityTypesNode.IsNull()) {
      XmlNode targetCapacityTypesMember = targetCapacityTypesNode.FirstChild("member");
      m_targetCapacityTypesHasBeenSet = !targetCapacityTypesMember.IsNull();
      while (!targetCapacityTypesMember.IsNull()) {
        m_targetCapacityTypes.push_back(
            TargetCapacityTypeMapper::GetTargetCapacityTypeForName(StringUtils::Trim(targetCapacityTypesMember.GetText().c_str())));
        targetCapacityTypesMember = targetCapacityTypesMember.NextNode("member");
      }

      m_targetCapacityTypesHasBeenSet = true;
    }
  }

  return *this;
}

void DistributionSegment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_targetCapacityTypesHasBeenSet) {
    unsigned targetCapacityTypesIdx = 1;
    for (auto& item : m_targetCapacityTypes) {
      oStream << location << index << locationValue << ".TargetCapacityTypes.member." << targetCapacityTypesIdx++ << "="
              << StringUtils::URLEncode(TargetCapacityTypeMapper::GetNameForTargetCapacityType(item)) << "&";
    }
  }
}

void DistributionSegment::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_targetCapacityTypesHasBeenSet) {
    unsigned targetCapacityTypesIdx = 1;
    for (auto& item : m_targetCapacityTypes) {
      oStream << location << ".TargetCapacityTypes.member." << targetCapacityTypesIdx++ << "="
              << StringUtils::URLEncode(TargetCapacityTypeMapper::GetNameForTargetCapacityType(item)) << "&";
    }
  }
}

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
