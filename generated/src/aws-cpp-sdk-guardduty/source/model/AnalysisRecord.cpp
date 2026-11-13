/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AnalysisRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AnalysisRecord::AnalysisRecord(JsonView jsonValue) { *this = jsonValue; }

AnalysisRecord& AnalysisRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("analysisType")) {
    m_analysisType = AnalysisTypeMapper::GetAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatAssessment")) {
    m_threatAssessment = jsonValue.GetObject("threatAssessment");
    m_threatAssessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kubernetesPolicyViolation")) {
    m_kubernetesPolicyViolation = jsonValue.GetObject("kubernetesPolicyViolation");
    m_kubernetesPolicyViolationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Analysis")) {
    m_s3Analysis = jsonValue.GetObject("s3Analysis");
    m_s3AnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processes")) {
    Aws::Utils::Array<JsonView> processesJsonList = jsonValue.GetArray("processes");
    for (unsigned processesIndex = 0; processesIndex < processesJsonList.GetLength(); ++processesIndex) {
      m_processes.push_back(processesJsonList[processesIndex].AsObject());
    }
    m_processesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountAnalysis")) {
    m_accountAnalysis = jsonValue.GetObject("accountAnalysis");
    m_accountAnalysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("indicators")) {
    Aws::Utils::Array<JsonView> indicatorsJsonList = jsonValue.GetArray("indicators");
    for (unsigned indicatorsIndex = 0; indicatorsIndex < indicatorsJsonList.GetLength(); ++indicatorsIndex) {
      m_indicators.push_back(indicatorsJsonList[indicatorsIndex].AsObject());
    }
    m_indicatorsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisRecord::Jsonize() const {
  JsonValue payload;

  if (m_analysisTypeHasBeenSet) {
    payload.WithString("analysisType", AnalysisTypeMapper::GetNameForAnalysisType(m_analysisType));
  }

  if (m_threatAssessmentHasBeenSet) {
    payload.WithObject("threatAssessment", m_threatAssessment.Jsonize());
  }

  if (m_kubernetesPolicyViolationHasBeenSet) {
    payload.WithObject("kubernetesPolicyViolation", m_kubernetesPolicyViolation.Jsonize());
  }

  if (m_s3AnalysisHasBeenSet) {
    payload.WithObject("s3Analysis", m_s3Analysis.Jsonize());
  }

  if (m_processesHasBeenSet) {
    Aws::Utils::Array<JsonValue> processesJsonList(m_processes.size());
    for (unsigned processesIndex = 0; processesIndex < processesJsonList.GetLength(); ++processesIndex) {
      processesJsonList[processesIndex].AsObject(m_processes[processesIndex].Jsonize());
    }
    payload.WithArray("processes", std::move(processesJsonList));
  }

  if (m_accountAnalysisHasBeenSet) {
    payload.WithObject("accountAnalysis", m_accountAnalysis.Jsonize());
  }

  if (m_indicatorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> indicatorsJsonList(m_indicators.size());
    for (unsigned indicatorsIndex = 0; indicatorsIndex < indicatorsJsonList.GetLength(); ++indicatorsIndex) {
      indicatorsJsonList[indicatorsIndex].AsObject(m_indicators[indicatorsIndex].Jsonize());
    }
    payload.WithArray("indicators", std::move(indicatorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
