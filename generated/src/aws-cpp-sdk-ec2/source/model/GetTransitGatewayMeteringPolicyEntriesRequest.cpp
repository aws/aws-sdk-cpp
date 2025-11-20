/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/GetTransitGatewayMeteringPolicyEntriesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetTransitGatewayMeteringPolicyEntriesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetTransitGatewayMeteringPolicyEntries&";
  if (m_transitGatewayMeteringPolicyIdHasBeenSet) {
    ss << "TransitGatewayMeteringPolicyId=" << StringUtils::URLEncode(m_transitGatewayMeteringPolicyId.c_str()) << "&";
  }

  if (m_filtersHasBeenSet) {
    unsigned filtersCount = 1;
    for (auto& item : m_filters) {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if (m_maxResultsHasBeenSet) {
    ss << "MaxResults=" << m_maxResults << "&";
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

void GetTransitGatewayMeteringPolicyEntriesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
