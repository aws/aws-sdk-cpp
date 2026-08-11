/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricCalculation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MetricCalculation::MetricCalculation(JsonView jsonValue) { *this = jsonValue; }

MetricCalculation& MetricCalculation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CalculationComponents")) {
    Aws::Utils::Array<JsonView> calculationComponentsJsonList = jsonValue.GetArray("CalculationComponents");
    for (unsigned calculationComponentsIndex = 0; calculationComponentsIndex < calculationComponentsJsonList.GetLength();
         ++calculationComponentsIndex) {
      m_calculationComponents.push_back(calculationComponentsJsonList[calculationComponentsIndex].AsObject());
    }
    m_calculationComponentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Calculation")) {
    m_calculation = jsonValue.GetString("Calculation");
    m_calculationHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricCalculation::Jsonize() const {
  JsonValue payload;

  if (m_calculationComponentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> calculationComponentsJsonList(m_calculationComponents.size());
    for (unsigned calculationComponentsIndex = 0; calculationComponentsIndex < calculationComponentsJsonList.GetLength();
         ++calculationComponentsIndex) {
      calculationComponentsJsonList[calculationComponentsIndex].AsObject(m_calculationComponents[calculationComponentsIndex].Jsonize());
    }
    payload.WithArray("CalculationComponents", std::move(calculationComponentsJsonList));
  }

  if (m_calculationHasBeenSet) {
    payload.WithString("Calculation", m_calculation);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
