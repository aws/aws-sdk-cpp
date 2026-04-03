/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/SchedulingMaxPriorityOverride.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

SchedulingMaxPriorityOverride::SchedulingMaxPriorityOverride(JsonView jsonValue) { *this = jsonValue; }

SchedulingMaxPriorityOverride& SchedulingMaxPriorityOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alwaysScheduleFirst")) {
    m_alwaysScheduleFirst = jsonValue.GetObject("alwaysScheduleFirst");
    m_alwaysScheduleFirstHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulingMaxPriorityOverride::Jsonize() const {
  JsonValue payload;

  if (m_alwaysScheduleFirstHasBeenSet) {
    payload.WithObject("alwaysScheduleFirst", m_alwaysScheduleFirst.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
