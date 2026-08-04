/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DescribeApplicationStatusChecksRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeApplicationStatusChecksRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DescribeApplicationStatusChecks&";
  if (m_applicationStatusCheckIdsHasBeenSet) {
    unsigned applicationStatusCheckIdsCount = 1;
    for (auto& item : m_applicationStatusCheckIds) {
      ss << "ApplicationStatusCheckId." << applicationStatusCheckIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      applicationStatusCheckIdsCount++;
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

  if (m_includeAllHasBeenSet) {
    ss << "IncludeAll=" << std::boolalpha << m_includeAll << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DescribeApplicationStatusChecksRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
