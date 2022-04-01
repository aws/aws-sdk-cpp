/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeLoadBalancersResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeLoadBalancersResult::DescribeLoadBalancersResult()
{
}

DescribeLoadBalancersResult::DescribeLoadBalancersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancersResult& DescribeLoadBalancersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLoadBalancersResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLoadBalancersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerDescriptionsNode = resultNode.FirstChild("LoadBalancerDescriptions");
    if(!loadBalancerDescriptionsNode.IsNull())
    {
      XmlNode loadBalancerDescriptionsMember = loadBalancerDescriptionsNode.FirstChild("member");
      while(!loadBalancerDescriptionsMember.IsNull())
      {
        m_loadBalancerDescriptions.push_back(loadBalancerDescriptionsMember);
        loadBalancerDescriptionsMember = loadBalancerDescriptionsMember.NextNode("member");
      }

    }
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::DescribeLoadBalancersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
