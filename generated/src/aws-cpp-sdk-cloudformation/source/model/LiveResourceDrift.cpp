/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/LiveResourceDrift.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

LiveResourceDrift::LiveResourceDrift(const XmlNode& xmlNode) { *this = xmlNode; }

LiveResourceDrift& LiveResourceDrift::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode previousValueNode = resultNode.FirstChild("PreviousValue");
    if (!previousValueNode.IsNull()) {
      m_previousValue = Aws::Utils::Xml::DecodeEscapedXmlText(previousValueNode.GetText());
      m_previousValueHasBeenSet = true;
    }
    XmlNode actualValueNode = resultNode.FirstChild("ActualValue");
    if (!actualValueNode.IsNull()) {
      m_actualValue = Aws::Utils::Xml::DecodeEscapedXmlText(actualValueNode.GetText());
      m_actualValueHasBeenSet = true;
    }
    XmlNode driftDetectionTimestampNode = resultNode.FirstChild("DriftDetectionTimestamp");
    if (!driftDetectionTimestampNode.IsNull()) {
      m_driftDetectionTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftDetectionTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_driftDetectionTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void LiveResourceDrift::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_previousValueHasBeenSet) {
    oStream << location << index << locationValue << ".PreviousValue=" << StringUtils::URLEncode(m_previousValue.c_str()) << "&";
  }

  if (m_actualValueHasBeenSet) {
    oStream << location << index << locationValue << ".ActualValue=" << StringUtils::URLEncode(m_actualValue.c_str()) << "&";
  }

  if (m_driftDetectionTimestampHasBeenSet) {
    oStream << location << index << locationValue << ".DriftDetectionTimestamp="
            << StringUtils::URLEncode(m_driftDetectionTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void LiveResourceDrift::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_previousValueHasBeenSet) {
    oStream << location << ".PreviousValue=" << StringUtils::URLEncode(m_previousValue.c_str()) << "&";
  }
  if (m_actualValueHasBeenSet) {
    oStream << location << ".ActualValue=" << StringUtils::URLEncode(m_actualValue.c_str()) << "&";
  }
  if (m_driftDetectionTimestampHasBeenSet) {
    oStream << location << ".DriftDetectionTimestamp="
            << StringUtils::URLEncode(m_driftDetectionTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
