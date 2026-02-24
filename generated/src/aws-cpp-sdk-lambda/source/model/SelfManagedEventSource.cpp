/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/SelfManagedEventSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

SelfManagedEventSource::SelfManagedEventSource(JsonView jsonValue) { *this = jsonValue; }

SelfManagedEventSource& SelfManagedEventSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Endpoints")) {
    Aws::Map<Aws::String, JsonView> endpointsJsonMap = jsonValue.GetObject("Endpoints").GetAllObjects();
    for (auto& endpointsItem : endpointsJsonMap) {
      Aws::Utils::Array<JsonView> endpointLists2JsonList = endpointsItem.second.AsArray();
      Aws::Vector<Aws::String> endpointLists2List;
      endpointLists2List.reserve((size_t)endpointLists2JsonList.GetLength());
      for (unsigned endpointLists2Index = 0; endpointLists2Index < endpointLists2JsonList.GetLength(); ++endpointLists2Index) {
        endpointLists2List.push_back(endpointLists2JsonList[endpointLists2Index].AsString());
      }
      m_endpoints[EndPointTypeMapper::GetEndPointTypeForName(endpointsItem.first)] = std::move(endpointLists2List);
    }
    m_endpointsHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfManagedEventSource::Jsonize() const {
  JsonValue payload;

  if (m_endpointsHasBeenSet) {
    JsonValue endpointsJsonMap;
    for (auto& endpointsItem : m_endpoints) {
      Aws::Utils::Array<JsonValue> endpointListsJsonList(endpointsItem.second.size());
      for (unsigned endpointListsIndex = 0; endpointListsIndex < endpointListsJsonList.GetLength(); ++endpointListsIndex) {
        endpointListsJsonList[endpointListsIndex].AsString(endpointsItem.second[endpointListsIndex]);
      }
      endpointsJsonMap.WithArray(EndPointTypeMapper::GetNameForEndPointType(endpointsItem.first), std::move(endpointListsJsonList));
    }
    payload.WithObject("Endpoints", std::move(endpointsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
