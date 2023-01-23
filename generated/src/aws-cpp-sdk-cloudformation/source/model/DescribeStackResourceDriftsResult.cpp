/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackResourceDriftsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeStackResourceDriftsResult::DescribeStackResourceDriftsResult()
{
}

DescribeStackResourceDriftsResult::DescribeStackResourceDriftsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeStackResourceDriftsResult& DescribeStackResourceDriftsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeStackResourceDriftsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeStackResourceDriftsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stackResourceDriftsNode = resultNode.FirstChild("StackResourceDrifts");
    if(!stackResourceDriftsNode.IsNull())
    {
      XmlNode stackResourceDriftsMember = stackResourceDriftsNode.FirstChild("member");
      while(!stackResourceDriftsMember.IsNull())
      {
        m_stackResourceDrifts.push_back(stackResourceDriftsMember);
        stackResourceDriftsMember = stackResourceDriftsMember.NextNode("member");
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
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeStackResourceDriftsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
