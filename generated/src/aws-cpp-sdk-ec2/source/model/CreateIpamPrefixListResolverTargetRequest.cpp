/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateIpamPrefixListResolverTargetRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateIpamPrefixListResolverTargetRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateIpamPrefixListResolverTarget&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPrefixListResolverIdHasBeenSet) {
    ss << "IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }

  if (m_prefixListIdHasBeenSet) {
    ss << "PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if (m_prefixListRegionHasBeenSet) {
    ss << "PrefixListRegion=" << StringUtils::URLEncode(m_prefixListRegion.c_str()) << "&";
  }

  if (m_desiredVersionHasBeenSet) {
    ss << "DesiredVersion=" << m_desiredVersion << "&";
  }

  if (m_trackLatestVersionHasBeenSet) {
    ss << "TrackLatestVersion=" << std::boolalpha << m_trackLatestVersion << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateIpamPrefixListResolverTargetRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
