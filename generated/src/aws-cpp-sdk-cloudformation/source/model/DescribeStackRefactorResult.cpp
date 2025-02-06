/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeStackRefactorResult.h>
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

DescribeStackRefactorResult::DescribeStackRefactorResult() : 
    m_executionStatus(StackRefactorExecutionStatus::NOT_SET),
    m_status(StackRefactorStatus::NOT_SET)
{
}

DescribeStackRefactorResult::DescribeStackRefactorResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : DescribeStackRefactorResult()
{
  *this = result;
}

DescribeStackRefactorResult& DescribeStackRefactorResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeStackRefactorResult"))
  {
    resultNode = rootNode.FirstChild("DescribeStackRefactorResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode stackRefactorIdNode = resultNode.FirstChild("StackRefactorId");
    if(!stackRefactorIdNode.IsNull())
    {
      m_stackRefactorId = Aws::Utils::Xml::DecodeEscapedXmlText(stackRefactorIdNode.GetText());
    }
    XmlNode stackIdsNode = resultNode.FirstChild("StackIds");
    if(!stackIdsNode.IsNull())
    {
      XmlNode stackIdsMember = stackIdsNode.FirstChild("member");
      while(!stackIdsMember.IsNull())
      {
        m_stackIds.push_back(stackIdsMember.GetText());
        stackIdsMember = stackIdsMember.NextNode("member");
      }

    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = StackRefactorExecutionStatusMapper::GetStackRefactorExecutionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode executionStatusReasonNode = resultNode.FirstChild("ExecutionStatusReason");
    if(!executionStatusReasonNode.IsNull())
    {
      m_executionStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusReasonNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackRefactorStatusMapper::GetStackRefactorStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeStackRefactorResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
