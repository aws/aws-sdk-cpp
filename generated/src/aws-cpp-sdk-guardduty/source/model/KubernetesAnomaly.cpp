/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/KubernetesAnomaly.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

KubernetesAnomaly::KubernetesAnomaly(JsonView jsonValue) { *this = jsonValue; }

KubernetesAnomaly& KubernetesAnomaly::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("unusualBehavior")) {
    m_unusualBehavior = jsonValue.GetString("unusualBehavior");
    m_unusualBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baselineContext")) {
    m_baselineContext = jsonValue.GetString("baselineContext");
    m_baselineContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anomalyScore")) {
    m_anomalyScore = jsonValue.GetString("anomalyScore");
    m_anomalyScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trainingPeriod")) {
    m_trainingPeriod = jsonValue.GetString("trainingPeriod");
    m_trainingPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesAnomaly::Jsonize() const {
  JsonValue payload;

  if (m_unusualBehaviorHasBeenSet) {
    payload.WithString("unusualBehavior", m_unusualBehavior);
  }

  if (m_baselineContextHasBeenSet) {
    payload.WithString("baselineContext", m_baselineContext);
  }

  if (m_anomalyScoreHasBeenSet) {
    payload.WithString("anomalyScore", m_anomalyScore);
  }

  if (m_trainingPeriodHasBeenSet) {
    payload.WithString("trainingPeriod", m_trainingPeriod);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
