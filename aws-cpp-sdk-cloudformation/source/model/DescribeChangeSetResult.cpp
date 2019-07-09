/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_status(ChangeSetStatus::NOT_SET)
{
}

DescribeChangeSetResult::DescribeChangeSetResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_status(ChangeSetStatus::NOT_SET)
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
      m_changeSetName = changeSetNameNode.GetText();
    }
    XmlNode changeSetIdNode = resultNode.FirstChild("ChangeSetId");
    if(!changeSetIdNode.IsNull())
    {
      m_changeSetId = changeSetIdNode.GetText();
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = stackIdNode.GetText();
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = stackNameNode.GetText();
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
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
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode executionStatusNode = resultNode.FirstChild("ExecutionStatus");
    if(!executionStatusNode.IsNull())
    {
      m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(StringUtils::Trim(executionStatusNode.GetText().c_str()).c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ChangeSetStatusMapper::GetChangeSetStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = statusReasonNode.GetText();
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
      m_nextToken = nextTokenNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeChangeSetResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
