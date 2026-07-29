/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DataSegmentRelationshipSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DataSegmentRelationshipSummary::DataSegmentRelationshipSummary(JsonView jsonValue) { *this = jsonValue; }

DataSegmentRelationshipSummary& DataSegmentRelationshipSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetDatasetId")) {
    m_targetDatasetId = jsonValue.GetString("targetDatasetId");
    m_targetDatasetIdHasBeenSet = true;
  }
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
  return *this;
}

JsonValue DataSegmentRelationshipSummary::Jsonize() const {
  JsonValue payload;

  if (m_targetDatasetIdHasBeenSet) {
    payload.WithString("targetDatasetId", m_targetDatasetId);
  }

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

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
