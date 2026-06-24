/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Insight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Insight::Insight(JsonView jsonValue) { *this = jsonValue; }

Insight& Insight::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("insightId")) {
    m_insightId = jsonValue.GetString("insightId");
    m_insightIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Insight::Jsonize() const {
  JsonValue payload;

  if (m_insightIdHasBeenSet) {
    payload.WithString("insightId", m_insightId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
