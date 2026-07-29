/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ProcessingInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ProcessingInput::ProcessingInput(JsonView jsonValue) { *this = jsonValue; }

ProcessingInput& ProcessingInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeseries")) {
    Aws::Utils::Array<JsonView> timeseriesJsonList = jsonValue.GetArray("timeseries");
    for (unsigned timeseriesIndex = 0; timeseriesIndex < timeseriesJsonList.GetLength(); ++timeseriesIndex) {
      m_timeseries.push_back(timeseriesJsonList[timeseriesIndex].AsObject());
    }
    m_timeseriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataset")) {
    m_dataset = jsonValue.GetObject("dataset");
    m_datasetHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcessingInput::Jsonize() const {
  JsonValue payload;

  if (m_timeseriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> timeseriesJsonList(m_timeseries.size());
    for (unsigned timeseriesIndex = 0; timeseriesIndex < timeseriesJsonList.GetLength(); ++timeseriesIndex) {
      timeseriesJsonList[timeseriesIndex].AsObject(m_timeseries[timeseriesIndex].Jsonize());
    }
    payload.WithArray("timeseries", std::move(timeseriesJsonList));
  }

  if (m_datasetHasBeenSet) {
    payload.WithObject("dataset", m_dataset.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
