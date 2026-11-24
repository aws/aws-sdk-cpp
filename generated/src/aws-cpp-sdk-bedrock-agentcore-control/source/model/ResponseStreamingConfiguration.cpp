/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ResponseStreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ResponseStreamingConfiguration::ResponseStreamingConfiguration(JsonView jsonValue) { *this = jsonValue; }

ResponseStreamingConfiguration& ResponseStreamingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxEventsPerInvocation")) {
    m_maxEventsPerInvocation = jsonValue.GetInteger("maxEventsPerInvocation");
    m_maxEventsPerInvocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponseStreamingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_maxEventsPerInvocationHasBeenSet) {
    payload.WithInteger("maxEventsPerInvocation", m_maxEventsPerInvocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
