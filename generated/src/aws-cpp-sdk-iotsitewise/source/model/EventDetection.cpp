/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/EventDetection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

EventDetection::EventDetection(JsonView jsonValue) { *this = jsonValue; }

EventDetection& EventDetection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeSeriesId")) {
    m_timeSeriesId = jsonValue.GetString("timeSeriesId");
    m_timeSeriesIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propertyAlias")) {
    m_propertyAlias = jsonValue.GetString("propertyAlias");
    m_propertyAliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trimSettings")) {
    m_trimSettings = jsonValue.GetObject("trimSettings");
    m_trimSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue EventDetection::Jsonize() const {
  JsonValue payload;

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_timeSeriesIdHasBeenSet) {
    payload.WithString("timeSeriesId", m_timeSeriesId);
  }

  if (m_propertyAliasHasBeenSet) {
    payload.WithString("propertyAlias", m_propertyAlias);
  }

  if (m_trimSettingsHasBeenSet) {
    payload.WithObject("trimSettings", m_trimSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
