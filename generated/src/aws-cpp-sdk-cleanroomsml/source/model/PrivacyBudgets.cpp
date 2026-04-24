/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PrivacyBudgets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

PrivacyBudgets::PrivacyBudgets(JsonView jsonValue) { *this = jsonValue; }

PrivacyBudgets& PrivacyBudgets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessBudgets")) {
    Aws::Utils::Array<JsonView> accessBudgetsJsonList = jsonValue.GetArray("accessBudgets");
    for (unsigned accessBudgetsIndex = 0; accessBudgetsIndex < accessBudgetsJsonList.GetLength(); ++accessBudgetsIndex) {
      m_accessBudgets.push_back(accessBudgetsJsonList[accessBudgetsIndex].AsObject());
    }
    m_accessBudgetsHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivacyBudgets::Jsonize() const {
  JsonValue payload;

  if (m_accessBudgetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accessBudgetsJsonList(m_accessBudgets.size());
    for (unsigned accessBudgetsIndex = 0; accessBudgetsIndex < accessBudgetsJsonList.GetLength(); ++accessBudgetsIndex) {
      accessBudgetsJsonList[accessBudgetsIndex].AsObject(m_accessBudgets[accessBudgetsIndex].Jsonize());
    }
    payload.WithArray("accessBudgets", std::move(accessBudgetsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
