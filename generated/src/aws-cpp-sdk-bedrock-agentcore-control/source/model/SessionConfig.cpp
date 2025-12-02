/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SessionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SessionConfig::SessionConfig(JsonView jsonValue) { *this = jsonValue; }

SessionConfig& SessionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionTimeoutMinutes")) {
    m_sessionTimeoutMinutes = jsonValue.GetInteger("sessionTimeoutMinutes");
    m_sessionTimeoutMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionConfig::Jsonize() const {
  JsonValue payload;

  if (m_sessionTimeoutMinutesHasBeenSet) {
    payload.WithInteger("sessionTimeoutMinutes", m_sessionTimeoutMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
