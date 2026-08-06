/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/DiscoveryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

DiscoveryConfiguration::DiscoveryConfiguration(JsonView jsonValue) { *this = jsonValue; }

DiscoveryConfiguration& DiscoveryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizerConfiguration")) {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerType")) {
    m_authorizerType = RegistryAuthorizerTypeMapper::GetRegistryAuthorizerTypeForName(jsonValue.GetString("authorizerType"));
    m_authorizerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DiscoveryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_authorizerConfigurationHasBeenSet) {
    payload.WithObject("authorizerConfiguration", m_authorizerConfiguration.Jsonize());
  }

  if (m_authorizerTypeHasBeenSet) {
    payload.WithString("authorizerType", RegistryAuthorizerTypeMapper::GetNameForRegistryAuthorizerType(m_authorizerType));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
