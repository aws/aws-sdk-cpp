/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ManagedSearchBedrockRerankingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

ManagedSearchBedrockRerankingConfiguration::ManagedSearchBedrockRerankingConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedSearchBedrockRerankingConfiguration& ManagedSearchBedrockRerankingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataConfiguration")) {
    m_metadataConfiguration = jsonValue.GetObject("metadataConfiguration");
    m_metadataConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelConfiguration")) {
    m_modelConfiguration = jsonValue.GetObject("modelConfiguration");
    m_modelConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfRerankedResults")) {
    m_numberOfRerankedResults = jsonValue.GetInteger("numberOfRerankedResults");
    m_numberOfRerankedResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedSearchBedrockRerankingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_metadataConfigurationHasBeenSet) {
    payload.WithObject("metadataConfiguration", m_metadataConfiguration.Jsonize());
  }

  if (m_modelConfigurationHasBeenSet) {
    payload.WithObject("modelConfiguration", m_modelConfiguration.Jsonize());
  }

  if (m_numberOfRerankedResultsHasBeenSet) {
    payload.WithInteger("numberOfRerankedResults", m_numberOfRerankedResults);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
