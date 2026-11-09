/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/StringPayloadEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

StringPayloadEvent::StringPayloadEvent(JsonView jsonValue) { *this = jsonValue; }

StringPayloadEvent& StringPayloadEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("payload")) {
    m_payload = jsonValue.GetString("payload");
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue StringPayloadEvent::Jsonize() const {
  JsonValue payload;

  if (m_payloadHasBeenSet) {
    payload.WithString("payload", m_payload);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
