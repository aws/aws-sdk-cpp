/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

Aws::String ValidateConfigurationSettingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ValidateConfigurationSettings&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_optionSettingsHasBeenSet)
  {
    if (m_optionSettings.empty())
    {
      ss << "OptionSettings=&";
    }
    else
    {
      unsigned optionSettingsCount = 1;
      for(auto& item : m_optionSettings)
      {
        item.OutputToStream(ss, "OptionSettings.member.", optionSettingsCount, "");
        optionSettingsCount++;
      }
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  ValidateConfigurationSettingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
