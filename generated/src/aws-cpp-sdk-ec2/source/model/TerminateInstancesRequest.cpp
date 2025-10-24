﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/TerminateInstancesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String TerminateInstancesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=TerminateInstances&";
  if (m_instanceIdsHasBeenSet) {
    unsigned instanceIdsCount = 1;
    for (auto& item : m_instanceIds) {
      ss << "InstanceId." << instanceIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
  }

  if (m_forceHasBeenSet) {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  if (m_skipOsShutdownHasBeenSet) {
    ss << "SkipOsShutdown=" << std::boolalpha << m_skipOsShutdown << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void TerminateInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
