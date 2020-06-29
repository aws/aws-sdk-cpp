/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVolumeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVolumeRequest::CreateVolumeRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_multiAttachEnabled(false),
    m_multiAttachEnabledHasBeenSet(false)
{
}

Aws::String CreateVolumeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVolume&";
  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
    ss << "OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_sizeHasBeenSet)
  {
    ss << "Size=" << m_size << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_volumeTypeHasBeenSet)
  {
    ss << "VolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_volumeType) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_multiAttachEnabledHasBeenSet)
  {
    ss << "MultiAttachEnabled=" << std::boolalpha << m_multiAttachEnabled << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVolumeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
