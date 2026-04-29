/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SystemManagedBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SystemManagedBlock::SystemManagedBlock(JsonView jsonValue) { *this = jsonValue; }

SystemManagedBlock& SystemManagedBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedBy")) {
    m_managedBy = jsonValue.GetString("managedBy");
    m_managedByHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemManagedBlock::Jsonize() const {
  JsonValue payload;

  if (m_managedByHasBeenSet) {
    payload.WithString("managedBy", m_managedBy);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
