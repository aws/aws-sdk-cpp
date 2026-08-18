/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtractInformationActionDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtractInformationActionDefinition::ExtractInformationActionDefinition(JsonView jsonValue) { *this = jsonValue; }

ExtractInformationActionDefinition& ExtractInformationActionDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RulesExtractionDefinitions")) {
    Aws::Utils::Array<JsonView> rulesExtractionDefinitionsJsonList = jsonValue.GetArray("RulesExtractionDefinitions");
    for (unsigned rulesExtractionDefinitionsIndex = 0; rulesExtractionDefinitionsIndex < rulesExtractionDefinitionsJsonList.GetLength();
         ++rulesExtractionDefinitionsIndex) {
      m_rulesExtractionDefinitions.push_back(rulesExtractionDefinitionsJsonList[rulesExtractionDefinitionsIndex].AsObject());
    }
    m_rulesExtractionDefinitionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractInformationActionDefinition::Jsonize() const {
  JsonValue payload;

  if (m_rulesExtractionDefinitionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rulesExtractionDefinitionsJsonList(m_rulesExtractionDefinitions.size());
    for (unsigned rulesExtractionDefinitionsIndex = 0; rulesExtractionDefinitionsIndex < rulesExtractionDefinitionsJsonList.GetLength();
         ++rulesExtractionDefinitionsIndex) {
      rulesExtractionDefinitionsJsonList[rulesExtractionDefinitionsIndex].AsObject(
          m_rulesExtractionDefinitions[rulesExtractionDefinitionsIndex].Jsonize());
    }
    payload.WithArray("RulesExtractionDefinitions", std::move(rulesExtractionDefinitionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
