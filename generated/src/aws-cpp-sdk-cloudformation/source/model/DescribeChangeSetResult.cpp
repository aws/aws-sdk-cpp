/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeChangeSetResult.h>
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

DescribeChangeSetResult::DescribeChangeSetResult() : 
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_status(ChangeSetStatus::NOT_SET),
    m_includeNestedStacks(false)
{
}

DescribeChangeSetResult::DescribeChangeSetResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_status(ChangeSetStatus::NOT_SET),
    m_includeNestedStacks(false)
{
  *this = result;
}

DescribeChangeSetResult& DescribeChangeSetResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeChangeSetResult"))
  {
    resultNode = rootNode.FirstChild("DescribeChangeSetResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode changeSetNameNode = resultNode.FirstChild("ChangeSetName");
    if(!changeSetNameNode.IsNull())
    {
      m_changeSetName = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetNameNode.GetText());
    }
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetIdNode.GetText());
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
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeSetStatusMapper::GetChangeSetStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
    }
    XmlNode notificationARNsNode = resultNode.FirstChild("NotificationARNs");
    if(!notificationARNsNode.IsNull())
    {
      XmlNode notificationARNsMember = notificationARNsNode.FirstChild("member");
      while(!notificationARNsMember.IsNull())
      {
        m_notificationARNs.push_back(notificationARNsMember.GetText());
        notificationARNsMember = notificationARNsMember.NextNode("member");
      }

    }
    XmlNode rollbackConfigurationNode = resultNode.FirstChild("RollbackConfiguration");
    if(!rollbackConfigurationNode.IsNull())
    {
      m_rollbackConfiguration = rollbackConfigurationNode;
    }
    XmlNode capabilitiesNode = resultNode.FirstChild("Capabilities");
    if(!capabilitiesNode.IsNull())
    {
      XmlNode capabilitiesMember = capabilitiesNode.FirstChild("member");
      while(!capabilitiesMember.IsNull())
      {
        m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(StringUtils::Trim(capabilitiesMember.GetText().c_str())));
        capabilitiesMember = capabilitiesMember.NextNode("member");
      }

    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("member");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("member");
      }

    }
    XmlNode changesNode = resultNode.FirstChild("Changes");
    if(!changesNode.IsNull())
    {
      XmlNode changesMember = changesNode.FirstChild("member");
      while(!changesMember.IsNull())
      {
        m_changes.push_back(changesMember);
        changesMember = changesMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode includeNestedStacksNode = resultNode.FirstChild("IncludeNestedStacks");
    if(!includeNestedStacksNode.IsNull())
    {
      m_includeNestedStacks = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeNestedStacksNode.GetText()).c_str()).c_str());
    }
    XmlNode parentChangeSetIdNode = resultNode.FirstChild("ParentChangeSetId");
    if(!parentChangeSetIdNode.IsNull())
    {
      m_parentChangeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(parentChangeSetIdNode.GetText());
    }
    XmlNode rootChangeSetIdNode = resultNode.FirstChild("RootChangeSetId");
    if(!rootChangeSetIdNode.IsNull())
    {
      m_rootChangeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(rootChangeSetIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeChangeSetResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
