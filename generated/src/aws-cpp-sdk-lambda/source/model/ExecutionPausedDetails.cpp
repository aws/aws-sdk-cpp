/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ExecutionPausedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ExecutionPausedDetails::ExecutionPausedDetails(JsonView jsonValue) { *this = jsonValue; }

ExecutionPausedDetails& ExecutionPausedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PauseRequestTimestamp")) {
    m_pauseRequestTimestamp = jsonValue.GetDouble("PauseRequestTimestamp");
    m_pauseRequestTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = jsonValue.GetObject("Reason");
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionTimeoutPaused")) {
    m_executionTimeoutPaused = jsonValue.GetBool("ExecutionTimeoutPaused");
    m_executionTimeoutPausedHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionPausedDetails::Jsonize() const {
  JsonValue payload;

  if (m_pauseRequestTimestampHasBeenSet) {
    payload.WithDouble("PauseRequestTimestamp", m_pauseRequestTimestamp.SecondsWithMSPrecision());
  }

  if (m_reasonHasBeenSet) {
    payload.WithObject("Reason", m_reason.Jsonize());
  }

  if (m_executionTimeoutPausedHasBeenSet) {
    payload.WithBool("ExecutionTimeoutPaused", m_executionTimeoutPaused);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
