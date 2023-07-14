/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListQueryLoggingConfigsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListQueryLoggingConfigsResult::ListQueryLoggingConfigsResult()
{
}

ListQueryLoggingConfigsResult::ListQueryLoggingConfigsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListQueryLoggingConfigsResult& ListQueryLoggingConfigsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode queryLoggingConfigsNode = resultNode.FirstChild("QueryLoggingConfigs");
    if(!queryLoggingConfigsNode.IsNull())
    {
      XmlNode queryLoggingConfigsMember = queryLoggingConfigsNode.FirstChild("QueryLoggingConfig");
      while(!queryLoggingConfigsMember.IsNull())
      {
        m_queryLoggingConfigs.push_back(queryLoggingConfigsMember);
        queryLoggingConfigsMember = queryLoggingConfigsMember.NextNode("QueryLoggingConfig");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  return *this;
}
