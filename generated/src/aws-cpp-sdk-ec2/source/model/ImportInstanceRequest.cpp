﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ImportInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportInstance&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_launchSpecificationHasBeenSet)
  {
    m_launchSpecification.OutputToStream(ss, "LaunchSpecification");
  }

  if(m_diskImagesHasBeenSet)
  {
    unsigned diskImagesCount = 1;
    for(auto& item : m_diskImages)
    {
      item.OutputToStream(ss, "DiskImage.", diskImagesCount, "");
      diskImagesCount++;
    }
  }

  if(m_platformHasBeenSet)
  {
    ss << "Platform=" << StringUtils::URLEncode(PlatformValuesMapper::GetNameForPlatformValues(m_platform)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ImportInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
