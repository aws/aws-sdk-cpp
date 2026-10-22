/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnector::GatewayConnector(JsonView jsonValue) { *this = jsonValue; }

GatewayConnector& GatewayConnector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("portName")) {
    m_portName = jsonValue.GetString("portName");
    m_portNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthCheck")) {
    m_healthCheck = jsonValue.GetObject("healthCheck");
    m_healthCheckHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filters")) {
    m_filters = jsonValue.GetObject("filters");
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnector::Jsonize() const {
  JsonValue payload;

  if (m_portNameHasBeenSet) {
    payload.WithString("portName", m_portName);
  }

  if (m_healthCheckHasBeenSet) {
    payload.WithObject("healthCheck", m_healthCheck.Jsonize());
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
