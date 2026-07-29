/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DataSegmentEnrichment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DataSegmentEnrichment::DataSegmentEnrichment(JsonView jsonValue) { *this = jsonValue; }

DataSegmentEnrichment& DataSegmentEnrichment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = EnrichmentStatusMapper::GetEnrichmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastEnrichedAt")) {
    m_lastEnrichedAt = jsonValue.GetDouble("lastEnrichedAt");
    m_lastEnrichedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSegmentEnrichment::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", EnrichmentStatusMapper::GetNameForEnrichmentStatus(m_status));
  }

  if (m_lastEnrichedAtHasBeenSet) {
    payload.WithDouble("lastEnrichedAt", m_lastEnrichedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
