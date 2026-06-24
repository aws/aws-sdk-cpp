/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveConfiguration::AgenticRetrieveConfiguration(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveConfiguration& AgenticRetrieveConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("foundationModelConfiguration")) {
    m_foundationModelConfiguration = jsonValue.GetObject("foundationModelConfiguration");
    m_foundationModelConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("foundationModelType")) {
    m_foundationModelType = FoundationModelTypeMapper::GetFoundationModelTypeForName(jsonValue.GetString("foundationModelType"));
    m_foundationModelTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAgentIteration")) {
    m_maxAgentIteration = jsonValue.GetInteger("maxAgentIteration");
    m_maxAgentIterationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rerankingConfiguration")) {
    m_rerankingConfiguration = jsonValue.GetObject("rerankingConfiguration");
    m_rerankingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rerankingModelType")) {
    m_rerankingModelType =
        AgenticRetrieveRerankingModelTypeMapper::GetAgenticRetrieveRerankingModelTypeForName(jsonValue.GetString("rerankingModelType"));
    m_rerankingModelTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_foundationModelConfigurationHasBeenSet) {
    payload.WithObject("foundationModelConfiguration", m_foundationModelConfiguration.Jsonize());
  }

  if (m_foundationModelTypeHasBeenSet) {
    payload.WithString("foundationModelType", FoundationModelTypeMapper::GetNameForFoundationModelType(m_foundationModelType));
  }

  if (m_maxAgentIterationHasBeenSet) {
    payload.WithInteger("maxAgentIteration", m_maxAgentIteration);
  }

  if (m_rerankingConfigurationHasBeenSet) {
    payload.WithObject("rerankingConfiguration", m_rerankingConfiguration.Jsonize());
  }

  if (m_rerankingModelTypeHasBeenSet) {
    payload.WithString("rerankingModelType",
                       AgenticRetrieveRerankingModelTypeMapper::GetNameForAgenticRetrieveRerankingModelType(m_rerankingModelType));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
