/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeNetworkInsightsPathsResponse.h>
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

DescribeNetworkInsightsPathsResponse::DescribeNetworkInsightsPathsResponse()
{
}

DescribeNetworkInsightsPathsResponse::DescribeNetworkInsightsPathsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeNetworkInsightsPathsResponse& DescribeNetworkInsightsPathsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeNetworkInsightsPathsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeNetworkInsightsPathsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsPathsNode = resultNode.FirstChild("networkInsightsPathSet");
    if(!networkInsightsPathsNode.IsNull())
    {
      XmlNode networkInsightsPathsMember = networkInsightsPathsNode.FirstChild("item");
      while(!networkInsightsPathsMember.IsNull())
      {
        m_networkInsightsPaths.push_back(networkInsightsPathsMember);
        networkInsightsPathsMember = networkInsightsPathsMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeNetworkInsightsPathsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
