/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/route53/model/ListTrafficPoliciesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficPoliciesResult::ListTrafficPoliciesResult() : 
    m_isTruncated(false)
{
}

ListTrafficPoliciesResult::ListTrafficPoliciesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListTrafficPoliciesResult& ListTrafficPoliciesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicySummariesNode = resultNode.FirstChild("TrafficPolicySummaries");
    if(!trafficPolicySummariesNode.IsNull())
    {
      XmlNode trafficPolicySummariesMember = trafficPolicySummariesNode.FirstChild("TrafficPolicySummary");
      while(!trafficPolicySummariesMember.IsNull())
      {
        m_trafficPolicySummaries.push_back(trafficPolicySummariesMember);
        trafficPolicySummariesMember = trafficPolicySummariesMember.NextNode("TrafficPolicySummary");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode trafficPolicyIdMarkerNode = resultNode.FirstChild("TrafficPolicyIdMarker");
    if(!trafficPolicyIdMarkerNode.IsNull())
    {
      m_trafficPolicyIdMarker = trafficPolicyIdMarkerNode.GetText();
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = maxItemsNode.GetText();
    }
  }

  return *this;
}
