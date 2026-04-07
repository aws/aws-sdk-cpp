/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/UpdateCapacityManagerMonitoredTagKeysRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String UpdateCapacityManagerMonitoredTagKeysRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=UpdateCapacityManagerMonitoredTagKeys&";
  if (m_activateTagKeysHasBeenSet) {
    unsigned activateTagKeysCount = 1;
    for (auto& item : m_activateTagKeys) {
      ss << "ActivateTagKey." << activateTagKeysCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      activateTagKeysCount++;
    }
  }

  if (m_deactivateTagKeysHasBeenSet) {
    unsigned deactivateTagKeysCount = 1;
    for (auto& item : m_deactivateTagKeys) {
      ss << "DeactivateTagKey." << deactivateTagKeysCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      deactivateTagKeysCount++;
    }
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void UpdateCapacityManagerMonitoredTagKeysRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
