/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessManagedMemoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessManagedMemoryConfiguration::HarnessManagedMemoryConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessManagedMemoryConfiguration& HarnessManagedMemoryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strategies")) {
    Aws::Utils::Array<JsonView> strategiesJsonList = jsonValue.GetArray("strategies");
    for (unsigned strategiesIndex = 0; strategiesIndex < strategiesJsonList.GetLength(); ++strategiesIndex) {
      m_strategies.push_back(HarnessManagedMemoryStrategyTypeMapper::GetHarnessManagedMemoryStrategyTypeForName(
          strategiesJsonList[strategiesIndex].AsString()));
    }
    m_strategiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventExpiryDuration")) {
    m_eventExpiryDuration = jsonValue.GetInteger("eventExpiryDuration");
    m_eventExpiryDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessManagedMemoryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_strategiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> strategiesJsonList(m_strategies.size());
    for (unsigned strategiesIndex = 0; strategiesIndex < strategiesJsonList.GetLength(); ++strategiesIndex) {
      strategiesJsonList[strategiesIndex].AsString(
          HarnessManagedMemoryStrategyTypeMapper::GetNameForHarnessManagedMemoryStrategyType(m_strategies[strategiesIndex]));
    }
    payload.WithArray("strategies", std::move(strategiesJsonList));
  }

  if (m_eventExpiryDurationHasBeenSet) {
    payload.WithInteger("eventExpiryDuration", m_eventExpiryDuration);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("encryptionKeyArn", m_encryptionKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
