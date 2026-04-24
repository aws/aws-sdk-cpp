/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementCondition.h>
#include <aws/connect/model/EvaluationFormItemEnablementConditionOperand.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormItemEnablementConditionOperand::EvaluationFormItemEnablementConditionOperand(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormItemEnablementConditionOperand& EvaluationFormItemEnablementConditionOperand::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Expression")) {
    m_expression = jsonValue.GetObject("Expression");
    m_expressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Condition")) {
    m_condition = Aws::MakeShared<EvaluationFormItemEnablementCondition>("EvaluationFormItemEnablementConditionOperand",
                                                                         jsonValue.GetObject("Condition"));
    m_conditionHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItemEnablementConditionOperand::Jsonize() const {
  JsonValue payload;

  if (m_expressionHasBeenSet) {
    payload.WithObject("Expression", m_expression.Jsonize());
  }

  if (m_conditionHasBeenSet) {
    payload.WithObject("Condition", m_condition->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
