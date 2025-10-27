/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityManagerDimension.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityManagerDimension::CapacityManagerDimension(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityManagerDimension& CapacityManagerDimension::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode resourceRegionNode = resultNode.FirstChild("resourceRegion");
    if (!resourceRegionNode.IsNull()) {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode accountIdNode = resultNode.FirstChild("accountId");
    if (!accountIdNode.IsNull()) {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
    XmlNode instanceFamilyNode = resultNode.FirstChild("instanceFamily");
    if (!instanceFamilyNode.IsNull()) {
      m_instanceFamily = Aws::Utils::Xml::DecodeEscapedXmlText(instanceFamilyNode.GetText());
      m_instanceFamilyHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if (!instanceTypeNode.IsNull()) {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode instancePlatformNode = resultNode.FirstChild("instancePlatform");
    if (!instancePlatformNode.IsNull()) {
      m_instancePlatform = Aws::Utils::Xml::DecodeEscapedXmlText(instancePlatformNode.GetText());
      m_instancePlatformHasBeenSet = true;
    }
    XmlNode reservationArnNode = resultNode.FirstChild("reservationArn");
    if (!reservationArnNode.IsNull()) {
      m_reservationArn = Aws::Utils::Xml::DecodeEscapedXmlText(reservationArnNode.GetText());
      m_reservationArnHasBeenSet = true;
    }
    XmlNode reservationIdNode = resultNode.FirstChild("reservationId");
    if (!reservationIdNode.IsNull()) {
      m_reservationId = Aws::Utils::Xml::DecodeEscapedXmlText(reservationIdNode.GetText());
      m_reservationIdHasBeenSet = true;
    }
    XmlNode reservationTypeNode = resultNode.FirstChild("reservationType");
    if (!reservationTypeNode.IsNull()) {
      m_reservationType = ReservationTypeMapper::GetReservationTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationTypeNode.GetText()).c_str()));
      m_reservationTypeHasBeenSet = true;
    }
    XmlNode reservationCreateTimestampNode = resultNode.FirstChild("reservationCreateTimestamp");
    if (!reservationCreateTimestampNode.IsNull()) {
      m_reservationCreateTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationCreateTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_reservationCreateTimestampHasBeenSet = true;
    }
    XmlNode reservationStartTimestampNode = resultNode.FirstChild("reservationStartTimestamp");
    if (!reservationStartTimestampNode.IsNull()) {
      m_reservationStartTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationStartTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_reservationStartTimestampHasBeenSet = true;
    }
    XmlNode reservationEndTimestampNode = resultNode.FirstChild("reservationEndTimestamp");
    if (!reservationEndTimestampNode.IsNull()) {
      m_reservationEndTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationEndTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_reservationEndTimestampHasBeenSet = true;
    }
    XmlNode reservationEndDateTypeNode = resultNode.FirstChild("reservationEndDateType");
    if (!reservationEndDateTypeNode.IsNull()) {
      m_reservationEndDateType = ReservationEndDateTypeMapper::GetReservationEndDateTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationEndDateTypeNode.GetText()).c_str()));
      m_reservationEndDateTypeHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if (!tenancyNode.IsNull()) {
      m_tenancy = CapacityTenancyMapper::GetCapacityTenancyForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()));
      m_tenancyHasBeenSet = true;
    }
    XmlNode reservationStateNode = resultNode.FirstChild("reservationState");
    if (!reservationStateNode.IsNull()) {
      m_reservationState = ReservationStateMapper::GetReservationStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationStateNode.GetText()).c_str()));
      m_reservationStateHasBeenSet = true;
    }
    XmlNode reservationInstanceMatchCriteriaNode = resultNode.FirstChild("reservationInstanceMatchCriteria");
    if (!reservationInstanceMatchCriteriaNode.IsNull()) {
      m_reservationInstanceMatchCriteria = Aws::Utils::Xml::DecodeEscapedXmlText(reservationInstanceMatchCriteriaNode.GetText());
      m_reservationInstanceMatchCriteriaHasBeenSet = true;
    }
    XmlNode reservationUnusedFinancialOwnerNode = resultNode.FirstChild("reservationUnusedFinancialOwner");
    if (!reservationUnusedFinancialOwnerNode.IsNull()) {
      m_reservationUnusedFinancialOwner = Aws::Utils::Xml::DecodeEscapedXmlText(reservationUnusedFinancialOwnerNode.GetText());
      m_reservationUnusedFinancialOwnerHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityManagerDimension::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_resourceRegionHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_accountIdHasBeenSet) {
    oStream << location << index << locationValue << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if (m_instanceFamilyHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

  if (m_instanceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if (m_instancePlatformHasBeenSet) {
    oStream << location << index << locationValue << ".InstancePlatform=" << StringUtils::URLEncode(m_instancePlatform.c_str()) << "&";
  }

  if (m_reservationArnHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationArn=" << StringUtils::URLEncode(m_reservationArn.c_str()) << "&";
  }

  if (m_reservationIdHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationId=" << StringUtils::URLEncode(m_reservationId.c_str()) << "&";
  }

  if (m_reservationTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ReservationType=" << StringUtils::URLEncode(ReservationTypeMapper::GetNameForReservationType(m_reservationType)) << "&";
  }

  if (m_reservationCreateTimestampHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationCreateTimestamp="
            << StringUtils::URLEncode(m_reservationCreateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_reservationStartTimestampHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationStartTimestamp="
            << StringUtils::URLEncode(m_reservationStartTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_reservationEndTimestampHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationEndTimestamp="
            << StringUtils::URLEncode(m_reservationEndTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_reservationEndDateTypeHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationEndDateType="
            << StringUtils::URLEncode(ReservationEndDateTypeMapper::GetNameForReservationEndDateType(m_reservationEndDateType)) << "&";
  }

  if (m_tenancyHasBeenSet) {
    oStream << location << index << locationValue
            << ".Tenancy=" << StringUtils::URLEncode(CapacityTenancyMapper::GetNameForCapacityTenancy(m_tenancy)) << "&";
  }

  if (m_reservationStateHasBeenSet) {
    oStream << location << index << locationValue
            << ".ReservationState=" << StringUtils::URLEncode(ReservationStateMapper::GetNameForReservationState(m_reservationState))
            << "&";
  }

  if (m_reservationInstanceMatchCriteriaHasBeenSet) {
    oStream << location << index << locationValue
            << ".ReservationInstanceMatchCriteria=" << StringUtils::URLEncode(m_reservationInstanceMatchCriteria.c_str()) << "&";
  }

  if (m_reservationUnusedFinancialOwnerHasBeenSet) {
    oStream << location << index << locationValue
            << ".ReservationUnusedFinancialOwner=" << StringUtils::URLEncode(m_reservationUnusedFinancialOwner.c_str()) << "&";
  }
}

void CapacityManagerDimension::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_resourceRegionHasBeenSet) {
    oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_accountIdHasBeenSet) {
    oStream << location << ".AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }
  if (m_instanceFamilyHasBeenSet) {
    oStream << location << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }
  if (m_instanceTypeHasBeenSet) {
    oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if (m_instancePlatformHasBeenSet) {
    oStream << location << ".InstancePlatform=" << StringUtils::URLEncode(m_instancePlatform.c_str()) << "&";
  }
  if (m_reservationArnHasBeenSet) {
    oStream << location << ".ReservationArn=" << StringUtils::URLEncode(m_reservationArn.c_str()) << "&";
  }
  if (m_reservationIdHasBeenSet) {
    oStream << location << ".ReservationId=" << StringUtils::URLEncode(m_reservationId.c_str()) << "&";
  }
  if (m_reservationTypeHasBeenSet) {
    oStream << location
            << ".ReservationType=" << StringUtils::URLEncode(ReservationTypeMapper::GetNameForReservationType(m_reservationType)) << "&";
  }
  if (m_reservationCreateTimestampHasBeenSet) {
    oStream << location << ".ReservationCreateTimestamp="
            << StringUtils::URLEncode(m_reservationCreateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_reservationStartTimestampHasBeenSet) {
    oStream << location << ".ReservationStartTimestamp="
            << StringUtils::URLEncode(m_reservationStartTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_reservationEndTimestampHasBeenSet) {
    oStream << location << ".ReservationEndTimestamp="
            << StringUtils::URLEncode(m_reservationEndTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_reservationEndDateTypeHasBeenSet) {
    oStream << location << ".ReservationEndDateType="
            << StringUtils::URLEncode(ReservationEndDateTypeMapper::GetNameForReservationEndDateType(m_reservationEndDateType)) << "&";
  }
  if (m_tenancyHasBeenSet) {
    oStream << location << ".Tenancy=" << StringUtils::URLEncode(CapacityTenancyMapper::GetNameForCapacityTenancy(m_tenancy)) << "&";
  }
  if (m_reservationStateHasBeenSet) {
    oStream << location
            << ".ReservationState=" << StringUtils::URLEncode(ReservationStateMapper::GetNameForReservationState(m_reservationState))
            << "&";
  }
  if (m_reservationInstanceMatchCriteriaHasBeenSet) {
    oStream << location << ".ReservationInstanceMatchCriteria=" << StringUtils::URLEncode(m_reservationInstanceMatchCriteria.c_str())
            << "&";
  }
  if (m_reservationUnusedFinancialOwnerHasBeenSet) {
    oStream << location << ".ReservationUnusedFinancialOwner=" << StringUtils::URLEncode(m_reservationUnusedFinancialOwner.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
