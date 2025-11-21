/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Authorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

Authorization::Authorization(JsonView jsonValue) { *this = jsonValue; }

Authorization& Authorization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cognitoConfig")) {
    m_cognitoConfig = jsonValue.GetObject("cognitoConfig");
    m_cognitoConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("none")) {
    m_none = jsonValue.GetObject("none");
    m_noneHasBeenSet = true;
  }
  return *this;
}

JsonValue Authorization::Jsonize() const {
  JsonValue payload;

  if (m_cognitoConfigHasBeenSet) {
    payload.WithObject("cognitoConfig", m_cognitoConfig.Jsonize());
  }

  if (m_noneHasBeenSet) {
    payload.WithObject("none", m_none.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
