/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RedactionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RedactionConfiguration::RedactionConfiguration(JsonView jsonValue) { *this = jsonValue; }

RedactionConfiguration& RedactionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifiers")) {
    Aws::Utils::Array<JsonView> identifiersJsonList = jsonValue.GetArray("identifiers");
    for (unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex) {
      m_identifiers.push_back(RedactionIdentifierMapper::GetRedactionIdentifierForName(identifiersJsonList[identifiersIndex].AsString()));
    }
    m_identifiersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customDataIdentifiers")) {
    Aws::Utils::Array<JsonView> customDataIdentifiersJsonList = jsonValue.GetArray("customDataIdentifiers");
    for (unsigned customDataIdentifiersIndex = 0; customDataIdentifiersIndex < customDataIdentifiersJsonList.GetLength();
         ++customDataIdentifiersIndex) {
      m_customDataIdentifiers.push_back(customDataIdentifiersJsonList[customDataIdentifiersIndex].AsObject());
    }
    m_customDataIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue RedactionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_identifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
    for (unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex) {
      identifiersJsonList[identifiersIndex].AsString(
          RedactionIdentifierMapper::GetNameForRedactionIdentifier(m_identifiers[identifiersIndex]));
    }
    payload.WithArray("identifiers", std::move(identifiersJsonList));
  }

  if (m_customDataIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> customDataIdentifiersJsonList(m_customDataIdentifiers.size());
    for (unsigned customDataIdentifiersIndex = 0; customDataIdentifiersIndex < customDataIdentifiersJsonList.GetLength();
         ++customDataIdentifiersIndex) {
      customDataIdentifiersJsonList[customDataIdentifiersIndex].AsObject(m_customDataIdentifiers[customDataIdentifiersIndex].Jsonize());
    }
    payload.WithArray("customDataIdentifiers", std::move(customDataIdentifiersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
