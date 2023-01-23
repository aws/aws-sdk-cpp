/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetSummary.h>
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

StackSetSummary::StackSetSummary() : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_autoDeploymentHasBeenSet(false),
    m_permissionModel(PermissionModels::NOT_SET),
    m_permissionModelHasBeenSet(false),
    m_driftStatus(StackDriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_lastDriftCheckTimestampHasBeenSet(false),
    m_managedExecutionHasBeenSet(false)
{
}

StackSetSummary::StackSetSummary(const XmlNode& xmlNode) : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_autoDeploymentHasBeenSet(false),
    m_permissionModel(PermissionModels::NOT_SET),
    m_permissionModelHasBeenSet(false),
    m_driftStatus(StackDriftStatus::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_lastDriftCheckTimestampHasBeenSet(false),
    m_managedExecutionHasBeenSet(false)
{
  *this = xmlNode;
}

StackSetSummary& StackSetSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackSetNameNode = resultNode.FirstChild("StackSetName");
    if(!stackSetNameNode.IsNull())
    {
      m_stackSetName = Aws::Utils::Xml::DecodeEscapedXmlText(stackSetNameNode.GetText());
      m_stackSetNameHasBeenSet = true;
    }
    XmlNode stackSetIdNode = resultNode.FirstChild("StackSetId");
    if(!stackSetIdNode.IsNull())
    {
      m_stackSetId = Aws::Utils::Xml::DecodeEscapedXmlText(stackSetIdNode.GetText());
      m_stackSetIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StackSetStatusMapper::GetStackSetStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode autoDeploymentNode = resultNode.FirstChild("AutoDeployment");
    if(!autoDeploymentNode.IsNull())
    {
      m_autoDeployment = autoDeploymentNode;
      m_autoDeploymentHasBeenSet = true;
    }
    XmlNode permissionModelNode = resultNode.FirstChild("PermissionModel");
    if(!permissionModelNode.IsNull())
    {
      m_permissionModel = PermissionModelsMapper::GetPermissionModelsForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionModelNode.GetText()).c_str()).c_str());
      m_permissionModelHasBeenSet = true;
    }
    XmlNode driftStatusNode = resultNode.FirstChild("DriftStatus");
    if(!driftStatusNode.IsNull())
    {
      m_driftStatus = StackDriftStatusMapper::GetStackDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(driftStatusNode.GetText()).c_str()).c_str());
      m_driftStatusHasBeenSet = true;
    }
    XmlNode lastDriftCheckTimestampNode = resultNode.FirstChild("LastDriftCheckTimestamp");
    if(!lastDriftCheckTimestampNode.IsNull())
    {
      m_lastDriftCheckTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastDriftCheckTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastDriftCheckTimestampHasBeenSet = true;
    }
    XmlNode managedExecutionNode = resultNode.FirstChild("ManagedExecution");
    if(!managedExecutionNode.IsNull())
    {
      m_managedExecution = managedExecutionNode;
      m_managedExecutionHasBeenSet = true;
    }
  }

  return *this;
}

void StackSetSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }

  if(m_autoDeploymentHasBeenSet)
  {
      Aws::StringStream autoDeploymentLocationAndMemberSs;
      autoDeploymentLocationAndMemberSs << location << index << locationValue << ".AutoDeployment";
      m_autoDeployment.OutputToStream(oStream, autoDeploymentLocationAndMemberSs.str().c_str());
  }

  if(m_permissionModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".PermissionModel=" << PermissionModelsMapper::GetNameForPermissionModels(m_permissionModel) << "&";
  }

  if(m_driftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_driftStatus) << "&";
  }

  if(m_lastDriftCheckTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastDriftCheckTimestamp=" << StringUtils::URLEncode(m_lastDriftCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_managedExecutionHasBeenSet)
  {
      Aws::StringStream managedExecutionLocationAndMemberSs;
      managedExecutionLocationAndMemberSs << location << index << locationValue << ".ManagedExecution";
      m_managedExecution.OutputToStream(oStream, managedExecutionLocationAndMemberSs.str().c_str());
  }

}

void StackSetSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackSetNameHasBeenSet)
  {
      oStream << location << ".StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }
  if(m_stackSetIdHasBeenSet)
  {
      oStream << location << ".StackSetId=" << StringUtils::URLEncode(m_stackSetId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }
  if(m_autoDeploymentHasBeenSet)
  {
      Aws::String autoDeploymentLocationAndMember(location);
      autoDeploymentLocationAndMember += ".AutoDeployment";
      m_autoDeployment.OutputToStream(oStream, autoDeploymentLocationAndMember.c_str());
  }
  if(m_permissionModelHasBeenSet)
  {
      oStream << location << ".PermissionModel=" << PermissionModelsMapper::GetNameForPermissionModels(m_permissionModel) << "&";
  }
  if(m_driftStatusHasBeenSet)
  {
      oStream << location << ".DriftStatus=" << StackDriftStatusMapper::GetNameForStackDriftStatus(m_driftStatus) << "&";
  }
  if(m_lastDriftCheckTimestampHasBeenSet)
  {
      oStream << location << ".LastDriftCheckTimestamp=" << StringUtils::URLEncode(m_lastDriftCheckTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_managedExecutionHasBeenSet)
  {
      Aws::String managedExecutionLocationAndMember(location);
      managedExecutionLocationAndMember += ".ManagedExecution";
      m_managedExecution.OutputToStream(oStream, managedExecutionLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
