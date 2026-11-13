/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/MetadataRecord.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

MetadataRecord::MetadataRecord(JsonView jsonValue) { *this = jsonValue; }

MetadataRecord& MetadataRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("totalTimeMilliseconds")) {
    m_totalTimeMilliseconds = jsonValue.GetInt64("totalTimeMilliseconds");
    m_totalTimeMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataRecord::Jsonize() const {
  JsonValue payload;

  if (m_totalTimeMillisecondsHasBeenSet) {
    payload.WithInt64("totalTimeMilliseconds", m_totalTimeMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
