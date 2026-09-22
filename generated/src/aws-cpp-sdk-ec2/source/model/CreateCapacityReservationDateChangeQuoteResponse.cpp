/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CreateCapacityReservationDateChangeQuoteResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateCapacityReservationDateChangeQuoteResponse::CreateCapacityReservationDateChangeQuoteResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

CreateCapacityReservationDateChangeQuoteResponse& CreateCapacityReservationDateChangeQuoteResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateCapacityReservationDateChangeQuoteResponse")) {
    resultNode = rootNode.FirstChild("CreateCapacityReservationDateChangeQuoteResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationModificationQuoteNode = resultNode.FirstChild("capacityReservationModificationQuote");
    if (!capacityReservationModificationQuoteNode.IsNull()) {
      m_capacityReservationModificationQuote = capacityReservationModificationQuoteNode;
      m_capacityReservationModificationQuoteHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateCapacityReservationDateChangeQuoteResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
