﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetCapacityManagerMetricDataResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetCapacityManagerMetricDataResponse::GetCapacityManagerMetricDataResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetCapacityManagerMetricDataResponse& GetCapacityManagerMetricDataResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCapacityManagerMetricDataResponse")) {
    resultNode = rootNode.FirstChild("GetCapacityManagerMetricDataResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode metricDataResultsNode = resultNode.FirstChild("metricDataResultSet");
    if (!metricDataResultsNode.IsNull()) {
      XmlNode metricDataResultsMember = metricDataResultsNode.FirstChild("item");
      m_metricDataResultsHasBeenSet = !metricDataResultsMember.IsNull();
      while (!metricDataResultsMember.IsNull()) {
        m_metricDataResults.push_back(metricDataResultsMember);
        metricDataResultsMember = metricDataResultsMember.NextNode("item");
      }

      m_metricDataResultsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetCapacityManagerMetricDataResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
