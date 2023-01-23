/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse.h>
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

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse()
{
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse& DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayRouteTableVirtualInterfaceGroupAssociationsNode = resultNode.FirstChild("localGatewayRouteTableVirtualInterfaceGroupAssociationSet");
    if(!localGatewayRouteTableVirtualInterfaceGroupAssociationsNode.IsNull())
    {
      XmlNode localGatewayRouteTableVirtualInterfaceGroupAssociationsMember = localGatewayRouteTableVirtualInterfaceGroupAssociationsNode.FirstChild("item");
      while(!localGatewayRouteTableVirtualInterfaceGroupAssociationsMember.IsNull())
      {
        m_localGatewayRouteTableVirtualInterfaceGroupAssociations.push_back(localGatewayRouteTableVirtualInterfaceGroupAssociationsMember);
        localGatewayRouteTableVirtualInterfaceGroupAssociationsMember = localGatewayRouteTableVirtualInterfaceGroupAssociationsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
