/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ImportStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

ImportStatistics::ImportStatistics(JsonView jsonValue) { *this = jsonValue; }

ImportStatistics& ImportStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bytesImported")) {
    m_bytesImported = jsonValue.GetInt64("bytesImported");
    m_bytesImportedHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportStatistics::Jsonize() const {
  JsonValue payload;

  if (m_bytesImportedHasBeenSet) {
    payload.WithInt64("bytesImported", m_bytesImported);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
