/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/TestDNSAnswerRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

TestDNSAnswerRequest::TestDNSAnswerRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_recordNameHasBeenSet(false),
    m_recordType(RRType::NOT_SET),
    m_recordTypeHasBeenSet(false),
    m_resolverIPHasBeenSet(false),
    m_eDNS0ClientSubnetIPHasBeenSet(false),
    m_eDNS0ClientSubnetMaskHasBeenSet(false)
{
}

Aws::String TestDNSAnswerRequest::SerializePayload() const
{
  return {};
}

void TestDNSAnswerRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_hostedZoneIdHasBeenSet)
    {
      ss << m_hostedZoneId;
      uri.AddQueryStringParameter("hostedzoneid", ss.str());
      ss.str("");
    }

    if(m_recordNameHasBeenSet)
    {
      ss << m_recordName;
      uri.AddQueryStringParameter("recordname", ss.str());
      ss.str("");
    }

    if(m_recordTypeHasBeenSet)
    {
      ss << RRTypeMapper::GetNameForRRType(m_recordType);
      uri.AddQueryStringParameter("recordtype", ss.str());
      ss.str("");
    }

    if(m_resolverIPHasBeenSet)
    {
      ss << m_resolverIP;
      uri.AddQueryStringParameter("resolverip", ss.str());
      ss.str("");
    }

    if(m_eDNS0ClientSubnetIPHasBeenSet)
    {
      ss << m_eDNS0ClientSubnetIP;
      uri.AddQueryStringParameter("edns0clientsubnetip", ss.str());
      ss.str("");
    }

    if(m_eDNS0ClientSubnetMaskHasBeenSet)
    {
      ss << m_eDNS0ClientSubnetMask;
      uri.AddQueryStringParameter("edns0clientsubnetmask", ss.str());
      ss.str("");
    }

}

