/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancerAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeLoadBalancerAttributesResult::DescribeLoadBalancerAttributesResult()
{
}

DescribeLoadBalancerAttributesResult::DescribeLoadBalancerAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancerAttributesResult& DescribeLoadBalancerAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLoadBalancerAttributesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLoadBalancerAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode attributesNode = resultNode.FirstChild("Attributes");
    if(!attributesNode.IsNull())
    {
      XmlNode attributesMember = attributesNode.FirstChild("member");
      while(!attributesMember.IsNull())
      {
        m_attributes.push_back(attributesMember);
        attributesMember = attributesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::DescribeLoadBalancerAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
