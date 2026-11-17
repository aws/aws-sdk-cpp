/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SingleSelectQuestionAutomationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

SingleSelectQuestionAutomationRule::SingleSelectQuestionAutomationRule(JsonView jsonValue) { *this = jsonValue; }

SingleSelectQuestionAutomationRule& SingleSelectQuestionAutomationRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Condition")) {
    m_condition = jsonValue.GetObject("Condition");
    m_conditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptionRefId")) {
    m_optionRefId = jsonValue.GetString("OptionRefId");
    m_optionRefIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SingleSelectQuestionAutomationRule::Jsonize() const {
  JsonValue payload;

  if (m_conditionHasBeenSet) {
    payload.WithObject("Condition", m_condition.Jsonize());
  }

  if (m_optionRefIdHasBeenSet) {
    payload.WithString("OptionRefId", m_optionRefId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
