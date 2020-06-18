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

#include <aws/route53/model/ListHostedZonesByVPCResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListHostedZonesByVPCResult::ListHostedZonesByVPCResult()
{
}

ListHostedZonesByVPCResult::ListHostedZonesByVPCResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListHostedZonesByVPCResult& ListHostedZonesByVPCResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZoneSummariesNode = resultNode.FirstChild("HostedZoneSummaries");
    if(!hostedZoneSummariesNode.IsNull())
    {
      XmlNode hostedZoneSummariesMember = hostedZoneSummariesNode.FirstChild("HostedZoneSummary");
      while(!hostedZoneSummariesMember.IsNull())
      {
        m_hostedZoneSummaries.push_back(hostedZoneSummariesMember);
        hostedZoneSummariesMember = hostedZoneSummariesMember.NextNode("HostedZoneSummary");
      }

    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  return *this;
}
