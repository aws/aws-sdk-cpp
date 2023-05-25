/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

UpdateConfigurationTemplateRequest::UpdateConfigurationTemplateRequest() : 
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_optionsToRemoveHasBeenSet(false)
{
}

Aws::String UpdateConfigurationTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateConfigurationTemplate&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
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

  if(m_optionsToRemoveHasBeenSet)
  {
    unsigned optionsToRemoveCount = 1;
    for(auto& item : m_optionsToRemove)
    {
      item.OutputToStream(ss, "OptionsToRemove.member.", optionsToRemoveCount, "");
      optionsToRemoveCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateConfigurationTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
