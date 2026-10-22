/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayConnectorHealthCheckMatcher.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayConnectorHealthCheckMatcher::GatewayConnectorHealthCheckMatcher(JsonView jsonValue) { *this = jsonValue; }

GatewayConnectorHealthCheckMatcher& GatewayConnectorHealthCheckMatcher::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("httpCode")) {
    m_httpCode = jsonValue.GetString("httpCode");
    m_httpCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("grpcCode")) {
    m_grpcCode = jsonValue.GetString("grpcCode");
    m_grpcCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayConnectorHealthCheckMatcher::Jsonize() const {
  JsonValue payload;

  if (m_httpCodeHasBeenSet) {
    payload.WithString("httpCode", m_httpCode);
  }

  if (m_grpcCodeHasBeenSet) {
    payload.WithString("grpcCode", m_grpcCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
