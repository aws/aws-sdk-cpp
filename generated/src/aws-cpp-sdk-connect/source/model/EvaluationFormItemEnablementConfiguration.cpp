/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormItemEnablementConfiguration::EvaluationFormItemEnablementConfiguration(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormItemEnablementConfiguration& EvaluationFormItemEnablementConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Condition")) {
    m_condition = jsonValue.GetObject("Condition");
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    m_action = EvaluationFormItemEnablementActionMapper::GetEvaluationFormItemEnablementActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultAction")) {
    m_defaultAction =
        EvaluationFormItemEnablementActionMapper::GetEvaluationFormItemEnablementActionForName(jsonValue.GetString("DefaultAction"));
    m_defaultActionHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItemEnablementConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_conditionHasBeenSet) {
    payload.WithObject("Condition", m_condition.Jsonize());
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", EvaluationFormItemEnablementActionMapper::GetNameForEvaluationFormItemEnablementAction(m_action));
  }

  if (m_defaultActionHasBeenSet) {
    payload.WithString("DefaultAction",
                       EvaluationFormItemEnablementActionMapper::GetNameForEvaluationFormItemEnablementAction(m_defaultAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
