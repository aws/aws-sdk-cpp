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
#include <aws/elasticbeanstalk/model/CreatePlatformVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CreatePlatformVersionRequest::CreatePlatformVersionRequest() : 
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_platformDefinitionBundleHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_optionSettingsHasBeenSet(false)
{
}

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
    unsigned optionSettingsCount = 1;
    for(auto& item : m_optionSettings)
    {
      item.OutputToStream(ss, "OptionSettings.member.", optionSettingsCount, "");
      optionSettingsCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreatePlatformVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
