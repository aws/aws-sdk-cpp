/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityManagerSupportabilityScore.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityManagerSupportabilityScore::CapacityManagerSupportabilityScore(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityManagerSupportabilityScore& CapacityManagerSupportabilityScore::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if (!instanceTypeNode.IsNull()) {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode scoreNode = resultNode.FirstChild("score");
    if (!scoreNode.IsNull()) {
      m_score = SupportabilityScoreMapper::GetSupportabilityScoreForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scoreNode.GetText()).c_str()));
      m_scoreHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityManagerSupportabilityScore::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                        const char* locationValue) const {
  if (m_instanceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_scoreHasBeenSet) {
    oStream << location << index << locationValue
            << ".Score=" << StringUtils::URLEncode(SupportabilityScoreMapper::GetNameForSupportabilityScore(m_score)) << "&";
  }
}

void CapacityManagerSupportabilityScore::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceTypeHasBeenSet) {
    oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_scoreHasBeenSet) {
    oStream << location << ".Score=" << StringUtils::URLEncode(SupportabilityScoreMapper::GetNameForSupportabilityScore(m_score)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
