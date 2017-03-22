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
