/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/TimeseriesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

TimeseriesItem::TimeseriesItem(JsonView jsonValue) { *this = jsonValue; }

TimeseriesItem& TimeseriesItem::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("formatSettings")) {
    m_formatSettings = jsonValue.GetObject("formatSettings");
    m_formatSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeseriesItem::Jsonize() const {
  JsonValue payload;

  if (m_timeSeriesIdHasBeenSet) {
    payload.WithString("timeSeriesId", m_timeSeriesId);
  }

  if (m_propertyAliasHasBeenSet) {
    payload.WithString("propertyAlias", m_propertyAlias);
  }

  if (m_trimSettingsHasBeenSet) {
    payload.WithObject("trimSettings", m_trimSettings.Jsonize());
  }

  if (m_formatSettingsHasBeenSet) {
    payload.WithObject("formatSettings", m_formatSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
