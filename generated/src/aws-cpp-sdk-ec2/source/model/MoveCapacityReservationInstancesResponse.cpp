/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MoveCapacityReservationInstancesResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

MoveCapacityReservationInstancesResponse::MoveCapacityReservationInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

MoveCapacityReservationInstancesResponse& MoveCapacityReservationInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "MoveCapacityReservationInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("MoveCapacityReservationInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode sourceCapacityReservationNode = resultNode.FirstChild("sourceCapacityReservation");
    if(!sourceCapacityReservationNode.IsNull())
    {
      m_sourceCapacityReservation = sourceCapacityReservationNode;
      m_sourceCapacityReservationHasBeenSet = true;
    }
    XmlNode destinationCapacityReservationNode = resultNode.FirstChild("destinationCapacityReservation");
    if(!destinationCapacityReservationNode.IsNull())
    {
      m_destinationCapacityReservation = destinationCapacityReservationNode;
      m_destinationCapacityReservationHasBeenSet = true;
    }
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::MoveCapacityReservationInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
