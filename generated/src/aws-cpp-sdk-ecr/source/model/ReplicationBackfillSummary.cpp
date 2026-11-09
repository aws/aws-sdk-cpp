/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/ReplicationBackfillSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

ReplicationBackfillSummary::ReplicationBackfillSummary(JsonView jsonValue) { *this = jsonValue; }

ReplicationBackfillSummary& ReplicationBackfillSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("replicationBackfillId")) {
    m_replicationBackfillId = jsonValue.GetString("replicationBackfillId");
    m_replicationBackfillIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destination")) {
    m_destination = jsonValue.GetObject("destination");
    m_destinationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ReplicationBackfillStatusMapper::GetReplicationBackfillStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCode")) {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("progress")) {
    m_progress = jsonValue.GetObject("progress");
    m_progressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationBackfillSummary::Jsonize() const {
  JsonValue payload;

  if (m_replicationBackfillIdHasBeenSet) {
    payload.WithString("replicationBackfillId", m_replicationBackfillId);
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("destination", m_destination.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ReplicationBackfillStatusMapper::GetNameForReplicationBackfillStatus(m_status));
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("failureCode", m_failureCode);
  }

  if (m_progressHasBeenSet) {
    payload.WithObject("progress", m_progress.Jsonize());
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
