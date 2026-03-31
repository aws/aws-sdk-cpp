/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CodeBasedEvaluatorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CodeBasedEvaluatorConfig::CodeBasedEvaluatorConfig(JsonView jsonValue) { *this = jsonValue; }

CodeBasedEvaluatorConfig& CodeBasedEvaluatorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lambdaConfig")) {
    m_lambdaConfig = jsonValue.GetObject("lambdaConfig");
    m_lambdaConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeBasedEvaluatorConfig::Jsonize() const {
  JsonValue payload;

  if (m_lambdaConfigHasBeenSet) {
    payload.WithObject("lambdaConfig", m_lambdaConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
