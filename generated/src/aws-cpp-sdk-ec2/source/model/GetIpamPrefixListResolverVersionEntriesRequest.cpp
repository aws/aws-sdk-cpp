/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/GetIpamPrefixListResolverVersionEntriesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetIpamPrefixListResolverVersionEntriesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetIpamPrefixListResolverVersionEntries&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPrefixListResolverIdHasBeenSet) {
    ss << "IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }

  if (m_ipamPrefixListResolverVersionHasBeenSet) {
    ss << "IpamPrefixListResolverVersion=" << m_ipamPrefixListResolverVersion << "&";
  }

  if (m_maxResultsHasBeenSet) {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if (m_nextTokenHasBeenSet) {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void GetIpamPrefixListResolverVersionEntriesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
