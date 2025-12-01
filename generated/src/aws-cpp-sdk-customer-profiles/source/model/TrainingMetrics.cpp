/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/TrainingMetrics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

TrainingMetrics::TrainingMetrics(JsonView jsonValue) { *this = jsonValue; }

TrainingMetrics& TrainingMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Time")) {
    m_time = jsonValue.GetDouble("Time");
    m_timeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Metrics")) {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for (auto& metricsItem : metricsJsonMap) {
      m_metrics[TrainingMetricNameMapper::GetTrainingMetricNameForName(metricsItem.first)] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingMetrics::Jsonize() const {
  JsonValue payload;

  if (m_timeHasBeenSet) {
    payload.WithDouble("Time", m_time.SecondsWithMSPrecision());
  }

  if (m_metricsHasBeenSet) {
    JsonValue metricsJsonMap;
    for (auto& metricsItem : m_metrics) {
      metricsJsonMap.WithDouble(TrainingMetricNameMapper::GetNameForTrainingMetricName(metricsItem.first), metricsItem.second);
    }
    payload.WithObject("Metrics", std::move(metricsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
