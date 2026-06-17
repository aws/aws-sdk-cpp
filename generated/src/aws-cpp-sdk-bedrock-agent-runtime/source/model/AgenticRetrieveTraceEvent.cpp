/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveTraceEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveTraceEvent::AgenticRetrieveTraceEvent(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveTraceEvent& AgenticRetrieveTraceEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributes")) {
    m_attributes = jsonValue.GetObject("attributes");
    m_attributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetInt64("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveTraceEvent::Jsonize() const {
  JsonValue payload;

  if (m_attributesHasBeenSet) {
    payload.WithObject("attributes", m_attributes.Jsonize());
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_timestampHasBeenSet) {
    payload.WithInt64("timestamp", m_timestamp);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
