/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/StepDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

StepDetails::StepDetails(JsonView jsonValue) { *this = jsonValue; }

StepDetails& StepDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Attempt")) {
    m_attempt = jsonValue.GetInteger("Attempt");
    m_attemptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextAttemptTimestamp")) {
    m_nextAttemptTimestamp = jsonValue.GetDouble("NextAttemptTimestamp");
    m_nextAttemptTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Result")) {
    m_result = jsonValue.GetString("Result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue StepDetails::Jsonize() const {
  JsonValue payload;

  if (m_attemptHasBeenSet) {
    payload.WithInteger("Attempt", m_attempt);
  }

  if (m_nextAttemptTimestampHasBeenSet) {
    payload.WithDouble("NextAttemptTimestamp", m_nextAttemptTimestamp.SecondsWithMSPrecision());
  }

  if (m_resultHasBeenSet) {
    payload.WithString("Result", m_result);
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
