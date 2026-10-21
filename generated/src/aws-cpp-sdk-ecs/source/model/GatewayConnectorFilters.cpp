/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnectorFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnectorFilters::GatewayConnectorFilters(JsonView jsonValue) { *this = jsonValue; }

GatewayConnectorFilters& GatewayConnectorFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessTypes")) {
    Aws::Utils::Array<JsonView> accessTypesJsonList = jsonValue.GetArray("accessTypes");
    for (unsigned accessTypesIndex = 0; accessTypesIndex < accessTypesJsonList.GetLength(); ++accessTypesIndex) {
      m_accessTypes.push_back(AccessTypeMapper::GetAccessTypeForName(accessTypesJsonList[accessTypesIndex].AsString()));
    }
    m_accessTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnectorFilters::Jsonize() const {
  JsonValue payload;

  if (m_accessTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> accessTypesJsonList(m_accessTypes.size());
    for (unsigned accessTypesIndex = 0; accessTypesIndex < accessTypesJsonList.GetLength(); ++accessTypesIndex) {
      accessTypesJsonList[accessTypesIndex].AsString(AccessTypeMapper::GetNameForAccessType(m_accessTypes[accessTypesIndex]));
    }
    payload.WithArray("accessTypes", std::move(accessTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
