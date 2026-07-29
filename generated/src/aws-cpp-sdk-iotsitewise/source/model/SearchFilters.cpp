/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/SearchFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

SearchFilters::SearchFilters(JsonView jsonValue) { *this = jsonValue; }

SearchFilters& SearchFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeSeriesIds")) {
    Aws::Utils::Array<JsonView> timeSeriesIdsJsonList = jsonValue.GetArray("timeSeriesIds");
    for (unsigned timeSeriesIdsIndex = 0; timeSeriesIdsIndex < timeSeriesIdsJsonList.GetLength(); ++timeSeriesIdsIndex) {
      m_timeSeriesIds.push_back(timeSeriesIdsJsonList[timeSeriesIdsIndex].AsString());
    }
    m_timeSeriesIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetIds")) {
    Aws::Utils::Array<JsonView> datasetIdsJsonList = jsonValue.GetArray("datasetIds");
    for (unsigned datasetIdsIndex = 0; datasetIdsIndex < datasetIdsJsonList.GetLength(); ++datasetIdsIndex) {
      m_datasetIds.push_back(datasetIdsJsonList[datasetIdsIndex].AsString());
    }
    m_datasetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeIntervals")) {
    Aws::Utils::Array<JsonView> timeIntervalsJsonList = jsonValue.GetArray("timeIntervals");
    for (unsigned timeIntervalsIndex = 0; timeIntervalsIndex < timeIntervalsJsonList.GetLength(); ++timeIntervalsIndex) {
      m_timeIntervals.push_back(timeIntervalsJsonList[timeIntervalsIndex].AsObject());
    }
    m_timeIntervalsHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchFilters::Jsonize() const {
  JsonValue payload;

  if (m_timeSeriesIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> timeSeriesIdsJsonList(m_timeSeriesIds.size());
    for (unsigned timeSeriesIdsIndex = 0; timeSeriesIdsIndex < timeSeriesIdsJsonList.GetLength(); ++timeSeriesIdsIndex) {
      timeSeriesIdsJsonList[timeSeriesIdsIndex].AsString(m_timeSeriesIds[timeSeriesIdsIndex]);
    }
    payload.WithArray("timeSeriesIds", std::move(timeSeriesIdsJsonList));
  }

  if (m_datasetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> datasetIdsJsonList(m_datasetIds.size());
    for (unsigned datasetIdsIndex = 0; datasetIdsIndex < datasetIdsJsonList.GetLength(); ++datasetIdsIndex) {
      datasetIdsJsonList[datasetIdsIndex].AsString(m_datasetIds[datasetIdsIndex]);
    }
    payload.WithArray("datasetIds", std::move(datasetIdsJsonList));
  }

  if (m_timeIntervalsHasBeenSet) {
    Aws::Utils::Array<JsonValue> timeIntervalsJsonList(m_timeIntervals.size());
    for (unsigned timeIntervalsIndex = 0; timeIntervalsIndex < timeIntervalsJsonList.GetLength(); ++timeIntervalsIndex) {
      timeIntervalsJsonList[timeIntervalsIndex].AsObject(m_timeIntervals[timeIntervalsIndex].Jsonize());
    }
    payload.WithArray("timeIntervals", std::move(timeIntervalsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
