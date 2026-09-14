/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateTieringInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {

UpdateTieringInput::UpdateTieringInput(JsonView jsonValue) { *this = jsonValue; }

UpdateTieringInput& UpdateTieringInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FreeTier")) {
    m_freeTier = jsonValue.GetObject("FreeTier");
    m_freeTierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomTiers")) {
    Aws::Utils::Array<JsonView> customTiersJsonList = jsonValue.GetArray("CustomTiers");
    for (unsigned customTiersIndex = 0; customTiersIndex < customTiersJsonList.GetLength(); ++customTiersIndex) {
      m_customTiers.push_back(customTiersJsonList[customTiersIndex].AsObject());
    }
    m_customTiersHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateTieringInput::Jsonize() const {
  JsonValue payload;

  if (m_freeTierHasBeenSet) {
    payload.WithObject("FreeTier", m_freeTier.Jsonize());
  }

  if (m_customTiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> customTiersJsonList(m_customTiers.size());
    for (unsigned customTiersIndex = 0; customTiersIndex < customTiersJsonList.GetLength(); ++customTiersIndex) {
      customTiersJsonList[customTiersIndex].AsObject(m_customTiers[customTiersIndex].Jsonize());
    }
    payload.WithArray("CustomTiers", std::move(customTiersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
