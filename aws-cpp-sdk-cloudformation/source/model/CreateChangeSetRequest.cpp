/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

CreateChangeSetRequest::CreateChangeSetRequest() : 
    m_stackNameHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false),
    m_usePreviousTemplate(false),
    m_usePreviousTemplateHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_notificationARNsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_changeSetType(ChangeSetType::NOT_SET),
    m_changeSetTypeHasBeenSet(false)
{
}

Aws::String CreateChangeSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateChangeSet&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
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
    ss << "UsePreviousTemplate=" << m_usePreviousTemplate << "&";
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

  if(m_resourceTypesHasBeenSet)
  {
    unsigned resourceTypesCount = 1;
    for(auto& item : m_resourceTypes)
    {
      ss << "ResourceTypes.member." << resourceTypesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourceTypesCount++;
    }
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_notificationARNsHasBeenSet)
  {
    unsigned notificationARNsCount = 1;
    for(auto& item : m_notificationARNs)
    {
      ss << "NotificationARNs.member." << notificationARNsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      notificationARNsCount++;
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

  if(m_changeSetNameHasBeenSet)
  {
    ss << "ChangeSetName=" << StringUtils::URLEncode(m_changeSetName.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_changeSetTypeHasBeenSet)
  {
    ss << "ChangeSetType=" << ChangeSetTypeMapper::GetNameForChangeSetType(m_changeSetType) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}

