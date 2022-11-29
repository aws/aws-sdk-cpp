/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeAwsNetworkPerformanceMetricSubscriptionsResponse.h>
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

DescribeAwsNetworkPerformanceMetricSubscriptionsResponse::DescribeAwsNetworkPerformanceMetricSubscriptionsResponse()
{
}

DescribeAwsNetworkPerformanceMetricSubscriptionsResponse::DescribeAwsNetworkPerformanceMetricSubscriptionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAwsNetworkPerformanceMetricSubscriptionsResponse& DescribeAwsNetworkPerformanceMetricSubscriptionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAwsNetworkPerformanceMetricSubscriptionsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeAwsNetworkPerformanceMetricSubscriptionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode subscriptionsNode = resultNode.FirstChild("subscriptionSet");
    if(!subscriptionsNode.IsNull())
    {
      XmlNode subscriptionsMember = subscriptionsNode.FirstChild("item");
      while(!subscriptionsMember.IsNull())
      {
        m_subscriptions.push_back(subscriptionsMember);
        subscriptionsMember = subscriptionsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeAwsNetworkPerformanceMetricSubscriptionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
