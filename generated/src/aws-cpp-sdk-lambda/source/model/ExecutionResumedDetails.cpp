/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ExecutionResumedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ExecutionResumedDetails::ExecutionResumedDetails(JsonView jsonValue) { *this = jsonValue; }

ExecutionResumedDetails& ExecutionResumedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResumeRequestTimestamp")) {
    m_resumeRequestTimestamp = jsonValue.GetDouble("ResumeRequestTimestamp");
    m_resumeRequestTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = jsonValue.GetObject("Reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionResumedDetails::Jsonize() const {
  JsonValue payload;

  if (m_resumeRequestTimestampHasBeenSet) {
    payload.WithDouble("ResumeRequestTimestamp", m_resumeRequestTimestamp.SecondsWithMSPrecision());
  }

  if (m_reasonHasBeenSet) {
    payload.WithObject("Reason", m_reason.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
