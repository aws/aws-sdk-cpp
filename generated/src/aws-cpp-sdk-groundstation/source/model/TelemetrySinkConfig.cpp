/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/TelemetrySinkConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

TelemetrySinkConfig::TelemetrySinkConfig(JsonView jsonValue) { *this = jsonValue; }

TelemetrySinkConfig& TelemetrySinkConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("telemetrySinkType")) {
    m_telemetrySinkType = TelemetrySinkTypeMapper::GetTelemetrySinkTypeForName(jsonValue.GetString("telemetrySinkType"));
    m_telemetrySinkTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("telemetrySinkData")) {
    m_telemetrySinkData = jsonValue.GetObject("telemetrySinkData");
    m_telemetrySinkDataHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetrySinkConfig::Jsonize() const {
  JsonValue payload;

  if (m_telemetrySinkTypeHasBeenSet) {
    payload.WithString("telemetrySinkType", TelemetrySinkTypeMapper::GetNameForTelemetrySinkType(m_telemetrySinkType));
  }

  if (m_telemetrySinkDataHasBeenSet) {
    payload.WithObject("telemetrySinkData", m_telemetrySinkData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
