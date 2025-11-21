/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationEventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

AutomationEventSummary::AutomationEventSummary(JsonView jsonValue) { *this = jsonValue; }

AutomationEventSummary& AutomationEventSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimensions")) {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("dimensions");
    for (unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex) {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timePeriod")) {
    m_timePeriod = jsonValue.GetObject("timePeriod");
    m_timePeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("total")) {
    m_total = jsonValue.GetObject("total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationEventSummary::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_dimensionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
    for (unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex) {
      dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
    }
    payload.WithArray("dimensions", std::move(dimensionsJsonList));
  }

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("timePeriod", m_timePeriod.Jsonize());
  }

  if (m_totalHasBeenSet) {
    payload.WithObject("total", m_total.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
