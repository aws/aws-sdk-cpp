/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RdsLoginActivity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RdsLoginActivity::RdsLoginActivity(JsonView jsonValue) { *this = jsonValue; }

RdsLoginActivity& RdsLoginActivity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outcome")) {
    m_outcome = jsonValue.GetString("outcome");
    m_outcomeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rate")) {
    m_rate = jsonValue.GetString("rate");
    m_rateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("anomalyContext")) {
    m_anomalyContext = jsonValue.GetString("anomalyContext");
    m_anomalyContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loginCount")) {
    m_loginCount = jsonValue.GetInt64("loginCount");
    m_loginCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activityWindow")) {
    m_activityWindow = jsonValue.GetObject("activityWindow");
    m_activityWindowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrichment")) {
    m_enrichment = jsonValue.GetObject("enrichment");
    m_enrichmentHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsLoginActivity::Jsonize() const {
  JsonValue payload;

  if (m_outcomeHasBeenSet) {
    payload.WithString("outcome", m_outcome);
  }

  if (m_rateHasBeenSet) {
    payload.WithString("rate", m_rate);
  }

  if (m_anomalyContextHasBeenSet) {
    payload.WithString("anomalyContext", m_anomalyContext);
  }

  if (m_loginCountHasBeenSet) {
    payload.WithInt64("loginCount", m_loginCount);
  }

  if (m_activityWindowHasBeenSet) {
    payload.WithObject("activityWindow", m_activityWindow.Jsonize());
  }

  if (m_enrichmentHasBeenSet) {
    payload.WithObject("enrichment", m_enrichment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
