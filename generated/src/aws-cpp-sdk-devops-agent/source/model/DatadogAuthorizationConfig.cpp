/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/DatadogAuthorizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

DatadogAuthorizationConfig::DatadogAuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

DatadogAuthorizationConfig& DatadogAuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationDiscovery")) {
    m_authorizationDiscovery = jsonValue.GetObject("authorizationDiscovery");
    m_authorizationDiscoveryHasBeenSet = true;
  }
  return *this;
}

JsonValue DatadogAuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_authorizationDiscoveryHasBeenSet) {
    payload.WithObject("authorizationDiscovery", m_authorizationDiscovery.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
