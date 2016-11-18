﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

DescribeLoadBalancersResult::DescribeLoadBalancersResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeLoadBalancersResult& DescribeLoadBalancersResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "DescribeLoadBalancersResult")
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
      m_nextMarker = StringUtils::Trim(nextMarkerNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancing::Model::DescribeLoadBalancersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
