/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/CustomerManagedAutoScalingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

CustomerManagedAutoScalingConfiguration::CustomerManagedAutoScalingConfiguration(JsonView jsonValue) { *this = jsonValue; }

CustomerManagedAutoScalingConfiguration& CustomerManagedAutoScalingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("standbyWorkerCount")) {
    m_standbyWorkerCount = jsonValue.GetInteger("standbyWorkerCount");
    m_standbyWorkerCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workerIdleDurationSeconds")) {
    m_workerIdleDurationSeconds = jsonValue.GetInteger("workerIdleDurationSeconds");
    m_workerIdleDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scaleOutWorkersPerMinute")) {
    m_scaleOutWorkersPerMinute = jsonValue.GetInteger("scaleOutWorkersPerMinute");
    m_scaleOutWorkersPerMinuteHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerManagedAutoScalingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_standbyWorkerCountHasBeenSet) {
    payload.WithInteger("standbyWorkerCount", m_standbyWorkerCount);
  }

  if (m_workerIdleDurationSecondsHasBeenSet) {
    payload.WithInteger("workerIdleDurationSeconds", m_workerIdleDurationSeconds);
  }

  if (m_scaleOutWorkersPerMinuteHasBeenSet) {
    payload.WithInteger("scaleOutWorkersPerMinute", m_scaleOutWorkersPerMinute);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
