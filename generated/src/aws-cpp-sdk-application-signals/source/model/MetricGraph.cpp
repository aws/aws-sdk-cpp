/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/MetricGraph.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

MetricGraph::MetricGraph(JsonView jsonValue) { *this = jsonValue; }

MetricGraph& MetricGraph::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricDataQueries")) {
    Aws::Utils::Array<JsonView> metricDataQueriesJsonList = jsonValue.GetArray("MetricDataQueries");
    for (unsigned metricDataQueriesIndex = 0; metricDataQueriesIndex < metricDataQueriesJsonList.GetLength(); ++metricDataQueriesIndex) {
      m_metricDataQueries.push_back(metricDataQueriesJsonList[metricDataQueriesIndex].AsObject());
    }
    m_metricDataQueriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricGraph::Jsonize() const {
  JsonValue payload;

  if (m_metricDataQueriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricDataQueriesJsonList(m_metricDataQueries.size());
    for (unsigned metricDataQueriesIndex = 0; metricDataQueriesIndex < metricDataQueriesJsonList.GetLength(); ++metricDataQueriesIndex) {
      metricDataQueriesJsonList[metricDataQueriesIndex].AsObject(m_metricDataQueries[metricDataQueriesIndex].Jsonize());
    }
    payload.WithArray("MetricDataQueries", std::move(metricDataQueriesJsonList));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
