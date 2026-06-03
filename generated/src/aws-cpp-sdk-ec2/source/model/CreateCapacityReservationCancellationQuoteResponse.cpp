/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CreateCapacityReservationCancellationQuoteResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateCapacityReservationCancellationQuoteResponse::CreateCapacityReservationCancellationQuoteResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

CreateCapacityReservationCancellationQuoteResponse& CreateCapacityReservationCancellationQuoteResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateCapacityReservationCancellationQuoteResponse")) {
    resultNode = rootNode.FirstChild("CreateCapacityReservationCancellationQuoteResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationCancellationQuoteNode = resultNode.FirstChild("capacityReservationCancellationQuote");
    if (!capacityReservationCancellationQuoteNode.IsNull()) {
      m_capacityReservationCancellationQuote = capacityReservationCancellationQuoteNode;
      m_capacityReservationCancellationQuoteHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateCapacityReservationCancellationQuoteResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
