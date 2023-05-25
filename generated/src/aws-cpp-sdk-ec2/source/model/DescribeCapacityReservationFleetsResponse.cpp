/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeCapacityReservationFleetsResponse.h>
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

DescribeCapacityReservationFleetsResponse::DescribeCapacityReservationFleetsResponse()
{
}

DescribeCapacityReservationFleetsResponse::DescribeCapacityReservationFleetsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeCapacityReservationFleetsResponse& DescribeCapacityReservationFleetsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCapacityReservationFleetsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeCapacityReservationFleetsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationFleetsNode = resultNode.FirstChild("capacityReservationFleetSet");
    if(!capacityReservationFleetsNode.IsNull())
    {
      XmlNode capacityReservationFleetsMember = capacityReservationFleetsNode.FirstChild("item");
      while(!capacityReservationFleetsMember.IsNull())
      {
        m_capacityReservationFleets.push_back(capacityReservationFleetsMember);
        capacityReservationFleetsMember = capacityReservationFleetsMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeCapacityReservationFleetsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
