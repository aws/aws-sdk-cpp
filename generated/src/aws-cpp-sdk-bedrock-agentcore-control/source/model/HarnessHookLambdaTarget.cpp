/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessHookLambdaTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessHookLambdaTarget::HarnessHookLambdaTarget(JsonView jsonValue) { *this = jsonValue; }

HarnessHookLambdaTarget& HarnessHookLambdaTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMode")) {
    m_failureMode = HarnessHookFailureModeMapper::GetHarnessHookFailureModeForName(jsonValue.GetString("failureMode"));
    m_failureModeHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessHookLambdaTarget::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("timeoutSeconds", m_timeoutSeconds);
  }

  if (m_failureModeHasBeenSet) {
    payload.WithString("failureMode", HarnessHookFailureModeMapper::GetNameForHarnessHookFailureMode(m_failureMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
