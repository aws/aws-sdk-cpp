/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Baseline.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Baseline::Baseline(JsonView jsonValue) { *this = jsonValue; }

Baseline& Baseline::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInt64("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baselineFindings")) {
    Aws::Utils::Array<JsonView> baselineFindingsJsonList = jsonValue.GetArray("baselineFindings");
    for (unsigned baselineFindingsIndex = 0; baselineFindingsIndex < baselineFindingsJsonList.GetLength(); ++baselineFindingsIndex) {
      m_baselineFindings.push_back(baselineFindingsJsonList[baselineFindingsIndex].AsObject());
    }
    m_baselineFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anomalousFindings")) {
    Aws::Utils::Array<JsonView> anomalousFindingsJsonList = jsonValue.GetArray("anomalousFindings");
    for (unsigned anomalousFindingsIndex = 0; anomalousFindingsIndex < anomalousFindingsJsonList.GetLength(); ++anomalousFindingsIndex) {
      m_anomalousFindings.push_back(anomalousFindingsJsonList[anomalousFindingsIndex].AsObject());
    }
    m_anomalousFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue Baseline::Jsonize() const {
  JsonValue payload;

  if (m_totalFindingsHasBeenSet) {
    payload.WithInt64("totalFindings", m_totalFindings);
  }

  if (m_baselineFindingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> baselineFindingsJsonList(m_baselineFindings.size());
    for (unsigned baselineFindingsIndex = 0; baselineFindingsIndex < baselineFindingsJsonList.GetLength(); ++baselineFindingsIndex) {
      baselineFindingsJsonList[baselineFindingsIndex].AsObject(m_baselineFindings[baselineFindingsIndex].Jsonize());
    }
    payload.WithArray("baselineFindings", std::move(baselineFindingsJsonList));
  }

  if (m_anomalousFindingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> anomalousFindingsJsonList(m_anomalousFindings.size());
    for (unsigned anomalousFindingsIndex = 0; anomalousFindingsIndex < anomalousFindingsJsonList.GetLength(); ++anomalousFindingsIndex) {
      anomalousFindingsJsonList[anomalousFindingsIndex].AsObject(m_anomalousFindings[anomalousFindingsIndex].Jsonize());
    }
    payload.WithArray("anomalousFindings", std::move(anomalousFindingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
