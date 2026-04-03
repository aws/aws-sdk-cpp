/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/SchedulingMinPriorityOverride.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

SchedulingMinPriorityOverride::SchedulingMinPriorityOverride(JsonView jsonValue) { *this = jsonValue; }

SchedulingMinPriorityOverride& SchedulingMinPriorityOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("alwaysScheduleLast")) {
    m_alwaysScheduleLast = jsonValue.GetObject("alwaysScheduleLast");
    m_alwaysScheduleLastHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulingMinPriorityOverride::Jsonize() const {
  JsonValue payload;

  if (m_alwaysScheduleLastHasBeenSet) {
    payload.WithObject("alwaysScheduleLast", m_alwaysScheduleLast.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
