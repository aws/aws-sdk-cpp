/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/SearchResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

SearchResult::SearchResult(JsonView jsonValue) { *this = jsonValue; }

SearchResult& SearchResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("searchId")) {
    m_searchId = jsonValue.GetString("searchId");
    m_searchIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
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
  if (jsonValue.ValueExists("topTimestamp")) {
    m_topTimestamp = jsonValue.GetObject("topTimestamp");
    m_topTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("score")) {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchResult::Jsonize() const {
  JsonValue payload;

  if (m_searchIdHasBeenSet) {
    payload.WithString("searchId", m_searchId);
  }

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
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

  if (m_topTimestampHasBeenSet) {
    payload.WithObject("topTimestamp", m_topTimestamp.Jsonize());
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("score", m_score);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
