/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MatchModelEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MatchModelEntry::MatchModelEntry(JsonView jsonValue) { *this = jsonValue; }

MatchModelEntry& MatchModelEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = MatchOperatorMapper::GetMatchOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchModelEntry::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", MatchOperatorMapper::GetNameForMatchOperator(m_operator));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
