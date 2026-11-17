/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/EventResumeReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

EventResumeReason::EventResumeReason(JsonView jsonValue) { *this = jsonValue; }

EventResumeReason& EventResumeReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Payload")) {
    m_payload = jsonValue.GetString("Payload");
    m_payloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Truncated")) {
    m_truncated = jsonValue.GetBool("Truncated");
    m_truncatedHasBeenSet = true;
  }
  return *this;
}

JsonValue EventResumeReason::Jsonize() const {
  JsonValue payload;

  if (m_payloadHasBeenSet) {
    payload.WithString("Payload", m_payload);
  }

  if (m_truncatedHasBeenSet) {
    payload.WithBool("Truncated", m_truncated);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
