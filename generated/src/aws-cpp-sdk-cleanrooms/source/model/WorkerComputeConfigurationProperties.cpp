/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/WorkerComputeConfigurationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

WorkerComputeConfigurationProperties::WorkerComputeConfigurationProperties(JsonView jsonValue) { *this = jsonValue; }

WorkerComputeConfigurationProperties& WorkerComputeConfigurationProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spark")) {
    Aws::Map<Aws::String, JsonView> sparkJsonMap = jsonValue.GetObject("spark").GetAllObjects();
    for (auto& sparkItem : sparkJsonMap) {
      m_spark[sparkItem.first] = sparkItem.second.AsString();
    }
    m_sparkHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkerComputeConfigurationProperties::Jsonize() const {
  JsonValue payload;

  if (m_sparkHasBeenSet) {
    JsonValue sparkJsonMap;
    for (auto& sparkItem : m_spark) {
      sparkJsonMap.WithString(sparkItem.first, sparkItem.second);
    }
    payload.WithObject("spark", std::move(sparkJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
