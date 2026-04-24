/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessMessageStopEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessMessageStopEvent::HarnessMessageStopEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessMessageStopEvent& HarnessMessageStopEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stopReason")) {
    m_stopReason = HarnessStopReasonMapper::GetHarnessStopReasonForName(jsonValue.GetString("stopReason"));
    m_stopReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessMessageStopEvent::Jsonize() const {
  JsonValue payload;

  if (m_stopReasonHasBeenSet) {
    payload.WithString("stopReason", HarnessStopReasonMapper::GetNameForHarnessStopReason(m_stopReason));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
