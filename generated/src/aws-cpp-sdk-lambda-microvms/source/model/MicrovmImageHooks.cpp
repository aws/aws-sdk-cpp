/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/MicrovmImageHooks.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

MicrovmImageHooks::MicrovmImageHooks(JsonView jsonValue) { *this = jsonValue; }

MicrovmImageHooks& MicrovmImageHooks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ready")) {
    m_ready = HookStateMapper::GetHookStateForName(jsonValue.GetString("ready"));
    m_readyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("readyTimeoutInSeconds")) {
    m_readyTimeoutInSeconds = jsonValue.GetInteger("readyTimeoutInSeconds");
    m_readyTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validate")) {
    m_validate = HookStateMapper::GetHookStateForName(jsonValue.GetString("validate"));
    m_validateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validateTimeoutInSeconds")) {
    m_validateTimeoutInSeconds = jsonValue.GetInteger("validateTimeoutInSeconds");
    m_validateTimeoutInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrovmImageHooks::Jsonize() const {
  JsonValue payload;

  if (m_readyHasBeenSet) {
    payload.WithString("ready", HookStateMapper::GetNameForHookState(m_ready));
  }

  if (m_readyTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("readyTimeoutInSeconds", m_readyTimeoutInSeconds);
  }

  if (m_validateHasBeenSet) {
    payload.WithString("validate", HookStateMapper::GetNameForHookState(m_validate));
  }

  if (m_validateTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("validateTimeoutInSeconds", m_validateTimeoutInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
