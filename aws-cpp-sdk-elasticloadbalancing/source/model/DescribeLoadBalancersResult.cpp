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
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DescribeLoadBalancersResult::DescribeLoadBalancersResult()
{
}

DescribeLoadBalancersResult::DescribeLoadBalancersResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancersResult& DescribeLoadBalancersResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("DescribeLoadBalancersResult");

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerDescriptionsNode = resultNode.FirstChild("LoadBalancerDescriptions");
    while(!loadBalancerDescriptionsNode.IsNull())
    {
      m_loadBalancerDescriptions.push_back(loadBalancerDescriptionsNode);
      loadBalancerDescriptionsNode = loadBalancerDescriptionsNode.NextNode("LoadBalancerDescriptions");
    }

    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    m_nextMarker = StringUtils::Trim(nextMarkerNode.GetText().c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
