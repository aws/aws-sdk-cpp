/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/MetricConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

MetricConfiguration::MetricConfiguration(JsonView jsonValue) { *this = jsonValue; }

MetricConfiguration& MetricConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metricNames")) {
    Aws::Utils::Array<JsonView> metricNamesJsonList = jsonValue.GetArray("metricNames");
    for (unsigned metricNamesIndex = 0; metricNamesIndex < metricNamesJsonList.GetLength(); ++metricNamesIndex) {
      m_metricNames.push_back(metricNamesJsonList[metricNamesIndex].AsString());
    }
    m_metricNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolutionSeconds")) {
    m_resolutionSeconds = jsonValue.GetInteger("resolutionSeconds");
    m_resolutionSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_metricNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricNamesJsonList(m_metricNames.size());
    for (unsigned metricNamesIndex = 0; metricNamesIndex < metricNamesJsonList.GetLength(); ++metricNamesIndex) {
      metricNamesJsonList[metricNamesIndex].AsString(m_metricNames[metricNamesIndex]);
    }
    payload.WithArray("metricNames", std::move(metricNamesJsonList));
  }

  if (m_resolutionSecondsHasBeenSet) {
    payload.WithInteger("resolutionSeconds", m_resolutionSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
