/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateSecondaryNetworkRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateSecondaryNetworkRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateSecondaryNetwork&";
  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipv4CidrBlockHasBeenSet) {
    ss << "Ipv4CidrBlock=" << StringUtils::URLEncode(m_ipv4CidrBlock.c_str()) << "&";
  }

  if (m_networkTypeHasBeenSet) {
    ss << "NetworkType=" << StringUtils::URLEncode(SecondaryNetworkTypeMapper::GetNameForSecondaryNetworkType(m_networkType)) << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreateSecondaryNetworkRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
