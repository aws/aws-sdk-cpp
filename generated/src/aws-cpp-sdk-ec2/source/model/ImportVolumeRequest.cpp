/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportVolumeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportVolumeRequest::ImportVolumeRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

Aws::String ImportVolumeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportVolume&";
  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_imageHasBeenSet)
  {
    m_image.OutputToStream(ss, "Image");
  }

  if(m_volumeHasBeenSet)
  {
    m_volume.OutputToStream(ss, "Volume");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ImportVolumeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
