/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApprovalConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ApprovalConfiguration::ApprovalConfiguration(JsonView jsonValue) { *this = jsonValue; }

ApprovalConfiguration& ApprovalConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoApproval")) {
    m_autoApproval = jsonValue.GetBool("autoApproval");
    m_autoApprovalHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_autoApprovalHasBeenSet) {
    payload.WithBool("autoApproval", m_autoApproval);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
