/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Reputation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Reputation::Reputation(JsonView jsonValue) { *this = jsonValue; }

Reputation& Reputation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingTimeDisposition")) {
    m_findingTimeDisposition = jsonValue.GetString("findingTimeDisposition");
    m_findingTimeDispositionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentDisposition")) {
    m_currentDisposition = jsonValue.GetString("currentDisposition");
    m_currentDispositionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reputationComparison")) {
    m_reputationComparison = jsonValue.GetString("reputationComparison");
    m_reputationComparisonHasBeenSet = true;
  }
  return *this;
}

JsonValue Reputation::Jsonize() const {
  JsonValue payload;

  if (m_findingTimeDispositionHasBeenSet) {
    payload.WithString("findingTimeDisposition", m_findingTimeDisposition);
  }

  if (m_currentDispositionHasBeenSet) {
    payload.WithString("currentDisposition", m_currentDisposition);
  }

  if (m_reputationComparisonHasBeenSet) {
    payload.WithString("reputationComparison", m_reputationComparison);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
