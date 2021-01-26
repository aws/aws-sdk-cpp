/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
