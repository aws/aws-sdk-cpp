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
#include <aws/ec2/model/ImportVolumeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportVolumeRequest::ImportVolumeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

Aws::String ImportVolumeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportVolume&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_imageHasBeenSet)
  {
    m_image.OutputToStream(ss, "Image");
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_volumeHasBeenSet)
  {
    m_volume.OutputToStream(ss, "Volume");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

