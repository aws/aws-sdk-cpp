/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CpuOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CpuOptions::CpuOptions(JsonView jsonValue) { *this = jsonValue; }

CpuOptions& CpuOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nestedVirtualization")) {
    m_nestedVirtualization = NestedVirtualizationMapper::GetNestedVirtualizationForName(jsonValue.GetString("nestedVirtualization"));
    m_nestedVirtualizationHasBeenSet = true;
  }
  return *this;
}

JsonValue CpuOptions::Jsonize() const {
  JsonValue payload;

  if (m_nestedVirtualizationHasBeenSet) {
    payload.WithString("nestedVirtualization", NestedVirtualizationMapper::GetNameForNestedVirtualization(m_nestedVirtualization));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
