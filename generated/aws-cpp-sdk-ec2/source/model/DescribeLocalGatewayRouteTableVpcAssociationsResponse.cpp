/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeLocalGatewayRouteTableVpcAssociationsResponse.h>
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

DescribeLocalGatewayRouteTableVpcAssociationsResponse::DescribeLocalGatewayRouteTableVpcAssociationsResponse()
{
}

DescribeLocalGatewayRouteTableVpcAssociationsResponse::DescribeLocalGatewayRouteTableVpcAssociationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLocalGatewayRouteTableVpcAssociationsResponse& DescribeLocalGatewayRouteTableVpcAssociationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLocalGatewayRouteTableVpcAssociationsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeLocalGatewayRouteTableVpcAssociationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayRouteTableVpcAssociationsNode = resultNode.FirstChild("localGatewayRouteTableVpcAssociationSet");
    if(!localGatewayRouteTableVpcAssociationsNode.IsNull())
    {
      XmlNode localGatewayRouteTableVpcAssociationsMember = localGatewayRouteTableVpcAssociationsNode.FirstChild("item");
      while(!localGatewayRouteTableVpcAssociationsMember.IsNull())
      {
        m_localGatewayRouteTableVpcAssociations.push_back(localGatewayRouteTableVpcAssociationsMember);
        localGatewayRouteTableVpcAssociationsMember = localGatewayRouteTableVpcAssociationsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeLocalGatewayRouteTableVpcAssociationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
