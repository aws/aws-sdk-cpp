/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyIpamPrefixListResolverTargetRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyIpamPrefixListResolverTargetRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyIpamPrefixListResolverTarget&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPrefixListResolverTargetIdHasBeenSet) {
    ss << "IpamPrefixListResolverTargetId=" << StringUtils::URLEncode(m_ipamPrefixListResolverTargetId.c_str()) << "&";
  }

  if (m_desiredVersionHasBeenSet) {
    ss << "DesiredVersion=" << m_desiredVersion << "&";
  }

  if (m_trackLatestVersionHasBeenSet) {
    ss << "TrackLatestVersion=" << std::boolalpha << m_trackLatestVersion << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyIpamPrefixListResolverTargetRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
