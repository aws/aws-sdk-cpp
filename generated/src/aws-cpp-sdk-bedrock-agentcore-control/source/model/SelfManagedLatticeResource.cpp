/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SelfManagedLatticeResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SelfManagedLatticeResource::SelfManagedLatticeResource(JsonView jsonValue) { *this = jsonValue; }

SelfManagedLatticeResource& SelfManagedLatticeResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceConfigurationIdentifier")) {
    m_resourceConfigurationIdentifier = jsonValue.GetString("resourceConfigurationIdentifier");
    m_resourceConfigurationIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfManagedLatticeResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceConfigurationIdentifierHasBeenSet) {
    payload.WithString("resourceConfigurationIdentifier", m_resourceConfigurationIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
