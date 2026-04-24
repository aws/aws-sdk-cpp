/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/EnableInstanceSqlHaStandbyDetectionsRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String EnableInstanceSqlHaStandbyDetectionsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=EnableInstanceSqlHaStandbyDetections&";
  if (m_instanceIdsHasBeenSet) {
    unsigned instanceIdsCount = 1;
    for (auto& item : m_instanceIds) {
      ss << "InstanceId." << instanceIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
  }

  if (m_sqlServerCredentialsHasBeenSet) {
    ss << "SqlServerCredentials=" << StringUtils::URLEncode(m_sqlServerCredentials.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void EnableInstanceSqlHaStandbyDetectionsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
