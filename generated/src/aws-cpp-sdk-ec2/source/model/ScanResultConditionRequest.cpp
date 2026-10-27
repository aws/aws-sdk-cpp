/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ScanResultConditionRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ScanResultConditionRequest::ScanResultConditionRequest(const XmlNode& xmlNode) { *this = xmlNode; }

ScanResultConditionRequest& ScanResultConditionRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode maxDaysSinceLastFindingScanNode = resultNode.FirstChild("MaxDaysSinceLastFindingScan");
    if (!maxDaysSinceLastFindingScanNode.IsNull()) {
      m_maxDaysSinceLastFindingScan = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDaysSinceLastFindingScanNode.GetText()).c_str()).c_str());
      m_maxDaysSinceLastFindingScanHasBeenSet = true;
    }
    XmlNode maximumSeverityLabelNode = resultNode.FirstChild("MaximumSeverityLabel");
    if (!maximumSeverityLabelNode.IsNull()) {
      m_maximumSeverityLabel = SeverityLabelMapper::GetSeverityLabelForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumSeverityLabelNode.GetText()).c_str()));
      m_maximumSeverityLabelHasBeenSet = true;
    }
    XmlNode maxDaysSinceInformationalFixAvailableNode = resultNode.FirstChild("MaxDaysSinceInformationalFixAvailable");
    if (!maxDaysSinceInformationalFixAvailableNode.IsNull()) {
      m_maxDaysSinceInformationalFixAvailable = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDaysSinceInformationalFixAvailableNode.GetText()).c_str()).c_str());
      m_maxDaysSinceInformationalFixAvailableHasBeenSet = true;
    }
    XmlNode maxDaysSinceLowFixAvailableNode = resultNode.FirstChild("MaxDaysSinceLowFixAvailable");
    if (!maxDaysSinceLowFixAvailableNode.IsNull()) {
      m_maxDaysSinceLowFixAvailable = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDaysSinceLowFixAvailableNode.GetText()).c_str()).c_str());
      m_maxDaysSinceLowFixAvailableHasBeenSet = true;
    }
    XmlNode maxDaysSinceMediumFixAvailableNode = resultNode.FirstChild("MaxDaysSinceMediumFixAvailable");
    if (!maxDaysSinceMediumFixAvailableNode.IsNull()) {
      m_maxDaysSinceMediumFixAvailable = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDaysSinceMediumFixAvailableNode.GetText()).c_str()).c_str());
      m_maxDaysSinceMediumFixAvailableHasBeenSet = true;
    }
    XmlNode maxDaysSinceHighFixAvailableNode = resultNode.FirstChild("MaxDaysSinceHighFixAvailable");
    if (!maxDaysSinceHighFixAvailableNode.IsNull()) {
      m_maxDaysSinceHighFixAvailable = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDaysSinceHighFixAvailableNode.GetText()).c_str()).c_str());
      m_maxDaysSinceHighFixAvailableHasBeenSet = true;
    }
    XmlNode maxDaysSinceCriticalFixAvailableNode = resultNode.FirstChild("MaxDaysSinceCriticalFixAvailable");
    if (!maxDaysSinceCriticalFixAvailableNode.IsNull()) {
      m_maxDaysSinceCriticalFixAvailable = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxDaysSinceCriticalFixAvailableNode.GetText()).c_str()).c_str());
      m_maxDaysSinceCriticalFixAvailableHasBeenSet = true;
    }
  }

  return *this;
}

void ScanResultConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                const char* locationValue) const {
  if (m_maxDaysSinceLastFindingScanHasBeenSet) {
    oStream << location << index << locationValue << ".MaxDaysSinceLastFindingScan=" << m_maxDaysSinceLastFindingScan << "&";
  }

  if (m_maximumSeverityLabelHasBeenSet) {
    oStream << location << index << locationValue
            << ".MaximumSeverityLabel=" << StringUtils::URLEncode(SeverityLabelMapper::GetNameForSeverityLabel(m_maximumSeverityLabel))
            << "&";
  }

  if (m_maxDaysSinceInformationalFixAvailableHasBeenSet) {
    oStream << location << index << locationValue << ".MaxDaysSinceInformationalFixAvailable=" << m_maxDaysSinceInformationalFixAvailable
            << "&";
  }

  if (m_maxDaysSinceLowFixAvailableHasBeenSet) {
    oStream << location << index << locationValue << ".MaxDaysSinceLowFixAvailable=" << m_maxDaysSinceLowFixAvailable << "&";
  }

  if (m_maxDaysSinceMediumFixAvailableHasBeenSet) {
    oStream << location << index << locationValue << ".MaxDaysSinceMediumFixAvailable=" << m_maxDaysSinceMediumFixAvailable << "&";
  }

  if (m_maxDaysSinceHighFixAvailableHasBeenSet) {
    oStream << location << index << locationValue << ".MaxDaysSinceHighFixAvailable=" << m_maxDaysSinceHighFixAvailable << "&";
  }

  if (m_maxDaysSinceCriticalFixAvailableHasBeenSet) {
    oStream << location << index << locationValue << ".MaxDaysSinceCriticalFixAvailable=" << m_maxDaysSinceCriticalFixAvailable << "&";
  }
}

void ScanResultConditionRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_maxDaysSinceLastFindingScanHasBeenSet) {
    oStream << location << ".MaxDaysSinceLastFindingScan=" << m_maxDaysSinceLastFindingScan << "&";
  }
  if (m_maximumSeverityLabelHasBeenSet) {
    oStream << location
            << ".MaximumSeverityLabel=" << StringUtils::URLEncode(SeverityLabelMapper::GetNameForSeverityLabel(m_maximumSeverityLabel))
            << "&";
  }
  if (m_maxDaysSinceInformationalFixAvailableHasBeenSet) {
    oStream << location << ".MaxDaysSinceInformationalFixAvailable=" << m_maxDaysSinceInformationalFixAvailable << "&";
  }
  if (m_maxDaysSinceLowFixAvailableHasBeenSet) {
    oStream << location << ".MaxDaysSinceLowFixAvailable=" << m_maxDaysSinceLowFixAvailable << "&";
  }
  if (m_maxDaysSinceMediumFixAvailableHasBeenSet) {
    oStream << location << ".MaxDaysSinceMediumFixAvailable=" << m_maxDaysSinceMediumFixAvailable << "&";
  }
  if (m_maxDaysSinceHighFixAvailableHasBeenSet) {
    oStream << location << ".MaxDaysSinceHighFixAvailable=" << m_maxDaysSinceHighFixAvailable << "&";
  }
  if (m_maxDaysSinceCriticalFixAvailableHasBeenSet) {
    oStream << location << ".MaxDaysSinceCriticalFixAvailable=" << m_maxDaysSinceCriticalFixAvailable << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
