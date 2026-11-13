/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/ModifyMetricCategoryRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyMetricCategoryRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyMetricCategory&";
  if (m_metricCategoryIdHasBeenSet) {
    ss << "MetricCategoryId=" << StringUtils::URLEncode(m_metricCategoryId.c_str()) << "&";
  }

  if (m_metricsHasBeenSet) {
    unsigned metricsCount = 1;
    for (auto& item : m_metrics) {
      ss << "Metric." << metricsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      metricsCount++;
    }
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void ModifyMetricCategoryRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
