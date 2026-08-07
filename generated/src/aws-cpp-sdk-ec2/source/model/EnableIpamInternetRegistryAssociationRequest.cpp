/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/EnableIpamInternetRegistryAssociationRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String EnableIpamInternetRegistryAssociationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=EnableIpamInternetRegistryAssociation&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    ss << "IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str()) << "&";
  }

  if (m_rpkiVersionHasBeenSet) {
    ss << "RpkiVersion=" << StringUtils::URLEncode(m_rpkiVersion.c_str()) << "&";
  }

  if (m_serviceUriHasBeenSet) {
    ss << "ServiceUri=" << StringUtils::URLEncode(m_serviceUri.c_str()) << "&";
  }

  if (m_childHandleHasBeenSet) {
    ss << "ChildHandle=" << StringUtils::URLEncode(m_childHandle.c_str()) << "&";
  }

  if (m_parentHandleHasBeenSet) {
    ss << "ParentHandle=" << StringUtils::URLEncode(m_parentHandle.c_str()) << "&";
  }

  if (m_parentBpkiTaHasBeenSet) {
    ss << "ParentBpkiTa=" << StringUtils::URLEncode(m_parentBpkiTa.c_str()) << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void EnableIpamInternetRegistryAssociationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
