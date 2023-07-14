﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSpotFleetInstancesResponse.h>
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

DescribeSpotFleetInstancesResponse::DescribeSpotFleetInstancesResponse()
{
}

DescribeSpotFleetInstancesResponse::DescribeSpotFleetInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSpotFleetInstancesResponse& DescribeSpotFleetInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSpotFleetInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeSpotFleetInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode activeInstancesNode = resultNode.FirstChild("activeInstanceSet");
    if(!activeInstancesNode.IsNull())
    {
      XmlNode activeInstancesMember = activeInstancesNode.FirstChild("item");
      while(!activeInstancesMember.IsNull())
      {
        m_activeInstances.push_back(activeInstancesMember);
        activeInstancesMember = activeInstancesMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotFleetRequestIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSpotFleetInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
