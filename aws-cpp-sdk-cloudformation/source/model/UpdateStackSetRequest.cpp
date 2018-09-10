﻿/*
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

#include <aws/cloudformation/model/UpdateStackSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

UpdateStackSetRequest::UpdateStackSetRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false),
    m_usePreviousTemplate(false),
    m_usePreviousTemplateHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_operationPreferencesHasBeenSet(false),
    m_administrationRoleARNHasBeenSet(false),
    m_executionRoleNameHasBeenSet(false),
    m_operationId(Aws::Utils::UUID::RandomUUID()),
    m_operationIdHasBeenSet(true),
    m_accountsHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

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

  if(m_operationIdHasBeenSet)
  {
    ss << "OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_accountsHasBeenSet)
  {
    unsigned accountsCount = 1;
    for(auto& item : m_accounts)
    {
      ss << "Accounts.member." << accountsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      accountsCount++;
    }
  }

  if(m_regionsHasBeenSet)
  {
    unsigned regionsCount = 1;
    for(auto& item : m_regions)
    {
      ss << "Regions.member." << regionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      regionsCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  UpdateStackSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
