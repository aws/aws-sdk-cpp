/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayElbAccessLogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayElbAccessLogConfiguration::GatewayElbAccessLogConfiguration(JsonView jsonValue) { *this = jsonValue; }

GatewayElbAccessLogConfiguration& GatewayElbAccessLogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destination")) {
    m_destination = jsonValue.GetObject("destination");
    m_destinationHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayElbAccessLogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationHasBeenSet) {
    payload.WithObject("destination", m_destination.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
