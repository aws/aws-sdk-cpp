/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeInstanceConnectEndpointsResponse.h>
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

DescribeInstanceConnectEndpointsResponse::DescribeInstanceConnectEndpointsResponse()
{
}

DescribeInstanceConnectEndpointsResponse::DescribeInstanceConnectEndpointsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeInstanceConnectEndpointsResponse& DescribeInstanceConnectEndpointsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeInstanceConnectEndpointsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeInstanceConnectEndpointsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceConnectEndpointsNode = resultNode.FirstChild("instanceConnectEndpointSet");
    if(!instanceConnectEndpointsNode.IsNull())
    {
      XmlNode instanceConnectEndpointsMember = instanceConnectEndpointsNode.FirstChild("item");
      while(!instanceConnectEndpointsMember.IsNull())
      {
        m_instanceConnectEndpoints.push_back(instanceConnectEndpointsMember);
        instanceConnectEndpointsMember = instanceConnectEndpointsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeInstanceConnectEndpointsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
