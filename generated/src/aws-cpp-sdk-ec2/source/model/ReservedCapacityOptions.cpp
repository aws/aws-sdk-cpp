/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ReservedCapacityOptions.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ReservedCapacityOptions::ReservedCapacityOptions(const XmlNode& xmlNode) { *this = xmlNode; }

ReservedCapacityOptions& ReservedCapacityOptions::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode reservationTypesNode = resultNode.FirstChild("reservationTypeSet");
    if (!reservationTypesNode.IsNull()) {
      XmlNode reservationTypesMember = reservationTypesNode.FirstChild("item");
      m_reservationTypesHasBeenSet = !reservationTypesMember.IsNull();
      while (!reservationTypesMember.IsNull()) {
        m_reservationTypes.push_back(
            FleetReservationTypeMapper::GetFleetReservationTypeForName(StringUtils::Trim(reservationTypesMember.GetText().c_str())));
        reservationTypesMember = reservationTypesMember.NextNode("item");
      }

      m_reservationTypesHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedCapacityOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_reservationTypesHasBeenSet) {
    unsigned reservationTypesIdx = 1;
    for (auto& item : m_reservationTypes) {
      oStream << location << index << locationValue << ".ReservationTypeSet." << reservationTypesIdx++ << "="
              << StringUtils::URLEncode(FleetReservationTypeMapper::GetNameForFleetReservationType(item)) << "&";
    }
  }
}

void ReservedCapacityOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_reservationTypesHasBeenSet) {
    unsigned reservationTypesIdx = 1;
    for (auto& item : m_reservationTypes) {
      oStream << location << ".ReservationTypeSet." << reservationTypesIdx++ << "="
              << StringUtils::URLEncode(FleetReservationTypeMapper::GetNameForFleetReservationType(item)) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
