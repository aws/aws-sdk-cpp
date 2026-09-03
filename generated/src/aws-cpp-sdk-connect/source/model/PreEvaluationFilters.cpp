/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PreEvaluationFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PreEvaluationFilters::PreEvaluationFilters(JsonView jsonValue) { *this = jsonValue; }

PreEvaluationFilters& PreEvaluationFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AndConditions")) {
    Aws::Utils::Array<JsonView> andConditionsJsonList = jsonValue.GetArray("AndConditions");
    for (unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex) {
      m_andConditions.push_back(andConditionsJsonList[andConditionsIndex].AsObject());
    }
    m_andConditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PreEvaluationFilters::Jsonize() const {
  JsonValue payload;

  if (m_andConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> andConditionsJsonList(m_andConditions.size());
    for (unsigned andConditionsIndex = 0; andConditionsIndex < andConditionsJsonList.GetLength(); ++andConditionsIndex) {
      andConditionsJsonList[andConditionsIndex].AsObject(m_andConditions[andConditionsIndex].Jsonize());
    }
    payload.WithArray("AndConditions", std::move(andConditionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
