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

#include <aws/route53/model/ListTrafficPolicyInstancesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficPolicyInstancesResult::ListTrafficPolicyInstancesResult() : 
    m_trafficPolicyInstanceTypeMarker(RRType::NOT_SET),
    m_isTruncated(false)
{
}

ListTrafficPolicyInstancesResult::ListTrafficPolicyInstancesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_trafficPolicyInstanceTypeMarker(RRType::NOT_SET),
    m_isTruncated(false)
{
  *this = result;
}

ListTrafficPolicyInstancesResult& ListTrafficPolicyInstancesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicyInstancesNode = resultNode.FirstChild("TrafficPolicyInstances");
    if(!trafficPolicyInstancesNode.IsNull())
    {
      XmlNode trafficPolicyInstancesMember = trafficPolicyInstancesNode.FirstChild("TrafficPolicyInstance");
      while(!trafficPolicyInstancesMember.IsNull())
      {
        m_trafficPolicyInstances.push_back(trafficPolicyInstancesMember);
        trafficPolicyInstancesMember = trafficPolicyInstancesMember.NextNode("TrafficPolicyInstance");
      }

    }
    XmlNode hostedZoneIdMarkerNode = resultNode.FirstChild("HostedZoneIdMarker");
    if(!hostedZoneIdMarkerNode.IsNull())
    {
      m_hostedZoneIdMarker = hostedZoneIdMarkerNode.GetText();
    }
    XmlNode trafficPolicyInstanceNameMarkerNode = resultNode.FirstChild("TrafficPolicyInstanceNameMarker");
    if(!trafficPolicyInstanceNameMarkerNode.IsNull())
    {
      m_trafficPolicyInstanceNameMarker = trafficPolicyInstanceNameMarkerNode.GetText();
    }
    XmlNode trafficPolicyInstanceTypeMarkerNode = resultNode.FirstChild("TrafficPolicyInstanceTypeMarker");
    if(!trafficPolicyInstanceTypeMarkerNode.IsNull())
    {
      m_trafficPolicyInstanceTypeMarker = RRTypeMapper::GetRRTypeForName(StringUtils::Trim(trafficPolicyInstanceTypeMarkerNode.GetText().c_str()).c_str());
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = maxItemsNode.GetText();
    }
  }

  return *this;
}
