/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationSummaryData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationSummaryData::InvestigationSummaryData(JsonView jsonValue) { *this = jsonValue; }

InvestigationSummaryData& InvestigationSummaryData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatAssessment")) {
    m_threatAssessment = jsonValue.GetObject("threatAssessment");
    m_threatAssessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("countermeasures")) {
    Aws::Utils::Array<JsonView> countermeasuresJsonList = jsonValue.GetArray("countermeasures");
    for (unsigned countermeasuresIndex = 0; countermeasuresIndex < countermeasuresJsonList.GetLength(); ++countermeasuresIndex) {
      m_countermeasures.push_back(countermeasuresJsonList[countermeasuresIndex].AsObject());
    }
    m_countermeasuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountAnalysis")) {
    m_accountAnalysis = jsonValue.GetObject("accountAnalysis");
    m_accountAnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationAnalysis")) {
    m_organizationAnalysis = jsonValue.GetObject("organizationAnalysis");
    m_organizationAnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyObservations")) {
    m_keyObservations = jsonValue.GetObject("keyObservations");
    m_keyObservationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendations")) {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("recommendations");
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationSummaryData::Jsonize() const {
  JsonValue payload;

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_threatAssessmentHasBeenSet) {
    payload.WithObject("threatAssessment", m_threatAssessment.Jsonize());
  }

  if (m_countermeasuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> countermeasuresJsonList(m_countermeasures.size());
    for (unsigned countermeasuresIndex = 0; countermeasuresIndex < countermeasuresJsonList.GetLength(); ++countermeasuresIndex) {
      countermeasuresJsonList[countermeasuresIndex].AsObject(m_countermeasures[countermeasuresIndex].Jsonize());
    }
    payload.WithArray("countermeasures", std::move(countermeasuresJsonList));
  }

  if (m_accountAnalysisHasBeenSet) {
    payload.WithObject("accountAnalysis", m_accountAnalysis.Jsonize());
  }

  if (m_organizationAnalysisHasBeenSet) {
    payload.WithObject("organizationAnalysis", m_organizationAnalysis.Jsonize());
  }

  if (m_keyObservationsHasBeenSet) {
    payload.WithObject("keyObservations", m_keyObservations.Jsonize());
  }

  if (m_recommendationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recommendationsJsonList(m_recommendations.size());
    for (unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex) {
      recommendationsJsonList[recommendationsIndex].AsObject(m_recommendations[recommendationsIndex].Jsonize());
    }
    payload.WithArray("recommendations", std::move(recommendationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
