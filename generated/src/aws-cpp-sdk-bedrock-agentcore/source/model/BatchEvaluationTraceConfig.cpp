/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BatchEvaluationTraceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BatchEvaluationTraceConfig::BatchEvaluationTraceConfig(JsonView jsonValue) { *this = jsonValue; }

BatchEvaluationTraceConfig& BatchEvaluationTraceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("batchEvaluationArn")) {
    m_batchEvaluationArn = jsonValue.GetString("batchEvaluationArn");
    m_batchEvaluationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchEvaluationTraceConfig::Jsonize() const {
  JsonValue payload;

  if (m_batchEvaluationArnHasBeenSet) {
    payload.WithString("batchEvaluationArn", m_batchEvaluationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
