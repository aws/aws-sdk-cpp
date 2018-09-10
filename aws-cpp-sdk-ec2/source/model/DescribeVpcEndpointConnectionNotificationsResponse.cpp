﻿/*
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
      m_nextToken = StringUtils::Trim(nextTokenNode.GetText().c_str());
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
