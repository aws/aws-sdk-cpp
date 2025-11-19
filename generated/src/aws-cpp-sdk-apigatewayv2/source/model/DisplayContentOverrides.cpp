/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DisplayContentOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

DisplayContentOverrides::DisplayContentOverrides(JsonView jsonValue) { *this = jsonValue; }

DisplayContentOverrides& DisplayContentOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operationName")) {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DisplayContentOverrides::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("body", m_body);
  }

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_operationNameHasBeenSet) {
    payload.WithString("operationName", m_operationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
