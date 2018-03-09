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

#include <aws/ec2/model/DeleteLaunchTemplateVersionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteLaunchTemplateVersionsRequest::DeleteLaunchTemplateVersionsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionsHasBeenSet(false)
{
}

Aws::String DeleteLaunchTemplateVersionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteLaunchTemplateVersions&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_launchTemplateIdHasBeenSet)
  {
    ss << "LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
    ss << "LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_versionsHasBeenSet)
  {
    unsigned versionsCount = 1;
    for(auto& item : m_versions)
    {
      ss << "LaunchTemplateVersion." << versionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      versionsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteLaunchTemplateVersionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
