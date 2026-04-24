/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/SchedulingMaxPriorityOverrideAlwaysScheduleFirst.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

SchedulingMaxPriorityOverrideAlwaysScheduleFirst::SchedulingMaxPriorityOverrideAlwaysScheduleFirst(JsonView jsonValue) {
  *this = jsonValue;
}

SchedulingMaxPriorityOverrideAlwaysScheduleFirst& SchedulingMaxPriorityOverrideAlwaysScheduleFirst::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SchedulingMaxPriorityOverrideAlwaysScheduleFirst::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
