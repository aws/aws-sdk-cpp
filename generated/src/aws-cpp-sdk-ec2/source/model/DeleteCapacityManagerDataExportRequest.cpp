/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteCapacityManagerDataExportRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteCapacityManagerDataExportRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteCapacityManagerDataExport&";
  if (m_capacityManagerDataExportIdHasBeenSet) {
    ss << "CapacityManagerDataExportId=" << StringUtils::URLEncode(m_capacityManagerDataExportId.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteCapacityManagerDataExportRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
