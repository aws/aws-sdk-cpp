/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateIpamPrefixListResolverRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateIpamPrefixListResolverRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateIpamPrefixListResolver&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamIdHasBeenSet) {
    ss << "IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_addressFamilyHasBeenSet) {
    ss << "AddressFamily=" << StringUtils::URLEncode(AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily)) << "&";
  }

  if (m_rulesHasBeenSet) {
    unsigned rulesCount = 1;
    for (auto& item : m_rules) {
      item.OutputToStream(ss, "Rule.", rulesCount, "");
      rulesCount++;
    }
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

void CreateIpamPrefixListResolverRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
