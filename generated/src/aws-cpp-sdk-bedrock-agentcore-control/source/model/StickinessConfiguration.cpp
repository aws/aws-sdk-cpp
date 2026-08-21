/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StickinessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StickinessConfiguration::StickinessConfiguration(JsonView jsonValue) { *this = jsonValue; }

StickinessConfiguration& StickinessConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeout")) {
    m_timeout = jsonValue.GetInteger("timeout");
    m_timeoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("compositeIdentifier")) {
    Aws::Utils::Array<JsonView> compositeIdentifierJsonList = jsonValue.GetArray("compositeIdentifier");
    for (unsigned compositeIdentifierIndex = 0; compositeIdentifierIndex < compositeIdentifierJsonList.GetLength();
         ++compositeIdentifierIndex) {
      m_compositeIdentifier.push_back(compositeIdentifierJsonList[compositeIdentifierIndex].AsString());
    }
    m_compositeIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue StickinessConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_timeoutHasBeenSet) {
    payload.WithInteger("timeout", m_timeout);
  }

  if (m_compositeIdentifierHasBeenSet) {
    Aws::Utils::Array<JsonValue> compositeIdentifierJsonList(m_compositeIdentifier.size());
    for (unsigned compositeIdentifierIndex = 0; compositeIdentifierIndex < compositeIdentifierJsonList.GetLength();
         ++compositeIdentifierIndex) {
      compositeIdentifierJsonList[compositeIdentifierIndex].AsString(m_compositeIdentifier[compositeIdentifierIndex]);
    }
    payload.WithArray("compositeIdentifier", std::move(compositeIdentifierJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
