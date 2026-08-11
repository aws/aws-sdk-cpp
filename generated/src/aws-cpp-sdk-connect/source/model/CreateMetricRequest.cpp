/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateMetricRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMetricRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_metricCalculationHasBeenSet) {
    payload.WithObject("MetricCalculation", m_metricCalculation.Jsonize());
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", MetricStatusMapper::GetNameForMetricStatus(m_status));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_positiveTrendIndicatorHasBeenSet) {
    payload.WithString("PositiveTrendIndicator", TrendIndicatorMapper::GetNameForTrendIndicator(m_positiveTrendIndicator));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
