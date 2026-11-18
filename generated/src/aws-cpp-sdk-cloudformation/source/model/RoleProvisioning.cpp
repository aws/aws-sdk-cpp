/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RoleProvisioning.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

RoleProvisioning::RoleProvisioning(const XmlNode& xmlNode) { *this = xmlNode; }

RoleProvisioning& RoleProvisioning::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status =
          StageStatusMapper::GetStageStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode succeededAccountsCountNode = resultNode.FirstChild("SucceededAccountsCount");
    if (!succeededAccountsCountNode.IsNull()) {
      m_succeededAccountsCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(succeededAccountsCountNode.GetText()).c_str()).c_str());
      m_succeededAccountsCountHasBeenSet = true;
    }
    XmlNode failedAccountsCountNode = resultNode.FirstChild("FailedAccountsCount");
    if (!failedAccountsCountNode.IsNull()) {
      m_failedAccountsCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failedAccountsCountNode.GetText()).c_str()).c_str());
      m_failedAccountsCountHasBeenSet = true;
    }
    XmlNode completedAccountsCountNode = resultNode.FirstChild("CompletedAccountsCount");
    if (!completedAccountsCountNode.IsNull()) {
      m_completedAccountsCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(completedAccountsCountNode.GetText()).c_str()).c_str());
      m_completedAccountsCountHasBeenSet = true;
    }
    XmlNode pendingAccountsCountNode = resultNode.FirstChild("PendingAccountsCount");
    if (!pendingAccountsCountNode.IsNull()) {
      m_pendingAccountsCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(pendingAccountsCountNode.GetText()).c_str()).c_str());
      m_pendingAccountsCountHasBeenSet = true;
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

void RoleProvisioning::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(StageStatusMapper::GetNameForStageStatus(m_status)) << "&";
  }

  if (m_succeededAccountsCountHasBeenSet) {
    oStream << location << index << locationValue << ".SucceededAccountsCount=" << m_succeededAccountsCount << "&";
  }

  if (m_failedAccountsCountHasBeenSet) {
    oStream << location << index << locationValue << ".FailedAccountsCount=" << m_failedAccountsCount << "&";
  }

  if (m_completedAccountsCountHasBeenSet) {
    oStream << location << index << locationValue << ".CompletedAccountsCount=" << m_completedAccountsCount << "&";
  }

  if (m_pendingAccountsCountHasBeenSet) {
    oStream << location << index << locationValue << ".PendingAccountsCount=" << m_pendingAccountsCount << "&";
  }

  if (m_percentageCompletedHasBeenSet) {
    oStream << location << index << locationValue << ".PercentageCompleted=" << StringUtils::URLEncode(m_percentageCompleted) << "&";
  }
}

void RoleProvisioning::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(StageStatusMapper::GetNameForStageStatus(m_status)) << "&";
  }
  if (m_succeededAccountsCountHasBeenSet) {
    oStream << location << ".SucceededAccountsCount=" << m_succeededAccountsCount << "&";
  }
  if (m_failedAccountsCountHasBeenSet) {
    oStream << location << ".FailedAccountsCount=" << m_failedAccountsCount << "&";
  }
  if (m_completedAccountsCountHasBeenSet) {
    oStream << location << ".CompletedAccountsCount=" << m_completedAccountsCount << "&";
  }
  if (m_pendingAccountsCountHasBeenSet) {
    oStream << location << ".PendingAccountsCount=" << m_pendingAccountsCount << "&";
  }
  if (m_percentageCompletedHasBeenSet) {
    oStream << location << ".PercentageCompleted=" << StringUtils::URLEncode(m_percentageCompleted) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
