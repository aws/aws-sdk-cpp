/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeleteLaunchConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest() : 
    m_launchConfigurationNameHasBeenSet(false)
{
}

Aws::String DeleteLaunchConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteLaunchConfiguration&";
  if(m_launchConfigurationNameHasBeenSet)
  {
    ss << "LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DeleteLaunchConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
