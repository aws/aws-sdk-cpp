/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModelMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ModelMapping::ModelMapping(JsonView jsonValue) { *this = jsonValue; }

ModelMapping& ModelMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("providerPrefix")) {
    m_providerPrefix = jsonValue.GetObject("providerPrefix");
    m_providerPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelMapping::Jsonize() const {
  JsonValue payload;

  if (m_providerPrefixHasBeenSet) {
    payload.WithObject("providerPrefix", m_providerPrefix.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
