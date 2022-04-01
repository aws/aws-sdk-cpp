/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesResult.h>
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

DescribeLoadBalancerPoliciesResult::DescribeLoadBalancerPoliciesResult()
{
}

DescribeLoadBalancerPoliciesResult::DescribeLoadBalancerPoliciesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancerPoliciesResult& DescribeLoadBalancerPoliciesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLoadBalancerPoliciesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLoadBalancerPoliciesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policyDescriptionsNode = resultNode.FirstChild("PolicyDescriptions");
    if(!policyDescriptionsNode.IsNull())
    {
      XmlNode policyDescriptionsMember = policyDescriptionsNode.FirstChild("member");
      while(!policyDescriptionsMember.IsNull())
      {
        m_policyDescriptions.push_back(policyDescriptionsMember);
        policyDescriptionsMember = policyDescriptionsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::DescribeLoadBalancerPoliciesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
