/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeTransitGatewayPolicyTablesResponse.h>
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

DescribeTransitGatewayPolicyTablesResponse::DescribeTransitGatewayPolicyTablesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTransitGatewayPolicyTablesResponse& DescribeTransitGatewayPolicyTablesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTransitGatewayPolicyTablesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeTransitGatewayPolicyTablesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayPolicyTablesNode = resultNode.FirstChild("transitGatewayPolicyTables");
    if(!transitGatewayPolicyTablesNode.IsNull())
    {
      XmlNode transitGatewayPolicyTablesMember = transitGatewayPolicyTablesNode.FirstChild("item");
      m_transitGatewayPolicyTablesHasBeenSet = !transitGatewayPolicyTablesMember.IsNull();
      while(!transitGatewayPolicyTablesMember.IsNull())
      {
        m_transitGatewayPolicyTables.push_back(transitGatewayPolicyTablesMember);
        transitGatewayPolicyTablesMember = transitGatewayPolicyTablesMember.NextNode("item");
      }

      m_transitGatewayPolicyTablesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeTransitGatewayPolicyTablesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
