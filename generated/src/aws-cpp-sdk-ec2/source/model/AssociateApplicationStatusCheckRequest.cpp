/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/AssociateApplicationStatusCheckRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String AssociateApplicationStatusCheckRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=AssociateApplicationStatusCheck&";
  if (m_applicationStatusCheckIdHasBeenSet) {
    ss << "ApplicationStatusCheckId=" << StringUtils::URLEncode(m_applicationStatusCheckId.c_str()) << "&";
  }

  if (m_targetTagAssociationsHasBeenSet) {
    unsigned targetTagAssociationsCount = 1;
    for (auto& item : m_targetTagAssociations) {
      item.OutputToStream(ss, "TargetTagAssociation.", targetTagAssociationsCount, "");
      targetTagAssociationsCount++;
    }
  }

  if (m_instanceIdsHasBeenSet) {
    unsigned instanceIdsCount = 1;
    for (auto& item : m_instanceIds) {
      ss << "InstanceId." << instanceIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      instanceIdsCount++;
    }
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

void AssociateApplicationStatusCheckRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
