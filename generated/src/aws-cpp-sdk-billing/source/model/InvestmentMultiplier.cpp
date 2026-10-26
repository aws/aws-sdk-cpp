/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentMultiplier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

InvestmentMultiplier::InvestmentMultiplier(JsonView jsonValue) { *this = jsonValue; }

InvestmentMultiplier& InvestmentMultiplier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentAttestationInputUnit")) {
    m_investmentAttestationInputUnit = jsonValue.GetString("investmentAttestationInputUnit");
    m_investmentAttestationInputUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiplierType")) {
    m_multiplierType = MultiplierTypeMapper::GetMultiplierTypeForName(jsonValue.GetString("multiplierType"));
    m_multiplierTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestmentMultiplier::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_investmentAttestationInputUnitHasBeenSet) {
    payload.WithString("investmentAttestationInputUnit", m_investmentAttestationInputUnit);
  }

  if (m_multiplierTypeHasBeenSet) {
    payload.WithString("multiplierType", MultiplierTypeMapper::GetNameForMultiplierType(m_multiplierType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
