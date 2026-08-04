/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ApplicationStatus.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ApplicationStatus::ApplicationStatus(const XmlNode& xmlNode) { *this = xmlNode; }

ApplicationStatus& ApplicationStatus::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = ApplicationStatusEnumMapper::GetApplicationStatusEnumForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusTimeStampNode = resultNode.FirstChild("statusTimeStamp");
    if (!statusTimeStampNode.IsNull()) {
      m_statusTimeStamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusTimeStampNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_statusTimeStampHasBeenSet = true;
    }
    XmlNode statusSinceNode = resultNode.FirstChild("statusSince");
    if (!statusSinceNode.IsNull()) {
      m_statusSince = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusSinceNode.GetText()).c_str()).c_str(),
                               Aws::Utils::DateFormat::ISO_8601);
      m_statusSinceHasBeenSet = true;
    }
    XmlNode resumeAtNode = resultNode.FirstChild("resumeAt");
    if (!resumeAtNode.IsNull()) {
      m_resumeAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resumeAtNode.GetText()).c_str()).c_str(),
                            Aws::Utils::DateFormat::ISO_8601);
      m_resumeAtHasBeenSet = true;
    }
    XmlNode detailsNode = resultNode.FirstChild("detailSet");
    if (!detailsNode.IsNull()) {
      XmlNode detailsMember = detailsNode.FirstChild("item");
      m_detailsHasBeenSet = !detailsMember.IsNull();
      while (!detailsMember.IsNull()) {
        m_details.push_back(detailsMember);
        detailsMember = detailsMember.NextNode("item");
      }

      m_detailsHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(ApplicationStatusEnumMapper::GetNameForApplicationStatusEnum(m_status)) << "&";
  }

  if (m_statusTimeStampHasBeenSet) {
    oStream << location << index << locationValue
            << ".StatusTimeStamp=" << StringUtils::URLEncode(m_statusTimeStamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_statusSinceHasBeenSet) {
    oStream << location << index << locationValue
            << ".StatusSince=" << StringUtils::URLEncode(m_statusSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_resumeAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".ResumeAt=" << StringUtils::URLEncode(m_resumeAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_detailsHasBeenSet) {
    unsigned detailsIdx = 1;
    for (auto& item : m_details) {
      Aws::StringStream detailsSs;
      detailsSs << location << index << locationValue << ".DetailSet." << detailsIdx++;
      item.OutputToStream(oStream, detailsSs.str().c_str());
    }
  }
}

void ApplicationStatus::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(ApplicationStatusEnumMapper::GetNameForApplicationStatusEnum(m_status))
            << "&";
  }
  if (m_statusTimeStampHasBeenSet) {
    oStream << location
            << ".StatusTimeStamp=" << StringUtils::URLEncode(m_statusTimeStamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_statusSinceHasBeenSet) {
    oStream << location << ".StatusSince=" << StringUtils::URLEncode(m_statusSince.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_resumeAtHasBeenSet) {
    oStream << location << ".ResumeAt=" << StringUtils::URLEncode(m_resumeAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_detailsHasBeenSet) {
    unsigned detailsIdx = 1;
    for (auto& item : m_details) {
      Aws::StringStream detailsSs;
      detailsSs << location << ".DetailSet." << detailsIdx++;
      item.OutputToStream(oStream, detailsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
