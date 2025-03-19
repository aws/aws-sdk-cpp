/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeLoadBalancerTargetGroupsResult.h>
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

DescribeLoadBalancerTargetGroupsResult::DescribeLoadBalancerTargetGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancerTargetGroupsResult& DescribeLoadBalancerTargetGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLoadBalancerTargetGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLoadBalancerTargetGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerTargetGroupsNode = resultNode.FirstChild("LoadBalancerTargetGroups");
    if(!loadBalancerTargetGroupsNode.IsNull())
    {
      XmlNode loadBalancerTargetGroupsMember = loadBalancerTargetGroupsNode.FirstChild("member");
      m_loadBalancerTargetGroupsHasBeenSet = !loadBalancerTargetGroupsMember.IsNull();
      while(!loadBalancerTargetGroupsMember.IsNull())
      {
        m_loadBalancerTargetGroups.push_back(loadBalancerTargetGroupsMember);
        loadBalancerTargetGroupsMember = loadBalancerTargetGroupsMember.NextNode("member");
      }

      m_loadBalancerTargetGroupsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeLoadBalancerTargetGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
