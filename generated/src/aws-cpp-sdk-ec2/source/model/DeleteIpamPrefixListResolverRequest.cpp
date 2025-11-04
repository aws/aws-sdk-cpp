/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteIpamPrefixListResolverRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteIpamPrefixListResolverRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteIpamPrefixListResolver&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPrefixListResolverIdHasBeenSet) {
    ss << "IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteIpamPrefixListResolverRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
