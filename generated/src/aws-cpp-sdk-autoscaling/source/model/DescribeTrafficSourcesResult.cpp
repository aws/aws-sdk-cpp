/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeTrafficSourcesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrafficSourcesResult::DescribeTrafficSourcesResult()
{
}

DescribeTrafficSourcesResult::DescribeTrafficSourcesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTrafficSourcesResult& DescribeTrafficSourcesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTrafficSourcesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTrafficSourcesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode trafficSourcesNode = resultNode.FirstChild("TrafficSources");
    if(!trafficSourcesNode.IsNull())
    {
      XmlNode trafficSourcesMember = trafficSourcesNode.FirstChild("member");
      while(!trafficSourcesMember.IsNull())
      {
        m_trafficSources.push_back(trafficSourcesMember);
        trafficSourcesMember = trafficSourcesMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeTrafficSourcesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
