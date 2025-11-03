/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

MinimumThroughputBillingCommitmentOutput::MinimumThroughputBillingCommitmentOutput(JsonView jsonValue) { *this = jsonValue; }

MinimumThroughputBillingCommitmentOutput& MinimumThroughputBillingCommitmentOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = MinimumThroughputBillingCommitmentOutputStatusMapper::GetMinimumThroughputBillingCommitmentOutputStatusForName(
        jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetDouble("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EarliestAllowedEndAt")) {
    m_earliestAllowedEndAt = jsonValue.GetDouble("EarliestAllowedEndAt");
    m_earliestAllowedEndAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MinimumThroughputBillingCommitmentOutput::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString(
        "Status", MinimumThroughputBillingCommitmentOutputStatusMapper::GetNameForMinimumThroughputBillingCommitmentOutputStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("EndedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_earliestAllowedEndAtHasBeenSet) {
    payload.WithDouble("EarliestAllowedEndAt", m_earliestAllowedEndAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
