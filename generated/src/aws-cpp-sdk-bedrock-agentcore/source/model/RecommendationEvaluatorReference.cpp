/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RecommendationEvaluatorReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RecommendationEvaluatorReference::RecommendationEvaluatorReference(JsonView jsonValue) { *this = jsonValue; }

RecommendationEvaluatorReference& RecommendationEvaluatorReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("evaluatorArn")) {
    m_evaluatorArn = jsonValue.GetString("evaluatorArn");
    m_evaluatorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationEvaluatorReference::Jsonize() const {
  JsonValue payload;

  if (m_evaluatorArnHasBeenSet) {
    payload.WithString("evaluatorArn", m_evaluatorArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
