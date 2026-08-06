/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedDiscoveryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedDiscoveryConfiguration::UpdatedDiscoveryConfiguration(JsonView jsonValue) { *this = jsonValue; }

UpdatedDiscoveryConfiguration& UpdatedDiscoveryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizerConfiguration")) {
    m_authorizerConfiguration = jsonValue.GetObject("authorizerConfiguration");
    m_authorizerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedDiscoveryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_authorizerConfigurationHasBeenSet) {
    payload.WithObject("authorizerConfiguration", m_authorizerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
