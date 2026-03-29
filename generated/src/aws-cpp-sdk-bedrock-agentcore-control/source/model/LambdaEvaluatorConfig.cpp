/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LambdaEvaluatorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LambdaEvaluatorConfig::LambdaEvaluatorConfig(JsonView jsonValue) { *this = jsonValue; }

LambdaEvaluatorConfig& LambdaEvaluatorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lambdaArn")) {
    m_lambdaArn = jsonValue.GetString("lambdaArn");
    m_lambdaArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaTimeoutInSeconds")) {
    m_lambdaTimeoutInSeconds = jsonValue.GetInteger("lambdaTimeoutInSeconds");
    m_lambdaTimeoutInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaEvaluatorConfig::Jsonize() const {
  JsonValue payload;

  if (m_lambdaArnHasBeenSet) {
    payload.WithString("lambdaArn", m_lambdaArn);
  }

  if (m_lambdaTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("lambdaTimeoutInSeconds", m_lambdaTimeoutInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
