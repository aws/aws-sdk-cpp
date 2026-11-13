/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyNetworkingFlexCostAllocationPolicyRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyNetworkingFlexCostAllocationPolicyRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyNetworkingFlexCostAllocationPolicy&";
  if (m_fcaPolicyIdHasBeenSet) {
    ss << "FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }

  if (m_natFcaPolicyDocumentHasBeenSet) {
    m_natFcaPolicyDocument.OutputToStream(ss, "NatFcaPolicyDocument");
  }

  if (m_instanceFcaPolicyDocumentHasBeenSet) {
    m_instanceFcaPolicyDocument.OutputToStream(ss, "InstanceFcaPolicyDocument");
  }

  if (m_pcxFcaPolicyDocumentHasBeenSet) {
    m_pcxFcaPolicyDocument.OutputToStream(ss, "PcxFcaPolicyDocument");
  }

  if (m_showBackEnabledHasBeenSet) {
    ss << "ShowBackEnabled=" << std::boolalpha << m_showBackEnabled << "&";
  }

  if (m_descriptionHasBeenSet) {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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

void ModifyNetworkingFlexCostAllocationPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
