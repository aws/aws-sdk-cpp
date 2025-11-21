/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/TriggerHistoryRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

TriggerHistoryRecord::TriggerHistoryRecord(JsonView jsonValue) { *this = jsonValue; }

TriggerHistoryRecord& TriggerHistoryRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryId")) {
    m_queryId = jsonValue.GetString("queryId");
    m_queryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggeredTimestamp")) {
    m_triggeredTimestamp = jsonValue.GetInt64("triggeredTimestamp");
    m_triggeredTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinations")) {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerHistoryRecord::Jsonize() const {
  JsonValue payload;

  if (m_queryIdHasBeenSet) {
    payload.WithString("queryId", m_queryId);
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  if (m_triggeredTimestampHasBeenSet) {
    payload.WithInt64("triggeredTimestamp", m_triggeredTimestamp);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_destinationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
    }
    payload.WithArray("destinations", std::move(destinationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
