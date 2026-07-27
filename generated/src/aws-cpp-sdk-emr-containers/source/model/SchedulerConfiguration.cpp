/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/SchedulerConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRContainers {
namespace Model {

SchedulerConfiguration::SchedulerConfiguration(JsonView jsonValue) { *this = jsonValue; }

SchedulerConfiguration& SchedulerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxInQueueJobRuns")) {
    m_maxInQueueJobRuns = jsonValue.GetInteger("maxInQueueJobRuns");
    m_maxInQueueJobRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxConcurrentJobRuns")) {
    m_maxConcurrentJobRuns = jsonValue.GetInteger("maxConcurrentJobRuns");
    m_maxConcurrentJobRunsHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_maxInQueueJobRunsHasBeenSet) {
    payload.WithInteger("maxInQueueJobRuns", m_maxInQueueJobRuns);
  }

  if (m_maxConcurrentJobRunsHasBeenSet) {
    payload.WithInteger("maxConcurrentJobRuns", m_maxConcurrentJobRuns);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
