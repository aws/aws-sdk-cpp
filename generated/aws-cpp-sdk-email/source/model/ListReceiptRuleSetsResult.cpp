/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListReceiptRuleSetsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListReceiptRuleSetsResult::ListReceiptRuleSetsResult()
{
}

ListReceiptRuleSetsResult::ListReceiptRuleSetsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListReceiptRuleSetsResult& ListReceiptRuleSetsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListReceiptRuleSetsResult"))
  {
    resultNode = rootNode.FirstChild("ListReceiptRuleSetsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ruleSetsNode = resultNode.FirstChild("RuleSets");
    if(!ruleSetsNode.IsNull())
    {
      XmlNode ruleSetsMember = ruleSetsNode.FirstChild("member");
      while(!ruleSetsMember.IsNull())
      {
        m_ruleSets.push_back(ruleSetsMember);
        ruleSetsMember = ruleSetsMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::ListReceiptRuleSetsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
