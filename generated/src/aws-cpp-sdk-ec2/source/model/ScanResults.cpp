/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ScanResults.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ScanResults::ScanResults(const XmlNode& xmlNode) { *this = xmlNode; }

ScanResults& ScanResults::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode highestFindingSeverityLabelNode = resultNode.FirstChild("highestFindingSeverityLabel");
    if (!highestFindingSeverityLabelNode.IsNull()) {
      m_highestFindingSeverityLabel = SeverityLabelMapper::GetSeverityLabelForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(highestFindingSeverityLabelNode.GetText()).c_str()));
      m_highestFindingSeverityLabelHasBeenSet = true;
    }
    XmlNode findingScanDateNode = resultNode.FirstChild("findingScanDate");
    if (!findingScanDateNode.IsNull()) {
      m_findingScanDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(findingScanDateNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_findingScanDateHasBeenSet = true;
    }
    XmlNode informationalFixAvailableSinceNode = resultNode.FirstChild("informationalFixAvailableSince");
    if (!informationalFixAvailableSinceNode.IsNull()) {
      m_informationalFixAvailableSince =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(informationalFixAvailableSinceNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_informationalFixAvailableSinceHasBeenSet = true;
    }
    XmlNode lowFixAvailableSinceNode = resultNode.FirstChild("lowFixAvailableSince");
    if (!lowFixAvailableSinceNode.IsNull()) {
      m_lowFixAvailableSince =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lowFixAvailableSinceNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_lowFixAvailableSinceHasBeenSet = true;
    }
    XmlNode mediumFixAvailableSinceNode = resultNode.FirstChild("mediumFixAvailableSince");
    if (!mediumFixAvailableSinceNode.IsNull()) {
      m_mediumFixAvailableSince =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(mediumFixAvailableSinceNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_mediumFixAvailableSinceHasBeenSet = true;
    }
    XmlNode highFixAvailableSinceNode = resultNode.FirstChild("highFixAvailableSince");
    if (!highFixAvailableSinceNode.IsNull()) {
      m_highFixAvailableSince =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(highFixAvailableSinceNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_highFixAvailableSinceHasBeenSet = true;
    }
    XmlNode criticalFixAvailableSinceNode = resultNode.FirstChild("criticalFixAvailableSince");
    if (!criticalFixAvailableSinceNode.IsNull()) {
      m_criticalFixAvailableSince =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(criticalFixAvailableSinceNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_criticalFixAvailableSinceHasBeenSet = true;
    }
  }

  return *this;
}

void ScanResults::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_highestFindingSeverityLabelHasBeenSet) {
    oStream << location << index << locationValue << ".HighestFindingSeverityLabel="
            << StringUtils::URLEncode(SeverityLabelMapper::GetNameForSeverityLabel(m_highestFindingSeverityLabel)) << "&";
  }

  if (m_findingScanDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".FindingScanDate=" << StringUtils::URLEncode(m_findingScanDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_informationalFixAvailableSinceHasBeenSet) {
    oStream << location << index << locationValue << ".InformationalFixAvailableSince="
            << StringUtils::URLEncode(m_informationalFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_lowFixAvailableSinceHasBeenSet) {
    oStream << location << index << locationValue << ".LowFixAvailableSince="
            << StringUtils::URLEncode(m_lowFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_mediumFixAvailableSinceHasBeenSet) {
    oStream << location << index << locationValue << ".MediumFixAvailableSince="
            << StringUtils::URLEncode(m_mediumFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_highFixAvailableSinceHasBeenSet) {
    oStream << location << index << locationValue << ".HighFixAvailableSince="
            << StringUtils::URLEncode(m_highFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_criticalFixAvailableSinceHasBeenSet) {
    oStream << location << index << locationValue << ".CriticalFixAvailableSince="
            << StringUtils::URLEncode(m_criticalFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void ScanResults::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_highestFindingSeverityLabelHasBeenSet) {
    oStream << location << ".HighestFindingSeverityLabel="
            << StringUtils::URLEncode(SeverityLabelMapper::GetNameForSeverityLabel(m_highestFindingSeverityLabel)) << "&";
  }
  if (m_findingScanDateHasBeenSet) {
    oStream << location
            << ".FindingScanDate=" << StringUtils::URLEncode(m_findingScanDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_informationalFixAvailableSinceHasBeenSet) {
    oStream << location << ".InformationalFixAvailableSince="
            << StringUtils::URLEncode(m_informationalFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_lowFixAvailableSinceHasBeenSet) {
    oStream << location << ".LowFixAvailableSince="
            << StringUtils::URLEncode(m_lowFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_mediumFixAvailableSinceHasBeenSet) {
    oStream << location << ".MediumFixAvailableSince="
            << StringUtils::URLEncode(m_mediumFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_highFixAvailableSinceHasBeenSet) {
    oStream << location << ".HighFixAvailableSince="
            << StringUtils::URLEncode(m_highFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_criticalFixAvailableSinceHasBeenSet) {
    oStream << location << ".CriticalFixAvailableSince="
            << StringUtils::URLEncode(m_criticalFixAvailableSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
