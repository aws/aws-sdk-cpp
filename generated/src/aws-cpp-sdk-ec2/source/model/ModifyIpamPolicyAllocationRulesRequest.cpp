/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyIpamPolicyAllocationRulesRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyIpamPolicyAllocationRulesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyIpamPolicyAllocationRules&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPolicyIdHasBeenSet) {
    ss << "IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }

  if (m_localeHasBeenSet) {
    ss << "Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }

  if (m_resourceTypeHasBeenSet) {
    ss << "ResourceType=" << StringUtils::URLEncode(IpamPolicyResourceTypeMapper::GetNameForIpamPolicyResourceType(m_resourceType)) << "&";
  }

  if (m_allocationRulesHasBeenSet) {
    unsigned allocationRulesCount = 1;
    for (auto& item : m_allocationRules) {
      item.OutputToStream(ss, "AllocationRule.", allocationRulesCount, "");
      allocationRulesCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyIpamPolicyAllocationRulesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
