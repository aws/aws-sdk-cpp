/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/EnableIpamPolicyRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String EnableIpamPolicyRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=EnableIpamPolicy&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPolicyIdHasBeenSet) {
    ss << "IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }

  if (m_organizationTargetIdHasBeenSet) {
    ss << "OrganizationTargetId=" << StringUtils::URLEncode(m_organizationTargetId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void EnableIpamPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
