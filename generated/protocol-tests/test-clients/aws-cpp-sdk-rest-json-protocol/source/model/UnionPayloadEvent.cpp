/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/UnionPayloadEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

UnionPayloadEvent::UnionPayloadEvent(JsonView jsonValue) { *this = jsonValue; }

UnionPayloadEvent& UnionPayloadEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("payload")) {
    m_payload = jsonValue.GetObject("payload");
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue UnionPayloadEvent::Jsonize() const {
  JsonValue payload;

  if (m_payloadHasBeenSet) {
    payload.WithObject("payload", m_payload.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
