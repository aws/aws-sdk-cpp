/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CreateConfigurationTemplateRequest::CreateConfigurationTemplateRequest() : 
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConfigurationTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateConfigurationTemplate&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
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

  if(m_sourceConfigurationHasBeenSet)
  {
    m_sourceConfiguration.OutputToStream(ss, "SourceConfiguration");
  }

  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateConfigurationTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
