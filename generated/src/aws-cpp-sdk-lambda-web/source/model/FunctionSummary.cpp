/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/FunctionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

FunctionSummary::FunctionSummary(JsonView jsonValue) { *this = jsonValue; }

FunctionSummary& FunctionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("functionName")) {
    m_functionName = jsonValue.GetString("functionName");
    m_functionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("functionArn")) {
    m_functionArn = jsonValue.GetString("functionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = FunctionStateMapper::GetFunctionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionSummary::Jsonize() const {
  JsonValue payload;

  if (m_functionNameHasBeenSet) {
    payload.WithString("functionName", m_functionName);
  }

  if (m_functionArnHasBeenSet) {
    payload.WithString("functionArn", m_functionArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", FunctionStateMapper::GetNameForFunctionState(m_state));
  }

  if (m_stateReasonHasBeenSet) {
    payload.WithString("stateReason", m_stateReason);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
