/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BatchEvaluationSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BatchEvaluationSourceConfig::BatchEvaluationSourceConfig(JsonView jsonValue) { *this = jsonValue; }

BatchEvaluationSourceConfig& BatchEvaluationSourceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("batchEvaluationArn")) {
    m_batchEvaluationArn = jsonValue.GetString("batchEvaluationArn");
    m_batchEvaluationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchEvaluationSourceConfig::Jsonize() const {
  JsonValue payload;

  if (m_batchEvaluationArnHasBeenSet) {
    payload.WithString("batchEvaluationArn", m_batchEvaluationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
