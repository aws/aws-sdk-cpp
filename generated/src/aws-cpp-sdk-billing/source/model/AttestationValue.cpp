/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AttestationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

AttestationValue::AttestationValue(JsonView jsonValue) { *this = jsonValue; }

AttestationValue& AttestationValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attestationAmount")) {
    m_attestationAmount = jsonValue.GetObject("attestationAmount");
    m_attestationAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestationQuantities")) {
    Aws::Utils::Array<JsonView> attestationQuantitiesJsonList = jsonValue.GetArray("attestationQuantities");
    for (unsigned attestationQuantitiesIndex = 0; attestationQuantitiesIndex < attestationQuantitiesJsonList.GetLength();
         ++attestationQuantitiesIndex) {
      m_attestationQuantities.push_back(attestationQuantitiesJsonList[attestationQuantitiesIndex].AsObject());
    }
    m_attestationQuantitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue AttestationValue::Jsonize() const {
  JsonValue payload;

  if (m_attestationAmountHasBeenSet) {
    payload.WithObject("attestationAmount", m_attestationAmount.Jsonize());
  }

  if (m_attestationQuantitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attestationQuantitiesJsonList(m_attestationQuantities.size());
    for (unsigned attestationQuantitiesIndex = 0; attestationQuantitiesIndex < attestationQuantitiesJsonList.GetLength();
         ++attestationQuantitiesIndex) {
      attestationQuantitiesJsonList[attestationQuantitiesIndex].AsObject(m_attestationQuantities[attestationQuantitiesIndex].Jsonize());
    }
    payload.WithArray("attestationQuantities", std::move(attestationQuantitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
