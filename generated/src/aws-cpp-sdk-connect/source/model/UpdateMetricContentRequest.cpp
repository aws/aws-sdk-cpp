/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateMetricContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMetricContentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_metricCalculationHasBeenSet) {
    payload.WithObject("MetricCalculation", m_metricCalculation.Jsonize());
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  if (m_positiveTrendIndicatorHasBeenSet) {
    payload.WithString("PositiveTrendIndicator", TrendIndicatorMapper::GetNameForTrendIndicator(m_positiveTrendIndicator));
  }

  return payload.View().WriteReadable();
}
