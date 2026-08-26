/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ReservedCapacityOptionsRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ReservedCapacityOptionsRequest::ReservedCapacityOptionsRequest(const XmlNode& xmlNode) { *this = xmlNode; }

ReservedCapacityOptionsRequest& ReservedCapacityOptionsRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode allocationStrategyNode = resultNode.FirstChild("AllocationStrategy");
    if (!allocationStrategyNode.IsNull()) {
      m_allocationStrategy = ReservedCapacityAllocationStrategyMapper::GetReservedCapacityAllocationStrategyForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText()).c_str()));
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode reservationTypesNode = resultNode.FirstChild("ReservationType");
    if (!reservationTypesNode.IsNull()) {
      XmlNode reservationTypesMember = reservationTypesNode.FirstChild("ReservationType");
      m_reservationTypesHasBeenSet = !reservationTypesMember.IsNull();
      while (!reservationTypesMember.IsNull()) {
        m_reservationTypes.push_back(
            FleetReservationTypeMapper::GetFleetReservationTypeForName(StringUtils::Trim(reservationTypesMember.GetText().c_str())));
        reservationTypesMember = reservationTypesMember.NextNode("ReservationType");
      }

      m_reservationTypesHasBeenSet = true;
    }
    XmlNode capacityReservationTargetNode = resultNode.FirstChild("CapacityReservationTarget");
    if (!capacityReservationTargetNode.IsNull()) {
      m_capacityReservationTarget = capacityReservationTargetNode;
      m_capacityReservationTargetHasBeenSet = true;
    }
    XmlNode reservedCapacityFallbackOptionsNode = resultNode.FirstChild("ReservedCapacityFallbackOptions");
    if (!reservedCapacityFallbackOptionsNode.IsNull()) {
      m_reservedCapacityFallbackOptions = reservedCapacityFallbackOptionsNode;
      m_reservedCapacityFallbackOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedCapacityOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                    const char* locationValue) const {
  if (m_allocationStrategyHasBeenSet) {
    oStream << location << index << locationValue << ".AllocationStrategy="
            << StringUtils::URLEncode(
                   ReservedCapacityAllocationStrategyMapper::GetNameForReservedCapacityAllocationStrategy(m_allocationStrategy))
            << "&";
  }

  if (m_reservationTypesHasBeenSet) {
    unsigned reservationTypesIdx = 1;
    for (auto& item : m_reservationTypes) {
      oStream << location << index << locationValue << ".ReservationType." << reservationTypesIdx++ << "="
              << StringUtils::URLEncode(FleetReservationTypeMapper::GetNameForFleetReservationType(item)) << "&";
    }
  }

  if (m_capacityReservationTargetHasBeenSet) {
    Aws::StringStream capacityReservationTargetLocationAndMemberSs;
    capacityReservationTargetLocationAndMemberSs << location << index << locationValue << ".CapacityReservationTarget";
    m_capacityReservationTarget.OutputToStream(oStream, capacityReservationTargetLocationAndMemberSs.str().c_str());
  }

  if (m_reservedCapacityFallbackOptionsHasBeenSet) {
    Aws::StringStream reservedCapacityFallbackOptionsLocationAndMemberSs;
    reservedCapacityFallbackOptionsLocationAndMemberSs << location << index << locationValue << ".ReservedCapacityFallbackOptions";
    m_reservedCapacityFallbackOptions.OutputToStream(oStream, reservedCapacityFallbackOptionsLocationAndMemberSs.str().c_str());
  }
}

void ReservedCapacityOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_allocationStrategyHasBeenSet) {
    oStream << location << ".AllocationStrategy="
            << StringUtils::URLEncode(
                   ReservedCapacityAllocationStrategyMapper::GetNameForReservedCapacityAllocationStrategy(m_allocationStrategy))
            << "&";
  }
  if (m_reservationTypesHasBeenSet) {
    unsigned reservationTypesIdx = 1;
    for (auto& item : m_reservationTypes) {
      oStream << location << ".ReservationType." << reservationTypesIdx++ << "="
              << StringUtils::URLEncode(FleetReservationTypeMapper::GetNameForFleetReservationType(item)) << "&";
    }
  }
  if (m_capacityReservationTargetHasBeenSet) {
    Aws::String capacityReservationTargetLocationAndMember(location);
    capacityReservationTargetLocationAndMember += ".CapacityReservationTarget";
    m_capacityReservationTarget.OutputToStream(oStream, capacityReservationTargetLocationAndMember.c_str());
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
