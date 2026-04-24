/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/Consolidation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

Consolidation::Consolidation(JsonView jsonValue) { *this = jsonValue; }

Consolidation& Consolidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MatchingAttributesList")) {
    Aws::Utils::Array<JsonView> matchingAttributesListJsonList = jsonValue.GetArray("MatchingAttributesList");
    for (unsigned matchingAttributesListIndex = 0; matchingAttributesListIndex < matchingAttributesListJsonList.GetLength();
         ++matchingAttributesListIndex) {
      Aws::Utils::Array<JsonView> matchingAttributes2JsonList = matchingAttributesListJsonList[matchingAttributesListIndex].AsArray();
      Aws::Vector<Aws::String> matchingAttributes2List;
      matchingAttributes2List.reserve((size_t)matchingAttributes2JsonList.GetLength());
      for (unsigned matchingAttributes2Index = 0; matchingAttributes2Index < matchingAttributes2JsonList.GetLength();
           ++matchingAttributes2Index) {
        matchingAttributes2List.push_back(matchingAttributes2JsonList[matchingAttributes2Index].AsString());
      }
      m_matchingAttributesList.push_back(std::move(matchingAttributes2List));
    }
    m_matchingAttributesListHasBeenSet = true;
  }
  return *this;
}

JsonValue Consolidation::Jsonize() const {
  JsonValue payload;

  if (m_matchingAttributesListHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchingAttributesListJsonList(m_matchingAttributesList.size());
    for (unsigned matchingAttributesListIndex = 0; matchingAttributesListIndex < matchingAttributesListJsonList.GetLength();
         ++matchingAttributesListIndex) {
      Aws::Utils::Array<JsonValue> matchingAttributesJsonList(m_matchingAttributesList[matchingAttributesListIndex].size());
      for (unsigned matchingAttributesIndex = 0; matchingAttributesIndex < matchingAttributesJsonList.GetLength();
           ++matchingAttributesIndex) {
        matchingAttributesJsonList[matchingAttributesIndex].AsString(
            m_matchingAttributesList[matchingAttributesListIndex][matchingAttributesIndex]);
      }
      matchingAttributesListJsonList[matchingAttributesListIndex].AsArray(std::move(matchingAttributesJsonList));
    }
    payload.WithArray("MatchingAttributesList", std::move(matchingAttributesListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
