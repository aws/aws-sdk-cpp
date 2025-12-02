/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/NumericalScaleDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

NumericalScaleDefinition::NumericalScaleDefinition(JsonView jsonValue) { *this = jsonValue; }

NumericalScaleDefinition& NumericalScaleDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("definition")) {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue NumericalScaleDefinition::Jsonize() const {
  JsonValue payload;

  if (m_definitionHasBeenSet) {
    payload.WithString("definition", m_definition);
  }

  if (m_valueHasBeenSet) {
    payload.WithDouble("value", m_value);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
