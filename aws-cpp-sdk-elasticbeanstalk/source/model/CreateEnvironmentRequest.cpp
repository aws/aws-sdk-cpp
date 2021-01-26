/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CreateEnvironmentRequest::CreateEnvironmentRequest() : 
    m_applicationNameHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cNAMEPrefixHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_optionsToRemoveHasBeenSet(false),
    m_operationsRoleHasBeenSet(false)
{
}

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateEnvironment&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_cNAMEPrefixHasBeenSet)
  {
    ss << "CNAMEPrefix=" << StringUtils::URLEncode(m_cNAMEPrefix.c_str()) << "&";
  }

  if(m_tierHasBeenSet)
  {
    m_tier.OutputToStream(ss, "Tier");
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

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_solutionStackNameHasBeenSet)
  {
    ss << "SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }

  if(m_platformArnHasBeenSet)
  {
    ss << "PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_optionSettingsHasBeenSet)
  {
    unsigned optionSettingsCount = 1;
    for(auto& item : m_optionSettings)
    {
      item.OutputToStream(ss, "OptionSettings.member.", optionSettingsCount, "");
      optionSettingsCount++;
    }
  }

  if(m_optionsToRemoveHasBeenSet)
  {
    unsigned optionsToRemoveCount = 1;
    for(auto& item : m_optionsToRemove)
    {
      item.OutputToStream(ss, "OptionsToRemove.member.", optionsToRemoveCount, "");
      optionsToRemoveCount++;
    }
  }

  if(m_operationsRoleHasBeenSet)
  {
    ss << "OperationsRole=" << StringUtils::URLEncode(m_operationsRole.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateEnvironmentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
