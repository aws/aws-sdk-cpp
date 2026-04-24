/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConnectionFunctionTestResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {

ConnectionFunctionTestResult::ConnectionFunctionTestResult(const XmlNode& xmlNode) { *this = xmlNode; }

ConnectionFunctionTestResult& ConnectionFunctionTestResult::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode connectionFunctionSummaryNode = resultNode.FirstChild("ConnectionFunctionSummary");
    if (!connectionFunctionSummaryNode.IsNull()) {
      m_connectionFunctionSummary = connectionFunctionSummaryNode;
      m_connectionFunctionSummaryHasBeenSet = true;
    }
    XmlNode computeUtilizationNode = resultNode.FirstChild("ComputeUtilization");
    if (!computeUtilizationNode.IsNull()) {
      m_computeUtilization = Aws::Utils::Xml::DecodeEscapedXmlText(computeUtilizationNode.GetText());
      m_computeUtilizationHasBeenSet = true;
    }
    XmlNode connectionFunctionExecutionLogsNode = resultNode.FirstChild("ConnectionFunctionExecutionLogs");
    if (!connectionFunctionExecutionLogsNode.IsNull()) {
      XmlNode connectionFunctionExecutionLogsMember = connectionFunctionExecutionLogsNode.FirstChild("member");
      m_connectionFunctionExecutionLogsHasBeenSet = !connectionFunctionExecutionLogsMember.IsNull();
      while (!connectionFunctionExecutionLogsMember.IsNull()) {
        m_connectionFunctionExecutionLogs.push_back(connectionFunctionExecutionLogsMember.GetText());
        connectionFunctionExecutionLogsMember = connectionFunctionExecutionLogsMember.NextNode("member");
      }

      m_connectionFunctionExecutionLogsHasBeenSet = true;
    }
    XmlNode connectionFunctionErrorMessageNode = resultNode.FirstChild("ConnectionFunctionErrorMessage");
    if (!connectionFunctionErrorMessageNode.IsNull()) {
      m_connectionFunctionErrorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(connectionFunctionErrorMessageNode.GetText());
      m_connectionFunctionErrorMessageHasBeenSet = true;
    }
    XmlNode connectionFunctionOutputNode = resultNode.FirstChild("ConnectionFunctionOutput");
    if (!connectionFunctionOutputNode.IsNull()) {
      m_connectionFunctionOutput = Aws::Utils::Xml::DecodeEscapedXmlText(connectionFunctionOutputNode.GetText());
      m_connectionFunctionOutputHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionFunctionTestResult::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_connectionFunctionSummaryHasBeenSet) {
    XmlNode connectionFunctionSummaryNode = parentNode.CreateChildElement("ConnectionFunctionSummary");
    m_connectionFunctionSummary.AddToNode(connectionFunctionSummaryNode);
  }

  if (m_computeUtilizationHasBeenSet) {
    XmlNode computeUtilizationNode = parentNode.CreateChildElement("ComputeUtilization");
    computeUtilizationNode.SetText(m_computeUtilization);
  }

  if (m_connectionFunctionExecutionLogsHasBeenSet) {
    XmlNode connectionFunctionExecutionLogsParentNode = parentNode.CreateChildElement("ConnectionFunctionExecutionLogs");
    for (const auto& item : m_connectionFunctionExecutionLogs) {
      XmlNode connectionFunctionExecutionLogsNode = connectionFunctionExecutionLogsParentNode.CreateChildElement("member");
      connectionFunctionExecutionLogsNode.SetText(item);
    }
  }

  if (m_connectionFunctionErrorMessageHasBeenSet) {
    XmlNode connectionFunctionErrorMessageNode = parentNode.CreateChildElement("ConnectionFunctionErrorMessage");
    connectionFunctionErrorMessageNode.SetText(m_connectionFunctionErrorMessage);
  }

  if (m_connectionFunctionOutputHasBeenSet) {
    XmlNode connectionFunctionOutputNode = parentNode.CreateChildElement("ConnectionFunctionOutput");
    connectionFunctionOutputNode.SetText(m_connectionFunctionOutput);
  }
}

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
