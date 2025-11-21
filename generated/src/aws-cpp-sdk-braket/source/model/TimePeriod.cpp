/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/TimePeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {

TimePeriod::TimePeriod(JsonView jsonValue) { *this = jsonValue; }

TimePeriod& TimePeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startAt")) {
    m_startAt = jsonValue.GetDouble("startAt");
    m_startAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endAt")) {
    m_endAt = jsonValue.GetDouble("endAt");
    m_endAtHasBeenSet = true;
  }
  return *this;
}

JsonValue TimePeriod::Jsonize() const {
  JsonValue payload;

  if (m_startAtHasBeenSet) {
    payload.WithDouble("startAt", m_startAt.SecondsWithMSPrecision());
  }

  if (m_endAtHasBeenSet) {
    payload.WithDouble("endAt", m_endAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
