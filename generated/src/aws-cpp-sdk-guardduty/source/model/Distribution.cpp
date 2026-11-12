/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Distribution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Distribution::Distribution(JsonView jsonValue) { *this = jsonValue; }

Distribution& Distribution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dimension")) {
    m_dimension = DistributionDimensionMapper::GetDistributionDimensionForName(jsonValue.GetString("dimension"));
    m_dimensionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInt64("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityBreakdown")) {
    m_severityBreakdown = jsonValue.GetObject("severityBreakdown");
    m_severityBreakdownHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingTypes")) {
    Aws::Utils::Array<JsonView> findingTypesJsonList = jsonValue.GetArray("findingTypes");
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      m_findingTypes.push_back(findingTypesJsonList[findingTypesIndex].AsObject());
    }
    m_findingTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topFindingTypes")) {
    Aws::Utils::Array<JsonView> topFindingTypesJsonList = jsonValue.GetArray("topFindingTypes");
    for (unsigned topFindingTypesIndex = 0; topFindingTypesIndex < topFindingTypesJsonList.GetLength(); ++topFindingTypesIndex) {
      m_topFindingTypes.push_back(topFindingTypesJsonList[topFindingTypesIndex].AsObject());
    }
    m_topFindingTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attackVectors")) {
    Aws::Utils::Array<JsonView> attackVectorsJsonList = jsonValue.GetArray("attackVectors");
    for (unsigned attackVectorsIndex = 0; attackVectorsIndex < attackVectorsJsonList.GetLength(); ++attackVectorsIndex) {
      m_attackVectors.push_back(attackVectorsJsonList[attackVectorsIndex].AsObject());
    }
    m_attackVectorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("archive")) {
    m_archive = jsonValue.GetObject("archive");
    m_archiveHasBeenSet = true;
  }
  return *this;
}

JsonValue Distribution::Jsonize() const {
  JsonValue payload;

  if (m_dimensionHasBeenSet) {
    payload.WithString("dimension", DistributionDimensionMapper::GetNameForDistributionDimension(m_dimension));
  }

  if (m_totalFindingsHasBeenSet) {
    payload.WithInt64("totalFindings", m_totalFindings);
  }

  if (m_severityBreakdownHasBeenSet) {
    payload.WithObject("severityBreakdown", m_severityBreakdown.Jsonize());
  }

  if (m_findingTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingTypesJsonList(m_findingTypes.size());
    for (unsigned findingTypesIndex = 0; findingTypesIndex < findingTypesJsonList.GetLength(); ++findingTypesIndex) {
      findingTypesJsonList[findingTypesIndex].AsObject(m_findingTypes[findingTypesIndex].Jsonize());
    }
    payload.WithArray("findingTypes", std::move(findingTypesJsonList));
  }

  if (m_topFindingTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> topFindingTypesJsonList(m_topFindingTypes.size());
    for (unsigned topFindingTypesIndex = 0; topFindingTypesIndex < topFindingTypesJsonList.GetLength(); ++topFindingTypesIndex) {
      topFindingTypesJsonList[topFindingTypesIndex].AsObject(m_topFindingTypes[topFindingTypesIndex].Jsonize());
    }
    payload.WithArray("topFindingTypes", std::move(topFindingTypesJsonList));
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  if (m_attackVectorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> attackVectorsJsonList(m_attackVectors.size());
    for (unsigned attackVectorsIndex = 0; attackVectorsIndex < attackVectorsJsonList.GetLength(); ++attackVectorsIndex) {
      attackVectorsJsonList[attackVectorsIndex].AsObject(m_attackVectors[attackVectorsIndex].Jsonize());
    }
    payload.WithArray("attackVectors", std::move(attackVectorsJsonList));
  }

  if (m_archiveHasBeenSet) {
    payload.WithObject("archive", m_archive.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
