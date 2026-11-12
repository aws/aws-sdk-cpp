/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionCoverage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionCoverage::DetectionCoverage(JsonView jsonValue) { *this = jsonValue; }

DetectionCoverage& DetectionCoverage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("protectionPlans")) {
    Aws::Utils::Array<JsonView> protectionPlansJsonList = jsonValue.GetArray("protectionPlans");
    for (unsigned protectionPlansIndex = 0; protectionPlansIndex < protectionPlansJsonList.GetLength(); ++protectionPlansIndex) {
      m_protectionPlans.push_back(protectionPlansJsonList[protectionPlansIndex].AsObject());
    }
    m_protectionPlansHasBeenSet = true;
  }
  if (jsonValue.ValueExists("foundationalDataSources")) {
    Aws::Utils::Array<JsonView> foundationalDataSourcesJsonList = jsonValue.GetArray("foundationalDataSources");
    for (unsigned foundationalDataSourcesIndex = 0; foundationalDataSourcesIndex < foundationalDataSourcesJsonList.GetLength();
         ++foundationalDataSourcesIndex) {
      m_foundationalDataSources.push_back(InvestigationDetectorFeatureMapper::GetInvestigationDetectorFeatureForName(
          foundationalDataSourcesJsonList[foundationalDataSourcesIndex].AsString()));
    }
    m_foundationalDataSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("coverageGaps")) {
    m_coverageGaps = jsonValue.GetString("coverageGaps");
    m_coverageGapsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyObservation")) {
    m_keyObservation = jsonValue.GetString("keyObservation");
    m_keyObservationHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionCoverage::Jsonize() const {
  JsonValue payload;

  if (m_protectionPlansHasBeenSet) {
    Aws::Utils::Array<JsonValue> protectionPlansJsonList(m_protectionPlans.size());
    for (unsigned protectionPlansIndex = 0; protectionPlansIndex < protectionPlansJsonList.GetLength(); ++protectionPlansIndex) {
      protectionPlansJsonList[protectionPlansIndex].AsObject(m_protectionPlans[protectionPlansIndex].Jsonize());
    }
    payload.WithArray("protectionPlans", std::move(protectionPlansJsonList));
  }

  if (m_foundationalDataSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> foundationalDataSourcesJsonList(m_foundationalDataSources.size());
    for (unsigned foundationalDataSourcesIndex = 0; foundationalDataSourcesIndex < foundationalDataSourcesJsonList.GetLength();
         ++foundationalDataSourcesIndex) {
      foundationalDataSourcesJsonList[foundationalDataSourcesIndex].AsString(
          InvestigationDetectorFeatureMapper::GetNameForInvestigationDetectorFeature(
              m_foundationalDataSources[foundationalDataSourcesIndex]));
    }
    payload.WithArray("foundationalDataSources", std::move(foundationalDataSourcesJsonList));
  }

  if (m_coverageGapsHasBeenSet) {
    payload.WithString("coverageGaps", m_coverageGaps);
  }

  if (m_keyObservationHasBeenSet) {
    payload.WithString("keyObservation", m_keyObservation);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
