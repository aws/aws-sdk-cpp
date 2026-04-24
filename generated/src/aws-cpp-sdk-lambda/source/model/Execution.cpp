/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/Execution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

Execution::Execution(JsonView jsonValue) { *this = jsonValue; }

Execution& Execution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DurableExecutionArn")) {
    m_durableExecutionArn = jsonValue.GetString("DurableExecutionArn");
    m_durableExecutionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DurableExecutionName")) {
    m_durableExecutionName = jsonValue.GetString("DurableExecutionName");
    m_durableExecutionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionArn")) {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTimestamp")) {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue Execution::Jsonize() const {
  JsonValue payload;

  if (m_durableExecutionArnHasBeenSet) {
    payload.WithString("DurableExecutionArn", m_durableExecutionArn);
  }

  if (m_durableExecutionNameHasBeenSet) {
    payload.WithString("DurableExecutionName", m_durableExecutionName);
  }

  if (m_functionArnHasBeenSet) {
    payload.WithString("FunctionArn", m_functionArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
