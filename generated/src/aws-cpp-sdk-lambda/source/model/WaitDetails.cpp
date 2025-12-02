/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/WaitDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

WaitDetails::WaitDetails(JsonView jsonValue) { *this = jsonValue; }

WaitDetails& WaitDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ScheduledEndTimestamp")) {
    m_scheduledEndTimestamp = jsonValue.GetDouble("ScheduledEndTimestamp");
    m_scheduledEndTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue WaitDetails::Jsonize() const {
  JsonValue payload;

  if (m_scheduledEndTimestampHasBeenSet) {
    payload.WithDouble("ScheduledEndTimestamp", m_scheduledEndTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
