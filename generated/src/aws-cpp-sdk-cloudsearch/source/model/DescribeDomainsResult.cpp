/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DescribeDomainsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainsResult::DescribeDomainsResult()
{
}

DescribeDomainsResult::DescribeDomainsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeDomainsResult& DescribeDomainsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeDomainsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeDomainsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode domainStatusListNode = resultNode.FirstChild("DomainStatusList");
    if(!domainStatusListNode.IsNull())
    {
      XmlNode domainStatusListMember = domainStatusListNode.FirstChild("member");
      while(!domainStatusListMember.IsNull())
      {
        m_domainStatusList.push_back(domainStatusListMember);
        domainStatusListMember = domainStatusListMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::DescribeDomainsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
