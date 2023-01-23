/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsResult.h>
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

AttachLoadBalancerToSubnetsResult::AttachLoadBalancerToSubnetsResult()
{
}

AttachLoadBalancerToSubnetsResult::AttachLoadBalancerToSubnetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AttachLoadBalancerToSubnetsResult& AttachLoadBalancerToSubnetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AttachLoadBalancerToSubnetsResult"))
  {
    resultNode = rootNode.FirstChild("AttachLoadBalancerToSubnetsResult");
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
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::AttachLoadBalancerToSubnetsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
