/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SessionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SessionFilter::SessionFilter(JsonView jsonValue) { *this = jsonValue; }

SessionFilter& SessionFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventFilter")) {
    m_eventFilter = EventFilterConditionMapper::GetEventFilterConditionForName(jsonValue.GetString("eventFilter"));
    m_eventFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionFilter::Jsonize() const {
  JsonValue payload;

  if (m_eventFilterHasBeenSet) {
    payload.WithString("eventFilter", EventFilterConditionMapper::GetNameForEventFilterCondition(m_eventFilter));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
