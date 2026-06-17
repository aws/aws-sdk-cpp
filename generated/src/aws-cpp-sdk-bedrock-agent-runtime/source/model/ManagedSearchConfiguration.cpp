/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ManagedSearchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

ManagedSearchConfiguration::ManagedSearchConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedSearchConfiguration& ManagedSearchConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filter")) {
    m_filter = jsonValue.GetObject("filter");
    m_filterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfResults")) {
    m_numberOfResults = jsonValue.GetInteger("numberOfResults");
    m_numberOfResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rerankingConfiguration")) {
    m_rerankingConfiguration = jsonValue.GetObject("rerankingConfiguration");
    m_rerankingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rerankingModelType")) {
    m_rerankingModelType = RerankingModelTypeMapper::GetRerankingModelTypeForName(jsonValue.GetString("rerankingModelType"));
    m_rerankingModelTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedSearchConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_numberOfResultsHasBeenSet) {
    payload.WithInteger("numberOfResults", m_numberOfResults);
  }

  if (m_rerankingConfigurationHasBeenSet) {
    payload.WithObject("rerankingConfiguration", m_rerankingConfiguration.Jsonize());
  }

  if (m_rerankingModelTypeHasBeenSet) {
    payload.WithString("rerankingModelType", RerankingModelTypeMapper::GetNameForRerankingModelType(m_rerankingModelType));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
