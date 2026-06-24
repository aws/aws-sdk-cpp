/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CreateInstrumentationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateInstrumentationConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_environmentHasBeenSet) {
    payload.WithString("Environment", m_environment);
  }

  if (m_signalTypeHasBeenSet) {
    payload.WithString("SignalType", DynamicInstrumentationSignalTypeMapper::GetNameForDynamicInstrumentationSignalType(m_signalType));
  }

  if (m_locationHasBeenSet) {
    payload.WithObject("Location", m_location.Jsonize());
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

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
