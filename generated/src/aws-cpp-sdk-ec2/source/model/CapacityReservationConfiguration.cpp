/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityReservationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityReservationConfiguration::CapacityReservationConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityReservationConfiguration& CapacityReservationConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if (!instanceCountNode.IsNull()) {
      m_instanceCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode reservationStateNode = resultNode.FirstChild("reservationState");
    if (!reservationStateNode.IsNull()) {
      m_reservationState = Aws::Utils::Xml::DecodeEscapedXmlText(reservationStateNode.GetText());
      m_reservationStateHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                      const char* locationValue) const {
  if (m_instanceCountHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if (m_reservationStateHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationState=" << StringUtils::URLEncode(m_reservationState.c_str()) << "&";
  }
}

void CapacityReservationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceCountHasBeenSet) {
    oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if (m_reservationStateHasBeenSet) {
    oStream << location << ".ReservationState=" << StringUtils::URLEncode(m_reservationState.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
