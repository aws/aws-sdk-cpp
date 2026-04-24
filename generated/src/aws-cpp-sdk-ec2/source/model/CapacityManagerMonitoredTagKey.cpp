/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityManagerMonitoredTagKey.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityManagerMonitoredTagKey::CapacityManagerMonitoredTagKey(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityManagerMonitoredTagKey& CapacityManagerMonitoredTagKey::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode tagKeyNode = resultNode.FirstChild("tagKey");
    if (!tagKeyNode.IsNull()) {
      m_tagKey = Aws::Utils::Xml::DecodeEscapedXmlText(tagKeyNode.GetText());
      m_tagKeyHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = CapacityManagerMonitoredTagKeyStatusMapper::GetCapacityManagerMonitoredTagKeyStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if (!statusMessageNode.IsNull()) {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode capacityManagerProvidedNode = resultNode.FirstChild("capacityManagerProvided");
    if (!capacityManagerProvidedNode.IsNull()) {
      m_capacityManagerProvided = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityManagerProvidedNode.GetText()).c_str()).c_str());
      m_capacityManagerProvidedHasBeenSet = true;
    }
    XmlNode earliestDatapointTimestampNode = resultNode.FirstChild("earliestDatapointTimestamp");
    if (!earliestDatapointTimestampNode.IsNull()) {
      m_earliestDatapointTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(earliestDatapointTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_earliestDatapointTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityManagerMonitoredTagKey::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                    const char* locationValue) const {
  if (m_tagKeyHasBeenSet) {
    oStream << location << index << locationValue << ".TagKey=" << StringUtils::URLEncode(m_tagKey.c_str()) << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status="
            << StringUtils::URLEncode(CapacityManagerMonitoredTagKeyStatusMapper::GetNameForCapacityManagerMonitoredTagKeyStatus(m_status))
            << "&";
  }

  if (m_statusMessageHasBeenSet) {
    oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if (m_capacityManagerProvidedHasBeenSet) {
    oStream << location << index << locationValue << ".CapacityManagerProvided=" << std::boolalpha << m_capacityManagerProvided << "&";
  }

  if (m_earliestDatapointTimestampHasBeenSet) {
    oStream << location << index << locationValue << ".EarliestDatapointTimestamp="
            << StringUtils::URLEncode(m_earliestDatapointTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void CapacityManagerMonitoredTagKey::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_tagKeyHasBeenSet) {
    oStream << location << ".TagKey=" << StringUtils::URLEncode(m_tagKey.c_str()) << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status="
            << StringUtils::URLEncode(CapacityManagerMonitoredTagKeyStatusMapper::GetNameForCapacityManagerMonitoredTagKeyStatus(m_status))
            << "&";
  }
  if (m_statusMessageHasBeenSet) {
    oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if (m_capacityManagerProvidedHasBeenSet) {
    oStream << location << ".CapacityManagerProvided=" << std::boolalpha << m_capacityManagerProvided << "&";
  }
  if (m_earliestDatapointTimestampHasBeenSet) {
    oStream << location << ".EarliestDatapointTimestamp="
            << StringUtils::URLEncode(m_earliestDatapointTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
