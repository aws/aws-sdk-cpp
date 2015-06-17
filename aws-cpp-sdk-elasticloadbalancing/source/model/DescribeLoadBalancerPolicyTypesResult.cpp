/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeLoadBalancerPolicyTypesResult::DescribeLoadBalancerPolicyTypesResult()
{
}

DescribeLoadBalancerPolicyTypesResult::DescribeLoadBalancerPolicyTypesResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancerPolicyTypesResult& DescribeLoadBalancerPolicyTypesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeLoadBalancerPolicyTypesResult");

  if(!resultNode.IsNull())
  {
    XmlNode policyTypeDescriptionsNodeParent = resultNode.FirstChild("PolicyTypeDescriptions");
    XmlNode policyTypeDescriptionsNode = policyTypeDescriptionsNodeParent.FirstChild("member");
    while(!policyTypeDescriptionsNode.IsNull())
    {
      m_policyTypeDescriptions.push_back(policyTypeDescriptionsNode);
      policyTypeDescriptionsNode = policyTypeDescriptionsNode.NextNode("member");
    }

  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
