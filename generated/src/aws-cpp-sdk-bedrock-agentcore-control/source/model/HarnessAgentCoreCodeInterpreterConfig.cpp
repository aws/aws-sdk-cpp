/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreCodeInterpreterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessAgentCoreCodeInterpreterConfig::HarnessAgentCoreCodeInterpreterConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessAgentCoreCodeInterpreterConfig& HarnessAgentCoreCodeInterpreterConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeInterpreterArn")) {
    m_codeInterpreterArn = jsonValue.GetString("codeInterpreterArn");
    m_codeInterpreterArnHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAgentCoreCodeInterpreterConfig::Jsonize() const {
  JsonValue payload;

  if (m_codeInterpreterArnHasBeenSet) {
    payload.WithString("codeInterpreterArn", m_codeInterpreterArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
