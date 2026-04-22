/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessSlidingWindowConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessSlidingWindowConfiguration::HarnessSlidingWindowConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessSlidingWindowConfiguration& HarnessSlidingWindowConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("messagesCount")) {
    m_messagesCount = jsonValue.GetInteger("messagesCount");
    m_messagesCountHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessSlidingWindowConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_messagesCountHasBeenSet) {
    payload.WithInteger("messagesCount", m_messagesCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
