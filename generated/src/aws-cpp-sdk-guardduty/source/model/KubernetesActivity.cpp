/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/KubernetesActivity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

KubernetesActivity::KubernetesActivity(JsonView jsonValue) { *this = jsonValue; }

KubernetesActivity& KubernetesActivity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiCall")) {
    m_apiCall = jsonValue.GetObject("apiCall");
    m_apiCallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anomaly")) {
    m_anomaly = jsonValue.GetObject("anomaly");
    m_anomalyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workload")) {
    m_workload = jsonValue.GetObject("workload");
    m_workloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrichment")) {
    m_enrichment = jsonValue.GetObject("enrichment");
    m_enrichmentHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesActivity::Jsonize() const {
  JsonValue payload;

  if (m_apiCallHasBeenSet) {
    payload.WithObject("apiCall", m_apiCall.Jsonize());
  }

  if (m_anomalyHasBeenSet) {
    payload.WithObject("anomaly", m_anomaly.Jsonize());
  }

  if (m_workloadHasBeenSet) {
    payload.WithObject("workload", m_workload.Jsonize());
  }

  if (m_enrichmentHasBeenSet) {
    payload.WithObject("enrichment", m_enrichment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
