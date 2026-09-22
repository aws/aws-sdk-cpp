/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityReservationAdjustmentDetails.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityReservationAdjustmentDetails::CapacityReservationAdjustmentDetails(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityReservationAdjustmentDetails& CapacityReservationAdjustmentDetails::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if (!startDateNode.IsNull()) {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if (!endDateNode.IsNull()) {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(),
                           Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode commitmentEndDateNode = resultNode.FirstChild("commitmentEndDate");
    if (!commitmentEndDateNode.IsNull()) {
      m_commitmentEndDate =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(commitmentEndDateNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_commitmentEndDateHasBeenSet = true;
    }
    XmlNode endDateTypeNode = resultNode.FirstChild("endDateType");
    if (!endDateTypeNode.IsNull()) {
      m_endDateType = Aws::Utils::Xml::DecodeEscapedXmlText(endDateTypeNode.GetText());
      m_endDateTypeHasBeenSet = true;
    }
    XmlNode commitmentDurationNode = resultNode.FirstChild("commitmentDuration");
    if (!commitmentDurationNode.IsNull()) {
      m_commitmentDuration = StringUtils::ConvertToInt64(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(commitmentDurationNode.GetText()).c_str()).c_str());
      m_commitmentDurationHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationAdjustmentDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                          const char* locationValue) const {
  if (m_startDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_endDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_commitmentEndDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".CommitmentEndDate=" << StringUtils::URLEncode(m_commitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_endDateTypeHasBeenSet) {
    oStream << location << index << locationValue << ".EndDateType=" << StringUtils::URLEncode(m_endDateType.c_str()) << "&";
  }

  if (m_commitmentDurationHasBeenSet) {
    oStream << location << index << locationValue << ".CommitmentDuration=" << m_commitmentDuration << "&";
  }
}

void CapacityReservationAdjustmentDetails::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_startDateHasBeenSet) {
    oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_endDateHasBeenSet) {
    oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_commitmentEndDateHasBeenSet) {
    oStream << location
            << ".CommitmentEndDate=" << StringUtils::URLEncode(m_commitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_endDateTypeHasBeenSet) {
    oStream << location << ".EndDateType=" << StringUtils::URLEncode(m_endDateType.c_str()) << "&";
  }
  if (m_commitmentDurationHasBeenSet) {
    oStream << location << ".CommitmentDuration=" << m_commitmentDuration << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
