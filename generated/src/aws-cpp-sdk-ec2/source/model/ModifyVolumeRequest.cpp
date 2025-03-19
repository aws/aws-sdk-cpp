/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVolumeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

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
    ss << "VolumeType=" << StringUtils::URLEncode(VolumeTypeMapper::GetNameForVolumeType(m_volumeType)) << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_throughputHasBeenSet)
  {
    ss << "Throughput=" << m_throughput << "&";
  }

  if(m_multiAttachEnabledHasBeenSet)
  {
    ss << "MultiAttachEnabled=" << std::boolalpha << m_multiAttachEnabled << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVolumeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
