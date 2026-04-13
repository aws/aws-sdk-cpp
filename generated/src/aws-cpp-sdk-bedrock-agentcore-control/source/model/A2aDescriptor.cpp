/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/A2aDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

A2aDescriptor::A2aDescriptor(JsonView jsonValue) { *this = jsonValue; }

A2aDescriptor& A2aDescriptor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentCard")) {
    m_agentCard = jsonValue.GetObject("agentCard");
    m_agentCardHasBeenSet = true;
  }
  return *this;
}

JsonValue A2aDescriptor::Jsonize() const {
  JsonValue payload;

  if (m_agentCardHasBeenSet) {
    payload.WithObject("agentCard", m_agentCard.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
