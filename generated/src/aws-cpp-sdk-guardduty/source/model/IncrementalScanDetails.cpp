/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/IncrementalScanDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

IncrementalScanDetails::IncrementalScanDetails(JsonView jsonValue) { *this = jsonValue; }

IncrementalScanDetails& IncrementalScanDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("baselineResourceArn")) {
    m_baselineResourceArn = jsonValue.GetString("baselineResourceArn");
    m_baselineResourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IncrementalScanDetails::Jsonize() const {
  JsonValue payload;

  if (m_baselineResourceArnHasBeenSet) {
    payload.WithString("baselineResourceArn", m_baselineResourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
