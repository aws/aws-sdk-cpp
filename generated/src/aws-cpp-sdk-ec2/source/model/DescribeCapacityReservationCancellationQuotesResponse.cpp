/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeCapacityReservationCancellationQuotesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeCapacityReservationCancellationQuotesResponse::DescribeCapacityReservationCancellationQuotesResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeCapacityReservationCancellationQuotesResponse& DescribeCapacityReservationCancellationQuotesResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCapacityReservationCancellationQuotesResponse")) {
    resultNode = rootNode.FirstChild("DescribeCapacityReservationCancellationQuotesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationCancellationQuotesNode = resultNode.FirstChild("capacityReservationCancellationQuoteSet");
    if (!capacityReservationCancellationQuotesNode.IsNull()) {
      XmlNode capacityReservationCancellationQuotesMember = capacityReservationCancellationQuotesNode.FirstChild("item");
      m_capacityReservationCancellationQuotesHasBeenSet = !capacityReservationCancellationQuotesMember.IsNull();
      while (!capacityReservationCancellationQuotesMember.IsNull()) {
        m_capacityReservationCancellationQuotes.push_back(capacityReservationCancellationQuotesMember);
        capacityReservationCancellationQuotesMember = capacityReservationCancellationQuotesMember.NextNode("item");
      }

      m_capacityReservationCancellationQuotesHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeCapacityReservationCancellationQuotesResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
