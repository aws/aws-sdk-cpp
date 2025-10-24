﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DescribeServiceLinkVirtualInterfacesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeServiceLinkVirtualInterfacesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DescribeServiceLinkVirtualInterfaces&";
  if (m_serviceLinkVirtualInterfaceIdsHasBeenSet) {
    unsigned serviceLinkVirtualInterfaceIdsCount = 1;
    for (auto& item : m_serviceLinkVirtualInterfaceIds) {
      ss << "ServiceLinkVirtualInterfaceId." << serviceLinkVirtualInterfaceIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      serviceLinkVirtualInterfaceIdsCount++;
    }
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

void DescribeServiceLinkVirtualInterfacesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
