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

#include <aws/cloudformation/model/StackSetOperation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

StackSetOperation::StackSetOperation() : 
    m_operationIdHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_action(StackSetOperationAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_status(StackSetOperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_operationPreferencesHasBeenSet(false),
    m_retainStacks(false),
    m_retainStacksHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
}

StackSetOperation::StackSetOperation(const XmlNode& xmlNode) : 
    m_operationIdHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_action(StackSetOperationAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_status(StackSetOperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_operationPreferencesHasBeenSet(false),
    m_retainStacks(false),
    m_retainStacksHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetOperation& StackSetOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode operationIdNode = resultNode.FirstChild("OperationId");
    if(!operationIdNode.IsNull())
    {
      m_operationId = operationIdNode.GetText();
      m_operationIdHasBeenSet = true;
    }
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = stackSetIdNode.GetText();
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = StackSetOperationActionMapper::GetStackSetOperationActionForName(StringUtils::Trim(actionNode.GetText().c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetOperationStatusMapper::GetStackSetOperationStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode operationPreferencesNode = resultNode.FirstChild("OperationPreferences");
    if(!operationPreferencesNode.IsNull())
    {
      m_operationPreferences = operationPreferencesNode;
      m_operationPreferencesHasBeenSet = true;
    }
    XmlNode retainStacksNode = resultNode.FirstChild("RetainStacks");
    if(!retainStacksNode.IsNull())
    {
      m_retainStacks = StringUtils::ConvertToBool(StringUtils::Trim(retainStacksNode.GetText().c_str()).c_str());
      m_retainStacksHasBeenSet = true;
    }
    XmlNode administrationRoleARNNode = resultNode.FirstChild("AdministrationRoleARN");
    if(!administrationRoleARNNode.IsNull())
    {
      m_administrationRoleARN = administrationRoleARNNode.GetText();
      m_administrationRoleARNHasBeenSet = true;
    }
    XmlNode executionRoleNameNode = resultNode.FirstChild("ExecutionRoleName");
    if(!executionRoleNameNode.IsNull())
    {
      m_executionRoleName = executionRoleNameNode.GetText();
      m_executionRoleNameHasBeenSet = true;
    }
    XmlNode creationTimestampNode = resultNode.FirstChild("CreationTimestamp");
    if(!creationTimestampNode.IsNull())
    {
      m_creationTimestamp = DateTime(StringUtils::Trim(creationTimestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimestampHasBeenSet = true;
    }
    XmlNode endTimestampNode = resultNode.FirstChild("EndTimestamp");
    if(!endTimestampNode.IsNull())
    {
      m_endTimestamp = DateTime(StringUtils::Trim(endTimestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_endTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetOperation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_operationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }

  if(m_actionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Action=" << StackSetOperationActionMapper::GetNameForStackSetOperationAction(m_action) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackSetOperationStatusMapper::GetNameForStackSetOperationStatus(m_status) << "&";
  }

  if(m_operationPreferencesHasBeenSet)
  {
      Aws::StringStream operationPreferencesLocationAndMemberSs;
      operationPreferencesLocationAndMemberSs << location << index << locationValue << ".OperationPreferences";
      m_operationPreferences.OutputToStream(oStream, operationPreferencesLocationAndMemberSs.str().c_str());
  }

  if(m_retainStacksHasBeenSet)
  {
      oStream << location << index << locationValue << ".RetainStacks=" << std::boolalpha << m_retainStacks << "&";
  }

  if(m_administrationRoleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }

  if(m_executionRoleNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }

  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTimestamp=" << StringUtils::URLEncode(m_endTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void StackSetOperation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_operationIdHasBeenSet)
  {
      oStream << location << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }
  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }
  if(m_actionHasBeenSet)
  {
      oStream << location << ".Action=" << StackSetOperationActionMapper::GetNameForStackSetOperationAction(m_action) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackSetOperationStatusMapper::GetNameForStackSetOperationStatus(m_status) << "&";
  }
  if(m_operationPreferencesHasBeenSet)
  {
      Aws::String operationPreferencesLocationAndMember(location);
      operationPreferencesLocationAndMember += ".OperationPreferences";
      m_operationPreferences.OutputToStream(oStream, operationPreferencesLocationAndMember.c_str());
  }
  if(m_retainStacksHasBeenSet)
  {
      oStream << location << ".RetainStacks=" << std::boolalpha << m_retainStacks << "&";
  }
  if(m_administrationRoleARNHasBeenSet)
  {
      oStream << location << ".AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }
  if(m_executionRoleNameHasBeenSet)
  {
      oStream << location << ".ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }
  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimestampHasBeenSet)
  {
      oStream << location << ".EndTimestamp=" << StringUtils::URLEncode(m_endTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
