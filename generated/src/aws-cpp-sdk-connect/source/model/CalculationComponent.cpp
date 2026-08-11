/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CalculationComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

CalculationComponent::CalculationComponent(JsonView jsonValue) { *this = jsonValue; }

CalculationComponent& CalculationComponent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Alias")) {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricName")) {
    m_metricName = jsonValue.GetString("MetricName");
    m_metricNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricId")) {
    m_metricId = jsonValue.GetString("MetricId");
    m_metricIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricFilters")) {
    Aws::Utils::Array<JsonView> metricFiltersJsonList = jsonValue.GetArray("MetricFilters");
    for (unsigned metricFiltersIndex = 0; metricFiltersIndex < metricFiltersJsonList.GetLength(); ++metricFiltersIndex) {
      m_metricFilters.push_back(metricFiltersJsonList[metricFiltersIndex].AsObject());
    }
    m_metricFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue CalculationComponent::Jsonize() const {
  JsonValue payload;

  if (m_aliasHasBeenSet) {
    payload.WithString("Alias", m_alias);
  }

  if (m_metricNameHasBeenSet) {
    payload.WithString("MetricName", m_metricName);
  }

  if (m_metricIdHasBeenSet) {
    payload.WithString("MetricId", m_metricId);
  }

  if (m_metricFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricFiltersJsonList(m_metricFilters.size());
    for (unsigned metricFiltersIndex = 0; metricFiltersIndex < metricFiltersJsonList.GetLength(); ++metricFiltersIndex) {
      metricFiltersJsonList[metricFiltersIndex].AsObject(m_metricFilters[metricFiltersIndex].Jsonize());
    }
    payload.WithArray("MetricFilters", std::move(metricFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
