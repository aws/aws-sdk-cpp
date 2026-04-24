/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Annotation.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

Annotation::Annotation(const XmlNode& xmlNode) { *this = xmlNode; }

Annotation& Annotation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode annotationNameNode = resultNode.FirstChild("AnnotationName");
    if (!annotationNameNode.IsNull()) {
      m_annotationName = Aws::Utils::Xml::DecodeEscapedXmlText(annotationNameNode.GetText());
      m_annotationNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = AnnotationStatusMapper::GetAnnotationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if (!statusMessageNode.IsNull()) {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode remediationMessageNode = resultNode.FirstChild("RemediationMessage");
    if (!remediationMessageNode.IsNull()) {
      m_remediationMessage = Aws::Utils::Xml::DecodeEscapedXmlText(remediationMessageNode.GetText());
      m_remediationMessageHasBeenSet = true;
    }
    XmlNode remediationLinkNode = resultNode.FirstChild("RemediationLink");
    if (!remediationLinkNode.IsNull()) {
      m_remediationLink = Aws::Utils::Xml::DecodeEscapedXmlText(remediationLinkNode.GetText());
      m_remediationLinkHasBeenSet = true;
    }
    XmlNode severityLevelNode = resultNode.FirstChild("SeverityLevel");
    if (!severityLevelNode.IsNull()) {
      m_severityLevel = AnnotationSeverityLevelMapper::GetAnnotationSeverityLevelForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(severityLevelNode.GetText()).c_str()));
      m_severityLevelHasBeenSet = true;
    }
  }

  return *this;
}

void Annotation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_annotationNameHasBeenSet) {
    oStream << location << index << locationValue << ".AnnotationName=" << StringUtils::URLEncode(m_annotationName.c_str()) << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(AnnotationStatusMapper::GetNameForAnnotationStatus(m_status)) << "&";
  }

  if (m_statusMessageHasBeenSet) {
    oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if (m_remediationMessageHasBeenSet) {
    oStream << location << index << locationValue << ".RemediationMessage=" << StringUtils::URLEncode(m_remediationMessage.c_str()) << "&";
  }

  if (m_remediationLinkHasBeenSet) {
    oStream << location << index << locationValue << ".RemediationLink=" << StringUtils::URLEncode(m_remediationLink.c_str()) << "&";
  }

  if (m_severityLevelHasBeenSet) {
    oStream << location << index << locationValue << ".SeverityLevel="
            << StringUtils::URLEncode(AnnotationSeverityLevelMapper::GetNameForAnnotationSeverityLevel(m_severityLevel)) << "&";
  }
}

void Annotation::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_annotationNameHasBeenSet) {
    oStream << location << ".AnnotationName=" << StringUtils::URLEncode(m_annotationName.c_str()) << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(AnnotationStatusMapper::GetNameForAnnotationStatus(m_status)) << "&";
  }
  if (m_statusMessageHasBeenSet) {
    oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if (m_remediationMessageHasBeenSet) {
    oStream << location << ".RemediationMessage=" << StringUtils::URLEncode(m_remediationMessage.c_str()) << "&";
  }
  if (m_remediationLinkHasBeenSet) {
    oStream << location << ".RemediationLink=" << StringUtils::URLEncode(m_remediationLink.c_str()) << "&";
  }
  if (m_severityLevelHasBeenSet) {
    oStream << location << ".SeverityLevel="
            << StringUtils::URLEncode(AnnotationSeverityLevelMapper::GetNameForAnnotationSeverityLevel(m_severityLevel)) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
