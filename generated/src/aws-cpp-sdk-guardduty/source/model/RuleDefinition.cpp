/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RuleDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RuleDefinition::RuleDefinition(JsonView jsonValue) { *this = jsonValue; }

RuleDefinition& RuleDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("expression")) {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleDefinition::Jsonize() const {
  JsonValue payload;

  if (m_expressionHasBeenSet) {
    payload.WithString("expression", m_expression);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
