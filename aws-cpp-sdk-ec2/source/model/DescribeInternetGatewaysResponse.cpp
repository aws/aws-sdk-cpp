/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeInternetGatewaysResponse.h>
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

DescribeInternetGatewaysResponse::DescribeInternetGatewaysResponse()
{
}

DescribeInternetGatewaysResponse::DescribeInternetGatewaysResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInternetGatewaysResponse& DescribeInternetGatewaysResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInternetGatewaysResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeInternetGatewaysResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode internetGatewaysNode = resultNode.FirstChild("internetGatewaySet");
    if(!internetGatewaysNode.IsNull())
    {
      XmlNode internetGatewaysMember = internetGatewaysNode.FirstChild("item");
      while(!internetGatewaysMember.IsNull())
      {
        m_internetGateways.push_back(internetGatewaysMember);
        internetGatewaysMember = internetGatewaysMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeInternetGatewaysResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
