/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetOperationStatusDetails.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

StackSetOperationStatusDetails::StackSetOperationStatusDetails(const XmlNode& xmlNode) { *this = xmlNode; }

StackSetOperationStatusDetails& StackSetOperationStatusDetails::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode stagesNode = resultNode.FirstChild("Stages");
    if (!stagesNode.IsNull()) {
      m_stages = stagesNode;
      m_stagesHasBeenSet = true;
    }
    XmlNode totalAccountsCountNode = resultNode.FirstChild("TotalAccountsCount");
    if (!totalAccountsCountNode.IsNull()) {
      m_totalAccountsCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalAccountsCountNode.GetText()).c_str()).c_str());
      m_totalAccountsCountHasBeenSet = true;
    }
    XmlNode totalStackInstancesCountNode = resultNode.FirstChild("TotalStackInstancesCount");
    if (!totalStackInstancesCountNode.IsNull()) {
      m_totalStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalStackInstancesCountNode.GetText()).c_str()).c_str());
      m_totalStackInstancesCountHasBeenSet = true;
    }
    XmlNode failedStackInstancesCountNode = resultNode.FirstChild("FailedStackInstancesCount");
    if (!failedStackInstancesCountNode.IsNull()) {
      m_failedStackInstancesCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failedStackInstancesCountNode.GetText()).c_str()).c_str());
      m_failedStackInstancesCountHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetOperationStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                    const char* locationValue) const {
  if (m_stagesHasBeenSet) {
    Aws::StringStream stagesLocationAndMemberSs;
    stagesLocationAndMemberSs << location << index << locationValue << ".Stages";
    m_stages.OutputToStream(oStream, stagesLocationAndMemberSs.str().c_str());
  }

  if (m_totalAccountsCountHasBeenSet) {
    oStream << location << index << locationValue << ".TotalAccountsCount=" << m_totalAccountsCount << "&";
  }

  if (m_totalStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".TotalStackInstancesCount=" << m_totalStackInstancesCount << "&";
  }

  if (m_failedStackInstancesCountHasBeenSet) {
    oStream << location << index << locationValue << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }
}

void StackSetOperationStatusDetails::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_stagesHasBeenSet) {
    Aws::String stagesLocationAndMember(location);
    stagesLocationAndMember += ".Stages";
    m_stages.OutputToStream(oStream, stagesLocationAndMember.c_str());
  }
  if (m_totalAccountsCountHasBeenSet) {
    oStream << location << ".TotalAccountsCount=" << m_totalAccountsCount << "&";
  }
  if (m_totalStackInstancesCountHasBeenSet) {
    oStream << location << ".TotalStackInstancesCount=" << m_totalStackInstancesCount << "&";
  }
  if (m_failedStackInstancesCountHasBeenSet) {
    oStream << location << ".FailedStackInstancesCount=" << m_failedStackInstancesCount << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
