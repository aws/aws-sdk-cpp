/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AuthorizerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AuthorizerConfiguration::AuthorizerConfiguration(JsonView jsonValue) { *this = jsonValue; }

AuthorizerConfiguration& AuthorizerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customJWTAuthorizer")) {
    m_customJWTAuthorizer = jsonValue.GetObject("customJWTAuthorizer");
    m_customJWTAuthorizerHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_customJWTAuthorizerHasBeenSet) {
    payload.WithObject("customJWTAuthorizer", m_customJWTAuthorizer.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
