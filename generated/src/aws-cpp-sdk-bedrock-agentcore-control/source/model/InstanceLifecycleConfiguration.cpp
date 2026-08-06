/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InstanceLifecycleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InstanceLifecycleConfiguration::InstanceLifecycleConfiguration(JsonView jsonValue) { *this = jsonValue; }

InstanceLifecycleConfiguration& InstanceLifecycleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("idleInstanceTimeout")) {
    m_idleInstanceTimeout = jsonValue.GetInteger("idleInstanceTimeout");
    m_idleInstanceTimeoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxLifetime")) {
    m_maxLifetime = jsonValue.GetInteger("maxLifetime");
    m_maxLifetimeHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceLifecycleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_idleInstanceTimeoutHasBeenSet) {
    payload.WithInteger("idleInstanceTimeout", m_idleInstanceTimeout);
  }

  if (m_maxLifetimeHasBeenSet) {
    payload.WithInteger("maxLifetime", m_maxLifetime);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
