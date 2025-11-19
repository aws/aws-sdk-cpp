/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteIpamPolicyRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteIpamPolicyRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteIpamPolicy&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamPolicyIdHasBeenSet) {
    ss << "IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteIpamPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
