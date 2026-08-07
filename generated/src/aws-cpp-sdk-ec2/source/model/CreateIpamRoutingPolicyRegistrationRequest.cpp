/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateIpamRoutingPolicyRegistrationRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateIpamRoutingPolicyRegistrationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateIpamRoutingPolicyRegistration&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    ss << "IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str()) << "&";
  }

  if (m_cidrHasBeenSet) {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if (m_asnsHasBeenSet) {
    unsigned asnsCount = 1;
    for (auto& item : m_asns) {
      ss << "Asn." << asnsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      asnsCount++;
    }
  }

  if (m_permitMoreSpecificAnnouncementsHasBeenSet) {
    ss << "PermitMoreSpecificAnnouncements=" << std::boolalpha << m_permitMoreSpecificAnnouncements << "&";
  }

  if (m_maxLengthHasBeenSet) {
    ss << "MaxLength=" << m_maxLength << "&";
  }

  if (m_descriptionHasBeenSet) {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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

void CreateIpamRoutingPolicyRegistrationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
