/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/IdlePolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

IdlePolicy::IdlePolicy(JsonView jsonValue) { *this = jsonValue; }

IdlePolicy& IdlePolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxIdleDurationSeconds")) {
    m_maxIdleDurationSeconds = jsonValue.GetInteger("maxIdleDurationSeconds");
    m_maxIdleDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspendedDurationSeconds")) {
    m_suspendedDurationSeconds = jsonValue.GetInteger("suspendedDurationSeconds");
    m_suspendedDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("autoResumeEnabled")) {
    m_autoResumeEnabled = jsonValue.GetBool("autoResumeEnabled");
    m_autoResumeEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue IdlePolicy::Jsonize() const {
  JsonValue payload;

  if (m_maxIdleDurationSecondsHasBeenSet) {
    payload.WithInteger("maxIdleDurationSeconds", m_maxIdleDurationSeconds);
  }

  if (m_suspendedDurationSecondsHasBeenSet) {
    payload.WithInteger("suspendedDurationSeconds", m_suspendedDurationSeconds);
  }

  if (m_autoResumeEnabledHasBeenSet) {
    payload.WithBool("autoResumeEnabled", m_autoResumeEnabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
