/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListDistributionTenants2020_05_31Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListDistributionTenants2020_05_31Result::ListDistributionTenants2020_05_31Result(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListDistributionTenants2020_05_31Result& ListDistributionTenants2020_05_31Result::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
      m_nextMarkerHasBeenSet = true;
    }
    XmlNode distributionTenantListNode = resultNode.FirstChild("DistributionTenantList");
    if(!distributionTenantListNode.IsNull())
    {
      XmlNode distributionTenantListMember = distributionTenantListNode.FirstChild("DistributionTenantSummary");
      m_distributionTenantListHasBeenSet = !distributionTenantListMember.IsNull();
      while(!distributionTenantListMember.IsNull())
      {
        m_distributionTenantList.push_back(distributionTenantListMember);
        distributionTenantListMember = distributionTenantListMember.NextNode("DistributionTenantSummary");
      }

      m_distributionTenantListHasBeenSet = true;
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
