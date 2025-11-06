/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormItemEnablementCondition::EvaluationFormItemEnablementCondition(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormItemEnablementCondition& EvaluationFormItemEnablementCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Operands")) {
    Aws::Utils::Array<JsonView> operandsJsonList = jsonValue.GetArray("Operands");
    for (unsigned operandsIndex = 0; operandsIndex < operandsJsonList.GetLength(); ++operandsIndex) {
      m_operands.push_back(operandsJsonList[operandsIndex].AsObject());
    }
    m_operandsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Operator")) {
    m_operator =
        EvaluationFormItemEnablementOperatorMapper::GetEvaluationFormItemEnablementOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItemEnablementCondition::Jsonize() const {
  JsonValue payload;

  if (m_operandsHasBeenSet) {
    Aws::Utils::Array<JsonValue> operandsJsonList(m_operands.size());
    for (unsigned operandsIndex = 0; operandsIndex < operandsJsonList.GetLength(); ++operandsIndex) {
      operandsJsonList[operandsIndex].AsObject(m_operands[operandsIndex].Jsonize());
    }
    payload.WithArray("Operands", std::move(operandsJsonList));
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", EvaluationFormItemEnablementOperatorMapper::GetNameForEvaluationFormItemEnablementOperator(m_operator));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
