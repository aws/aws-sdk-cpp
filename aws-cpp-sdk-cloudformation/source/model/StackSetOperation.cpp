/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_endTimestampHasBeenSet(false),
    m_deploymentTargetsHasBeenSet(false),
    m_stackSetDriftDetectionDetailsHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_statusDetailsHasBeenSet(false)
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
    m_endTimestampHasBeenSet(false),
    m_deploymentTargetsHasBeenSet(false),
    m_stackSetDriftDetectionDetailsHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_statusDetailsHasBeenSet(false)
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
      m_operationId = Aws::Utils::Xml::DecodeEscapedXmlText(operationIdNode.GetText());
      m_operationIdHasBeenSet = true;
    }
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = Aws::Utils::Xml::DecodeEscapedXmlText(stackSetIdNode.GetText());
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = StackSetOperationActionMapper::GetStackSetOperationActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetOperationStatusMapper::GetStackSetOperationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
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
      m_retainStacks = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(retainStacksNode.GetText()).c_str()).c_str());
      m_retainStacksHasBeenSet = true;
    }
    XmlNode administrationRoleARNNode = resultNode.FirstChild("AdministrationRoleARN");
    if(!administrationRoleARNNode.IsNull())
    {
      m_administrationRoleARN = Aws::Utils::Xml::DecodeEscapedXmlText(administrationRoleARNNode.GetText());
      m_administrationRoleARNHasBeenSet = true;
    }
    XmlNode executionRoleNameNode = resultNode.FirstChild("ExecutionRoleName");
    if(!executionRoleNameNode.IsNull())
    {
      m_executionRoleName = Aws::Utils::Xml::DecodeEscapedXmlText(executionRoleNameNode.GetText());
      m_executionRoleNameHasBeenSet = true;
    }
    XmlNode creationTimestampNode = resultNode.FirstChild("CreationTimestamp");
    if(!creationTimestampNode.IsNull())
    {
      m_creationTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimestampHasBeenSet = true;
    }
    XmlNode endTimestampNode = resultNode.FirstChild("EndTimestamp");
    if(!endTimestampNode.IsNull())
    {
      m_endTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimestampHasBeenSet = true;
    }
    XmlNode deploymentTargetsNode = resultNode.FirstChild("DeploymentTargets");
    if(!deploymentTargetsNode.IsNull())
    {
      m_deploymentTargets = deploymentTargetsNode;
      m_deploymentTargetsHasBeenSet = true;
    }
    XmlNode stackSetDriftDetectionDetailsNode = resultNode.FirstChild("StackSetDriftDetectionDetails");
    if(!stackSetDriftDetectionDetailsNode.IsNull())
    {
      m_stackSetDriftDetectionDetails = stackSetDriftDetectionDetailsNode;
      m_stackSetDriftDetectionDetailsHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode statusDetailsNode = resultNode.FirstChild("StatusDetails");
    if(!statusDetailsNode.IsNull())
    {
      m_statusDetails = statusDetailsNode;
      m_statusDetailsHasBeenSet = true;
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
      oStream << location << index << locationValue << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTimestamp=" << StringUtils::URLEncode(m_endTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deploymentTargetsHasBeenSet)
  {
      Aws::StringStream deploymentTargetsLocationAndMemberSs;
      deploymentTargetsLocationAndMemberSs << location << index << locationValue << ".DeploymentTargets";
      m_deploymentTargets.OutputToStream(oStream, deploymentTargetsLocationAndMemberSs.str().c_str());
  }

  if(m_stackSetDriftDetectionDetailsHasBeenSet)
  {
      Aws::StringStream stackSetDriftDetectionDetailsLocationAndMemberSs;
      stackSetDriftDetectionDetailsLocationAndMemberSs << location << index << locationValue << ".StackSetDriftDetectionDetails";
      m_stackSetDriftDetectionDetails.OutputToStream(oStream, stackSetDriftDetectionDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_statusDetailsHasBeenSet)
  {
      Aws::StringStream statusDetailsLocationAndMemberSs;
      statusDetailsLocationAndMemberSs << location << index << locationValue << ".StatusDetails";
      m_statusDetails.OutputToStream(oStream, statusDetailsLocationAndMemberSs.str().c_str());
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
      oStream << location << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimestampHasBeenSet)
  {
      oStream << location << ".EndTimestamp=" << StringUtils::URLEncode(m_endTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deploymentTargetsHasBeenSet)
  {
      Aws::String deploymentTargetsLocationAndMember(location);
      deploymentTargetsLocationAndMember += ".DeploymentTargets";
      m_deploymentTargets.OutputToStream(oStream, deploymentTargetsLocationAndMember.c_str());
  }
  if(m_stackSetDriftDetectionDetailsHasBeenSet)
  {
      Aws::String stackSetDriftDetectionDetailsLocationAndMember(location);
      stackSetDriftDetectionDetailsLocationAndMember += ".StackSetDriftDetectionDetails";
      m_stackSetDriftDetectionDetails.OutputToStream(oStream, stackSetDriftDetectionDetailsLocationAndMember.c_str());
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_statusDetailsHasBeenSet)
  {
      Aws::String statusDetailsLocationAndMember(location);
      statusDetailsLocationAndMember += ".StatusDetails";
      m_statusDetails.OutputToStream(oStream, statusDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
