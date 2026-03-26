/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/MetricSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

MetricSource::MetricSource(JsonView jsonValue) { *this = jsonValue; }

MetricSource& MetricSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricSourceKeyAttributes")) {
    Aws::Map<Aws::String, JsonView> metricSourceKeyAttributesJsonMap = jsonValue.GetObject("MetricSourceKeyAttributes").GetAllObjects();
    for (auto& metricSourceKeyAttributesItem : metricSourceKeyAttributesJsonMap) {
      m_metricSourceKeyAttributes[metricSourceKeyAttributesItem.first] = metricSourceKeyAttributesItem.second.AsString();
    }
    m_metricSourceKeyAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricSourceAttributes")) {
    Aws::Map<Aws::String, JsonView> metricSourceAttributesJsonMap = jsonValue.GetObject("MetricSourceAttributes").GetAllObjects();
    for (auto& metricSourceAttributesItem : metricSourceAttributesJsonMap) {
      m_metricSourceAttributes[metricSourceAttributesItem.first] = metricSourceAttributesItem.second.AsString();
    }
    m_metricSourceAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricSource::Jsonize() const {
  JsonValue payload;

  if (m_metricSourceKeyAttributesHasBeenSet) {
    JsonValue metricSourceKeyAttributesJsonMap;
    for (auto& metricSourceKeyAttributesItem : m_metricSourceKeyAttributes) {
      metricSourceKeyAttributesJsonMap.WithString(metricSourceKeyAttributesItem.first, metricSourceKeyAttributesItem.second);
    }
    payload.WithObject("MetricSourceKeyAttributes", std::move(metricSourceKeyAttributesJsonMap));
  }

  if (m_metricSourceAttributesHasBeenSet) {
    JsonValue metricSourceAttributesJsonMap;
    for (auto& metricSourceAttributesItem : m_metricSourceAttributes) {
      metricSourceAttributesJsonMap.WithString(metricSourceAttributesItem.first, metricSourceAttributesItem.second);
    }
    payload.WithObject("MetricSourceAttributes", std::move(metricSourceAttributesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
