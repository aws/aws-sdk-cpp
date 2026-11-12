/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/TacticCoverage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

TacticCoverage::TacticCoverage(JsonView jsonValue) { *this = jsonValue; }

TacticCoverage& TacticCoverage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("phase")) {
    m_phase = AttackPhaseNameMapper::GetAttackPhaseNameForName(jsonValue.GetString("phase"));
    m_phaseHasBeenSet = true;
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
  if (jsonValue.ValueExists("techniques")) {
    Aws::Utils::Array<JsonView> techniquesJsonList = jsonValue.GetArray("techniques");
    for (unsigned techniquesIndex = 0; techniquesIndex < techniquesJsonList.GetLength(); ++techniquesIndex) {
      m_techniques.push_back(techniquesJsonList[techniquesIndex].AsObject());
    }
    m_techniquesHasBeenSet = true;
  }
  return *this;
}

JsonValue TacticCoverage::Jsonize() const {
  JsonValue payload;

  if (m_phaseHasBeenSet) {
    payload.WithString("phase", AttackPhaseNameMapper::GetNameForAttackPhaseName(m_phase));
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

  if (m_techniquesHasBeenSet) {
    Aws::Utils::Array<JsonValue> techniquesJsonList(m_techniques.size());
    for (unsigned techniquesIndex = 0; techniquesIndex < techniquesJsonList.GetLength(); ++techniquesIndex) {
      techniquesJsonList[techniquesIndex].AsObject(m_techniques[techniquesIndex].Jsonize());
    }
    payload.WithArray("techniques", std::move(techniquesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
