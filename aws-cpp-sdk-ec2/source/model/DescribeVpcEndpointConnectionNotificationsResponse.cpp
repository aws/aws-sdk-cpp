/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeVpcEndpointConnectionNotificationsResponse.h>
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

DescribeVpcEndpointConnectionNotificationsResponse::DescribeVpcEndpointConnectionNotificationsResponse()
{
}

DescribeVpcEndpointConnectionNotificationsResponse::DescribeVpcEndpointConnectionNotificationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeVpcEndpointConnectionNotificationsResponse& DescribeVpcEndpointConnectionNotificationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeVpcEndpointConnectionNotificationsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeVpcEndpointConnectionNotificationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode connectionNotificationSetNode = resultNode.FirstChild("connectionNotificationSet");
    if(!connectionNotificationSetNode.IsNull())
    {
      XmlNode connectionNotificationSetMember = connectionNotificationSetNode.FirstChild("item");
      while(!connectionNotificationSetMember.IsNull())
      {
        m_connectionNotificationSet.push_back(connectionNotificationSetMember);
        connectionNotificationSetMember = connectionNotificationSetMember.NextNode("item");
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
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeVpcEndpointConnectionNotificationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
