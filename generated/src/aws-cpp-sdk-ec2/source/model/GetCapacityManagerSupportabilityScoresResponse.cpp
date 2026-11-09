/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetCapacityManagerSupportabilityScoresResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetCapacityManagerSupportabilityScoresResponse::GetCapacityManagerSupportabilityScoresResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetCapacityManagerSupportabilityScoresResponse& GetCapacityManagerSupportabilityScoresResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCapacityManagerSupportabilityScoresResponse")) {
    resultNode = rootNode.FirstChild("GetCapacityManagerSupportabilityScoresResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode aggregateScoreNode = resultNode.FirstChild("aggregateScore");
    if (!aggregateScoreNode.IsNull()) {
      m_aggregateScore = SupportabilityScoreMapper::GetSupportabilityScoreForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(aggregateScoreNode.GetText()).c_str()));
      m_aggregateScoreHasBeenSet = true;
    }
    XmlNode capacityManagerSupportabilityScoresNode = resultNode.FirstChild("capacityManagerSupportabilityScoreSet");
    if (!capacityManagerSupportabilityScoresNode.IsNull()) {
      XmlNode capacityManagerSupportabilityScoresMember = capacityManagerSupportabilityScoresNode.FirstChild("item");
      m_capacityManagerSupportabilityScoresHasBeenSet = !capacityManagerSupportabilityScoresMember.IsNull();
      while (!capacityManagerSupportabilityScoresMember.IsNull()) {
        m_capacityManagerSupportabilityScores.push_back(capacityManagerSupportabilityScoresMember);
        capacityManagerSupportabilityScoresMember = capacityManagerSupportabilityScoresMember.NextNode("item");
      }

      m_capacityManagerSupportabilityScoresHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetCapacityManagerSupportabilityScoresResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
