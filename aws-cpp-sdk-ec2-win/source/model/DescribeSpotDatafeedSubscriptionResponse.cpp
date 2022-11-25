/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotDatafeedSubscriptionResponse.h>
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

DescribeSpotDatafeedSubscriptionResponse::DescribeSpotDatafeedSubscriptionResponse()
{
}

DescribeSpotDatafeedSubscriptionResponse::DescribeSpotDatafeedSubscriptionResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSpotDatafeedSubscriptionResponse& DescribeSpotDatafeedSubscriptionResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSpotDatafeedSubscriptionResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeSpotDatafeedSubscriptionResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode spotDatafeedSubscriptionNode = resultNode.FirstChild("spotDatafeedSubscription");
    if(!spotDatafeedSubscriptionNode.IsNull())
    {
      m_spotDatafeedSubscription = spotDatafeedSubscriptionNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSpotDatafeedSubscriptionResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
