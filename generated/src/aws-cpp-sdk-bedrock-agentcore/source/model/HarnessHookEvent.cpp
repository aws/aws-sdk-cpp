/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessHookEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessHookEvent::HarnessHookEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessHookEvent& HarnessHookEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hookEventId")) {
    m_hookEventId = jsonValue.GetString("hookEventId");
    m_hookEventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = HarnessHookEventTypeMapper::GetHarnessHookEventTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decision")) {
    m_decision = HarnessHookDecisionMapper::GetHarnessHookDecisionForName(jsonValue.GetString("decision"));
    m_decisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessHookEvent::Jsonize() const {
  JsonValue payload;

  if (m_hookEventIdHasBeenSet) {
    payload.WithString("hookEventId", m_hookEventId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", HarnessHookEventTypeMapper::GetNameForHarnessHookEventType(m_type));
  }

  if (m_decisionHasBeenSet) {
    payload.WithString("decision", HarnessHookDecisionMapper::GetNameForHarnessHookDecision(m_decision));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
