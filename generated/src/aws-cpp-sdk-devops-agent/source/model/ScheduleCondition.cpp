/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ScheduleCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ScheduleCondition::ScheduleCondition(JsonView jsonValue) { *this = jsonValue; }

ScheduleCondition& ScheduleCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("expression")) {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleCondition::Jsonize() const {
  JsonValue payload;

  if (m_expressionHasBeenSet) {
    payload.WithString("expression", m_expression);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
