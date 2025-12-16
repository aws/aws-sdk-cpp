/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/CommandParameterValueCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

CommandParameterValueCondition::CommandParameterValueCondition(JsonView jsonValue) { *this = jsonValue; }

CommandParameterValueCondition& CommandParameterValueCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comparisonOperator")) {
    m_comparisonOperator = CommandParameterValueComparisonOperatorMapper::GetCommandParameterValueComparisonOperatorForName(
        jsonValue.GetString("comparisonOperator"));
    m_comparisonOperatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operand")) {
    m_operand = jsonValue.GetObject("operand");
    m_operandHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandParameterValueCondition::Jsonize() const {
  JsonValue payload;

  if (m_comparisonOperatorHasBeenSet) {
    payload.WithString(
        "comparisonOperator",
        CommandParameterValueComparisonOperatorMapper::GetNameForCommandParameterValueComparisonOperator(m_comparisonOperator));
  }

  if (m_operandHasBeenSet) {
    payload.WithObject("operand", m_operand.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
