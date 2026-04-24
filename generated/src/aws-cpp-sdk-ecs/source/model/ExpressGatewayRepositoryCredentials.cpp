/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ExpressGatewayRepositoryCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ExpressGatewayRepositoryCredentials::ExpressGatewayRepositoryCredentials(JsonView jsonValue) { *this = jsonValue; }

ExpressGatewayRepositoryCredentials& ExpressGatewayRepositoryCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("credentialsParameter")) {
    m_credentialsParameter = jsonValue.GetString("credentialsParameter");
    m_credentialsParameterHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpressGatewayRepositoryCredentials::Jsonize() const {
  JsonValue payload;

  if (m_credentialsParameterHasBeenSet) {
    payload.WithString("credentialsParameter", m_credentialsParameter);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
