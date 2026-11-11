/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotOperationInfo::SnapshotOperationInfo(JsonView jsonValue) { *this = jsonValue; }

SnapshotOperationInfo& SnapshotOperationInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SnapshotOperationId")) {
    m_snapshotOperationId = jsonValue.GetString("SnapshotOperationId");
    m_snapshotOperationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperation")) {
    m_snapshotOperation = SnapshotOperationMapper::GetSnapshotOperationForName(jsonValue.GetString("SnapshotOperation"));
    m_snapshotOperationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperationStatus")) {
    m_snapshotOperationStatus =
        SnapshotOperationStatusMapper::GetSnapshotOperationStatusForName(jsonValue.GetString("SnapshotOperationStatus"));
    m_snapshotOperationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotOperationInfo::Jsonize() const {
  JsonValue payload;

  if (m_snapshotOperationIdHasBeenSet) {
    payload.WithString("SnapshotOperationId", m_snapshotOperationId);
  }

  if (m_snapshotOperationHasBeenSet) {
    payload.WithString("SnapshotOperation", SnapshotOperationMapper::GetNameForSnapshotOperation(m_snapshotOperation));
  }

  if (m_snapshotOperationStatusHasBeenSet) {
    payload.WithString("SnapshotOperationStatus",
                       SnapshotOperationStatusMapper::GetNameForSnapshotOperationStatus(m_snapshotOperationStatus));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
