/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityManagerCondition.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityManagerCondition::CapacityManagerCondition(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityManagerCondition& CapacityManagerCondition::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode dimensionConditionNode = resultNode.FirstChild("DimensionCondition");
    if (!dimensionConditionNode.IsNull()) {
      m_dimensionCondition = dimensionConditionNode;
      m_dimensionConditionHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityManagerCondition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_dimensionConditionHasBeenSet) {
    Aws::StringStream dimensionConditionLocationAndMemberSs;
    dimensionConditionLocationAndMemberSs << location << index << locationValue << ".DimensionCondition";
    m_dimensionCondition.OutputToStream(oStream, dimensionConditionLocationAndMemberSs.str().c_str());
  }
}

void CapacityManagerCondition::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_dimensionConditionHasBeenSet) {
    Aws::String dimensionConditionLocationAndMember(location);
    dimensionConditionLocationAndMember += ".DimensionCondition";
    m_dimensionCondition.OutputToStream(oStream, dimensionConditionLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
