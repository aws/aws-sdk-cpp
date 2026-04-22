/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessAgentCoreBrowserConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessAgentCoreBrowserConfig::HarnessAgentCoreBrowserConfig(JsonView jsonValue) { *this = jsonValue; }

HarnessAgentCoreBrowserConfig& HarnessAgentCoreBrowserConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("browserArn")) {
    m_browserArn = jsonValue.GetString("browserArn");
    m_browserArnHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAgentCoreBrowserConfig::Jsonize() const {
  JsonValue payload;

  if (m_browserArnHasBeenSet) {
    payload.WithString("browserArn", m_browserArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
