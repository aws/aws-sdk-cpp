/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/QueryStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

QueryStatistics::QueryStatistics(JsonView jsonValue) { *this = jsonValue; }

QueryStatistics& QueryStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rowCount")) {
    m_rowCount = jsonValue.GetInt64("rowCount");
    m_rowCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bytesScanned")) {
    m_bytesScanned = jsonValue.GetInt64("bytesScanned");
    m_bytesScannedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionTimeInMillis")) {
    m_executionTimeInMillis = jsonValue.GetInt64("executionTimeInMillis");
    m_executionTimeInMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryStatistics::Jsonize() const {
  JsonValue payload;

  if (m_rowCountHasBeenSet) {
    payload.WithInt64("rowCount", m_rowCount);
  }

  if (m_bytesScannedHasBeenSet) {
    payload.WithInt64("bytesScanned", m_bytesScanned);
  }

  if (m_executionTimeInMillisHasBeenSet) {
    payload.WithInt64("executionTimeInMillis", m_executionTimeInMillis);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
