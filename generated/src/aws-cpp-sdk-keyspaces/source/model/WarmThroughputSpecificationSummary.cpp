/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/keyspaces/model/WarmThroughputSpecificationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {

WarmThroughputSpecificationSummary::WarmThroughputSpecificationSummary(JsonView jsonValue) { *this = jsonValue; }

WarmThroughputSpecificationSummary& WarmThroughputSpecificationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("readUnitsPerSecond")) {
    m_readUnitsPerSecond = jsonValue.GetInt64("readUnitsPerSecond");
    m_readUnitsPerSecondHasBeenSet = true;
  }
  if (jsonValue.ValueExists("writeUnitsPerSecond")) {
    m_writeUnitsPerSecond = jsonValue.GetInt64("writeUnitsPerSecond");
    m_writeUnitsPerSecondHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = WarmThroughputStatusMapper::GetWarmThroughputStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue WarmThroughputSpecificationSummary::Jsonize() const {
  JsonValue payload;

  if (m_readUnitsPerSecondHasBeenSet) {
    payload.WithInt64("readUnitsPerSecond", m_readUnitsPerSecond);
  }

  if (m_writeUnitsPerSecondHasBeenSet) {
    payload.WithInt64("writeUnitsPerSecond", m_writeUnitsPerSecond);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", WarmThroughputStatusMapper::GetNameForWarmThroughputStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
