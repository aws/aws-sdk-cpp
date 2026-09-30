/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyClientVpnEndpointAuthorizationPolicyRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyClientVpnEndpointAuthorizationPolicyRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyClientVpnEndpointAuthorizationPolicy&";
  if (m_clientVpnEndpointIdHasBeenSet) {
    ss << "ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if (m_policyDocumentHasBeenSet) {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_shadowModeHasBeenSet) {
    ss << "ShadowMode="
       << StringUtils::URLEncode(
              ClientVpnAuthorizationPolicyShadowModeMapper::GetNameForClientVpnAuthorizationPolicyShadowMode(m_shadowMode))
       << "&";
  }

  if (m_clientTokenHasBeenSet) {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyClientVpnEndpointAuthorizationPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
