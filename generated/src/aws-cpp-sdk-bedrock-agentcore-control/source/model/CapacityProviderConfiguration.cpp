/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CapacityProviderConfiguration::CapacityProviderConfiguration(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderConfiguration& CapacityProviderConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityProviderArn")) {
    m_capacityProviderArn = jsonValue.GetString("capacityProviderArn");
    m_capacityProviderArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_capacityProviderArnHasBeenSet) {
    payload.WithString("capacityProviderArn", m_capacityProviderArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
