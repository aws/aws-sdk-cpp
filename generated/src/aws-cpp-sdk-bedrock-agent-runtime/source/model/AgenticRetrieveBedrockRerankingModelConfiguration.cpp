/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveBedrockRerankingModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveBedrockRerankingModelConfiguration::AgenticRetrieveBedrockRerankingModelConfiguration(JsonView jsonValue) {
  *this = jsonValue;
}

AgenticRetrieveBedrockRerankingModelConfiguration& AgenticRetrieveBedrockRerankingModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelArn")) {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveBedrockRerankingModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_modelArnHasBeenSet) {
    payload.WithString("modelArn", m_modelArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
