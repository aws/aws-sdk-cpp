/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AttestationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

AttestationDetails::AttestationDetails(JsonView jsonValue) { *this = jsonValue; }

AttestationDetails& AttestationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attestationValue")) {
    m_attestationValue = jsonValue.GetObject("attestationValue");
    m_attestationValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentDistributions")) {
    Aws::Utils::Array<JsonView> investmentDistributionsJsonList = jsonValue.GetArray("investmentDistributions");
    for (unsigned investmentDistributionsIndex = 0; investmentDistributionsIndex < investmentDistributionsJsonList.GetLength();
         ++investmentDistributionsIndex) {
      m_investmentDistributions.push_back(investmentDistributionsJsonList[investmentDistributionsIndex].AsObject());
    }
    m_investmentDistributionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AttestationDetails::Jsonize() const {
  JsonValue payload;

  if (m_attestationValueHasBeenSet) {
    payload.WithObject("attestationValue", m_attestationValue.Jsonize());
  }

  if (m_investmentDistributionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> investmentDistributionsJsonList(m_investmentDistributions.size());
    for (unsigned investmentDistributionsIndex = 0; investmentDistributionsIndex < investmentDistributionsJsonList.GetLength();
         ++investmentDistributionsIndex) {
      investmentDistributionsJsonList[investmentDistributionsIndex].AsObject(
          m_investmentDistributions[investmentDistributionsIndex].Jsonize());
    }
    payload.WithArray("investmentDistributions", std::move(investmentDistributionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
