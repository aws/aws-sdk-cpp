/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormMetricConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormMetricConfiguration::EvaluationFormMetricConfiguration(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormMetricConfiguration& EvaluationFormMetricConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricType")) {
    m_metricType = EvaluationFormMetricTypeMapper::GetEvaluationFormMetricTypeForName(jsonValue.GetString("MetricType"));
    m_metricTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricName")) {
    m_metricName = jsonValue.GetString("MetricName");
    m_metricNameHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormMetricConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_metricTypeHasBeenSet) {
    payload.WithString("MetricType", EvaluationFormMetricTypeMapper::GetNameForEvaluationFormMetricType(m_metricType));
  }

  if (m_metricNameHasBeenSet) {
    payload.WithString("MetricName", m_metricName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
