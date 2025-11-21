/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/model/TimePeriod.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CostOptimizationHub {
namespace Model {

TimePeriod::TimePeriod(JsonView jsonValue) { *this = jsonValue; }

TimePeriod& TimePeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("start")) {
    m_start = jsonValue.GetString("start");
    m_startHasBeenSet = true;
  }
  if (jsonValue.ValueExists("end")) {
    m_end = jsonValue.GetString("end");
    m_endHasBeenSet = true;
  }
  return *this;
}

JsonValue TimePeriod::Jsonize() const {
  JsonValue payload;

  if (m_startHasBeenSet) {
    payload.WithString("start", m_start);
  }

  if (m_endHasBeenSet) {
    payload.WithString("end", m_end);
  }

  return payload;
}

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
