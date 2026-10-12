/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityTelemetry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityTelemetry::DataQualityTelemetry(JsonView jsonValue) { *this = jsonValue; }

DataQualityTelemetry& DataQualityTelemetry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VcpuHours")) {
    m_vcpuHours = jsonValue.GetDouble("VcpuHours");
    m_vcpuHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlagsEnabled")) {
    Aws::Map<Aws::String, JsonView> flagsEnabledJsonMap = jsonValue.GetObject("FlagsEnabled").GetAllObjects();
    for (auto& flagsEnabledItem : flagsEnabledJsonMap) {
      m_flagsEnabled[flagsEnabledItem.first] = flagsEnabledItem.second.AsString();
    }
    m_flagsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LibraryVersion")) {
    m_libraryVersion = jsonValue.GetString("LibraryVersion");
    m_libraryVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SparkVersion")) {
    m_sparkVersion = jsonValue.GetString("SparkVersion");
    m_sparkVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HostRuntimeVersion")) {
    m_hostRuntimeVersion = jsonValue.GetString("HostRuntimeVersion");
    m_hostRuntimeVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Engine")) {
    m_engine = DataQualityEngineMapper::GetDataQualityEngineForName(jsonValue.GetString("Engine"));
    m_engineHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityTelemetry::Jsonize() const {
  JsonValue payload;

  if (m_vcpuHoursHasBeenSet) {
    payload.WithDouble("VcpuHours", m_vcpuHours);
  }

  if (m_flagsEnabledHasBeenSet) {
    JsonValue flagsEnabledJsonMap;
    for (auto& flagsEnabledItem : m_flagsEnabled) {
      flagsEnabledJsonMap.WithString(flagsEnabledItem.first, flagsEnabledItem.second);
    }
    payload.WithObject("FlagsEnabled", std::move(flagsEnabledJsonMap));
  }

  if (m_libraryVersionHasBeenSet) {
    payload.WithString("LibraryVersion", m_libraryVersion);
  }

  if (m_sparkVersionHasBeenSet) {
    payload.WithString("SparkVersion", m_sparkVersion);
  }

  if (m_hostRuntimeVersionHasBeenSet) {
    payload.WithString("HostRuntimeVersion", m_hostRuntimeVersion);
  }

  if (m_engineHasBeenSet) {
    payload.WithString("Engine", DataQualityEngineMapper::GetNameForDataQualityEngine(m_engine));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
