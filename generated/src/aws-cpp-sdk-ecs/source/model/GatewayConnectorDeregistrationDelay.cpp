/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnectorDeregistrationDelay.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnectorDeregistrationDelay::GatewayConnectorDeregistrationDelay(JsonView jsonValue) { *this = jsonValue; }

GatewayConnectorDeregistrationDelay& GatewayConnectorDeregistrationDelay::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnectorDeregistrationDelay::Jsonize() const {
  JsonValue payload;

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("timeoutSeconds", m_timeoutSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
