/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationAccountAnalysis.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationAccountAnalysis::InvestigationAccountAnalysis(JsonView jsonValue) { *this = jsonValue; }

InvestigationAccountAnalysis& InvestigationAccountAnalysis::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("trend")) {
    m_trend = jsonValue.GetObject("trend");
    m_trendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baseline")) {
    m_baseline = jsonValue.GetObject("baseline");
    m_baselineHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationAccountAnalysis::Jsonize() const {
  JsonValue payload;

  if (m_trendHasBeenSet) {
    payload.WithObject("trend", m_trend.Jsonize());
  }

  if (m_baselineHasBeenSet) {
    payload.WithObject("baseline", m_baseline.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
