/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/OutcomeBasedInvestment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

OutcomeBasedInvestment::OutcomeBasedInvestment(JsonView jsonValue) { *this = jsonValue; }

OutcomeBasedInvestment& OutcomeBasedInvestment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("investmentId")) {
    m_investmentId = jsonValue.GetString("investmentId");
    m_investmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outcomeDescription")) {
    m_outcomeDescription = jsonValue.GetString("outcomeDescription");
    m_outcomeDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestationWindow")) {
    m_attestationWindow = jsonValue.GetObject("attestationWindow");
    m_attestationWindowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentRestrictions")) {
    Aws::Utils::Array<JsonView> investmentRestrictionsJsonList = jsonValue.GetArray("investmentRestrictions");
    for (unsigned investmentRestrictionsIndex = 0; investmentRestrictionsIndex < investmentRestrictionsJsonList.GetLength();
         ++investmentRestrictionsIndex) {
      m_investmentRestrictions.push_back(investmentRestrictionsJsonList[investmentRestrictionsIndex].AsObject());
    }
    m_investmentRestrictionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentMultipliers")) {
    Aws::Utils::Array<JsonView> investmentMultipliersJsonList = jsonValue.GetArray("investmentMultipliers");
    for (unsigned investmentMultipliersIndex = 0; investmentMultipliersIndex < investmentMultipliersJsonList.GetLength();
         ++investmentMultipliersIndex) {
      m_investmentMultipliers.push_back(investmentMultipliersJsonList[investmentMultipliersIndex].AsObject());
    }
    m_investmentMultipliersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disbursedValue")) {
    m_disbursedValue = jsonValue.GetObject("disbursedValue");
    m_disbursedValueHasBeenSet = true;
  }
  return *this;
}

JsonValue OutcomeBasedInvestment::Jsonize() const {
  JsonValue payload;

  if (m_investmentIdHasBeenSet) {
    payload.WithString("investmentId", m_investmentId);
  }

  if (m_outcomeDescriptionHasBeenSet) {
    payload.WithString("outcomeDescription", m_outcomeDescription);
  }

  if (m_attestationWindowHasBeenSet) {
    payload.WithObject("attestationWindow", m_attestationWindow.Jsonize());
  }

  if (m_investmentRestrictionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> investmentRestrictionsJsonList(m_investmentRestrictions.size());
    for (unsigned investmentRestrictionsIndex = 0; investmentRestrictionsIndex < investmentRestrictionsJsonList.GetLength();
         ++investmentRestrictionsIndex) {
      investmentRestrictionsJsonList[investmentRestrictionsIndex].AsObject(m_investmentRestrictions[investmentRestrictionsIndex].Jsonize());
    }
    payload.WithArray("investmentRestrictions", std::move(investmentRestrictionsJsonList));
  }

  if (m_investmentMultipliersHasBeenSet) {
    Aws::Utils::Array<JsonValue> investmentMultipliersJsonList(m_investmentMultipliers.size());
    for (unsigned investmentMultipliersIndex = 0; investmentMultipliersIndex < investmentMultipliersJsonList.GetLength();
         ++investmentMultipliersIndex) {
      investmentMultipliersJsonList[investmentMultipliersIndex].AsObject(m_investmentMultipliers[investmentMultipliersIndex].Jsonize());
    }
    payload.WithArray("investmentMultipliers", std::move(investmentMultipliersJsonList));
  }

  if (m_disbursedValueHasBeenSet) {
    payload.WithObject("disbursedValue", m_disbursedValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
