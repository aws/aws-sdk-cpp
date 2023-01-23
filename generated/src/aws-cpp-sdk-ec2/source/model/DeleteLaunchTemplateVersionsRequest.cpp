/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
