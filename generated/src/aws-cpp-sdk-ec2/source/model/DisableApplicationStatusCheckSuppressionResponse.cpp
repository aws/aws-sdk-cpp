/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DisableApplicationStatusCheckSuppressionResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DisableApplicationStatusCheckSuppressionResponse::DisableApplicationStatusCheckSuppressionResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DisableApplicationStatusCheckSuppressionResponse& DisableApplicationStatusCheckSuppressionResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisableApplicationStatusCheckSuppressionResponse")) {
    resultNode = rootNode.FirstChild("DisableApplicationStatusCheckSuppressionResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode successfulResultsNode = resultNode.FirstChild("successfulResultSet");
    if (!successfulResultsNode.IsNull()) {
      XmlNode successfulResultsMember = successfulResultsNode.FirstChild("item");
      m_successfulResultsHasBeenSet = !successfulResultsMember.IsNull();
      while (!successfulResultsMember.IsNull()) {
        m_successfulResults.push_back(successfulResultsMember);
        successfulResultsMember = successfulResultsMember.NextNode("item");
      }

      m_successfulResultsHasBeenSet = true;
    }
    XmlNode unsuccessfulResultsNode = resultNode.FirstChild("unsuccessfulResultSet");
    if (!unsuccessfulResultsNode.IsNull()) {
      XmlNode unsuccessfulResultsMember = unsuccessfulResultsNode.FirstChild("item");
      m_unsuccessfulResultsHasBeenSet = !unsuccessfulResultsMember.IsNull();
      while (!unsuccessfulResultsMember.IsNull()) {
        m_unsuccessfulResults.push_back(unsuccessfulResultsMember);
        unsuccessfulResultsMember = unsuccessfulResultsMember.NextNode("item");
      }

      m_unsuccessfulResultsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DisableApplicationStatusCheckSuppressionResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
