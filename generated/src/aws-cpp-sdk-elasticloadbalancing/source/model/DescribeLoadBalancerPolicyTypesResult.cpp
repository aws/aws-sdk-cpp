/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesResult.h>
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

DescribeLoadBalancerPolicyTypesResult::DescribeLoadBalancerPolicyTypesResult()
{
}

DescribeLoadBalancerPolicyTypesResult::DescribeLoadBalancerPolicyTypesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancerPolicyTypesResult& DescribeLoadBalancerPolicyTypesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeLoadBalancerPolicyTypesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeLoadBalancerPolicyTypesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policyTypeDescriptionsNode = resultNode.FirstChild("PolicyTypeDescriptions");
    if(!policyTypeDescriptionsNode.IsNull())
    {
      XmlNode policyTypeDescriptionsMember = policyTypeDescriptionsNode.FirstChild("member");
      while(!policyTypeDescriptionsMember.IsNull())
      {
        m_policyTypeDescriptions.push_back(policyTypeDescriptionsMember);
        policyTypeDescriptionsMember = policyTypeDescriptionsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::DescribeLoadBalancerPolicyTypesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
