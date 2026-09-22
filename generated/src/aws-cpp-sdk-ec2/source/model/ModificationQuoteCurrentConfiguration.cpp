/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModificationQuoteCurrentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ModificationQuoteCurrentConfiguration::ModificationQuoteCurrentConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

ModificationQuoteCurrentConfiguration& ModificationQuoteCurrentConfiguration::operator=(const XmlNode& xmlNode) {
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
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if (!startDateNode.IsNull()) {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode originalStartDateNode = resultNode.FirstChild("originalStartDate");
    if (!originalStartDateNode.IsNull()) {
      m_originalStartDate =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalStartDateNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_originalStartDateHasBeenSet = true;
    }
  }

  return *this;
}

void ModificationQuoteCurrentConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                           const char* locationValue) const {
  if (m_instanceCountHasBeenSet) {
    oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if (m_reservationStateHasBeenSet) {
    oStream << location << index << locationValue << ".ReservationState=" << StringUtils::URLEncode(m_reservationState.c_str()) << "&";
  }

  if (m_startDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_originalStartDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".OriginalStartDate=" << StringUtils::URLEncode(m_originalStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

void ModificationQuoteCurrentConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_instanceCountHasBeenSet) {
    oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if (m_reservationStateHasBeenSet) {
    oStream << location << ".ReservationState=" << StringUtils::URLEncode(m_reservationState.c_str()) << "&";
  }
  if (m_startDateHasBeenSet) {
    oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_originalStartDateHasBeenSet) {
    oStream << location
            << ".OriginalStartDate=" << StringUtils::URLEncode(m_originalStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
