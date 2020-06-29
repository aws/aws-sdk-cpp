/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVolumeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVolumeRequest::ModifyVolumeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false)
{
}

Aws::String ModifyVolumeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVolume&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
    ss << "VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_sizeHasBeenSet)
  {
    ss << "Size=" << m_size << "&";
  }

  if(m_volumeTypeHasBeenSet)
  {
    ss << "VolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_volumeType) << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVolumeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
