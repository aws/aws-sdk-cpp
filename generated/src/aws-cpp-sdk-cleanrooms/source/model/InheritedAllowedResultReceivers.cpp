/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/InheritedAllowedResultReceivers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

InheritedAllowedResultReceivers::InheritedAllowedResultReceivers(JsonView jsonValue) { *this = jsonValue; }

InheritedAllowedResultReceivers& InheritedAllowedResultReceivers::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("value");
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
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

JsonValue InheritedAllowedResultReceivers::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      valueJsonList[valueIndex].AsString(m_value[valueIndex]);
    }
    payload.WithArray("value", std::move(valueJsonList));
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
