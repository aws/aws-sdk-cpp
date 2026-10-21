/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/PerformanceStatusSummary.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

PerformanceStatusSummary::PerformanceStatusSummary(const XmlNode& xmlNode) { *this = xmlNode; }

PerformanceStatusSummary& PerformanceStatusSummary::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = SummaryStatusMapper::GetSummaryStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode impairedSinceNode = resultNode.FirstChild("impairedSince");
    if (!impairedSinceNode.IsNull()) {
      m_impairedSince = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(impairedSinceNode.GetText()).c_str()).c_str(),
                                 Aws::Utils::DateFormat::ISO_8601);
      m_impairedSinceHasBeenSet = true;
    }
    XmlNode remediationNode = resultNode.FirstChild("remediation");
    if (!remediationNode.IsNull()) {
      m_remediation = Aws::Utils::Xml::DecodeEscapedXmlText(remediationNode.GetText());
      m_remediationHasBeenSet = true;
    }
  }

  return *this;
}

void PerformanceStatusSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(SummaryStatusMapper::GetNameForSummaryStatus(m_status)) << "&";
  }

  if (m_impairedSinceHasBeenSet) {
    oStream << location << index << locationValue
            << ".ImpairedSince=" << StringUtils::URLEncode(m_impairedSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_remediationHasBeenSet) {
    oStream << location << index << locationValue << ".Remediation=" << StringUtils::URLEncode(m_remediation.c_str()) << "&";
  }
}

void PerformanceStatusSummary::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(SummaryStatusMapper::GetNameForSummaryStatus(m_status)) << "&";
  }
  if (m_impairedSinceHasBeenSet) {
    oStream << location
            << ".ImpairedSince=" << StringUtils::URLEncode(m_impairedSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_remediationHasBeenSet) {
    oStream << location << ".Remediation=" << StringUtils::URLEncode(m_remediation.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
