/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteNetworkingFlexCostAllocationPoliciesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteNetworkingFlexCostAllocationPoliciesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteNetworkingFlexCostAllocationPolicies&";
  if (m_fcaPolicyIdsHasBeenSet) {
    unsigned fcaPolicyIdsCount = 1;
    for (auto& item : m_fcaPolicyIds) {
      ss << "FcaPolicyIds." << fcaPolicyIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      fcaPolicyIdsCount++;
    }
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteNetworkingFlexCostAllocationPoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
