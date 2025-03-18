/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/UpdateStackSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String UpdateStackSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateStackSet&";
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

  if(m_usePreviousTemplateHasBeenSet)
  {
    ss << "UsePreviousTemplate=" << std::boolalpha << m_usePreviousTemplate << "&";
  }

  if(m_parametersHasBeenSet)
  {
    if (m_parameters.empty())
    {
      ss << "Parameters=&";
    }
    else
    {
      unsigned parametersCount = 1;
      for(auto& item : m_parameters)
      {
        item.OutputToStream(ss, "Parameters.member.", parametersCount, "");
        parametersCount++;
      }
    }
  }

  if(m_capabilitiesHasBeenSet)
  {
    if (m_capabilities.empty())
    {
      ss << "Capabilities=&";
    }
    else
    {
      unsigned capabilitiesCount = 1;
      for(auto& item : m_capabilities)
      {
        ss << "Capabilities.member." << capabilitiesCount << "="
            << StringUtils::URLEncode(CapabilityMapper::GetNameForCapability(item)) << "&";
        capabilitiesCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_operationPreferencesHasBeenSet)
  {
    m_operationPreferences.OutputToStream(ss, "OperationPreferences");
  }

  if(m_administrationRoleARNHasBeenSet)
  {
    ss << "AdministrationRoleARN=" << StringUtils::URLEncode(m_administrationRoleARN.c_str()) << "&";
  }

  if(m_executionRoleNameHasBeenSet)
  {
    ss << "ExecutionRoleName=" << StringUtils::URLEncode(m_executionRoleName.c_str()) << "&";
  }

  if(m_deploymentTargetsHasBeenSet)
  {
    m_deploymentTargets.OutputToStream(ss, "DeploymentTargets");
  }

  if(m_permissionModelHasBeenSet)
  {
    ss << "PermissionModel=" << StringUtils::URLEncode(PermissionModelsMapper::GetNameForPermissionModels(m_permissionModel)) << "&";
  }

  if(m_autoDeploymentHasBeenSet)
  {
    m_autoDeployment.OutputToStream(ss, "AutoDeployment");
  }

  if(m_operationIdHasBeenSet)
  {
    ss << "OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_accountsHasBeenSet)
  {
    if (m_accounts.empty())
    {
      ss << "Accounts=&";
    }
    else
    {
      unsigned accountsCount = 1;
      for(auto& item : m_accounts)
      {
        ss << "Accounts.member." << accountsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        accountsCount++;
      }
    }
  }

  if(m_regionsHasBeenSet)
  {
    if (m_regions.empty())
    {
      ss << "Regions=&";
    }
    else
    {
      unsigned regionsCount = 1;
      for(auto& item : m_regions)
      {
        ss << "Regions.member." << regionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        regionsCount++;
      }
    }
  }

  if(m_callAsHasBeenSet)
  {
    ss << "CallAs=" << StringUtils::URLEncode(CallAsMapper::GetNameForCallAs(m_callAs)) << "&";
  }

  if(m_managedExecutionHasBeenSet)
  {
    m_managedExecution.OutputToStream(ss, "ManagedExecution");
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  UpdateStackSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
