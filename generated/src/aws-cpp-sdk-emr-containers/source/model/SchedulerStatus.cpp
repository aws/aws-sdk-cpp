/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/SchedulerStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRContainers {
namespace Model {

SchedulerStatus::SchedulerStatus(JsonView jsonValue) { *this = jsonValue; }

SchedulerStatus& SchedulerStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("currentInQueueJobRuns")) {
    m_currentInQueueJobRuns = jsonValue.GetInteger("currentInQueueJobRuns");
    m_currentInQueueJobRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentConcurrentJobRuns")) {
    m_currentConcurrentJobRuns = jsonValue.GetInteger("currentConcurrentJobRuns");
    m_currentConcurrentJobRunsHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulerStatus::Jsonize() const {
  JsonValue payload;

  if (m_currentInQueueJobRunsHasBeenSet) {
    payload.WithInteger("currentInQueueJobRuns", m_currentInQueueJobRuns);
  }

  if (m_currentConcurrentJobRunsHasBeenSet) {
    payload.WithInteger("currentConcurrentJobRuns", m_currentConcurrentJobRuns);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
