/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AiAgentsCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AiAgentsCriteria::AiAgentsCriteria(JsonView jsonValue) { *this = jsonValue; }

AiAgentsCriteria& AiAgentsCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Criteria")) {
    Aws::Utils::Array<JsonView> criteriaJsonList = jsonValue.GetArray("Criteria");
    for (unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex) {
      m_criteria.push_back(criteriaJsonList[criteriaIndex].AsObject());
    }
    m_criteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue AiAgentsCriteria::Jsonize() const {
  JsonValue payload;

  if (m_criteriaHasBeenSet) {
    Aws::Utils::Array<JsonValue> criteriaJsonList(m_criteria.size());
    for (unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex) {
      criteriaJsonList[criteriaIndex].AsObject(m_criteria[criteriaIndex].Jsonize());
    }
    payload.WithArray("Criteria", std::move(criteriaJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
