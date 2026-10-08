/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ScheduleSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ScheduleSpec::ScheduleSpec(JsonView jsonValue) { *this = jsonValue; }

ScheduleSpec& ScheduleSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cron")) {
    m_cron = jsonValue.GetObject("cron");
    m_cronHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeRange")) {
    m_timeRange = jsonValue.GetObject("timeRange");
    m_timeRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleSpec::Jsonize() const {
  JsonValue payload;

  if (m_cronHasBeenSet) {
    payload.WithObject("cron", m_cron.Jsonize());
  }

  if (m_timeRangeHasBeenSet) {
    payload.WithObject("timeRange", m_timeRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
