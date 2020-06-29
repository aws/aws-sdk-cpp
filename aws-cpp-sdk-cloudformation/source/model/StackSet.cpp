/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSet.h>
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

StackSet::StackSet() : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stackSetARNHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_stackSetDriftDetectionDetailsHasBeenSet(false),
    m_autoDeploymentHasBeenSet(false),
    m_permissionModel(PermissionModels::NOT_SET),
    m_permissionModelHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false)
{
}

StackSet::StackSet(const XmlNode& xmlNode) : 
    m_stackSetNameHasBeenSet(false),
    m_stackSetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stackSetARNHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_stackSetDriftDetectionDetailsHasBeenSet(false),
    m_autoDeploymentHasBeenSet(false),
    m_permissionModel(PermissionModels::NOT_SET),
    m_permissionModelHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false)
{
  *this = xmlNode;
}

StackSet& StackSet::operator =(const XmlNode& xmlNode)
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
    XmlNode templateBodyNode = resultNode.FirstChild("TemplateBody");
    if(!templateBodyNode.IsNull())
    {
      m_templateBody = Aws::Utils::Xml::DecodeEscapedXmlText(templateBodyNode.GetText());
      m_templateBodyHasBeenSet = true;
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

      m_parametersHasBeenSet = true;
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

      m_capabilitiesHasBeenSet = true;
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

      m_tagsHasBeenSet = true;
    }
    XmlNode stackSetARNNode = resultNode.FirstChild("StackSetARN");
    if(!stackSetARNNode.IsNull())
    {
      m_stackSetARN = Aws::Utils::Xml::DecodeEscapedXmlText(stackSetARNNode.GetText());
      m_stackSetARNHasBeenSet = true;
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
    XmlNode stackSetDriftDetectionDetailsNode = resultNode.FirstChild("StackSetDriftDetectionDetails");
    if(!stackSetDriftDetectionDetailsNode.IsNull())
    {
      m_stackSetDriftDetectionDetails = stackSetDriftDetectionDetailsNode;
      m_stackSetDriftDetectionDetailsHasBeenSet = true;
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
    XmlNode organizationalUnitIdsNode = resultNode.FirstChild("OrganizationalUnitIds");
    if(!organizationalUnitIdsNode.IsNull())
    {
      XmlNode organizationalUnitIdsMember = organizationalUnitIdsNode.FirstChild("member");
      while(!organizationalUnitIdsMember.IsNull())
      {
        m_organizationalUnitIds.push_back(organizationalUnitIdsMember.GetText());
        organizationalUnitIdsMember = organizationalUnitIdsMember.NextNode("member");
      }

      m_organizationalUnitIdsHasBeenSet = true;
    }
  }

  return *this;
}

void StackSet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_templateBodyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location << index << locationValue << ".Parameters.member." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }

  if(m_capabilitiesHasBeenSet)
  {
      unsigned capabilitiesIdx = 1;
      for(auto& item : m_capabilities)
      {
        oStream << location << index << locationValue << ".Capabilities.member." << capabilitiesIdx++ << "=" << CapabilityMapper::GetNameForCapability(item) << "&";
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags.member." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_stackSetARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackSetARN=" << StringUtils::URLEncode(m_stackSetARN.c_str()) << "&";
  }

  if(m_administrationRoleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }

  if(m_executionRoleNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }

  if(m_stackSetDriftDetectionDetailsHasBeenSet)
  {
      Aws::StringStream stackSetDriftDetectionDetailsLocationAndMemberSs;
      stackSetDriftDetectionDetailsLocationAndMemberSs << location << index << locationValue << ".StackSetDriftDetectionDetails";
      m_stackSetDriftDetectionDetails.OutputToStream(oStream, stackSetDriftDetectionDetailsLocationAndMemberSs.str().c_str());
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

  if(m_organizationalUnitIdsHasBeenSet)
  {
      unsigned organizationalUnitIdsIdx = 1;
      for(auto& item : m_organizationalUnitIds)
      {
        oStream << location << index << locationValue << ".OrganizationalUnitIds.member." << organizationalUnitIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void StackSet::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_templateBodyHasBeenSet)
  {
      oStream << location << ".TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location <<  ".Parameters.member." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }
  if(m_capabilitiesHasBeenSet)
  {
      unsigned capabilitiesIdx = 1;
      for(auto& item : m_capabilities)
      {
        oStream << location << ".Capabilities.member." << capabilitiesIdx++ << "=" << CapabilityMapper::GetNameForCapability(item) << "&";
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tags.member." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_stackSetARNHasBeenSet)
  {
      oStream << location << ".StackSetARN=" << StringUtils::URLEncode(m_stackSetARN.c_str()) << "&";
  }
  if(m_administrationRoleARNHasBeenSet)
  {
      oStream << location << ".AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }
  if(m_executionRoleNameHasBeenSet)
  {
      oStream << location << ".ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }
  if(m_stackSetDriftDetectionDetailsHasBeenSet)
  {
      Aws::String stackSetDriftDetectionDetailsLocationAndMember(location);
      stackSetDriftDetectionDetailsLocationAndMember += ".StackSetDriftDetectionDetails";
      m_stackSetDriftDetectionDetails.OutputToStream(oStream, stackSetDriftDetectionDetailsLocationAndMember.c_str());
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
  if(m_organizationalUnitIdsHasBeenSet)
  {
      unsigned organizationalUnitIdsIdx = 1;
      for(auto& item : m_organizationalUnitIds)
      {
        oStream << location << ".OrganizationalUnitIds.member." << organizationalUnitIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
