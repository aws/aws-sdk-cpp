/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExampleCountByField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ExampleCountByField::ExampleCountByField(JsonView jsonValue) { *this = jsonValue; }

ExampleCountByField& ExampleCountByField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("turns")) {
    m_turns = jsonValue.GetInt64("turns");
    m_turnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetInt64("input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorProfile")) {
    m_actorProfile = jsonValue.GetInt64("actorProfile");
    m_actorProfileHasBeenSet = true;
  }
  return *this;
}

JsonValue ExampleCountByField::Jsonize() const {
  JsonValue payload;

  if (m_turnsHasBeenSet) {
    payload.WithInt64("turns", m_turns);
  }

  if (m_inputHasBeenSet) {
    payload.WithInt64("input", m_input);
  }

  if (m_actorProfileHasBeenSet) {
    payload.WithInt64("actorProfile", m_actorProfile);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
