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

#include <aws/route53/model/ListHostedZonesByNameResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListHostedZonesByNameResult::ListHostedZonesByNameResult() : 
    m_isTruncated(false)
{
}

ListHostedZonesByNameResult::ListHostedZonesByNameResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListHostedZonesByNameResult& ListHostedZonesByNameResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZonesNode = resultNode.FirstChild("HostedZones");
    if(!hostedZonesNode.IsNull())
    {
      XmlNode hostedZonesMember = hostedZonesNode.FirstChild("HostedZone");
      while(!hostedZonesMember.IsNull())
      {
        m_hostedZones.push_back(hostedZonesMember);
        hostedZonesMember = hostedZonesMember.NextNode("HostedZone");
      }

    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = dNSNameNode.GetText();
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = hostedZoneIdNode.GetText();
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode nextDNSNameNode = resultNode.FirstChild("NextDNSName");
    if(!nextDNSNameNode.IsNull())
    {
      m_nextDNSName = nextDNSNameNode.GetText();
    }
    XmlNode nextHostedZoneIdNode = resultNode.FirstChild("NextHostedZoneId");
    if(!nextHostedZoneIdNode.IsNull())
    {
      m_nextHostedZoneId = nextHostedZoneIdNode.GetText();
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = maxItemsNode.GetText();
    }
  }

  return *this;
}
