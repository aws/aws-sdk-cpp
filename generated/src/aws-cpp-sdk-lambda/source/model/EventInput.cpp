/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/EventInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

EventInput::EventInput(JsonView jsonValue) { *this = jsonValue; }

EventInput& EventInput::operator=(JsonView jsonValue) {
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

JsonValue EventInput::Jsonize() const {
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
