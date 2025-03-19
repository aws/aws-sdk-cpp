/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreatePlatformVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

Aws::String CreatePlatformVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreatePlatformVersion&";
  if(m_platformNameHasBeenSet)
  {
    ss << "PlatformName=" << StringUtils::URLEncode(m_platformName.c_str()) << "&";
  }

  if(m_platformVersionHasBeenSet)
  {
    ss << "PlatformVersion=" << StringUtils::URLEncode(m_platformVersion.c_str()) << "&";
  }

  if(m_platformDefinitionBundleHasBeenSet)
  {
    m_platformDefinitionBundle.OutputToStream(ss, "PlatformDefinitionBundle");
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

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreatePlatformVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
