/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreateMetricCategoryRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateMetricCategoryRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateMetricCategory&";
  if (m_metricsHasBeenSet) {
    unsigned metricsCount = 1;
    for (auto& item : m_metrics) {
      ss << "Metric." << metricsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      metricsCount++;
    }
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
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

void CreateMetricCategoryRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
