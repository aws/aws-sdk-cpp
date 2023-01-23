/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeChangeSetHooksResult.h>
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

DescribeChangeSetHooksResult::DescribeChangeSetHooksResult() : 
    m_status(ChangeSetHooksStatus::NOT_SET)
{
}

DescribeChangeSetHooksResult::DescribeChangeSetHooksResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(ChangeSetHooksStatus::NOT_SET)
{
  *this = result;
}

DescribeChangeSetHooksResult& DescribeChangeSetHooksResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeChangeSetHooksResult"))
  {
    resultNode = rootNode.FirstChild("DescribeChangeSetHooksResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetIdNode.GetText());
    }
    XmlNode changeSetNameNode = resultNode.FirstChild("ChangeSetName");
    if(!changeSetNameNode.IsNull())
    {
      m_changeSetName = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetNameNode.GetText());
    }
    XmlNode hooksNode = resultNode.FirstChild("Hooks");
    if(!hooksNode.IsNull())
    {
      XmlNode hooksMember = hooksNode.FirstChild("member");
      while(!hooksMember.IsNull())
      {
        m_hooks.push_back(hooksMember);
        hooksMember = hooksMember.NextNode("member");
      }

    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeSetHooksStatusMapper::GetChangeSetHooksStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = Aws::Utils::Xml::DecodeEscapedXmlText(stackNameNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeChangeSetHooksResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
