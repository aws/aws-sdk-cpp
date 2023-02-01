/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableFastLaunchRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

EnableFastLaunchRequest::EnableFastLaunchRequest() : 
    m_imageIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_snapshotConfigurationHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_maxParallelLaunches(0),
    m_maxParallelLaunchesHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String EnableFastLaunchRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableFastLaunch&";
  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
    ss << "ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_snapshotConfigurationHasBeenSet)
  {
    m_snapshotConfiguration.OutputToStream(ss, "SnapshotConfiguration");
  }

  if(m_launchTemplateHasBeenSet)
  {
    m_launchTemplate.OutputToStream(ss, "LaunchTemplate");
  }

  if(m_maxParallelLaunchesHasBeenSet)
  {
    ss << "MaxParallelLaunches=" << m_maxParallelLaunches << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableFastLaunchRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
