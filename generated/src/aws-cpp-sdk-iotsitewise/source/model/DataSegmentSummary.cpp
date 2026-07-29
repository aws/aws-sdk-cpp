/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DataSegmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DataSegmentSummary::DataSegmentSummary(JsonView jsonValue) { *this = jsonValue; }

DataSegmentSummary& DataSegmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceDatasetId")) {
    m_sourceDatasetId = jsonValue.GetString("sourceDatasetId");
    m_sourceDatasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeSeriesId")) {
    m_timeSeriesId = jsonValue.GetString("timeSeriesId");
    m_timeSeriesIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTimestamp")) {
    m_startTimestamp = jsonValue.GetObject("startTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimestamp")) {
    m_endTimestamp = jsonValue.GetObject("endTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alias")) {
    m_alias = jsonValue.GetString("alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataType")) {
    m_dataType = PropertyDataTypeMapper::GetPropertyDataTypeForName(jsonValue.GetString("dataType"));
    m_dataTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrichment")) {
    m_enrichment = jsonValue.GetObject("enrichment");
    m_enrichmentHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSegmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_sourceDatasetIdHasBeenSet) {
    payload.WithString("sourceDatasetId", m_sourceDatasetId);
  }

  if (m_timeSeriesIdHasBeenSet) {
    payload.WithString("timeSeriesId", m_timeSeriesId);
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithObject("startTimestamp", m_startTimestamp.Jsonize());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithObject("endTimestamp", m_endTimestamp.Jsonize());
  }

  if (m_aliasHasBeenSet) {
    payload.WithString("alias", m_alias);
  }

  if (m_dataTypeHasBeenSet) {
    payload.WithString("dataType", PropertyDataTypeMapper::GetNameForPropertyDataType(m_dataType));
  }

  if (m_enrichmentHasBeenSet) {
    payload.WithObject("enrichment", m_enrichment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
