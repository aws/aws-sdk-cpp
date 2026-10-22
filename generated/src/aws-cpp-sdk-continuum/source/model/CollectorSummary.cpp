/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CollectorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

CollectorSummary::CollectorSummary(JsonView jsonValue) { *this = jsonValue; }

CollectorSummary& CollectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("collectorId")) {
    m_collectorId = jsonValue.GetString("collectorId");
    m_collectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectorArn")) {
    m_collectorArn = jsonValue.GetString("collectorArn");
    m_collectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = CollectorTypeMapper::GetCollectorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CollectorStatusMapper::GetCollectorStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CollectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_collectorIdHasBeenSet) {
    payload.WithString("collectorId", m_collectorId);
  }

  if (m_collectorArnHasBeenSet) {
    payload.WithString("collectorArn", m_collectorArn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", CollectorTypeMapper::GetNameForCollectorType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CollectorStatusMapper::GetNameForCollectorStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
