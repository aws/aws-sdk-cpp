/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/GetIpamRoutingPolicyRegistrationsRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetIpamRoutingPolicyRegistrationsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetIpamRoutingPolicyRegistrations&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    ss << "IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str()) << "&";
  }

  if (m_cidrHasBeenSet) {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
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

void GetIpamRoutingPolicyRegistrationsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
