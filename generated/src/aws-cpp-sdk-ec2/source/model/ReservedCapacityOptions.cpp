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
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if (!allocationStrategyNode.IsNull()) {
      m_allocationStrategy = ReservedCapacityAllocationStrategyMapper::GetReservedCapacityAllocationStrategyForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText()).c_str()));
      m_allocationStrategyHasBeenSet = true;
    }
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
    XmlNode reservedCapacityFallbackOptionsNode = resultNode.FirstChild("reservedCapacityFallbackOptions");
    if (!reservedCapacityFallbackOptionsNode.IsNull()) {
      m_reservedCapacityFallbackOptions = reservedCapacityFallbackOptionsNode;
      m_reservedCapacityFallbackOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedCapacityOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_allocationStrategyHasBeenSet) {
    oStream << location << index << locationValue << ".AllocationStrategy="
            << StringUtils::URLEncode(
                   ReservedCapacityAllocationStrategyMapper::GetNameForReservedCapacityAllocationStrategy(m_allocationStrategy))
            << "&";
  }

  if (m_reservationTypesHasBeenSet) {
    unsigned reservationTypesIdx = 1;
    for (auto& item : m_reservationTypes) {
      oStream << location << index << locationValue << ".ReservationTypeSet." << reservationTypesIdx++ << "="
              << StringUtils::URLEncode(FleetReservationTypeMapper::GetNameForFleetReservationType(item)) << "&";
    }
  }

  if (m_reservedCapacityFallbackOptionsHasBeenSet) {
    Aws::StringStream reservedCapacityFallbackOptionsLocationAndMemberSs;
    reservedCapacityFallbackOptionsLocationAndMemberSs << location << index << locationValue << ".ReservedCapacityFallbackOptions";
    m_reservedCapacityFallbackOptions.OutputToStream(oStream, reservedCapacityFallbackOptionsLocationAndMemberSs.str().c_str());
  }
}

void ReservedCapacityOptions::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_allocationStrategyHasBeenSet) {
    oStream << location << ".AllocationStrategy="
            << StringUtils::URLEncode(
                   ReservedCapacityAllocationStrategyMapper::GetNameForReservedCapacityAllocationStrategy(m_allocationStrategy))
            << "&";
  }
  if (m_reservationTypesHasBeenSet) {
    unsigned reservationTypesIdx = 1;
    for (auto& item : m_reservationTypes) {
      oStream << location << ".ReservationTypeSet." << reservationTypesIdx++ << "="
              << StringUtils::URLEncode(FleetReservationTypeMapper::GetNameForFleetReservationType(item)) << "&";
    }
  }
  if (m_reservedCapacityFallbackOptionsHasBeenSet) {
    Aws::String reservedCapacityFallbackOptionsLocationAndMember(location);
    reservedCapacityFallbackOptionsLocationAndMember += ".ReservedCapacityFallbackOptions";
    m_reservedCapacityFallbackOptions.OutputToStream(oStream, reservedCapacityFallbackOptionsLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
