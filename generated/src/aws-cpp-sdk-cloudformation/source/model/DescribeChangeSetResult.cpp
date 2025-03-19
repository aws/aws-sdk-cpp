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

DescribeChangeSetResult::DescribeChangeSetResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_changeSetNameHasBeenSet = true;
    }
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(changeSetIdNode.GetText());
      m_changeSetIdHasBeenSet = true;
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
      m_stackIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = Aws::Utils::Xml::DecodeEscapedXmlText(stackNameNode.GetText());
      m_stackNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      m_parametersHasBeenSet = !parametersMember.IsNull();
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

      m_parametersHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(executionStatusNode.GetText()).c_str()));
      m_executionStatusHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeSetStatusMapper::GetChangeSetStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode notificationARNsNode = resultNode.FirstChild("NotificationARNs");
    if(!notificationARNsNode.IsNull())
    {
      XmlNode notificationARNsMember = notificationARNsNode.FirstChild("member");
      m_notificationARNsHasBeenSet = !notificationARNsMember.IsNull();
      while(!notificationARNsMember.IsNull())
      {
        m_notificationARNs.push_back(notificationARNsMember.GetText());
        notificationARNsMember = notificationARNsMember.NextNode("member");
      }

      m_notificationARNsHasBeenSet = true;
    }
    XmlNode rollbackConfigurationNode = resultNode.FirstChild("RollbackConfiguration");
    if(!rollbackConfigurationNode.IsNull())
    {
      m_rollbackConfiguration = rollbackConfigurationNode;
      m_rollbackConfigurationHasBeenSet = true;
    }
    XmlNode capabilitiesNode = resultNode.FirstChild("Capabilities");
    if(!capabilitiesNode.IsNull())
    {
      XmlNode capabilitiesMember = capabilitiesNode.FirstChild("member");
      m_capabilitiesHasBeenSet = !capabilitiesMember.IsNull();
      while(!capabilitiesMember.IsNull())
      {
        m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(StringUtils::Trim(capabilitiesMember.GetText().c_str())));
        capabilitiesMember = capabilitiesMember.NextNode("member");
      }

      m_capabilitiesHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("member");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("member");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode changesNode = resultNode.FirstChild("Changes");
    if(!changesNode.IsNull())
    {
      XmlNode changesMember = changesNode.FirstChild("member");
      m_changesHasBeenSet = !changesMember.IsNull();
      while(!changesMember.IsNull())
      {
        m_changes.push_back(changesMember);
        changesMember = changesMember.NextNode("member");
      }

      m_changesHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
    XmlNode includeNestedStacksNode = resultNode.FirstChild("IncludeNestedStacks");
    if(!includeNestedStacksNode.IsNull())
    {
      m_includeNestedStacks = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeNestedStacksNode.GetText()).c_str()).c_str());
      m_includeNestedStacksHasBeenSet = true;
    }
    XmlNode parentChangeSetIdNode = resultNode.FirstChild("ParentChangeSetId");
    if(!parentChangeSetIdNode.IsNull())
    {
      m_parentChangeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(parentChangeSetIdNode.GetText());
      m_parentChangeSetIdHasBeenSet = true;
    }
    XmlNode rootChangeSetIdNode = resultNode.FirstChild("RootChangeSetId");
    if(!rootChangeSetIdNode.IsNull())
    {
      m_rootChangeSetId = Aws::Utils::Xml::DecodeEscapedXmlText(rootChangeSetIdNode.GetText());
      m_rootChangeSetIdHasBeenSet = true;
    }
    XmlNode onStackFailureNode = resultNode.FirstChild("OnStackFailure");
    if(!onStackFailureNode.IsNull())
    {
      m_onStackFailure = OnStackFailureMapper::GetOnStackFailureForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onStackFailureNode.GetText()).c_str()));
      m_onStackFailureHasBeenSet = true;
    }
    XmlNode importExistingResourcesNode = resultNode.FirstChild("ImportExistingResources");
    if(!importExistingResourcesNode.IsNull())
    {
      m_importExistingResources = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(importExistingResourcesNode.GetText()).c_str()).c_str());
      m_importExistingResourcesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeChangeSetResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
