﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateLoadBalancerResult.h>
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

CreateLoadBalancerResult::CreateLoadBalancerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateLoadBalancerResult& CreateLoadBalancerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateLoadBalancerResult"))
  {
    resultNode = rootNode.FirstChild("CreateLoadBalancerResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancersNode = resultNode.FirstChild("LoadBalancers");
    if(!loadBalancersNode.IsNull())
    {
      XmlNode loadBalancersMember = loadBalancersNode.FirstChild("member");
      m_loadBalancersHasBeenSet = !loadBalancersMember.IsNull();
      while(!loadBalancersMember.IsNull())
      {
        m_loadBalancers.push_back(loadBalancersMember);
        loadBalancersMember = loadBalancersMember.NextNode("member");
      }

      m_loadBalancersHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::CreateLoadBalancerResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
