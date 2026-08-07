/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/BatchModifyIpamRoutingPolicyRegistrationsRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String BatchModifyIpamRoutingPolicyRegistrationsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=BatchModifyIpamRoutingPolicyRegistrations&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    ss << "IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str()) << "&";
  }

  if (m_deltaJsonHasBeenSet) {
    ss << "DeltaJson=" << StringUtils::URLEncode(m_deltaJson.c_str()) << "&";
  }

  if (m_forceHasBeenSet) {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void BatchModifyIpamRoutingPolicyRegistrationsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
