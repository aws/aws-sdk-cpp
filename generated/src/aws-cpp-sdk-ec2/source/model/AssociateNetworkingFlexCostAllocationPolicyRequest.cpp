/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/AssociateNetworkingFlexCostAllocationPolicyRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String AssociateNetworkingFlexCostAllocationPolicyRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=AssociateNetworkingFlexCostAllocationPolicy&";
  if (m_fcaPolicyIdHasBeenSet) {
    ss << "FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }

  if (m_networkResourceIdsHasBeenSet) {
    unsigned networkResourceIdsCount = 1;
    for (auto& item : m_networkResourceIds) {
      ss << "NetworkResourceIds." << networkResourceIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      networkResourceIdsCount++;
    }
  }

  if (m_networkResourceScopeHasBeenSet) {
    m_networkResourceScope.OutputToStream(ss, "NetworkResourceScope");
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void AssociateNetworkingFlexCostAllocationPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri) const {
  uri.SetQueryString(SerializePayload());
}
