/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/WafConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

WafConfiguration::WafConfiguration(JsonView jsonValue) { *this = jsonValue; }

WafConfiguration& WafConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("failureMode")) {
    m_failureMode = WafFailureModeMapper::GetWafFailureModeForName(jsonValue.GetString("failureMode"));
    m_failureModeHasBeenSet = true;
  }
  return *this;
}

JsonValue WafConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_failureModeHasBeenSet) {
    payload.WithString("failureMode", WafFailureModeMapper::GetNameForWafFailureMode(m_failureMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
