/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/RetryDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

RetryDetails::RetryDetails(JsonView jsonValue) { *this = jsonValue; }

RetryDetails& RetryDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentAttempt")) {
    m_currentAttempt = jsonValue.GetInteger("CurrentAttempt");
    m_currentAttemptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextAttemptDelaySeconds")) {
    m_nextAttemptDelaySeconds = jsonValue.GetInteger("NextAttemptDelaySeconds");
    m_nextAttemptDelaySecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryDetails::Jsonize() const {
  JsonValue payload;

  if (m_currentAttemptHasBeenSet) {
    payload.WithInteger("CurrentAttempt", m_currentAttempt);
  }

  if (m_nextAttemptDelaySecondsHasBeenSet) {
    payload.WithInteger("NextAttemptDelaySeconds", m_nextAttemptDelaySeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
