/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/VerifyDnsConfiguration2020_05_31Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

VerifyDnsConfiguration2020_05_31Result::VerifyDnsConfiguration2020_05_31Result(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

VerifyDnsConfiguration2020_05_31Result& VerifyDnsConfiguration2020_05_31Result::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode dnsConfigurationListNode = resultNode.FirstChild("DnsConfigurationList");
    if(!dnsConfigurationListNode.IsNull())
    {
      XmlNode dnsConfigurationListMember = dnsConfigurationListNode.FirstChild("DnsConfiguration");
      m_dnsConfigurationListHasBeenSet = !dnsConfigurationListMember.IsNull();
      while(!dnsConfigurationListMember.IsNull())
      {
        m_dnsConfigurationList.push_back(dnsConfigurationListMember);
        dnsConfigurationListMember = dnsConfigurationListMember.NextNode("DnsConfiguration");
      }

      m_dnsConfigurationListHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
