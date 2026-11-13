/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/TechniqueCoverage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

TechniqueCoverage::TechniqueCoverage(JsonView jsonValue) { *this = jsonValue; }

TechniqueCoverage& TechniqueCoverage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("technique")) {
    m_technique = jsonValue.GetObject("technique");
    m_techniqueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingCount")) {
    m_findingCount = jsonValue.GetInteger("findingCount");
    m_findingCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingTypes")) {
    Aws::Utils::Array<JsonView> findingTypesJsonList = jsonValue.GetArray("findingTypes");
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      m_findingTypes.push_back(findingTypesJsonList[findingTypesIndex].AsString());
    }
    m_findingTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue TechniqueCoverage::Jsonize() const {
  JsonValue payload;

  if (m_techniqueHasBeenSet) {
    payload.WithObject("technique", m_technique.Jsonize());
  }

  if (m_findingCountHasBeenSet) {
    payload.WithInteger("findingCount", m_findingCount);
  }

  if (m_findingTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingTypesJsonList(m_findingTypes.size());
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      findingTypesJsonList[findingTypesIndex].AsString(m_findingTypes[findingTypesIndex]);
    }
    payload.WithArray("findingTypes", std::move(findingTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
