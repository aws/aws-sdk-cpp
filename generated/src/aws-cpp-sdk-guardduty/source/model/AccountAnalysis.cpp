/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AccountAnalysis.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AccountAnalysis::AccountAnalysis(JsonView jsonValue) { *this = jsonValue; }

AccountAnalysis& AccountAnalysis::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingsSummary")) {
    m_findingsSummary = jsonValue.GetObject("findingsSummary");
    m_findingsSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tacticCoverage")) {
    Aws::Utils::Array<JsonView> tacticCoverageJsonList = jsonValue.GetArray("tacticCoverage");
    for (unsigned tacticCoverageIndex = 0; tacticCoverageIndex < tacticCoverageJsonList.GetLength(); ++tacticCoverageIndex) {
      m_tacticCoverage.push_back(tacticCoverageJsonList[tacticCoverageIndex].AsObject());
    }
    m_tacticCoverageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedResources")) {
    Aws::Utils::Array<JsonView> affectedResourcesJsonList = jsonValue.GetArray("affectedResources");
    for (unsigned affectedResourcesIndex = 0; affectedResourcesIndex < affectedResourcesJsonList.GetLength(); ++affectedResourcesIndex) {
      m_affectedResources.push_back(affectedResourcesJsonList[affectedResourcesIndex].AsObject());
    }
    m_affectedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountAnalysis::Jsonize() const {
  JsonValue payload;

  if (m_findingsSummaryHasBeenSet) {
    payload.WithObject("findingsSummary", m_findingsSummary.Jsonize());
  }

  if (m_tacticCoverageHasBeenSet) {
    Aws::Utils::Array<JsonValue> tacticCoverageJsonList(m_tacticCoverage.size());
    for (unsigned tacticCoverageIndex = 0; tacticCoverageIndex < tacticCoverageJsonList.GetLength(); ++tacticCoverageIndex) {
      tacticCoverageJsonList[tacticCoverageIndex].AsObject(m_tacticCoverage[tacticCoverageIndex].Jsonize());
    }
    payload.WithArray("tacticCoverage", std::move(tacticCoverageJsonList));
  }

  if (m_affectedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> affectedResourcesJsonList(m_affectedResources.size());
    for (unsigned affectedResourcesIndex = 0; affectedResourcesIndex < affectedResourcesJsonList.GetLength(); ++affectedResourcesIndex) {
      affectedResourcesJsonList[affectedResourcesIndex].AsObject(m_affectedResources[affectedResourcesIndex].Jsonize());
    }
    payload.WithArray("affectedResources", std::move(affectedResourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
