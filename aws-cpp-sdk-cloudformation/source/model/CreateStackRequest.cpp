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
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

CreateStackRequest::CreateStackRequest() : 
    m_stackNameHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_disableRollback(false),
    m_disableRollbackHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false),
    m_notificationARNsHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_onFailure(OnFailure::NOT_SET),
    m_onFailureHasBeenSet(false),
    m_stackPolicyBodyHasBeenSet(false),
    m_stackPolicyURLHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateStackRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateStack&";
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

  if(m_parametersHasBeenSet)
  {
    unsigned parametersCount = 1;
    for(auto& item : m_parameters)
    {
      item.OutputToStream(ss, "Parameters.member.", parametersCount, "");
      parametersCount++;
    }
  }

  if(m_disableRollbackHasBeenSet)
  {
    ss << "DisableRollback=" << m_disableRollback << "&";
  }

  if(m_timeoutInMinutesHasBeenSet)
  {
    ss << "TimeoutInMinutes=" << m_timeoutInMinutes << "&";
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

  if(m_onFailureHasBeenSet)
  {
    ss << "OnFailure=" << OnFailureMapper::GetNameForOnFailure(m_onFailure) << "&";
  }

  if(m_stackPolicyBodyHasBeenSet)
  {
    ss << "StackPolicyBody=" << StringUtils::URLEncode(m_stackPolicyBody.c_str()) << "&";
  }

  if(m_stackPolicyURLHasBeenSet)
  {
    ss << "StackPolicyURL=" << StringUtils::URLEncode(m_stackPolicyURL.c_str()) << "&";
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

  ss << "Version=2010-05-15";
  return ss.str();
}

