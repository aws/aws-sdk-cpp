/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CreateStackSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

CreateStackSetRequest::CreateStackSetRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_permissionModel(PermissionModels::NOT_SET),
    m_permissionModelHasBeenSet(false),
    m_autoDeploymentHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateStackSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateStackSet&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_templateBodyHasBeenSet)
  {
    ss << "TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }

  if(m_templateURLHasBeenSet)
  {
    ss << "TemplateURL=" << StringUtils::URLEncode(m_templateURL.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
    unsigned parametersCount = 1;
    for(auto& item : m_parameters)
    {
      item.OutputToStream(ss, "Parameters.member.", parametersCount, "");
      parametersCount++;
    }
  }

  if(m_capabilitiesHasBeenSet)
  {
    unsigned capabilitiesCount = 1;
    for(auto& item : m_capabilities)
    {
      ss << "Capabilities.member." << capabilitiesCount << "="
          << StringUtils::URLEncode(CapabilityMapper::GetNameForCapability(item).c_str()) << "&";
      capabilitiesCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  if(m_administrationRoleARNHasBeenSet)
  {
    ss << "AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }

  if(m_executionRoleNameHasBeenSet)
  {
    ss << "ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }

  if(m_permissionModelHasBeenSet)
  {
    ss << "PermissionModel=" << PermissionModelsMapper::GetNameForPermissionModels(m_permissionModel) << "&";
  }

  if(m_autoDeploymentHasBeenSet)
  {
    m_autoDeployment.OutputToStream(ss, "AutoDeployment");
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  CreateStackSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
