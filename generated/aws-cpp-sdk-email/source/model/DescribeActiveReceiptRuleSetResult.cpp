/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DescribeActiveReceiptRuleSetResult.h>
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

DescribeActiveReceiptRuleSetResult::DescribeActiveReceiptRuleSetResult()
{
}

DescribeActiveReceiptRuleSetResult::DescribeActiveReceiptRuleSetResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeActiveReceiptRuleSetResult& DescribeActiveReceiptRuleSetResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeActiveReceiptRuleSetResult"))
  {
    resultNode = rootNode.FirstChild("DescribeActiveReceiptRuleSetResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode metadataNode = resultNode.FirstChild("Metadata");
    if(!metadataNode.IsNull())
    {
      m_metadata = metadataNode;
    }
    XmlNode rulesNode = resultNode.FirstChild("Rules");
    if(!rulesNode.IsNull())
    {
      XmlNode rulesMember = rulesNode.FirstChild("member");
      while(!rulesMember.IsNull())
      {
        m_rules.push_back(rulesMember);
        rulesMember = rulesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::DescribeActiveReceiptRuleSetResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
