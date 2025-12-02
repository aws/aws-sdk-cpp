/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/WaitStartedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

WaitStartedDetails::WaitStartedDetails(JsonView jsonValue) { *this = jsonValue; }

WaitStartedDetails& WaitStartedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInteger("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduledEndTimestamp")) {
    m_scheduledEndTimestamp = jsonValue.GetDouble("ScheduledEndTimestamp");
    m_scheduledEndTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue WaitStartedDetails::Jsonize() const {
  JsonValue payload;

  if (m_durationHasBeenSet) {
    payload.WithInteger("Duration", m_duration);
  }

  if (m_scheduledEndTimestampHasBeenSet) {
    payload.WithDouble("ScheduledEndTimestamp", m_scheduledEndTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
