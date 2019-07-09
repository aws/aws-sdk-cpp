/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/GetTransitGatewayRouteTablePropagationsResponse.h>
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

GetTransitGatewayRouteTablePropagationsResponse::GetTransitGatewayRouteTablePropagationsResponse()
{
}

GetTransitGatewayRouteTablePropagationsResponse::GetTransitGatewayRouteTablePropagationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTransitGatewayRouteTablePropagationsResponse& GetTransitGatewayRouteTablePropagationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTransitGatewayRouteTablePropagationsResponse"))
  {
    resultNode = rootNode.FirstChild("GetTransitGatewayRouteTablePropagationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayRouteTablePropagationsNode = resultNode.FirstChild("transitGatewayRouteTablePropagations");
    if(!transitGatewayRouteTablePropagationsNode.IsNull())
    {
      XmlNode transitGatewayRouteTablePropagationsMember = transitGatewayRouteTablePropagationsNode.FirstChild("item");
      while(!transitGatewayRouteTablePropagationsMember.IsNull())
      {
        m_transitGatewayRouteTablePropagations.push_back(transitGatewayRouteTablePropagationsMember);
        transitGatewayRouteTablePropagationsMember = transitGatewayRouteTablePropagationsMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = nextTokenNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetTransitGatewayRouteTablePropagationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
