/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/InvocationCompletedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

InvocationCompletedDetails::InvocationCompletedDetails(JsonView jsonValue) { *this = jsonValue; }

InvocationCompletedDetails& InvocationCompletedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StartTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTimestamp")) {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestId")) {
    m_requestId = jsonValue.GetString("RequestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue InvocationCompletedDetails::Jsonize() const {
  JsonValue payload;

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if (m_requestIdHasBeenSet) {
    payload.WithString("RequestId", m_requestId);
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
