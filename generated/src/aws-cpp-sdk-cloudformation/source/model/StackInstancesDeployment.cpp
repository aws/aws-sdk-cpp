/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackInstancesDeployment.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

StackInstancesDeployment::StackInstancesDeployment(const XmlNode& xmlNode) { *this = xmlNode; }

StackInstancesDeployment& StackInstancesDeployment::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status =
          StageStatusMapper::GetStageStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode succeededStackInstancesCountNode = resultNode.FirstChild("SucceededStackInstancesCount");
    if (!succeededStackInstancesCountNode.IsNull()) {
      m_succeededStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(succeededStackInstancesCountNode.GetText()).c_str()).c_str());
      m_succeededStackInstancesCountHasBeenSet = true;
    }
    XmlNode failedStackInstancesCountNode = resultNode.FirstChild("FailedStackInstancesCount");
    if (!failedStackInstancesCountNode.IsNull()) {
      m_failedStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_failedStackInstancesCountHasBeenSet = true;
    }
    XmlNode completedStackInstancesCountNode = resultNode.FirstChild("CompletedStackInstancesCount");
    if (!completedStackInstancesCountNode.IsNull()) {
      m_completedStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(completedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_completedStackInstancesCountHasBeenSet = true;
    }
    XmlNode pendingStackInstancesCountNode = resultNode.FirstChild("PendingStackInstancesCount");
    if (!pendingStackInstancesCountNode.IsNull()) {
      m_pendingStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(pendingStackInstancesCountNode.GetText()).c_str()).c_str());
      m_pendingStackInstancesCountHasBeenSet = true;
    }
    XmlNode cancelledStackInstancesCountNode = resultNode.FirstChild("CancelledStackInstancesCount");
    if (!cancelledStackInstancesCountNode.IsNull()) {
      m_cancelledStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cancelledStackInstancesCountNode.GetText()).c_str()).c_str());
      m_cancelledStackInstancesCountHasBeenSet = true;
    }
    XmlNode skippedStackInstancesCountNode = resultNode.FirstChild("SkippedStackInstancesCount");
    if (!skippedStackInstancesCountNode.IsNull()) {
      m_skippedStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(skippedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_skippedStackInstancesCountHasBeenSet = true;
    }
    XmlNode percentageCompletedNode = resultNode.FirstChild("PercentageCompleted");
    if (!percentageCompletedNode.IsNull()) {
      m_percentageCompleted = StringUtils::ConvertToDouble(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentageCompletedNode.GetText()).c_str()).c_str());
      m_percentageCompletedHasBeenSet = true;
    }
  }

  return *this;
}

void StackInstancesDeployment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(StageStatusMapper::GetNameForStageStatus(m_status)) << "&";
  }

  if (m_succeededStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".SucceededStackInstancesCount=" << m_succeededStackInstancesCount << "&";
  }

  if (m_failedStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }

  if (m_completedStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".CompletedStackInstancesCount=" << m_completedStackInstancesCount << "&";
  }

  if (m_pendingStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".PendingStackInstancesCount=" << m_pendingStackInstancesCount << "&";
  }

  if (m_cancelledStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".CancelledStackInstancesCount=" << m_cancelledStackInstancesCount << "&";
  }

  if (m_skippedStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".SkippedStackInstancesCount=" << m_skippedStackInstancesCount << "&";
  }

  if (m_percentageCompletedHasBeenSet) {
    oStream << location << index << locationValue << ".PercentageCompleted=" << StringUtils::URLEncode(m_percentageCompleted) << "&";
  }
}

void StackInstancesDeployment::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(StageStatusMapper::GetNameForStageStatus(m_status)) << "&";
  }
  if (m_succeededStackInstancesCountHasBeenSet) {
    oStream << location << ".SucceededStackInstancesCount=" << m_succeededStackInstancesCount << "&";
  }
  if (m_failedStackInstancesCountHasBeenSet) {
    oStream << location << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }
  if (m_completedStackInstancesCountHasBeenSet) {
    oStream << location << ".CompletedStackInstancesCount=" << m_completedStackInstancesCount << "&";
  }
  if (m_pendingStackInstancesCountHasBeenSet) {
    oStream << location << ".PendingStackInstancesCount=" << m_pendingStackInstancesCount << "&";
  }
  if (m_cancelledStackInstancesCountHasBeenSet) {
    oStream << location << ".CancelledStackInstancesCount=" << m_cancelledStackInstancesCount << "&";
  }
  if (m_skippedStackInstancesCountHasBeenSet) {
    oStream << location << ".SkippedStackInstancesCount=" << m_skippedStackInstancesCount << "&";
  }
  if (m_percentageCompletedHasBeenSet) {
    oStream << location << ".PercentageCompleted=" << StringUtils::URLEncode(m_percentageCompleted) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
