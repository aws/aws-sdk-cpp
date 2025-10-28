/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DescribeCapacityReservationTopologyResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeCapacityReservationTopologyResponse::DescribeCapacityReservationTopologyResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

DescribeCapacityReservationTopologyResponse& DescribeCapacityReservationTopologyResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCapacityReservationTopologyResponse")) {
    resultNode = rootNode.FirstChild("DescribeCapacityReservationTopologyResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode capacityReservationsNode = resultNode.FirstChild("capacityReservationSet");
    if (!capacityReservationsNode.IsNull()) {
      XmlNode capacityReservationsMember = capacityReservationsNode.FirstChild("item");
      m_capacityReservationsHasBeenSet = !capacityReservationsMember.IsNull();
      while (!capacityReservationsMember.IsNull()) {
        m_capacityReservations.push_back(capacityReservationsMember);
        capacityReservationsMember = capacityReservationsMember.NextNode("item");
      }

      m_capacityReservationsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeCapacityReservationTopologyResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
