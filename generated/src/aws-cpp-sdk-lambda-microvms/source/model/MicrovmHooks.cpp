/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/MicrovmHooks.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

MicrovmHooks::MicrovmHooks(JsonView jsonValue) { *this = jsonValue; }

MicrovmHooks& MicrovmHooks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("run")) {
    m_run = HookStateMapper::GetHookStateForName(jsonValue.GetString("run"));
    m_runHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runTimeoutInSeconds")) {
    m_runTimeoutInSeconds = jsonValue.GetInteger("runTimeoutInSeconds");
    m_runTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resume")) {
    m_resume = HookStateMapper::GetHookStateForName(jsonValue.GetString("resume"));
    m_resumeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resumeTimeoutInSeconds")) {
    m_resumeTimeoutInSeconds = jsonValue.GetInteger("resumeTimeoutInSeconds");
    m_resumeTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspend")) {
    m_suspend = HookStateMapper::GetHookStateForName(jsonValue.GetString("suspend"));
    m_suspendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspendTimeoutInSeconds")) {
    m_suspendTimeoutInSeconds = jsonValue.GetInteger("suspendTimeoutInSeconds");
    m_suspendTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("terminate")) {
    m_terminate = HookStateMapper::GetHookStateForName(jsonValue.GetString("terminate"));
    m_terminateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("terminateTimeoutInSeconds")) {
    m_terminateTimeoutInSeconds = jsonValue.GetInteger("terminateTimeoutInSeconds");
    m_terminateTimeoutInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrovmHooks::Jsonize() const {
  JsonValue payload;

  if (m_runHasBeenSet) {
    payload.WithString("run", HookStateMapper::GetNameForHookState(m_run));
  }

  if (m_runTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("runTimeoutInSeconds", m_runTimeoutInSeconds);
  }

  if (m_resumeHasBeenSet) {
    payload.WithString("resume", HookStateMapper::GetNameForHookState(m_resume));
  }

  if (m_resumeTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("resumeTimeoutInSeconds", m_resumeTimeoutInSeconds);
  }

  if (m_suspendHasBeenSet) {
    payload.WithString("suspend", HookStateMapper::GetNameForHookState(m_suspend));
  }

  if (m_suspendTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("suspendTimeoutInSeconds", m_suspendTimeoutInSeconds);
  }

  if (m_terminateHasBeenSet) {
    payload.WithString("terminate", HookStateMapper::GetNameForHookState(m_terminate));
  }

  if (m_terminateTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("terminateTimeoutInSeconds", m_terminateTimeoutInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
