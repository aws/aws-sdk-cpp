/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyVpcEndpointPayerResponsibilityRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyVpcEndpointPayerResponsibilityRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpointPayerResponsibility&";
  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_serviceIdHasBeenSet) {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if (m_vpcEndpointIdHasBeenSet) {
    ss << "VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if (m_payerResponsibilityHasBeenSet) {
    ss << "PayerResponsibility="
       << StringUtils::URLEncode(PayerResponsibilityTypeMapper::GetNameForPayerResponsibilityType(m_payerResponsibility)) << "&";
  }

  if (m_scopeHasBeenSet) {
    ss << "Scope=" << StringUtils::URLEncode(PayerResponsibilityScopeMapper::GetNameForPayerResponsibilityScope(m_scope)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyVpcEndpointPayerResponsibilityRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
