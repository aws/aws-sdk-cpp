/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/RestEndpointIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

RestEndpointIdentifier::RestEndpointIdentifier(JsonView jsonValue) { *this = jsonValue; }

RestEndpointIdentifier& RestEndpointIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifierParts")) {
    m_identifierParts = jsonValue.GetObject("identifierParts");
    m_identifierPartsHasBeenSet = true;
  }
  return *this;
}

JsonValue RestEndpointIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_identifierPartsHasBeenSet) {
    payload.WithObject("identifierParts", m_identifierParts.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
