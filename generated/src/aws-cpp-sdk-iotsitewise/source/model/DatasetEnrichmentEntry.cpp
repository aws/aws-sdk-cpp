/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DatasetEnrichmentEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DatasetEnrichmentEntry::DatasetEnrichmentEntry(JsonView jsonValue) { *this = jsonValue; }

DatasetEnrichmentEntry& DatasetEnrichmentEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetEnrichmentStatusMapper::GetDatasetEnrichmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastEnrichedAt")) {
    m_lastEnrichedAt = jsonValue.GetDouble("lastEnrichedAt");
    m_lastEnrichedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetEnrichmentEntry::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", DatasetEnrichmentStatusMapper::GetNameForDatasetEnrichmentStatus(m_status));
  }

  if (m_lastEnrichedAtHasBeenSet) {
    payload.WithDouble("lastEnrichedAt", m_lastEnrichedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
