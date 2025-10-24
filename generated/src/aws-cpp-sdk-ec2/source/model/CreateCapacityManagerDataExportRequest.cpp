/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateCapacityManagerDataExportRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateCapacityManagerDataExportRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateCapacityManagerDataExport&";
  if (m_s3BucketNameHasBeenSet) {
    ss << "S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }

  if (m_s3BucketPrefixHasBeenSet) {
    ss << "S3BucketPrefix=" << StringUtils::URLEncode(m_s3BucketPrefix.c_str()) << "&";
  }

  if (m_scheduleHasBeenSet) {
    ss << "Schedule=" << StringUtils::URLEncode(ScheduleMapper::GetNameForSchedule(m_schedule)) << "&";
  }

  if (m_outputFormatHasBeenSet) {
    ss << "OutputFormat=" << StringUtils::URLEncode(OutputFormatMapper::GetNameForOutputFormat(m_outputFormat)) << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateCapacityManagerDataExportRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
