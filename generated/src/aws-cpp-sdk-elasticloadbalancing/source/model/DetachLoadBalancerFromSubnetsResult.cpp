/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsResult.h>
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

DetachLoadBalancerFromSubnetsResult::DetachLoadBalancerFromSubnetsResult()
{
}

DetachLoadBalancerFromSubnetsResult::DetachLoadBalancerFromSubnetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DetachLoadBalancerFromSubnetsResult& DetachLoadBalancerFromSubnetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DetachLoadBalancerFromSubnetsResult"))
  {
    resultNode = rootNode.FirstChild("DetachLoadBalancerFromSubnetsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("member");
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember.GetText());
        subnetsMember = subnetsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::DetachLoadBalancerFromSubnetsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
