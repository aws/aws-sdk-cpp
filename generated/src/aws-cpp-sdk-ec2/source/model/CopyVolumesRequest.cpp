/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CopyVolumesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CopyVolumesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CopyVolumes&";
  if (m_sourceVolumeIdHasBeenSet) {
    ss << "SourceVolumeId=" << StringUtils::URLEncode(m_sourceVolumeId.c_str()) << "&";
  }

  if (m_iopsHasBeenSet) {
    ss << "Iops=" << m_iops << "&";
  }

  if (m_sizeHasBeenSet) {
    ss << "Size=" << m_size << "&";
  }

  if (m_volumeTypeHasBeenSet) {
    ss << "VolumeType=" << StringUtils::URLEncode(VolumeTypeMapper::GetNameForVolumeType(m_volumeType)) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if (m_multiAttachEnabledHasBeenSet) {
    ss << "MultiAttachEnabled=" << std::boolalpha << m_multiAttachEnabled << "&";
  }

  if (m_throughputHasBeenSet) {
    ss << "Throughput=" << m_throughput << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CopyVolumesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
