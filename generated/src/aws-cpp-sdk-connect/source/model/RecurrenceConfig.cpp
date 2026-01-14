/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecurrenceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RecurrenceConfig::RecurrenceConfig(JsonView jsonValue) { *this = jsonValue; }

RecurrenceConfig& RecurrenceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecurrencePattern")) {
    m_recurrencePattern = jsonValue.GetObject("RecurrencePattern");
    m_recurrencePatternHasBeenSet = true;
  }
  return *this;
}

JsonValue RecurrenceConfig::Jsonize() const {
  JsonValue payload;

  if (m_recurrencePatternHasBeenSet) {
    payload.WithObject("RecurrencePattern", m_recurrencePattern.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
