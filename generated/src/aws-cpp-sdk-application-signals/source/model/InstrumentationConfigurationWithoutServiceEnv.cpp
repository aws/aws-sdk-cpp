/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/InstrumentationConfigurationWithoutServiceEnv.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

InstrumentationConfigurationWithoutServiceEnv::InstrumentationConfigurationWithoutServiceEnv(JsonView jsonValue) { *this = jsonValue; }

InstrumentationConfigurationWithoutServiceEnv& InstrumentationConfigurationWithoutServiceEnv::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstrumentationType")) {
    m_instrumentationType = InstrumentationTypeMapper::GetInstrumentationTypeForName(jsonValue.GetString("InstrumentationType"));
    m_instrumentationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SignalType")) {
    m_signalType = DynamicInstrumentationSignalTypeMapper::GetDynamicInstrumentationSignalTypeForName(jsonValue.GetString("SignalType"));
    m_signalTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetObject("Location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocationHash")) {
    m_locationHash = jsonValue.GetString("LocationHash");
    m_locationHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeFilters")) {
    Aws::Utils::Array<JsonView> attributeFiltersJsonList = jsonValue.GetArray("AttributeFilters");
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      Aws::Map<Aws::String, JsonView> dynamicInstrumentationAttributeFilterGroup2JsonMap =
          attributeFiltersJsonList[attributeFiltersIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> dynamicInstrumentationAttributeFilterGroup2Map;
      for (auto& dynamicInstrumentationAttributeFilterGroup2Item : dynamicInstrumentationAttributeFilterGroup2JsonMap) {
        dynamicInstrumentationAttributeFilterGroup2Map[dynamicInstrumentationAttributeFilterGroup2Item.first] =
            dynamicInstrumentationAttributeFilterGroup2Item.second.AsString();
      }
      m_attributeFilters.push_back(std::move(dynamicInstrumentationAttributeFilterGroup2Map));
    }
    m_attributeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureConfiguration")) {
    m_captureConfiguration = jsonValue.GetObject("CaptureConfiguration");
    m_captureConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ARN")) {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  return *this;
}

JsonValue InstrumentationConfigurationWithoutServiceEnv::Jsonize() const {
  JsonValue payload;

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  if (m_signalTypeHasBeenSet) {
    payload.WithString("SignalType", DynamicInstrumentationSignalTypeMapper::GetNameForDynamicInstrumentationSignalType(m_signalType));
  }

  if (m_locationHasBeenSet) {
    payload.WithObject("Location", m_location.Jsonize());
  }

  if (m_locationHashHasBeenSet) {
    payload.WithString("LocationHash", m_locationHash);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_attributeFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeFiltersJsonList(m_attributeFilters.size());
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      JsonValue dynamicInstrumentationAttributeFilterGroupJsonMap;
      for (auto& dynamicInstrumentationAttributeFilterGroupItem : m_attributeFilters[attributeFiltersIndex]) {
        dynamicInstrumentationAttributeFilterGroupJsonMap.WithString(dynamicInstrumentationAttributeFilterGroupItem.first,
                                                                     dynamicInstrumentationAttributeFilterGroupItem.second);
      }
      attributeFiltersJsonList[attributeFiltersIndex].AsObject(std::move(dynamicInstrumentationAttributeFilterGroupJsonMap));
    }
    payload.WithArray("AttributeFilters", std::move(attributeFiltersJsonList));
  }

  if (m_captureConfigurationHasBeenSet) {
    payload.WithObject("CaptureConfiguration", m_captureConfiguration.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_aRNHasBeenSet) {
    payload.WithString("ARN", m_aRN);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
