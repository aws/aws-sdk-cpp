/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/GatewayOperationError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

GatewayOperationError::GatewayOperationError(JsonView jsonValue) { *this = jsonValue; }

GatewayOperationError& GatewayOperationError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operation")) {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayOperationError::Jsonize() const {
  JsonValue payload;

  if (m_operationHasBeenSet) {
    payload.WithString("operation", m_operation);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
