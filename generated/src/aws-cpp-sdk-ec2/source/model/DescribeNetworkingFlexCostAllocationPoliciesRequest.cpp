/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DescribeNetworkingFlexCostAllocationPoliciesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeNetworkingFlexCostAllocationPoliciesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DescribeNetworkingFlexCostAllocationPolicies&";
  if (m_fcaPolicyIdsHasBeenSet) {
    unsigned fcaPolicyIdsCount = 1;
    for (auto& item : m_fcaPolicyIds) {
      ss << "FcaPolicyIds." << fcaPolicyIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      fcaPolicyIdsCount++;
    }
  }

  if (m_maxResultsHasBeenSet) {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if (m_filtersHasBeenSet) {
    unsigned filtersCount = 1;
    for (auto& item : m_filters) {
      item.OutputToStream(ss, "Filters.", filtersCount, "");
      filtersCount++;
    }
  }

  if (m_nextTokenHasBeenSet) {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DescribeNetworkingFlexCostAllocationPoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const {
  uri.SetQueryString(SerializePayload());
}
