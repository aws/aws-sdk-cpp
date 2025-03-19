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

DescribeStackRefactorResult::DescribeStackRefactorResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_descriptionHasBeenSet = true;
    }
    XmlNode stackRefactorIdNode = resultNode.FirstChild("StackRefactorId");
    if(!stackRefactorIdNode.IsNull())
    {
      m_stackRefactorId = Aws::Utils::Xml::DecodeEscapedXmlText(stackRefactorIdNode.GetText());
      m_stackRefactorIdHasBeenSet = true;
    }
    XmlNode stackIdsNode = resultNode.FirstChild("StackIds");
    if(!stackIdsNode.IsNull())
    {
      XmlNode stackIdsMember = stackIdsNode.FirstChild("member");
      m_stackIdsHasBeenSet = !stackIdsMember.IsNull();
      while(!stackIdsMember.IsNull())
      {
        m_stackIds.push_back(stackIdsMember.GetText());
        stackIdsMember = stackIdsMember.NextNode("member");
      }

      m_stackIdsHasBeenSet = true;
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = StackRefactorExecutionStatusMapper::GetStackRefactorExecutionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusNode.GetText()).c_str()));
      m_executionStatusHasBeenSet = true;
    }
    XmlNode executionStatusReasonNode = resultNode.FirstChild("ExecutionStatusReason");
    if(!executionStatusReasonNode.IsNull())
    {
      m_executionStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusReasonNode.GetText());
      m_executionStatusReasonHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackRefactorStatusMapper::GetStackRefactorStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeStackRefactorResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
