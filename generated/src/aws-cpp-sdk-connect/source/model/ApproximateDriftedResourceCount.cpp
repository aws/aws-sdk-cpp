/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ApproximateDriftedResourceCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ApproximateDriftedResourceCount::ApproximateDriftedResourceCount(JsonView jsonValue) { *this = jsonValue; }

ApproximateDriftedResourceCount& ApproximateDriftedResourceCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Count")) {
    m_count = jsonValue.GetInt64("Count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ApproximateDriftedResourceCount::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_countHasBeenSet) {
    payload.WithInt64("Count", m_count);
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
