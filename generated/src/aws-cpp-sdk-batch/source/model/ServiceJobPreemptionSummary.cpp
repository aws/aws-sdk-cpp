/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobPreemptionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

ServiceJobPreemptionSummary::ServiceJobPreemptionSummary(JsonView jsonValue) { *this = jsonValue; }

ServiceJobPreemptionSummary& ServiceJobPreemptionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("preemptedAttemptCount")) {
    m_preemptedAttemptCount = jsonValue.GetInteger("preemptedAttemptCount");
    m_preemptedAttemptCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recentPreemptedAttempts")) {
    Aws::Utils::Array<JsonView> recentPreemptedAttemptsJsonList = jsonValue.GetArray("recentPreemptedAttempts");
    for (unsigned recentPreemptedAttemptsIndex = 0; recentPreemptedAttemptsIndex < recentPreemptedAttemptsJsonList.GetLength();
         ++recentPreemptedAttemptsIndex) {
      m_recentPreemptedAttempts.push_back(recentPreemptedAttemptsJsonList[recentPreemptedAttemptsIndex].AsObject());
    }
    m_recentPreemptedAttemptsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobPreemptionSummary::Jsonize() const {
  JsonValue payload;

  if (m_preemptedAttemptCountHasBeenSet) {
    payload.WithInteger("preemptedAttemptCount", m_preemptedAttemptCount);
  }

  if (m_recentPreemptedAttemptsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recentPreemptedAttemptsJsonList(m_recentPreemptedAttempts.size());
    for (unsigned recentPreemptedAttemptsIndex = 0; recentPreemptedAttemptsIndex < recentPreemptedAttemptsJsonList.GetLength();
         ++recentPreemptedAttemptsIndex) {
      recentPreemptedAttemptsJsonList[recentPreemptedAttemptsIndex].AsObject(
          m_recentPreemptedAttempts[recentPreemptedAttemptsIndex].Jsonize());
    }
    payload.WithArray("recentPreemptedAttempts", std::move(recentPreemptedAttemptsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
