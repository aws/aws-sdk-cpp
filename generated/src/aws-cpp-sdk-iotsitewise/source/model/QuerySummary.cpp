/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/QuerySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

QuerySummary::QuerySummary(JsonView jsonValue) { *this = jsonValue; }

QuerySummary& QuerySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryId")) {
    m_queryId = jsonValue.GetString("queryId");
    m_queryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submittedAt")) {
    m_submittedAt = jsonValue.GetDouble("submittedAt");
    m_submittedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetDouble("completedAt");
    m_completedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue QuerySummary::Jsonize() const {
  JsonValue payload;

  if (m_queryIdHasBeenSet) {
    payload.WithString("queryId", m_queryId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", QueryStatusMapper::GetNameForQueryStatus(m_status));
  }

  if (m_submittedAtHasBeenSet) {
    payload.WithDouble("submittedAt", m_submittedAt.SecondsWithMSPrecision());
  }

  if (m_completedAtHasBeenSet) {
    payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
