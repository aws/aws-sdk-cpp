/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttachVolumeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AttachVolumeRequest::AttachVolumeRequest() : 
    m_deviceHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AttachVolumeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AttachVolume&";
  if(m_deviceHasBeenSet)
  {
    ss << "Device=" << StringUtils::URLEncode(m_device.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
    ss << "VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AttachVolumeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
