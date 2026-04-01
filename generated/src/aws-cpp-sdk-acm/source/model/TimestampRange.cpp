/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/TimestampRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

TimestampRange::TimestampRange(JsonView jsonValue) { *this = jsonValue; }

TimestampRange& TimestampRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Start")) {
    m_start = jsonValue.GetDouble("Start");
    m_startHasBeenSet = true;
  }
  if (jsonValue.ValueExists("End")) {
    m_end = jsonValue.GetDouble("End");
    m_endHasBeenSet = true;
  }
  return *this;
}

JsonValue TimestampRange::Jsonize() const {
  JsonValue payload;

  if (m_startHasBeenSet) {
    payload.WithDouble("Start", m_start.SecondsWithMSPrecision());
  }

  if (m_endHasBeenSet) {
    payload.WithDouble("End", m_end.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
