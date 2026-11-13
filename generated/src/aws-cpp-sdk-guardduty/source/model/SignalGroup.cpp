/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/SignalGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

SignalGroup::SignalGroup(JsonView jsonValue) { *this = jsonValue; }

SignalGroup& SignalGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingType")) {
    m_findingType = jsonValue.GetString("findingType");
    m_findingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = jsonValue.GetDouble("severity");
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalGroup::Jsonize() const {
  JsonValue payload;

  if (m_findingTypeHasBeenSet) {
    payload.WithString("findingType", m_findingType);
  }

  if (m_severityHasBeenSet) {
    payload.WithDouble("severity", m_severity);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
