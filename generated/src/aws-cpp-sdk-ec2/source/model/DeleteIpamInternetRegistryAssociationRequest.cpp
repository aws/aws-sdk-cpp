/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DeleteIpamInternetRegistryAssociationRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DeleteIpamInternetRegistryAssociationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DeleteIpamInternetRegistryAssociation&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    ss << "IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DeleteIpamInternetRegistryAssociationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
