/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ExpressGatewayServiceStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ExpressGatewayServiceStatus::ExpressGatewayServiceStatus(JsonView jsonValue) { *this = jsonValue; }

ExpressGatewayServiceStatus& ExpressGatewayServiceStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("statusCode")) {
    m_statusCode = ExpressGatewayServiceStatusCodeMapper::GetExpressGatewayServiceStatusCodeForName(jsonValue.GetString("statusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressGatewayServiceStatus::Jsonize() const {
  JsonValue payload;

  if (m_statusCodeHasBeenSet) {
    payload.WithString("statusCode", ExpressGatewayServiceStatusCodeMapper::GetNameForExpressGatewayServiceStatusCode(m_statusCode));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
