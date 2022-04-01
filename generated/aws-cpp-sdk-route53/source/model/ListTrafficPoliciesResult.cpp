/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
    }
    XmlNode trafficPolicyIdMarkerNode = resultNode.FirstChild("TrafficPolicyIdMarker");
    if(!trafficPolicyIdMarkerNode.IsNull())
    {
      m_trafficPolicyIdMarker = Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyIdMarkerNode.GetText());
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
    }
  }

  return *this;
}
