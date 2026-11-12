/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Recommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Recommendation::Recommendation(JsonView jsonValue) { *this = jsonValue; }

Recommendation& Recommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rationale")) {
    m_rationale = jsonValue.GetString("rationale");
    m_rationaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = RecommendationCategoryMapper::GetRecommendationCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = ActionPriorityMapper::GetActionPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cliCommands")) {
    Aws::Utils::Array<JsonView> cliCommandsJsonList = jsonValue.GetArray("cliCommands");
    for (unsigned cliCommandsIndex = 0; cliCommandsIndex < cliCommandsJsonList.GetLength(); ++cliCommandsIndex) {
      m_cliCommands.push_back(cliCommandsJsonList[cliCommandsIndex].AsString());
    }
    m_cliCommandsHasBeenSet = true;
  }
  return *this;
}

JsonValue Recommendation::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_rationaleHasBeenSet) {
    payload.WithString("rationale", m_rationale);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", RecommendationCategoryMapper::GetNameForRecommendationCategory(m_category));
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", ActionPriorityMapper::GetNameForActionPriority(m_priority));
  }

  if (m_cliCommandsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cliCommandsJsonList(m_cliCommands.size());
    for (unsigned cliCommandsIndex = 0; cliCommandsIndex < cliCommandsJsonList.GetLength(); ++cliCommandsIndex) {
      cliCommandsJsonList[cliCommandsIndex].AsString(m_cliCommands[cliCommandsIndex]);
    }
    payload.WithArray("cliCommands", std::move(cliCommandsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
