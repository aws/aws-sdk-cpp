/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModificationReservationUpdate.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ModificationReservationUpdate::ModificationReservationUpdate(const XmlNode& xmlNode) { *this = xmlNode; }

ModificationReservationUpdate& ModificationReservationUpdate::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode newCommitmentEndDateNode = resultNode.FirstChild("newCommitmentEndDate");
    if (!newCommitmentEndDateNode.IsNull()) {
      m_newCommitmentEndDate =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(newCommitmentEndDateNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_newCommitmentEndDateHasBeenSet = true;
    }
    XmlNode newStartDateNode = resultNode.FirstChild("newStartDate");
    if (!newStartDateNode.IsNull()) {
      m_newStartDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(newStartDateNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_newStartDateHasBeenSet = true;
    }
    XmlNode newCommitmentDurationNode = resultNode.FirstChild("newCommitmentDuration");
    if (!newCommitmentDurationNode.IsNull()) {
      m_newCommitmentDuration = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(newCommitmentDurationNode.GetText()).c_str()).c_str());
      m_newCommitmentDurationHasBeenSet = true;
    }
  }

  return *this;
}

void ModificationReservationUpdate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_newCommitmentEndDateHasBeenSet) {
    oStream << location << index << locationValue << ".NewCommitmentEndDate="
            << StringUtils::URLEncode(m_newCommitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_newStartDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".NewStartDate=" << StringUtils::URLEncode(m_newStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_newCommitmentDurationHasBeenSet) {
    oStream << location << index << locationValue << ".NewCommitmentDuration=" << m_newCommitmentDuration << "&";
  }
}

void ModificationReservationUpdate::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_newCommitmentEndDateHasBeenSet) {
    oStream << location << ".NewCommitmentEndDate="
            << StringUtils::URLEncode(m_newCommitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_newStartDateHasBeenSet) {
    oStream << location << ".NewStartDate=" << StringUtils::URLEncode(m_newStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_newCommitmentDurationHasBeenSet) {
    oStream << location << ".NewCommitmentDuration=" << m_newCommitmentDuration << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
