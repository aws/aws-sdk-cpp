/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExecutionRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExecutionRecord::ExecutionRecord(JsonView jsonValue) { *this = jsonValue; }

ExecutionRecord& ExecutionRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ObservationId")) {
    m_observationId = jsonValue.GetString("ObservationId");
    m_observationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExecutionRecordStatusMapper::GetExecutionRecordStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Record")) {
    m_record = jsonValue.GetString("Record");
    m_recordHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionRecord::Jsonize() const {
  JsonValue payload;

  if (m_observationIdHasBeenSet) {
    payload.WithString("ObservationId", m_observationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExecutionRecordStatusMapper::GetNameForExecutionRecordStatus(m_status));
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_recordHasBeenSet) {
    payload.WithString("Record", m_record);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
