/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CancellationTerms.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CancellationTerms::CancellationTerms(const XmlNode& xmlNode) { *this = xmlNode; }

CancellationTerms& CancellationTerms::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cancellationTypeNode = resultNode.FirstChild("cancellationType");
    if (!cancellationTypeNode.IsNull()) {
      m_cancellationType = ApplyCancellationChargesMapper::GetApplyCancellationChargesForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cancellationTypeNode.GetText()).c_str()));
      m_cancellationTypeHasBeenSet = true;
    }
    XmlNode reservationStateNode = resultNode.FirstChild("reservationState");
    if (!reservationStateNode.IsNull()) {
      m_reservationState = Aws::Utils::Xml::DecodeEscapedXmlText(reservationStateNode.GetText());
      m_reservationStateHasBeenSet = true;
    }
    XmlNode committedInstanceCountNode = resultNode.FirstChild("committedInstanceCount");
    if (!committedInstanceCountNode.IsNull()) {
      m_committedInstanceCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(committedInstanceCountNode.GetText()).c_str()).c_str());
      m_committedInstanceCountHasBeenSet = true;
    }
    XmlNode chargeCommitmentDurationHoursNode = resultNode.FirstChild("chargeCommitmentDurationHours");
    if (!chargeCommitmentDurationHoursNode.IsNull()) {
      m_chargeCommitmentDurationHours = StringUtils::ConvertToInt64(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(chargeCommitmentDurationHoursNode.GetText()).c_str()).c_str());
      m_chargeCommitmentDurationHoursHasBeenSet = true;
    }
    XmlNode chargeEndDateNode = resultNode.FirstChild("chargeEndDate");
    if (!chargeEndDateNode.IsNull()) {
      m_chargeEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(chargeEndDateNode.GetText()).c_str()).c_str(),
                                 Aws::Utils::DateFormat::ISO_8601);
      m_chargeEndDateHasBeenSet = true;
    }
  }

  return *this;
}

void CancellationTerms::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_cancellationTypeHasBeenSet) {
    oStream << location << index << locationValue << ".CancellationType="
            << StringUtils::URLEncode(ApplyCancellationChargesMapper::GetNameForApplyCancellationCharges(m_cancellationType)) << "&";
  }

  if (m_reservationStateHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationState=" << StringUtils::URLEncode(m_reservationState.c_str()) << "&";
  }

  if (m_committedInstanceCountHasBeenSet) {
    oStream << location << index << locationValue << ".CommittedInstanceCount=" << m_committedInstanceCount << "&";
  }

  if (m_chargeCommitmentDurationHoursHasBeenSet) {
    oStream << location << index << locationValue << ".ChargeCommitmentDurationHours=" << m_chargeCommitmentDurationHours << "&";
  }

  if (m_chargeEndDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".ChargeEndDate=" << StringUtils::URLEncode(m_chargeEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void CancellationTerms::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_cancellationTypeHasBeenSet) {
    oStream << location << ".CancellationType="
            << StringUtils::URLEncode(ApplyCancellationChargesMapper::GetNameForApplyCancellationCharges(m_cancellationType)) << "&";
  }
  if (m_reservationStateHasBeenSet) {
    oStream << location << ".ReservationState=" << StringUtils::URLEncode(m_reservationState.c_str()) << "&";
  }
  if (m_committedInstanceCountHasBeenSet) {
    oStream << location << ".CommittedInstanceCount=" << m_committedInstanceCount << "&";
  }
  if (m_chargeCommitmentDurationHoursHasBeenSet) {
    oStream << location << ".ChargeCommitmentDurationHours=" << m_chargeCommitmentDurationHours << "&";
  }
  if (m_chargeEndDateHasBeenSet) {
    oStream << location
            << ".ChargeEndDate=" << StringUtils::URLEncode(m_chargeEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
