/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/keyspaces/model/WarmThroughputSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Keyspaces {
namespace Model {

WarmThroughputSpecification::WarmThroughputSpecification(JsonView jsonValue) { *this = jsonValue; }

WarmThroughputSpecification& WarmThroughputSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("readUnitsPerSecond")) {
    m_readUnitsPerSecond = jsonValue.GetInt64("readUnitsPerSecond");
    m_readUnitsPerSecondHasBeenSet = true;
  }
  if (jsonValue.ValueExists("writeUnitsPerSecond")) {
    m_writeUnitsPerSecond = jsonValue.GetInt64("writeUnitsPerSecond");
    m_writeUnitsPerSecondHasBeenSet = true;
  }
  return *this;
}

JsonValue WarmThroughputSpecification::Jsonize() const {
  JsonValue payload;

  if (m_readUnitsPerSecondHasBeenSet) {
    payload.WithInt64("readUnitsPerSecond", m_readUnitsPerSecond);
  }

  if (m_writeUnitsPerSecondHasBeenSet) {
    payload.WithInt64("writeUnitsPerSecond", m_writeUnitsPerSecond);
  }

  return payload;
}

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
