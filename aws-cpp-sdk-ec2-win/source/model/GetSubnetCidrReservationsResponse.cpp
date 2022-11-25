/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetSubnetCidrReservationsResponse.h>
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

GetSubnetCidrReservationsResponse::GetSubnetCidrReservationsResponse()
{
}

GetSubnetCidrReservationsResponse::GetSubnetCidrReservationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetSubnetCidrReservationsResponse& GetSubnetCidrReservationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSubnetCidrReservationsResponse"))
  {
    resultNode = rootNode.FirstChild("GetSubnetCidrReservationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode subnetIpv4CidrReservationsNode = resultNode.FirstChild("subnetIpv4CidrReservationSet");
    if(!subnetIpv4CidrReservationsNode.IsNull())
    {
      XmlNode subnetIpv4CidrReservationsMember = subnetIpv4CidrReservationsNode.FirstChild("item");
      while(!subnetIpv4CidrReservationsMember.IsNull())
      {
        m_subnetIpv4CidrReservations.push_back(subnetIpv4CidrReservationsMember);
        subnetIpv4CidrReservationsMember = subnetIpv4CidrReservationsMember.NextNode("item");
      }

    }
    XmlNode subnetIpv6CidrReservationsNode = resultNode.FirstChild("subnetIpv6CidrReservationSet");
    if(!subnetIpv6CidrReservationsNode.IsNull())
    {
      XmlNode subnetIpv6CidrReservationsMember = subnetIpv6CidrReservationsNode.FirstChild("item");
      while(!subnetIpv6CidrReservationsMember.IsNull())
      {
        m_subnetIpv6CidrReservations.push_back(subnetIpv6CidrReservationsMember);
        subnetIpv6CidrReservationsMember = subnetIpv6CidrReservationsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetSubnetCidrReservationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
