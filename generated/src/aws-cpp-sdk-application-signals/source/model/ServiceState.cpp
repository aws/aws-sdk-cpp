/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

ServiceState::ServiceState(JsonView jsonValue) { *this = jsonValue; }

ServiceState& ServiceState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeFilters")) {
    Aws::Utils::Array<JsonView> attributeFiltersJsonList = jsonValue.GetArray("AttributeFilters");
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      m_attributeFilters.push_back(attributeFiltersJsonList[attributeFiltersIndex].AsObject());
    }
    m_attributeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Service")) {
    Aws::Map<Aws::String, JsonView> serviceJsonMap = jsonValue.GetObject("Service").GetAllObjects();
    for (auto& serviceItem : serviceJsonMap) {
      m_service[serviceItem.first] = serviceItem.second.AsString();
    }
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestChangeEvents")) {
    Aws::Utils::Array<JsonView> latestChangeEventsJsonList = jsonValue.GetArray("LatestChangeEvents");
    for (unsigned latestChangeEventsIndex = 0; latestChangeEventsIndex < latestChangeEventsJsonList.GetLength();
         ++latestChangeEventsIndex) {
      m_latestChangeEvents.push_back(latestChangeEventsJsonList[latestChangeEventsIndex].AsObject());
    }
    m_latestChangeEventsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceState::Jsonize() const {
  JsonValue payload;

  if (m_attributeFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeFiltersJsonList(m_attributeFilters.size());
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      attributeFiltersJsonList[attributeFiltersIndex].AsObject(m_attributeFilters[attributeFiltersIndex].Jsonize());
    }
    payload.WithArray("AttributeFilters", std::move(attributeFiltersJsonList));
  }

  if (m_serviceHasBeenSet) {
    JsonValue serviceJsonMap;
    for (auto& serviceItem : m_service) {
      serviceJsonMap.WithString(serviceItem.first, serviceItem.second);
    }
    payload.WithObject("Service", std::move(serviceJsonMap));
  }

  if (m_latestChangeEventsHasBeenSet) {
    Aws::Utils::Array<JsonValue> latestChangeEventsJsonList(m_latestChangeEvents.size());
    for (unsigned latestChangeEventsIndex = 0; latestChangeEventsIndex < latestChangeEventsJsonList.GetLength();
         ++latestChangeEventsIndex) {
      latestChangeEventsJsonList[latestChangeEventsIndex].AsObject(m_latestChangeEvents[latestChangeEventsIndex].Jsonize());
    }
    payload.WithArray("LatestChangeEvents", std::move(latestChangeEventsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
