/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {

GetUsageLinesEstimatedCostInput::GetUsageLinesEstimatedCostInput(JsonView jsonValue) { *this = jsonValue; }

GetUsageLinesEstimatedCostInput& GetUsageLinesEstimatedCostInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceCode")) {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageType")) {
    m_usageType = jsonValue.GetString("usageType");
    m_usageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operation")) {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  return *this;
}

JsonValue GetUsageLinesEstimatedCostInput::Jsonize() const {
  JsonValue payload;

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("serviceCode", m_serviceCode);
  }

  if (m_usageTypeHasBeenSet) {
    payload.WithString("usageType", m_usageType);
  }

  if (m_operationHasBeenSet) {
    payload.WithString("operation", m_operation);
  }

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_amountHasBeenSet) {
    payload.WithDouble("amount", m_amount);
  }

  return payload;
}

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
