/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DescribeMetricSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeMetricSetRequest::DescribeMetricSetRequest() : 
    m_metricSetArnHasBeenSet(false)
{
}

Aws::String DescribeMetricSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metricSetArnHasBeenSet)
  {
   payload.WithString("MetricSetArn", m_metricSetArn);

  }

  return payload.View().WriteReadable();
}




