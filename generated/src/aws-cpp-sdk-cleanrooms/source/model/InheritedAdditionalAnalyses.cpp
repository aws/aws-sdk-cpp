/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/InheritedAdditionalAnalyses.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

InheritedAdditionalAnalyses::InheritedAdditionalAnalyses(JsonView jsonValue) { *this = jsonValue; }

InheritedAdditionalAnalyses& InheritedAdditionalAnalyses::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = AdditionalAnalysesMapper::GetAdditionalAnalysesForName(jsonValue.GetString("value"));
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sources")) {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue InheritedAdditionalAnalyses::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", AdditionalAnalysesMapper::GetNameForAdditionalAnalyses(m_value));
  }

  if (m_sourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
    }
    payload.WithArray("sources", std::move(sourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
