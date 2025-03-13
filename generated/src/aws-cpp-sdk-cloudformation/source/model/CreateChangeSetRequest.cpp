/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CreateChangeSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

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

  if(m_resourceTypesHasBeenSet)
  {
    if (m_resourceTypes.empty())
    {
      ss << "ResourceTypes=&";
    }
    else
    {
      unsigned resourceTypesCount = 1;
      for(auto& item : m_resourceTypes)
      {
        ss << "ResourceTypes.member." << resourceTypesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        resourceTypesCount++;
      }
    }
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_rollbackConfigurationHasBeenSet)
  {
    m_rollbackConfiguration.OutputToStream(ss, "RollbackConfiguration");
  }

  if(m_notificationARNsHasBeenSet)
  {
    if (m_notificationARNs.empty())
    {
      ss << "NotificationARNs=&";
    }
    else
    {
      unsigned notificationARNsCount = 1;
      for(auto& item : m_notificationARNs)
      {
        ss << "NotificationARNs.member." << notificationARNsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        notificationARNsCount++;
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
    ss << "ChangeSetType=" << StringUtils::URLEncode(ChangeSetTypeMapper::GetNameForChangeSetType(m_changeSetType)) << "&";
  }

  if(m_resourcesToImportHasBeenSet)
  {
    if (m_resourcesToImport.empty())
    {
      ss << "ResourcesToImport=&";
    }
    else
    {
      unsigned resourcesToImportCount = 1;
      for(auto& item : m_resourcesToImport)
      {
        item.OutputToStream(ss, "ResourcesToImport.member.", resourcesToImportCount, "");
        resourcesToImportCount++;
      }
    }
  }

  if(m_includeNestedStacksHasBeenSet)
  {
    ss << "IncludeNestedStacks=" << std::boolalpha << m_includeNestedStacks << "&";
  }

  if(m_onStackFailureHasBeenSet)
  {
    ss << "OnStackFailure=" << StringUtils::URLEncode(OnStackFailureMapper::GetNameForOnStackFailure(m_onStackFailure)) << "&";
  }

  if(m_importExistingResourcesHasBeenSet)
  {
    ss << "ImportExistingResources=" << std::boolalpha << m_importExistingResources << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  CreateChangeSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
