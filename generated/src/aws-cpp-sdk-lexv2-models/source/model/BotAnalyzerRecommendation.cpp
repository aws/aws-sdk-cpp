/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/BotAnalyzerRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

BotAnalyzerRecommendation::BotAnalyzerRecommendation(JsonView jsonValue) { *this = jsonValue; }

BotAnalyzerRecommendation& BotAnalyzerRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issueLocation")) {
    m_issueLocation = jsonValue.GetObject("issueLocation");
    m_issueLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = PriorityMapper::GetPriorityForName(jsonValue.GetString("priority"));
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueDescription")) {
    m_issueDescription = jsonValue.GetString("issueDescription");
    m_issueDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("proposedFix")) {
    m_proposedFix = jsonValue.GetString("proposedFix");
    m_proposedFixHasBeenSet = true;
  }
  return *this;
}

JsonValue BotAnalyzerRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_issueLocationHasBeenSet) {
    payload.WithObject("issueLocation", m_issueLocation.Jsonize());
  }

  if (m_priorityHasBeenSet) {
    payload.WithString("priority", PriorityMapper::GetNameForPriority(m_priority));
  }

  if (m_issueDescriptionHasBeenSet) {
    payload.WithString("issueDescription", m_issueDescription);
  }

  if (m_proposedFixHasBeenSet) {
    payload.WithString("proposedFix", m_proposedFix);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
